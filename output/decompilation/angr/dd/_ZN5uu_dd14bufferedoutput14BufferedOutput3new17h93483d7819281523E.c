double uu_dd::bufferedoutput::BufferedOutput::new::h93483d7819281523(long long a0, long long a1)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned int v5;  // ebx
    unsigned long long v6;  // rdi
    unsigned long long v7;  // rax
    int v8;  // xmm0
    int v9;  // ymm0

    v5 = *((int *)&a1->field_3);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::he1ec86b2283b0e90(&v0, a1->field_8->field_78, 0);
    v6 = *((long long *)&v1);
    if (!*((long long *)&v0))
    {
        v7 = *((long long *)&v2);
        a0->field_18 = a1->field_0;
        *((short *)&(&a0->field_18)[1]) = *((short *)&(&a1->field_0)[1]);
        *((char *)&a0->field_19 + 1) = *((char *)&a1->field_1 + 1);
        *((unsigned int *)&a0->field_1b) = v5;
        v8 = *((int128_t *)&a1->field_4);
        *((void*)&a0->field_1c) = v8;
        a0->field_0 = v6;
        a0->field_8 = v7;
        a0->field_10 = 0;
        return (unsigned long long)(v9 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v8);
    }
    alloc::raw_vec::handle_error::h2372476369f9b8ac(v6, *((long long *)&v2)); /* do not return */
}
