long long uu_fold::fold_file::h20f31b800631e75d(unsigned long long a0[2], unsigned int a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0x208]
    void* v1;  // [sp-0xe0]
    char *v2;  // [sp-0xd8]
    char *v3;  // [sp-0xd0]
    char *v4;  // [sp-0xc8], Other Possible Types: unsigned long long
    char *v5;  // [sp-0xc0], Other Possible Types: unsigned long long
    struct struct_0 **v6;  // [sp-0xb8]
    unsigned long long v7;  // [sp-0xb0]
    unsigned long v8;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0xa0]
    struct struct_1 **v10;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x90]
    void* v12;  // [sp-0x88]
    unsigned long long v13;  // [sp-0x78]
    char v14;  // [bp-0x64]
    void* v15;  // [sp-0x60]
    unsigned long long v16;  // [sp-0x58]
    void* v17;  // [sp-0x50]
    unsigned long long v18;  // [sp-0x48]
    unsigned long v19;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x38]
    void* v22;  // rbx
    char *v23;  // r15
    unsigned long long v25;  // rdx
    unsigned int v26;  // ebp
    unsigned long long v27;  // rdx
    char *v28;  // r15
    char *v30;  // rdi
    char *v31;  // rsi
    char *v32;  // rsi
    char *v34;  // r15
    unsigned long long v35;  // rdx
    unsigned long long v37;  // rbx
    char *v38;  // rsi
    char *v39;  // rsi
    char *v41;  // rsi
    unsigned long long v45;  // rdx
    unsigned long long v46;  // rsi
    unsigned long long v47;  // rsi

    v15 = 0;
    v16 = 1;
    v17 = 0;
    v1 = 0;
    v2 = 1;
    v3 = 0;
    v18 = a1;
    v22 = 0;
    v13 = &g_51bc78;
    v23 = 0;
    while (true)
    {
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h2e67167d4a88561e(&v8, std::io::append_to_string::h5d00b019d552f19a(&v15, a0), v25);
        if (v8)
        {
            ::0x4b0340::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd56999072c42a543(&v1);
            ::0x4b0340::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd56999072c42a543(&v15);
            break;
        }
        else if (v9)
        {
            v19 = v16;
            v20 = v17 + v19;
LABEL_4b2309:
            v26 = (!(int)core::str::validations::next_code_point::h43722f666619708e(&v19) ? (unsigned int)v25 : 0x110000);
            switch (v26)
            {
            case 10:
                v4 = v2;
                v5 = v3;
                v6 = &v4;
                v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha6d526f5b3d8da98;
                v8 = &g_51bc58;
                v9 = 2;
                v12 = 0;
                v10 = &v6;
                v11 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v8, v46, v25);
                alloc::string::String::replace_range::h3eedd87543673775(&v1, v5, 1, 0);
                v22 = 0;
                v23 = v3;
                if (!(!v23))
                    goto LABEL_4b2605;
                break;
            case 1114112:
                if (v3)
                {
LABEL_4b2605:
                    v4 = &v1;
                    v5 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v8 = &g_414850;
                    v9 = 1;
                    v12 = 0;
                    v10 = &v4;
                    v11 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&v8, v47, v45);
                    ::0x4b1450::alloc::string::String::truncate::hafe089c60c3201e9(&v1);
                    break;
                }
                ::0x4b1450::alloc::string::String::truncate::hafe089c60c3201e9(&v15);
                continue;
            default:
                if (v23 >= a2)
                {
                    v30 = v2;
                    v31 = v3;
                    if (v5)
                    {
                        if (v5 >= v31)
                        {
                            if (v5 != v31)
                                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                        }
                        else
                        {
                            if (*((char *)(v30 + v5)) <= 191)
                                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                        }
                    }
                    v4 = v30;
                    v5 = v32;
                    v6 = &v4;
                    v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha6d526f5b3d8da98;
                    v8 = &g_51bc58;
                    v9 = 2;
                    v12 = 0;
                    v10 = &v6;
                    v11 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&v8, v31, v25);
                    alloc::string::String::replace_range::h3eedd87543673775(&v1, v5, 1, 0);
                    v22 = 0;
                    v28 = v3;
                }
                v34 = v28;
                v35 = v27;
                switch (v26)
                {
                case 8:
                    v23 = v34 + 1;
                    if (v34 < 1)
                    {
                        v23 = 0;
                        break;
                    }
                    else
                    {
                        break;
                    }
                case 9:
                    v23 = (v34 & -8) + 8;
                    v38 = v3;
                    if (!(v23 > a2) || !(v38))
                    {
LABEL_4b251a:
                        v37 = v18;
                        ::0x4b1400::alloc::string::String::push::h859ae11851fd8b8e(&v1, v26, v35);
                    }
                    else
                    {
                        if (!v5)
                        {
LABEL_4b24a5:
                            v4 = v2;
                            v5 = v41;
                            v6 = &v4;
                            v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha6d526f5b3d8da98;
                            v8 = &g_51bc58;
                            v9 = 2;
                            v12 = 0;
                            v10 = &v6;
                            v11 = 1;
                            std::io::stdio::_print::he918bceb0c89db46(&v8, v38, v35);
                            alloc::string::String::replace_range::h3eedd87543673775(&v1, v5, 1, 0);
                            v39 = v3;
                            goto LABEL_4b251a;
                        }
                        else
                        {
                            if (v5 < v38)
                            {
                                if (!(!v23))
                                    goto LABEL_4b24a5;
                            }
                            else
                            {
                                if (v5 == v38)
                                    goto LABEL_4b24a5;
                            }
                            v13 = &g_51bc90;
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                        }
                    }
                case 13:
                    v23 = 0;
                    break;
                default:
                    if (!v14 || (v26 > 32 || (v0 = (unsigned long long)0x100003800, !((char)((unsigned long long)(char)*((char *)((char *)&v0 + ((unsigned long long)(v26 & 63) >> 3))) >> (unsigned long long)(char)(v26 & 63 & 7)) & 1))) && (v26 < 128 || !(char)::0x4b1120::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v26)))
                    {
                        v23 = v34 + 1;
                        break;
                    }
                    else
                    {
                        v23 = v34 + 1;
                        v39 = v3;
                        break;
                    }
                }
                goto LABEL_4b2309;
            }
        }
        else
        {
            ::0x4b0340::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd56999072c42a543(&v1);
            ::0x4b0340::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd56999072c42a543(&v15);
            break;
        }
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::h8b515dc9305a2c2c(a0[0], a0[1]);
    return v8;
}
