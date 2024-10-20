double uu_seq::number::PreciseNumber::one::h07a637167474b901(long long a0)
{
    int v0;  // [sp-0x28]
    void* v1;  // [sp-0x18], Other Possible Types: unsigned long long
    int v3;  // ymm0

    v1 = 0;
    *((int128_t *)&v0) = 0x80000000000000000;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h706bf2cb4cd067d1(&v0);
    *((long long *)(long long)(&v0)[8]) = 1;
    v1 = 1;
    *((void*)&a0->field_0) = v0;
    a0->field_10 = 1;
    a0->field_18 = 2;
    *((int *)&(&a0->field_18)[1]) = 0;
    a0->field_19 = 0;
    *((long long *)&a0->padding_1d) = 0;
    a0->field_20 = 1;
    a0->field_28 = 0;
    return (unsigned long long)(v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x80000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v0);
}
