long long uu_fold::fold_file_bytewise::h0a997083e58e6a35(unsigned long long a0[2], unsigned int a1, unsigned long a2)
{
    void* v0;  // [sp-0xb0]
    unsigned long long v1;  // [sp-0xa8]
    void* v2;  // [sp-0xa0]
    void* v3;  // [sp-0x98], Other Possible Types: unsigned long
    unsigned long long v4;  // [sp-0x90]
    char v5;  // [bp-0x88], Other Possible Types: unsigned long, unsigned long long
    int v6;  // [bp-0x80], Other Possible Types: unsigned long long
    void* v7;  // [sp-0x78]
    unsigned int v8;  // [sp-0x64]
    unsigned long v9;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x58]
    unsigned long long v11;  // [sp-0x48]
    unsigned long v12;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x38]
    unsigned long long v15;  // r14
    unsigned long long v16[2];  // 4096
    unsigned long long v17[2];  // r15
    int v18;  // ymm0
    unsigned long long v19;  // rdx
    unsigned long long v21;  // rcx
    unsigned long long v23;  // rcx
    unsigned long long v24;  // rbx
    unsigned long long v25;  // rax
    void* v26;  // r15
    unsigned long long v27;  // rdx
    unsigned long long v28;  // r12
    unsigned long long v29;  // r14
    unsigned long long v30;  // r12
    unsigned long long v31;  // rbx
    unsigned long long v32;  // rbx
    unsigned long long v33;  // rsi
    unsigned long long v35;  // rax

    v8 = a1;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v15 = &v0;
    while (true)
    {
        v17 = v16;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hb14db4a351e42e07(&v3, std::io::append_to_string::h5d00b019d552f19a(v15, v17), v19);
        if (v3)
        {
            ::0x4b0340::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd56999072c42a543(&v0);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::h8b515dc9305a2c2c(v17[0], v17[1]);
            return v3;
        }
        if (!v4)
        {
            ::0x4b0340::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd56999072c42a543(&v0);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::h8b515dc9305a2c2c(v17[0], v17[1]);
            return v3;
        }
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5356d3c7fb627267(v1, v2, "\n", 1))
        {
            v3 = &g_51bc18;
            v4 = 1;
            v5 = 8;
            v18 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            *((int128_t *)&v6) = 0;
            std::io::stdio::_print::he918bceb0c89db46(&v3, v33, v19);
        }
        else
        {
            v21 = v2;
            if (v21)
            {
                v24 = v23;
                v11 = v21;
                v25 = ::0x4b0ef0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(0, v24, v1, v21);
                if (v25)
                {
                    v26 = 0;
                    do
                    {
                        v28 = v27;
                        v29 = v11;
                        if (v24 < v29 && (char)v8 && core::str::_$LT$impl$u20$str$GT$::rfind::h42b41da8104bf1a9(v25, v28))
                        {
                            v3 = 0;
                            v4 = v19;
                            v5 = 0;
                            v25 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeInclusive$LT$usize$GT$$GT$::index::h3fe2ad0e36dabac9(&v3, v25, v28);
                        }
                        v9 = v25;
                        v10 = v30;
                        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5356d3c7fb627267(v9, v10, "\n", 1))
                        {
LABEL_4b2117:
                            v15 = &v0;
                            goto LABEL_4b1f11;
                        }
                        else
                        {
                            v26 += v10;
                            v31 = v29;
                            v32 = v31 - v26;
                            if (v31 <= v26)
                            {
                                v12 = &v9;
                                v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha6d526f5b3d8da98;
                                v3 = &g_414850;
                                v4 = 1;
                                v7 = 0;
                                v5 = &v12;
                                v6 = 1;
                                std::io::stdio::_print::he918bceb0c89db46(&v3, v33, v19);
                                goto LABEL_4b2117;
                            }
                        }
                        v12 = &v9;
                        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha6d526f5b3d8da98;
                        v3 = &g_51bc58;
                        v4 = 2;
                        v7 = 0;
                        v5 = &v12;
                        v6 = 1;
                        std::io::stdio::_print::he918bceb0c89db46(&v3, v33, v19);
                        v24 = v35 + v26;
                        v25 = ::0x4b0ef0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v26, v24, v1, v2);
                    } while (v25);
                }
                else
                {
                    break;
                }
            }
        }
LABEL_4b1f11:
        ::0x4b1450::alloc::string::String::truncate::hafe089c60c3201e9(v15);
    }
    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
}
