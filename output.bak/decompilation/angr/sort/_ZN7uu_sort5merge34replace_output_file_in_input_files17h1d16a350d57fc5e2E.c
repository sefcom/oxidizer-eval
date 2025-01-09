long long uu_sort::merge::replace_output_file_in_input_files::h1d16a350d57fc5e2(unsigned long a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    int v0;  // [sp-0x178]
    unsigned long long v1;  // [sp-0x168]
    int v2;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x148]
    int v4;  // [bp-0x138], Other Possible Types: char
    unsigned long long v5;  // [sp-0x130]
    unsigned long v6;  // [sp-0x128], Other Possible Types: unsigned long long
    char v7;  // [bp-0xf0]
    char v8;  // [bp-0xe0]
    int v9;  // [sp-0xd8]
    unsigned long long v10;  // [sp-0xc8]
    unsigned long v11;  // [sp-0xc0], Other Possible Types: unsigned long long
    int v12;  // [sp-0xb8]
    int v13;  // [sp-0xa8]
    unsigned long long v14;  // [sp-0x98]
    int v15;  // [sp-0x88]
    unsigned long long v16;  // [sp-0x78]
    int v17;  // [sp-0x68]
    unsigned long long v18;  // [sp-0x58]
    unsigned long v21;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x38]
    unsigned long long v24;  // r12
    int v25;  // xmm0
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rdx
    int v29;  // xmm0
    int v30;  // ymm0
    int v31;  // ymm0
    unsigned long long v32[3];  // rax
    int v33;  // xmm0
    int v34;  // xmm0
    int v35;  // xmm0
    int v36;  // xmm0
    int v37;  // xmm0
    int v38;  // xmm0
    int v39;  // xmm0
    int v40;  // xmm0
    int v41;  // xmm0
    unsigned long v42;  // rdx

    v24 = 0x8000000000000000;
    v2 = 0x8000000000000000;
    if (a2)
    {
        std::fs::canonicalize::h5ee5ffd7248c8d7c(&v4, a2, a3);
        v1 = v6;
        v25 = *((int128_t *)&v4);
        v0 = v25;
        v26 = (long long)v0;
        if (v26 >= 9223372036854775810)
        {
            v27 = 9223372036854775810;
            v28 = v26;
            v14 = v1;
            v29 = v0;
            v31 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29;
            v13 = v29;
            v21 = a0;
            v22 = a0 + a1 * 24;
            v32 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8f07d4e8b2ff4fed(&v21);
            if (v32)
            {
                do
                {
                    std::fs::canonicalize::h5ee5ffd7248c8d7c(&v7, v32[1], v32[2]);
                    if (*((long long *)&v7) == v24)
                    {
LABEL_529ce0:
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h499879e130aef05f(&v7);
                    }
                    else
                    {
                        v33 = *((int128_t *)&v7);
                        v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33;
                        v9 = v33;
                        v10 = *((long long *)&v8);
                        if ((char)_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7((long long)(&v9)[8], *((long long *)&v8), (long long)(&v13)[8], v14))
                        {
                            if (v2 != v24)
                            {
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbd5fd95fcc29e6fb(&v4, &v2);
                                v16 = v6;
                                v34 = (int128_t)v4;
                                v15 = v34;
                                ::0x526b70::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h5ef0e2e0fb72183b();
                                v32[2] = v16;
                                v37 = v15;
                                v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37;
                                *((void*)&v32[0]) = v37;
                            }
                            else
                            {
                                uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&v4, a4);
                                if (v11 == v24)
                                {
                                    ::0x5266f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e();
                                    goto LABEL_529f92;
                                }
                                else
                                {
                                    v35 = *((int128_t *)&v6);
                                    v11 = v5;
                                    v12 = v35;
                                    v6 = v10;
                                    v36 = v9;
                                    v4 = v36;
                                    if (!std::fs::copy::ha09958592b5817e3(&v4, &v11))
                                    {
                                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbd5fd95fcc29e6fb(&v4, &v11);
                                        v18 = v6;
                                        v38 = (int128_t)v4;
                                        v17 = v38;
                                        ::0x526b70::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h5ef0e2e0fb72183b();
                                        v32[2] = v18;
                                        v39 = v17;
                                        *((void*)&v32[0]) = v39;
                                        v6 = (long long)(&v12)[8];
                                        v40 = *((int128_t *)&v11);
                                        v4 = v40;
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h7575e676c0bf6e13(&v2);
                                        v3 = v6;
                                        v41 = (int128_t)v4;
                                        v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
                                        v2 = v41;
                                        ::0x5266a0::core::ptr::drop_in_place$LT$std..fs..File$GT$::hbb578aa8d27e7bc5();
                                        v24 = 0x8000000000000000;
                                        goto LABEL_529eb9;
                                    }
                                    else
                                    {
                                        v4 = 4;
                                        v5 = v42;
                                        ::0x5266f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e();
                                        ::0x5266a0::core::ptr::drop_in_place$LT$std..fs..File$GT$::hbb578aa8d27e7bc5();
                                        v24 = 0x8000000000000000;
LABEL_529f92:
                                        if (*((long long *)&v7) == v24)
                                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h499879e130aef05f(&v7);
                                        ::0x5266f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e();
                                        if ((long long)v0 == v24)
                                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h499879e130aef05f(&v0);
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h7575e676c0bf6e13(&v2);
                                        return ::0x528470::alloc::boxed::Box$LT$T$GT$::new::hebf92c849c48588d(&v4);
                                    }
                                }
                            }
                        }
                        ::0x5266f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e();
LABEL_529eb9:
                        if ((v32 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8f07d4e8b2ff4fed(&v21), v32))
                            continue;
                        goto LABEL_529ce0;
                    }
                } while ((v32 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8f07d4e8b2ff4fed(&v21), v32));
            }
            ::0x5266f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e();
            v26 = (long long)v0;
        }
        if (v26 == v24)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h499879e130aef05f(&v0);
        }
        else if (v26 != 9223372036854775809 && v28 < 9223372036854775810)
        {
            ::0x5266f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e();
        }
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h7575e676c0bf6e13(&v2);
    return 0;
}
