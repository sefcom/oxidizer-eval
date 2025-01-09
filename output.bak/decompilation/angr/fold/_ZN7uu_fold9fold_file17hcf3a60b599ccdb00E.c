long long uu_fold::fold_file::hcf3a60b599ccdb00(unsigned long long a0, unsigned int a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0x208]
    void* v1;  // [sp-0xe0]
    char *v2;  // [sp-0xd8]
    char *v3;  // [sp-0xd0]
    char *v4;  // [sp-0xc8]
    char *v5;  // [sp-0xc0], Other Possible Types: unsigned long long
    struct struct_0 **v6;  // [sp-0xb8]
    unsigned long long v7;  // [sp-0xb0]
    unsigned long v8;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0xa0]
    struct struct_0 **v10;  // [sp-0x98], Other Possible Types: struct struct_1 **
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
    char *v24;  // r13
    unsigned long long v25;  // rdx
    unsigned int v26;  // ebp
    char *v27;  // r15
    char *v29;  // rdi
    char *v30;  // rsi
    char *v31;  // rsi
    char *v33;  // r15
    unsigned long long v35;  // rbx
    char *v36;  // rsi
    char *v39;  // rsi

    v15 = 0;
    v16 = 1;
    v17 = 0;
    v1 = 0;
    v2 = 1;
    v3 = 0;
    v18 = a1;
    v22 = 0;
    v13 = &g_51a9b8;
    v23 = 0;
    while (true)
    {
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd92c105567eaf153(&v8, std::io::append_to_string::h03d08dbf90a74f4a(&v15, a0), v25);
        if (v8)
        {
            ::0x4afeb0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(&v1);
            ::0x4afeb0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(&v15);
            break;
        }
        else if (v9)
        {
            v19 = v16;
            v20 = v17 + v19;
LABEL_4b1e79:
            v26 = (!(int)core::str::validations::next_code_point::haf22137f2b8c1872(&v19) ? 0x110000 : (unsigned int)v25);
            switch (v26)
            {
            case 10:
                v4 = v2;
                v5 = v3;
                v6 = &v4;
                v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha398d9e18c3ebe29;
                v8 = &g_51a968;
                v9 = 2;
                v12 = 0;
                v10 = &v6;
                v11 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v8);
                alloc::string::String::replace_range::h5f9cb15ffada2cb3(&v1, v5, 1, 0);
                v22 = 0;
                v23 = v3;
                if (!(!v23))
                    goto LABEL_4b2155;
                break;
            case 1114112:
                if (v3)
                {
LABEL_4b2155:
                    v4 = &v1;
                    v5 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v8 = &g_414600;
                    v9 = 1;
                    v12 = 0;
                    v10 = &v4;
                    v11 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&v8);
                    ::0x4b0fc0::alloc::string::String::truncate::hafe089c60c3201e9(&v1);
                    break;
                }
                ::0x4b0fc0::alloc::string::String::truncate::hafe089c60c3201e9(&v15);
                continue;
            default:
                if (v23 >= a2)
                {
                    v29 = v2;
                    v30 = v3;
                    if (v22)
                        v31 = v24 + 1;
                    if (v5)
                    {
                        if (v5 >= v30)
                        {
                            v5 = v5;
                            if (v5 != v30)
                                core::str::slice_error_fail::h5dbb61534404fe7e(v29, v30, 0, v5, v13); /* do not return */
                        }
                        else
                        {
                            v5 = v5;
                            if (*((char *)(v29 + v5)) <= 191)
                                core::str::slice_error_fail::h5dbb61534404fe7e(v29, v30, 0, v5, v13); /* do not return */
                        }
                    }
                    v4 = v29;
                    v5 = v31;
                    v6 = &v4;
                    v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha398d9e18c3ebe29;
                    v8 = &g_51a968;
                    v9 = 2;
                    v12 = 0;
                    v10 = &v6;
                    v11 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&v8);
                    alloc::string::String::replace_range::h5f9cb15ffada2cb3(&v1, v5, 1, 0);
                    v22 = 0;
                    v27 = v3;
                }
                v33 = v27;
                switch (v26)
                {
                case 8:
                    v23 = v33 + 1;
                    if (v33 >= 1)
                    {
                        break;
                    }
                    else
                    {
                        v23 = 0;
                        break;
                    }
                case 9:
                    v23 = (v33 & -8) + 8;
                    v30 = v3;
                    if (v23 <= a2)
                    {
LABEL_4b2090:
                        v35 = v18;
                        ::0x4b0f70::alloc::string::String::push::h859ae11851fd8b8e(&v1, v26);
                    }
                    else
                    {
                        if (!v30)
                        {
                            v36 = 0;
                            goto LABEL_4b2090;
                        }
                        if (v22)
                            v39 = v24 + 1;
                        v29 = v2;
                        if (!v5)
                        {
LABEL_4b201b:
                            v4 = v29;
                            v5 = v39;
                            v6 = &v4;
                            v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha398d9e18c3ebe29;
                            v8 = &g_51a968;
                            v9 = 2;
                            v12 = 0;
                            v10 = &v6;
                            v11 = 1;
                            std::io::stdio::_print::he918bceb0c89db46(&v8);
                            alloc::string::String::replace_range::h5f9cb15ffada2cb3(&v1, v5, 1, 0);
                            v36 = v3;
                            goto LABEL_4b2090;
                        }
                        else
                        {
                            if (v5 >= v30)
                            {
                                if (v5 == v30)
                                    goto LABEL_4b201b;
                            }
                            else
                            {
                                if (!(!v23))
                                    goto LABEL_4b201b;
                            }
                            v13 = &g_51a9d0;
                            v5 = v5;
                            core::str::slice_error_fail::h5dbb61534404fe7e(v29, v30, 0, v5, v13); /* do not return */
                        }
                    }
                case 13:
                    v23 = 0;
                    break;
                default:
                    if (!v14 || (v26 > 32 || (v0 = (unsigned long long)0x100003800, !((char)((unsigned long long)(char)*((char *)((char *)&v0 + ((unsigned long long)(v26 & 63) >> 3))) >> (unsigned long long)(char)(v26 & 63 & 7)) & 1))) && (v26 < 128 || !(char)::0x4b0c90::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v26)))
                    {
                        v23 = v33 + 1;
                        break;
                    }
                    else
                    {
                        v23 = v33 + 1;
                        v36 = v3;
                        v35 = 1;
                        break;
                    }
                }
                goto LABEL_4b1e79;
            }
        }
        else
        {
            ::0x4afeb0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(&v1);
            ::0x4afeb0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(&v15);
            break;
        }
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::hd2a31b9451a7f555();
    return v8;
}
