#include <cstdio>
#include <cstdint>
#include <climits>

// C++ Standard (ISO/IEC 14882:2003(E))
//
// 4.7 Integral conversions[conv.integral]
//
// 2. If the destination type is unsigned, the resulting value is the least
// unsigned integer congruent to the source integer (modulo 2n where n is the
// number of bits used to represent the unsigned type). [Note:In a two
// complement representation, this conversion is conceptual and there is no
// change in the bit pattern (if there is no truncation).]
//
// 3. If the destination type is signed, the value is unchanged if it can
// be represented in the destination type (and bit - field width); otherwise,
// the value is implementation - defined.

int main()
{
	int32_t val01_i32  = INT32_MAX;
	int64_t val01_i64  = static_cast<int64_t>(val01_i32);
	uint64_t val01_u64 = static_cast<uint64_t>(val01_i32);

	printf("Test cast #1.1: i32 -> i64/u64\n");
	printf("val01_i32 = %d\n",  val01_i32);
	printf("val01_i64 = %ld\n", val01_i64);
	printf("val01_u64 = %lu\n", val01_u64);
	printf("\n");

	val01_i32 = -1;
	val01_i64 = static_cast<int64_t>(val01_i32);
	val01_u64 = static_cast<uint64_t>(val01_i32);

	printf("Test cast #1.2: i32 -> i64/u64\n");
	printf("val01_i32 = %d\n",  val01_i32);
	printf("val01_i64 = %ld\n", val01_i64);
	printf("val01_u64 = %lu\n", val01_u64);
	printf("\n");

	uint32_t val02_u32 = UINT32_MAX;
	int64_t val02_i64  = static_cast<int64_t>(val02_u32);
	uint64_t val02_u64 = static_cast<uint64_t>(val02_u32);

	printf("Test cast #2: u32 -> i64/u64\n");
	printf("val02_u32 = %u\n",  val02_u32);
	printf("val02_i64 = %ld\n", val02_i64);
	printf("val02_u64 = %lu\n", val02_u64);
	printf("\n");

	int64_t val03_i64 = 0xfeffffffffffffffll;
	int32_t val03_i32 = static_cast<int32_t>(val03_i64);

	printf("Test cast #3: i64 -> i32 truncation\n");
	printf("val03_i64 = %ld\n",   val03_i64);
	printf("val03_i64 = 0x%lx\n", val03_i64);
	printf("val03_i32 = %d\n",    val03_i32);
	printf("val03_i32 = 0x%x\n",  val03_i32);
	printf("\n");

	int64_t val04_i64 = 0x6effffffffffffffll;
	int32_t val04_i32 = static_cast<int32_t>(val04_i64);

	printf("Test cast #4: i64 -> i32 truncation\n");
	printf("val04_i64 = %ld\n",   val04_i64);
	printf("val04_i64 = 0x%lx\n", val04_i64);
	printf("val04_i32 = %d\n",    val04_i32);
	printf("val04_i32 = 0x%x\n",  val04_i32);
	printf("\n");

	return 0;
}
