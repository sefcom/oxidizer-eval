long long uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::hc2165e82d9d51b92(struct_0 *a0, unsigned long long a1[5], unsigned int a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    void* v0;  // [sp-0x80]
    unsigned long long *v1;  // [sp-0x78]
    unsigned long long *v2;  // [sp-0x70]
    char v3;  // [bp-0x60], Other Possible Types: unsigned long, unsigned long long
    unsigned long v4;  // [sp-0x58], Other Possible Types: unsigned long long
    char v5;  // [bp-0x50], Other Possible Types: unsigned long long
    char v6;  // [bp-0x4f]
    char v7;  // [bp-0x4d]
    char v8;  // [bp-0x4c]
    int v9;  // [sp-0x48]
    unsigned long long v11;  // r13
    unsigned long long v12;  // rax
    unsigned int v13;  // r12d
    unsigned int v14;  // ebp
    unsigned int v15;  // r15d
    unsigned long long *v16;  // rbx
    unsigned long long *v17;  // rbx
    unsigned long long *v18;  // rax
    unsigned long long *v19;  // rcx
    unsigned int v20;  // ebp
    unsigned long long *v21;  // rax
    unsigned long long *v22;  // rcx
    unsigned long long v23;  // r12
    unsigned long long v24;  // r15
    char *v25;  // r12
    char *v26;  // r15
    unsigned int v27;  // eax
    char *v30;  // r13
    struct_0 *v31;  // rbx

    v0 = 0;
    v1 = 8;
    v2 = 0;
    while (true)
    {
        uu_env::string_parser::StringParser::consume_chunk::h273ffbace99edc38(&v3, a1, a2);
        v11 = v4;
        v12 = v5;
        if (v3)
            break;
        v13 = v12;
        v14 = *((short *)&v6) | v7 * 0x10000;
        v15 = *((int *)&v8);
        if (v11)
        {
            v16 = v2;
            if (v16 == v0)
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h68bee6853d5166f3(&v0);
            v18 = v1;
            v19 = v16 * 16;
            *((unsigned long long *)(v18 + v19)) = v11;
            *((unsigned int *)(v18 + v19 + 8)) = v14 * 0x100 | v13;
            *((unsigned int *)(v18 + v19 + 12)) = v15;
            v2 = (char *)v16 + 1;
            goto LABEL_4a37ed;
        }
        v17 = v2;
        if (v17 == v0)
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h68bee6853d5166f3(&v0);
        v20 = v14 * 0x100 | v13;
        v21 = v1;
        v22 = v17 * 16;
        *((long long *)(v21 + v22)) = 0;
        *((unsigned int *)(v21 + v22 + 8)) = v20;
        *((unsigned int *)(v21 + v22 + 12)) = v15;
        v2 = (char *)v17 + 1;
        if (v20 < 128)
        {
            v31 = a0;
            *((unsigned long long **)&v31->field_10) = v2;
            *((int128_t *)&v31->field_0) = *((int128_t *)&v0);
            return v31;
        }
LABEL_4a37ed:
        v23 = a1[1];
        v24 = a1[4];
        if (v23 < v24)
        {
            v3 = &anon.c479f575d13bdc6af5496164023f20a6.5.llvm.1842864401518779319;
            v4 = 1;
            v5 = 8;
            *((int128_t *)&v9) = 0;
            core::panicking::panic_fmt::he12d0d7468628bb4(&v3); /* do not return */
        }
        v25 = v23 - v24;
        if (v23 == v24)
        {
            vvar_305{reg 40} = a0;
            *((unsigned long long **)&v31->field_10) = v2;
            *((int128_t *)&v31->field_0) = *((int128_t *)&v0);
            return v31;
        }
        v26 = v24 + a1[0];
        v27 = uu_env::native_int_str::get_char_from_native_int::h0450fbe3acce94e3(*(v26));
        if (v27 == 0x110000)
        {
            v30 = 1;
            if (v25 < 2 || (int)uu_env::native_int_str::get_char_from_native_int::h0450fbe3acce94e3(*((char *)(v26 + v30))) != 0x110000)
            {
                if (v30 > v25)
                    core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
            }
            else
            {
                v30 += 1;
                if (!(v25 == v30))
                    continue;
            }
        }
    }
    v31 = a0;
    *((unsigned long long *)&v31->padding_8[0]) = v11;
    v31->field_10 = v12;
    v31->field_0 = 0x8000000000000000;
    if (v0)
        __rust_dealloc(v1);
    return v31;
}
