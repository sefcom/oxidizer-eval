int uu_du::read_files_from::h1f369de28f0f6ada()
{
    char v0;  // [bp-0x128], Other Possible Types: unsigned long, unsigned long long
    unsigned int v1;  // [bp-0x120], Other Possible Types: char, unsigned long long
    unsigned short v2;  // [sp-0x11c]
    int v3;  // [sp-0x118], Other Possible Types: struct struct_0 **, unsigned long long
    unsigned long long v4;  // [sp-0x110]
    void* v5;  // [sp-0x108]
    unsigned int v6;  // [sp-0x100]
    void* v7;  // [sp-0xf8]
    unsigned long long *v9;  // [sp-0xe8]
    int v10;  // [sp-0xe0], Other Possible Types: struct struct_0 **, unsigned long, unsigned long long
    void* v11;  // [sp-0xd8], Other Possible Types: unsigned long long
    struct struct_0 **v12;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0xc8]
    struct_1 *v14;  // [bp-0xc0], Other Possible Types: char
    char v15;  // [bp-0xbc]
    struct_2 *v16;  // [sp-0xb8]
    char v17;  // [sp-0xb0]
    void* v18;  // [sp-0xa8]
    unsigned long long v19[3];  // [sp-0xa0]
    struct struct_0 **v20;  // [sp-0x98]
    char v21;  // [bp-0x90]
    unsigned long long v22;  // [sp-0x80]
    unsigned long v23;  // [sp-0x78], Other Possible Types: unsigned long long
    struct struct_0 **v24;  // [sp-0x70]
    unsigned long long v25;  // [sp-0x68]
    char v26;  // [bp-0x60]
    unsigned long long v28;  // rdx
    char *v29;  // rsi
    unsigned long long v31;  // rax
    unsigned long long v32;  // r14
    unsigned long long *v33;  // r15
    struct_1 *v34;  // rax
    int v36;  // ymm0
    int v37;  // ymm0
    struct_2 *v38;  // rcx
    unsigned long long v39[3];  // rdi
    unsigned int v40;  // ebp
    unsigned long long v41;  // rax
    int v43;  // xmm0
    int v44;  // ymm0
    int v45;  // xmm1
    unsigned long long v46;  // rbx
    struct struct_0 **v47;  // r12
    unsigned long long v48;  // r14
    unsigned long long v49;  // r15
    struct struct_0 **v50;  // rdx
    void* v51;  // r13
    struct struct_0 **v52;  // rbx
    unsigned long long v53;  // rbp
    unsigned long long v54;  // rsi
    int v55;  // xmm0
    unsigned long long v56;  // rcx
    unsigned long long v57;  // r8
    unsigned long long v58;  // r9
    unsigned long long *v59;  // r12
    unsigned long long *v60;  // rax
    unsigned long long *v61;  // rcx
    struct_1 *v62;  // r14
    struct_2 *v63;  // rbx
    struct struct_0 **v64;  // rax
    unsigned long long v65[3];  // r12
    struct_1 *v66;  // r14
    struct_2 *v67;  // rbx
    struct struct_0 **v68;  // rax
    unsigned long long v69[3];  // r12
    unsigned long long *v70;  // rbx
    struct_3 *v71;  // r14
    unsigned long long *v73;  // rbx

    if (!(v28 == 1) || !(*(v29) == 45))
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, v29, v28);
        v32 = v0;
        v33 = *((long long *)&v1);
        if (!(char)std::path::Path::is_dir::h9ac0db933706da51(v33, v3))
        {
            v0 = 0x1b600000000;
            v1 = 0;
            v2 = 0;
            v1 = 1;
            std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v14, &v0, v29, v28);
            if (*((int *)&v14))
            {
                goto *((int *)(4351936 + ((int)(long long)(stack_base)[184] & 3) * 4)) + 4351936;
            }
            else
            {
                v19[0] = v39;
                v40 = *((int *)&v15);
                v41 = __rust_alloc(0x2000, 1);
                if (!v41)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                v0 = v41;
                v1 = 0x2000;
                *((int128_t *)&v3) = 0;
                v5 = 0;
                v6 = v40;
                v34 = __rust_alloc(48, 8);
                if (!v34)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v43 = *((int128_t *)&v0);
                v37 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
                v45 = (int128_t)v3;
                *((int128_t *)&v34->field_20) = *((int128_t *)&v5);
                *((void*)&v34->field_10) = v45;
                *((void*)&v34->field_0) = v43;
                if (v32)
                    __rust_dealloc(v33);
                v38 = &g_534b00.field_0;
                goto LABEL_4b070a;
            }
        }
        else
        {
            v10 = &v21;
            v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1fe5dc4fcc5deb5;
            v0 = &g_534ba8;
            v1 = 2;
            v5 = 0;
            v3 = &v10;
            v4 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v26, &v0);
            v39[1] = std::io::error::Error::new::h27a8bab41b5982fc(39, &v26);
            v39[0] = 0x8000000000000000;
            if (v32)
                goto LABEL_4b0af0;
        }
    }
    else
    {
        v31 = __rust_alloc(0x2000, 1);
        if (!v31)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v34 = __rust_alloc(48, 8);
        if (!v34)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v19[0] = v39;
        v34->field_0 = v31;
        *((long long *)&v34->padding_8[0]) = 0x2000;
        v37 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        v34->field_10 = 0;
        v34->field_20 = 0;
        v34[1].field_0 = std::io::stdio::stdin::h7215cc131abb55d8();
        v38 = &g_534bc8.field_0;
LABEL_4b070a:
        v7 = 0;
        v33 = 8;
        v9 = 0;
        v14 = v34;
        v16 = v38;
        v17 = 0;
        v18 = 0;
        v46 = &v0;
        v22 = 9223372036854775809;
        v47 = &v10;
        while (true)
        {
            _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h879bd3f27731aadf(v46, &v14);
            v48 = v0;
            if (v48 == v22)
            {
                v62 = v14;
                v63 = v16;
                if (v63->field_0)
                    v64(v62);
                v69 = v19;
                if (v63->field_8)
                    __rust_dealloc(v62);
                v69[2] = v9;
                *((int128_t *)&v69[0]) = *((int128_t *)&v7);
                return;
            }
            v49 = v1;
            v50 = v3;
            v18 += 1;
            if (v48 == 0x8000000000000000)
            {
                v65 = v19;
                v65[1] = v49;
                v65[0] = 0x8000000000000000;
                v66 = v14;
                v67 = v16;
                if (v67->field_0)
                    v68(v66);
                if (v67->field_8)
                    __rust_dealloc(v66);
                v70 = v9;
                if (v70)
                {
                    v71 = v33 + 1;
                    do
                    {
                        if (v71->field_0)
                            __rust_dealloc(v71->field_-8);
                    } while ((v71 += 24, v73 = v70 - 1, v70 != 1));
                }
            }
            if (!v50)
            {
                v23 = v18;
                if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                    once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                v55 = g_53b278;
                v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
                v10 = v55;
                v24 = v47;
                v25 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1fe5dc4fcc5deb5;
                v0 = &g_534c50;
                v1 = 2;
                v5 = 0;
                v3 = &v24;
                v4 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(v46, v54, v50);
                v10 = &v21;
                v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1fe5dc4fcc5deb5;
                v12 = &v23;
                v13 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                v0 = &g_534c70;
                v1 = 3;
                v5 = 0;
                v3 = v47;
                v4 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(v46, v29, v28);
                _ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108 = 1;
                if (!(CasCmpNE(_ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108, _ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108)))
                    goto LABEL_4b09ec;
                goto LABEL_0x4b08fe;
            }
            alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(v46, v49, v50);
            v51 = v1;
            v52 = v3;
            if (!v52)
            {
                v53 = 1;
                goto LABEL_4b0915;
            }
            if (v52 < 0)
            {
                goto LABEL_4b0d0f;
            }
            else
            {
                v53 = __rust_alloc(v52, 1);
                if (!v53)
                {
LABEL_4b0d0f:
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                }
                v47 = &v10;
LABEL_4b0915:
                memcpy(v11, v51, v52);
                v10 = v52;
                v11 = v53;
                v12 = v52;
                if (v0 << 1)
                    __rust_dealloc(v51);
                if (!(char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hc74c5c88dca04bc6(v47, v33, v9, v56, v57, v58))
                {
                    v20 = v10;
                    v59 = v9;
                    if (v59 == v7)
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfe3e68f846729986(&v7);
                    v60 = v33;
                    v61 = v59 * 3;
                    *((struct struct_0 ***)((char *)v60 + 0x8 * v61)) = v20;
                    *((void* *)(8 + (char *)v60 + 0x8 * v61)) = v11;
                    *((struct struct_0 ***)(16 + (char *)v60 + 0x8 * v61)) = v12;
                    v9 = (char *)v59 + 1;
                    v46 = &v0;
                    v47 = &v10;
                }
                else
                {
                    v46 = &v0;
                    if (v10)
                        __rust_dealloc(v11);
                }
LABEL_4b09ec:
                if (v48)
                    __rust_dealloc(v49);
            }
        }
        if (v7)
        {
LABEL_4b0af0:
            __rust_dealloc(v33);
        }
    }
    return;
}
