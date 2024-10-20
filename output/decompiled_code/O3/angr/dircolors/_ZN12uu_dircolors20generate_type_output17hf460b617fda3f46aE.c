long long uu_dircolors::generate_type_output::hf460b617fda3f46a(struct_1 *a0, char *a1)
{
    unsigned long long v0;  // [sp-0x78]
    unsigned long long v1;  // [sp-0x70]
    void* v2;  // [sp-0x68]
    unsigned long long v3;  // [sp-0x60], Other Possible Types: unsigned long
    void* v4;  // [sp-0x58]
    unsigned long long v5;  // [sp-0x50]
    int v6;  // [sp-0x48]
    unsigned long long v7;  // [sp-0x38]
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // r15
    unsigned long long v12;  // r14
    unsigned long long v13;  // r15
    struct_0 *v14;  // r12
    struct_0 *v15;  // r12
    unsigned long long v16;  // r15
    unsigned long long v18;  // r15
    unsigned long long v19;  // r15

    if (*(a1) != 2)
    {
        v10 = __rust_alloc(432, 8);
        if (!v10)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v0 = 18;
        v1 = v10;
        v2 = 0;
        v3 = &v2;
        v4 = 0;
        v5 = v10;
        _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hfdc4982e19ba292e(&anon.4406f472a8377c7ece58ca9d20f54484.129.llvm.13238753694568376422, &anon.4406f472a8377c7ece58ca9d20f54484.263.llvm.13238753694568376422, &v3);
        *((int128_t *)&v6) = *((int128_t *)&v0);
        v13 = v2;
        v7 = v13;
        v12 = (long long)(&v6)[8];
        alloc::str::join_generic_copy::h83bbf49a2a40fb36(&v3, v12, v7, ":*", 1);
        a0->field_10 = v5;
        a0->field_0 = *((int128_t *)&v3);
        if (v7)
        {
            v15 = v12 + 8;
            do
            {
                v18 = v13;
                if (v15->field_0)
                    __rust_dealloc(v15->field_-8);
            } while ((v15 += 24, v19 = v18 - 1, v18 != 1));
        }
    }
    else
    {
        v9 = __rust_alloc(432, 8);
        if (!v9)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v0 = 18;
        v1 = v9;
        v2 = 0;
        v3 = &v2;
        v4 = 0;
        v5 = v9;
        _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h5f79f47604d0e73c(&anon.4406f472a8377c7ece58ca9d20f54484.129.llvm.13238753694568376422, &anon.4406f472a8377c7ece58ca9d20f54484.263.llvm.13238753694568376422, &v3);
        *((int128_t *)&v6) = *((int128_t *)&v0);
        v11 = v2;
        v7 = v11;
        v12 = (long long)(&v6)[8];
        alloc::str::join_generic_copy::h83bbf49a2a40fb36(&v3, v12, v7, "\n:*", 1);
        a0->field_10 = v5;
        a0->field_0 = *((int128_t *)&v3);
        if (v7)
        {
            v14 = v12 + 8;
            do
            {
                v16 = v11;
                if (v14->field_0)
                    __rust_dealloc(v14->field_-8);
            } while ((v15 += 24, v19 = v18 - 1, v18 != 1));
        }
    }
    if ((long long)v6)
        __rust_dealloc(v12);
    return a0;
}
