long long uu_dd::bufferedoutput::BufferedOutput::write_blocks::hac30182f244a102b(struct_0 *a0, struct_2 *a1, void* a2, unsigned long a3)
{
    void* v0;  // [sp-0x90]
    int v1;  // [sp-0x88]
    int v2;  // [sp-0x78]
    unsigned long long v3[6];  // [bp-0x68]
    char v4;  // [bp-0x60]
    char v5;  // [bp-0x58]
    char v6;  // [bp-0x48]
    unsigned long long v8;  // rcx
    unsigned long long v9;  // rbp
    unsigned long long v10;  // rdx
    void* v11;  // rax
    unsigned long v12;  // rbx
    unsigned long v13;  // rbp
    struct_0 *v14;  // rax
    unsigned long long v15;  // rcx
    void* v16;  // r13
    unsigned long v17;  // r14
    void* v18;  // rdi

    v8 = a1->field_28->field_78;
    if (!v8)
        core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(); /* do not return */
    v9 = a1->field_10;
    v10 = (!(a3 + v9 | v8) >> 32 ? (0 CONCAT a3 + v9) /m v8 >> 64 : (0 CONCAT (unsigned int)(a3 + v9)) /m (unsigned int)v8 >> 32 & 4294967295);
    v11 = a3 - v10;
    if (v10 > a3)
        v11 = 0;
    v0 = &a1->padding_18;
    if (a1->field_0 - v9 < v11)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h99ac5a82b5186539(a1, v9, v11);
        v9 = a1->field_10;
    }
    v12 = a1->field_8;
    memcpy(v12 + v9, a2, v11);
    v13 = v9 + v11;
    a1->field_10 = v13;
    uu_dd::Output::write_blocks::he70c6a9516a6df92(v3, v0, v12, v13);
    if (v3[0])
    {
        v14 = a0;
        v14->field_8 = *((long long *)&v4);
        v15 = 1;
    }
    else
    {
        v16 = v11 + a2;
        *((int128_t *)&v2) = *((int128_t *)&v6);
        *((int128_t *)&v1) = *((int128_t *)&v5);
        a1->field_10 = 0;
        v17 = a3 + a2 - v16;
        if (a1->field_0 >= v17)
        {
            v18 = 0;
        }
        else
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h99ac5a82b5186539(a1, 0, v17);
            v18 = a1->field_10;
        }
        memcpy(v18 + a1->field_8, v16, v17);
        a1->field_10 = a1->field_10 + v17;
        v14 = a0;
        *((void*)&v14->field_20) = v2;
        *((void*)&v14->field_10) = v1;
        v15 = 0;
    }
    v14->field_0 = v15;
    return v14;
}
