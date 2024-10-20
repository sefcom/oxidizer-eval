double uu_sort::tmp_dir::TmpDirWrapper::new::h7b4e4d1c8915cfb4(long long a0, long long a1)
{
    char v0;  // [bp-0x38]
    char v1;  // [sp-0x28]
    unsigned long long v3;  // rbx
    unsigned long long v4;  // r14
    unsigned long long v5;  // r12
    unsigned long long v6[3];  // rax
    int v7;  // xmm0
    int v8;  // ymm0

    v3 = a1[0];
    v4 = a1[1];
    v5 = a1[2];
    v1 = 2;
    v6 = __rust_alloc(24, 8);
    if (v6)
    {
        v6[0] = 1;
        v6[1] = 1;
        v6[2] = 0;
        *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v1);
        v7 = *((int128_t *)&v0);
        *((void*)&(&a0->field_10)[1]) = v7;
        a0->field_0 = v3;
        a0->field_8 = v4;
        a0->field_10 = v5;
        a0->field_30 = 0;
        a0->field_28 = v6;
        return (unsigned long long)(v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v7);
    }
    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
}
