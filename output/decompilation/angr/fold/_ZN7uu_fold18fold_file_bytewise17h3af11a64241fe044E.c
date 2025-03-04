long long uu_fold::fold_file_bytewise::h3af11a64241fe044(unsigned long long a0[2], unsigned int a1, unsigned long long a2)
{
    void* v0;  // [sp-0xb0]
    unsigned long long v1;  // [sp-0xa8]
    void* v2;  // [sp-0xa0]
    void* v3;  // [sp-0x98]
    unsigned long long v4;  // [sp-0x90]
    struct struct_0 **v5;  // [bp-0x88]
    int v6;  // [bp-0x80], Other Possible Types: unsigned long long
    void* v7;  // [sp-0x78]
    unsigned int v8;  // [sp-0x64]
    unsigned long v9;  // [sp-0x60]
    unsigned long long v10;  // [sp-0x58]
    unsigned long long v11;  // [sp-0x48]
    char *v12;  // [sp-0x40]
    unsigned long long v13;  // [sp-0x38]
    unsigned long long v15[2];  // r15
    char *v16;  // r14
    int v17;  // ymm0
    unsigned long long v18;  // rcx
    unsigned long long v19;  // rbx
    unsigned long long v20;  // r14
    unsigned long long v21;  // rax
    unsigned long long v22;  // rbp
    unsigned long v23;  // rdx
    unsigned long long v24;  // r12
    void* v25;  // r15
    unsigned long long v26;  // r14
    unsigned long long v27;  // rbx
    unsigned long long v28;  // rbx
    unsigned long long v30;  // rbx
    unsigned long long v31;  // rbx
    unsigned long long v32;  // r13

    v8 = a1;
    v15 = a0;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v16 = &v0;
    while (true)
    {
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha34f519a25036496(&v3, std::io::append_to_string::h03d08dbf90a74f4a(v16, v15), a2);
        if (v3)
        {
            ::0x4afeb0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(&v0);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::hd2a31b9451a7f555(v15[0], v15[1]);
            return v3;
        }
        if (!v4)
        {
            ::0x4afeb0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(&v0);
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$dyn$u20$std..io..Read$GT$$GT$::hd2a31b9451a7f555(v15[0], v15[1]);
            return v3;
        }
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5f12374e656de98e(v1, v2, "\n", 1))
        {
            v3 = &g_51a958;
            v4 = 1;
            v5 = 8;
            v17 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            *((uint128_t *)&v6) = 0;
            std::io::stdio::_print::he918bceb0c89db46(&v3);
        }
        else
        {
            v18 = v2;
            if (v18)
            {
                v19 = a2;
                if (v18 < v19)
                    v19 = v18;
                v20 = v1;
                v11 = v18;
                v21 = ::0x4b0a60::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(0, v19, v20, v18);
                if (v21)
                {
                    v22 = v21;
                    v24 = v23;
                    v25 = 0;
                    do
                    {
                        v26 = v11;
                        if (v19 < v26 && (char)v8 && core::str::_$LT$impl$u20$str$GT$::rfind::h608a144437da32c7(v22, v24))
                        {
                            v3 = 0;
                            v4 = v23;
                            *((char *)&v5) = 0;
                            v22 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeInclusive$LT$usize$GT$$GT$::index::h3fe2ad0e36dabac9(&v3, v22, v24);
                            v24 = v23;
                        }
                        v9 = v22;
                        v10 = v24;
                        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5f12374e656de98e(v22, v24, "\n", 1))
                        {
LABEL_4b1c87:
                            v15 = a0;
                            v16 = &v0;
                            goto LABEL_4b1a81;
                        }
                        else
                        {
                            v25 += v10;
                            v27 = v26;
                            v28 = v27 - v25;
                            if (v27 <= v25)
                            {
                                v12 = &v9;
                                v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha398d9e18c3ebe29;
                                v3 = &g_414600;
                                v4 = 1;
                                v7 = 0;
                                v5 = &v12;
                                v6 = 1;
                                std::io::stdio::_print::he918bceb0c89db46(&v3);
                                goto LABEL_4b1c87;
                            }
                        }
                        v12 = &v9;
                        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha398d9e18c3ebe29;
                        v3 = &g_51a968;
                        v4 = 2;
                        v7 = 0;
                        v5 = &v12;
                        v6 = 1;
                        std::io::stdio::_print::he918bceb0c89db46(&v3);
                        if (v30 <= v28)
                            v30 = a2;
                        v19 = v31 + v25;
                        v20 = v1;
                        v32 = v2;
                        v22 = ::0x4b0a60::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v25, v19, v20, v32);
                        v24 = v23;
                    } while (v22);
                }
                else
                {
                    v25 = 0;
                    v32 = v11;
                    break;
                }
            }
        }
LABEL_4b1a81:
        ::0x4b0fc0::alloc::string::String::truncate::hafe089c60c3201e9(v16);
    }
    core::str::slice_error_fail::h5dbb61534404fe7e(v20, v32, v25, v19, &g_51a988); /* do not return */
}
