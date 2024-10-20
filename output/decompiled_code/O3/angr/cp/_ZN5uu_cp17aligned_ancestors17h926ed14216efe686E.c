int uu_cp::aligned_ancestors::h926ed14216efe686()
{
    void* v0;  // [sp-0x98]
    unsigned long long *v1;  // [sp-0x90]
    void* v2;  // [sp-0x88]
    unsigned long long *v3;  // [sp-0x80]
    unsigned long long *v4;  // [sp-0x78]
    unsigned long long v5;  // [sp-0x68]
    char v6;  // [bp-0x60]
    char v7;  // [bp-0x58]
    char v8;  // [bp-0x50]
    char v9;  // [bp-0x48]
    char v10;  // [bp-0x40]
    char v11;  // [bp-0x38]
    unsigned long long v13;  // rsi
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rcx
    unsigned long long v16;  // r8
    unsigned long long v17;  // r13
    unsigned long long *v18;  // r13
    unsigned long long v20;  // rbp
    unsigned long long *v21;  // rbx
    unsigned long long *v22;  // r13
    unsigned long long *v23;  // rcx
    unsigned long long v25;  // r14
    unsigned long long *v26;  // rcx
    unsigned long long v27;  // r15
    unsigned long long *v28;  // rax
    unsigned long long v30[3];  // rdi

    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h0b26a038cabafb72(&v6, v13, v14, v15);
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h0b26a038cabafb72(&v9, v15, v16, v15);
    v17 = *((long long *)&v8);
    if (v17 == 1)
        core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
    if (!v17)
        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
    v18 = v17 - 2;
    if (v18 < *((long long *)&v11))
    {
        v4 = *((long long *)&v7);
        v3 = *((long long *)&v10);
        v0 = 0;
        v1 = 8;
        v2 = 0;
        if (v18)
        {
            v20 = 1;
            v21 = 24;
            while (true)
            {
                v22 = v18 * 16;
                if (!v22)
                    break;
                v23 = v4;
                v25 = *((long long *)(v23 + v22 + 8));
                v26 = v3;
                v27 = *((long long *)(v26 + v22));
                v5 = *((long long *)(v26 + v22 + 8));
                if (v20 - 1 == v0)
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h1f9711bcc9d04817(&v0);
                v28 = v1;
                *((long long *)(v28 + v21 - 24)) = *((long long *)(v23 + v22));
                *((unsigned long long *)(v28 + v21 - 16)) = v25;
                *((unsigned long long *)(v28 + v21 - 8)) = v27;
                *((unsigned long long *)(v28 + v21)) = v5;
                v2 = v20;
                v20 += 1;
                v21 += 4;
                if (v22 == 16)
                    break;
            }
        }
        v30[2] = v2;
        v30[0] = v0;
        v30[1] = v1;
        if (*((long long *)&v9))
            __rust_dealloc(v3);
        if (!*((long long *)&v6))
            return;
        __rust_dealloc(v4);
    }
}
