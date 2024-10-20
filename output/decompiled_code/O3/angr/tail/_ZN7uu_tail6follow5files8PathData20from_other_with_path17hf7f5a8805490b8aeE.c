long long uu_tail::follow::files::PathData::from_other_with_path::hf7f5a8805490b8ae(unsigned long long a0[27], struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    uint128_t v0[3];  // [bp-0x1b0]
    uint128_t v1[3];  // [sp-0x1a8]
    unsigned long long v2;  // [sp-0x1a0]
    struct_0 *v3;  // [sp-0x198]
    unsigned long long v4;  // [sp-0x190]
    unsigned long long v5;  // [sp-0x188]
    unsigned long v6;  // [sp-0x180], Other Possible Types: unsigned long long
    char v7;  // [bp-0x178], Other Possible Types: unsigned int, unsigned long
    unsigned short v8;  // [sp-0x174]
    int v9;  // [sp-0x170]
    void* v10;  // [sp-0x160]
    unsigned int v11;  // [sp-0x158]
    char v12;  // [bp-0xd0]
    char v13;  // [bp-0xcc]
    char v14;  // [bp-0xc8]
    unsigned long long v15;  // [sp-0x30]
    unsigned long v17;  // rbx
    struct_0 *v18;  // rbp
    uint128_t v19[3];  // rbx
    unsigned int v20;  // ebx
    unsigned long long v21;  // rax
    uint128_t v22[3];  // rax
    int v23;  // xmm0
    unsigned long long v24;  // r15
    unsigned long long v25;  // r14
    void* v26;  // r13
    unsigned long v27;  // rbp
    unsigned long long v28;  // rbx

    v15 = v17;
    v18 = a1;
    v19 = a1->field_c8;
    v4 = a1->field_d0;
    v2 = v4;
    *((uint128_t *[3])&v1[0]) = v19;
    v3 = a1;
    if (!v19)
    {
        v6 = 0x1b600000000;
        v7 = 0;
        v8 = 0;
        v7 = 1;
        std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v12, &v6, a2, a3);
        if (*((int *)&v12))
        {
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17hd9352982e8c4d3fcE.llvm.893476530518564186(*((long long *)&v14));
            *((long long *)&v1[0]) = 0;
        }
        else
        {
            *((uint128_t *[3])&v19[0]) = v19;
            v20 = *((int *)&v13);
            v21 = __rust_alloc(0x2000, 1);
            if (!v21)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v6 = v21;
            v7 = 0x2000;
            *((int128_t *)&v9) = 0;
            v10 = 0;
            v11 = v20;
            v22 = __rust_alloc(48, 8);
            if (!v22)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v23 = *((int128_t *)&v6);
            v22[2] = *((int128_t *)&v10);
            *((void*)&v22[1]) = v9;
            *((uint128_t *[3])&v1[0]) = v22;
            *((void*)&v22[0]) = v23;
        }
        v2 = &anon.c568fa996e9b1afffbd2fe86e67742f4.14.llvm.893476530518564186;
    }
    std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v6, a2, a3);
    v24 = v6;
    v25 = v7;
    if (v24 != 2)
        memcpy(&v12, &v9, 160);
    else
        _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17hd9352982e8c4d3fcE.llvm.893476530518564186(v25);
    v5 = v24;
    v26 = v18->field_b8;
    v27 = v18->field_c0;
    if (!v27)
    {
        v28 = 1;
        goto LABEL_4af38c;
    }
    else
    {
        *((uint128_t *[3])&v0[0]) = v19;
        if (v27 < 0)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v28 = __rust_alloc(v27, 1);
        if (v28)
        {
LABEL_4af38c:
            memcpy(v28, v26, v27);
            a0[25] = v1;
            a0[26] = v2;
            a0[0] = v5;
            a0[1] = v25;
            memcpy(&a0[2], &v12, 160);
            a0[22] = v27;
            a0[23] = v28;
            a0[24] = v27;
            if (v3->field_b0)
            {
                __rust_dealloc(v26);
                return a0;
            }
            return a0;
        }
    }
}
