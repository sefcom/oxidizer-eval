long long _ZN5uu_od15multifilereader15MultifileReader9next_file17he74466dc872dbd3dE.llvm.5160352799553516660(struct_2 *a0)
{
    struct_2 *v0;  // [sp-0xc0]
    unsigned long long v1;  // [sp-0xb8]
    unsigned long v2;  // [sp-0xb0], Other Possible Types: unsigned long long
    char v3;  // [bp-0xa8], Other Possible Types: unsigned int, unsigned long long
    unsigned short v4;  // [sp-0xa4]
    int v5;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x98]
    void* v7;  // [sp-0x90]
    unsigned int v8;  // [sp-0x88]
    char v9;  // [bp-0x80]
    char v10;  // [bp-0x7c]
    char v11;  // [bp-0x78]
    unsigned long v12;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x68]
    unsigned long long v14;  // [sp-0x60]
    unsigned long long v15;  // [sp-0x58]
    int v16;  // [bp-0x50], Other Possible Types: void*, char
    unsigned long long v17;  // [sp-0x48]
    unsigned long long v18;  // [sp-0x40]
    char v19;  // [sp-0x38]
    struct_2 *v21;  // rbx
    unsigned long long v22;  // r12
    unsigned long long v23;  // rbp
    int v24;  // ymm0
    unsigned long long v25[3];  // rdi
    unsigned long long v26;  // rbp
    unsigned long long v27;  // r14
    unsigned long long v28;  // r15
    struct struct_0 **v29;  // rax
    unsigned long long v30;  // rsi
    int v31;  // xmm0
    unsigned long long v32;  // rdx
    unsigned long long v33;  // rsi
    unsigned long long v34;  // r14
    unsigned int v35;  // ebp
    unsigned long long v36;  // rax
    struct_2 *v38;  // rbx
    unsigned long long v39;  // r13
    struct_1 *v40;  // r15
    unsigned long long v41;  // rax
    struct_1 *v42;  // rbp
    uint128_t v43[3];  // rax
    struct_2 *v44;  // rbx
    struct_4 *v45;  // rax
    int v46;  // xmm0
    int v47;  // xmm1
    unsigned long long v48;  // r15
    struct_1 *v49;  // r13
    struct struct_0 **v50;  // rax
    unsigned long long v51;  // r15
    struct_1 *v52;  // r13
    struct struct_0 **v53;  // rax

    v21 = a0;
    v22 = a0->field_10;
    if (v22)
    {
        v23 = &v16;
        v0 = a0;
        do
        {
            v25 = v21->field_8;
            v26 = v25[0];
            v27 = v25[1];
            v28 = v25[2];
            v29 = memmove(v25, v25 + 1, (v22 * 8 - 8) * 3);
            v21->field_10 = v22 - 1;
            if (v26)
            {
                if (v26 != 1)
                {
                    v38 = v0;
                    v39 = v38->field_18;
                    if (v39)
                    {
                        v42 = v38->field_20;
                        v29 = v42->field_0;
                        if (v29)
                            v29 = v29(v39);
                        if (v42->field_8)
                            v29 = __rust_dealloc(v39);
                    }
                    v38->field_18 = v27;
                    v38->field_20 = v28;
                    return v29;
                }
                else
                {
                    v41 = __rust_alloc(0x2000, 1);
                    v44 = v0;
                    if (!v41)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    v45 = __rust_alloc(48, 8);
                    if (!v45)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    v45->field_0 = v41;
                    v45->field_8 = 0x2000;
                    v45->field_10 = 0;
                    v45->field_20 = 0;
                    v45->field_28 = std::io::stdio::stdin::h7215cc131abb55d8();
                    v51 = v44->field_18;
                    if (v51)
                    {
                        v52 = v44->field_20;
                        if (v52->field_0)
                            v53(v51);
                        if (v52->field_8)
                            __rust_dealloc(v51);
                    }
                    v44->field_18 = v45;
                    v44->field_20 = &g_504b50;
                    return v29;
                }
            }
            v2 = 0x1b600000000;
            v4 = 0;
            v3 = 0;
            v3 = 1;
            std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v9, &v2, v27, v28);
            if (!*((int *)&v9))
            {
                v35 = *((int *)&v10);
                v36 = __rust_alloc(0x2000, 1);
                if (!v36)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                v2 = v36;
                v3 = 0x2000;
                *((int128_t *)&v5) = 0;
                v7 = 0;
                v8 = v35;
                v43 = __rust_alloc(48, 8);
                v44 = v0;
                if (!v43)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v46 = *((int128_t *)&v2);
                v47 = (int128_t)v5;
                v43[2] = *((int128_t *)&v7);
                *((void*)&v43[1]) = v47;
                *((void*)&v43[0]) = v46;
                v48 = v44->field_18;
                if (v48)
                {
                    v49 = v44->field_20;
                    if (v49->field_0)
                        v50(v48);
                    if (v49->field_8)
                        __rust_dealloc(v48);
                }
                v44->field_18 = v43;
                v29 = &g_504aa8;
                v44->field_20 = &v29;
                return v29;
            }
            v1 = *((long long *)&v11);
            v23 = v23;
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            v31 = g_509808;
            v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31;
            v16 = v31;
            v12 = v23;
            v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h24b110f094dc00e1;
            v2 = &g_504b00;
            v3 = 2;
            v7 = 0;
            v5 = &v12;
            v6 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v30, v32);
            v16 = 0;
            v17 = v27;
            v18 = v28;
            v19 = 0;
            v12 = v23;
            v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v14 = &v1;
            v15 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            v2 = &g_504b20;
            v3 = 3;
            v7 = 0;
            v5 = &v12;
            v6 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v33, v32);
            v21 = v0;
            v21->field_28 = 1;
            v29 = core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2a48cae7377ce51d(v1);
            v22 = v21->field_10;
        } while (v22);
    }
    v34 = v21->field_18;
    if (v34)
    {
        v40 = v21->field_20;
        v29 = v40->field_0;
        if (v29)
            v29 = v29(v34);
        if (v40->field_8)
            __rust_dealloc(v34);
    }
    v21->field_18 = 0;
    return v29;
}
