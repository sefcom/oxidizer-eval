long long uu_sort::merge::replace_output_file_in_input_files::h1d16a350d57fc5e2(unsigned long a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    int v0;  // [sp-0x178]
    unsigned long long v1;  // [sp-0x168]
    int v2;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x148]
    int v4;  // [bp-0x138], Other Possible Types: char
    int v5;  // [bp-0x138], Other Possible Types: char
    unsigned long long v6;  // [sp-0x130]
    unsigned long v7;  // [sp-0x128], Other Possible Types: unsigned long long
    char v8;  // [bp-0xf0]
    char v9;  // [bp-0xe0]
    int v10;  // [sp-0xd8]
    unsigned long long v11;  // [sp-0xc8]
    unsigned long v12;  // [sp-0xc0]
    int v13;  // [sp-0xb8]
    int v14;  // [sp-0xa8]
    unsigned long long v15;  // [sp-0x98]
    int v16;  // [sp-0x88]
    unsigned long long v17;  // [sp-0x78]
    int v18;  // [sp-0x68]
    unsigned long long v19;  // [sp-0x58]
    unsigned long long v20;  // [sp-0x50]
    unsigned long long v21;  // [sp-0x48]
    unsigned long v22;  // [sp-0x40]
    unsigned long long v23;  // [sp-0x38]
    unsigned long long v25;  // r12
    int v26;  // xmm0
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rsi
    unsigned long long v29;  // rax
    int v30;  // xmm0
    int v31;  // ymm0
    int v32;  // ymm0
    struct_0 *v33;  // rax
    unsigned long long v34[3];  // rbp
    int v35;  // xmm0
    int v36;  // xmm0
    unsigned int v37;  // r12d
    int v38;  // xmm0
    int v39;  // xmm0
    int v40;  // xmm0
    int v41;  // xmm0
    int v42;  // xmm0
    int v43;  // xmm0
    int v44;  // xmm0
    void* v45;  // rbx
    unsigned long v46;  // rdx

    v25 = 0x8000000000000000;
    v2 = 0x8000000000000000;
    if (a2)
    {
        std::fs::canonicalize::h5ee5ffd7248c8d7c(&v5, a2, a3);
        v1 = v7;
        v26 = *((int128_t *)&v5);
        v0 = v26;
        v27 = (long long)v0;
        v28 = 9223372036854775810;
        v29 = v27;
        if (v27 >= 9223372036854775810)
        {
            v20 = 9223372036854775810;
            v21 = v27;
            v15 = v1;
            v30 = v0;
            v32 = (v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30;
            v14 = v30;
            v22 = a0;
            v23 = a0 + a1 * 24;
            v33 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8f07d4e8b2ff4fed(&v22);
            if (v33)
            {
                v34 = v33;
                do
                {
                    std::fs::canonicalize::h5ee5ffd7248c8d7c(&v8, v34[1], v34[2]);
                    if (*((long long *)&v8) == v25)
                    {
LABEL_529ce0:
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h499879e130aef05f(&v8);
                    }
                    else
                    {
                        v35 = *((int128_t *)&v8);
                        v32 = v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35;
                        v10 = v35;
                        v11 = *((long long *)&v9);
                        if ((char)_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7((long long)(&v10)[8], *((long long *)&v9), (long long)(&v14)[8], v15))
                        {
                            if ((long long)v2 != v25)
                            {
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbd5fd95fcc29e6fb(&v5, &v2);
                                v17 = v7;
                                v36 = (int128_t)v5;
                                v16 = v36;
                                ::0x526b70::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h5ef0e2e0fb72183b(v34);
                                v34[2] = v17;
                                v40 = v16;
                                v32 = (v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
                                *((void*)&v34[0]) = v40;
                            }
                            else
                            {
                                uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&v5, a4);
                                if (v12 == v25)
                                {
                                    v45 = v7;
                                    ::0x5266f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(&v10);
                                    goto LABEL_529f92;
                                }
                                else
                                {
                                    v37 = (int)v5;
                                    v38 = *((int128_t *)&v7);
                                    v12 = v6;
                                    v13 = v38;
                                    v7 = v11;
                                    v39 = v10;
                                    v4 = v39;
                                    if (!std::fs::copy::ha09958592b5817e3(&v5, &v12))
                                    {
                                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbd5fd95fcc29e6fb(&v5, &v12);
                                        v19 = v7;
                                        v41 = (int128_t)v4;
                                        v18 = v41;
                                        ::0x526b70::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h5ef0e2e0fb72183b(v34);
                                        v34[2] = v19;
                                        v42 = v18;
                                        *((void*)&v34[0]) = v42;
                                        v7 = (long long)(&v13)[8];
                                        v43 = *((int128_t *)&v12);
                                        v5 = v43;
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h7575e676c0bf6e13(&v2);
                                        v3 = v7;
                                        v44 = (int128_t)v5;
                                        v32 = (((((v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
                                        v2 = v44;
                                        ::0x5266a0::core::ptr::drop_in_place$LT$std..fs..File$GT$::hbb578aa8d27e7bc5(v37);
                                        v25 = 0x8000000000000000;
                                        goto LABEL_529eb9;
                                    }
                                    else
                                    {
                                        v4 = 4;
                                        v6 = v46;
                                        v45 = ::0x528470::alloc::boxed::Box$LT$T$GT$::new::hebf92c849c48588d(&v5);
                                        ::0x5266f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(&v12);
                                        ::0x5266a0::core::ptr::drop_in_place$LT$std..fs..File$GT$::hbb578aa8d27e7bc5(v37);
                                        v25 = 0x8000000000000000;
LABEL_529f92:
                                        if (*((long long *)&v8) == v25)
                                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h499879e130aef05f(&v8);
                                        ::0x5266f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(&v14);
                                        if ((long long)v0 == v25)
                                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h499879e130aef05f(&v0);
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h7575e676c0bf6e13(&v2);
                                        return v45;
                                    }
                                }
                            }
                        }
                        ::0x5266f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(&v10);
LABEL_529eb9:
                        if (!(*((long long *)&v8) == v25))
                            continue;
                        goto LABEL_529ce0;
                    }
                } while ((v34 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8f07d4e8b2ff4fed(&v22), v34));
            }
            ::0x5266f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(&v14);
            v29 = (long long)v0;
            v27 = v21;
            v28 = v20;
        }
        if (v29 == v25)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h499879e130aef05f(&v0);
        }
        else if (v29 != 9223372036854775809 && v27 < v28)
        {
            ::0x5266f0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(&v0);
        }
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h7575e676c0bf6e13(&v2);
    return 0;
}
