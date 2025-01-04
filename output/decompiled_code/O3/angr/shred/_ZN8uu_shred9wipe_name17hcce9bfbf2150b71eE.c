double uu_shred::wipe_name::hcce9bfbf2150b71e(long long a0, long long a1, long long a2, long long a3, long long a4)
{
    char *v0;  // [sp-0x228], Other Possible Types: struct struct_0 **, unsigned long long
    char *v1;  // [bp-0x220], Other Possible Types: unsigned int, unsigned long
    char v2;  // [sp-0x21f]
    unsigned short v3;  // [sp-0x21c]
    struct struct_0 **v4;  // [sp-0x218]
    char v5;  // [bp-0x210], Other Possible Types: unsigned long
    char *v6;  // [sp-0x208]
    struct struct_1 **v7;  // [sp-0x1f8]
    unsigned int v8;  // [sp-0x1f0]
    unsigned int v9;  // [sp-0x1ec]
    char *v10;  // [bp-0x1e8], Other Possible Types: unsigned long
    char *v11;  // [sp-0x1e0], Other Possible Types: unsigned long long
    struct struct_0 **v12;  // [sp-0x1d8], Other Possible Types: struct struct_1 **
    char v13;  // [bp-0x1d0], Other Possible Types: unsigned long long
    void* v14;  // [sp-0x1c8]
    char v15;  // [bp-0x1b0]
    char v16;  // [bp-0x1a8]
    char v17;  // [bp-0x1a0]
    unsigned long v18;  // [sp-0x198], Other Possible Types: unsigned long long
    char *v19;  // [bp-0x188], Other Possible Types: unsigned long
    unsigned long long v20;  // [sp-0x180]
    struct struct_0 **v21;  // [sp-0x178], Other Possible Types: struct struct_1 **, unsigned long
    unsigned long long v22;  // [sp-0x170]
    char *v23;  // [sp-0x168], Other Possible Types: void*
    unsigned long long v24;  // [sp-0x160]
    unsigned long long v25;  // [sp-0xd8]
    unsigned long long v26;  // [sp-0xd0]
    char v27;  // [sp-0xc8]
    char *v28;  // [bp-0xc0], Other Possible Types: unsigned long long
    char *v29;  // [sp-0xb8]
    char v30;  // [sp-0xa8]
    char v31;  // [bp-0xa0]
    char v32;  // [bp-0x90]
    char *v33;  // [sp-0x88]
    char *v34;  // [sp-0x78]
    char *v35;  // [sp-0x68]
    unsigned long long v36;  // [sp-0x58]
    char v37;  // [bp-0x50]
    char v38;  // [bp-0x40]
    unsigned long long v40;  // rax
    unsigned long long v41;  // rdx
    char *v42;  // xmm0
    int v43;  // ymm0
    int v44;  // ymm0
    unsigned long long v45;  // rdx
    int v46;  // ymm1
    char *v47;  // xmm0
    char *v48;  // xmm1
    char *v49;  // xmm0
    unsigned long long v50;  // rax
    unsigned long long v51;  // rsi
    char *v52;  // xmm0
    char *v53;  // xmm0
    char *v54;  // xmm0
    int v55;  // ymm0
    char *v56;  // xmm0
    char *v57;  // xmm0
    unsigned long long v58;  // rsi

    v8 = a4;
    v9 = a3;
    v40 = std::path::Path::file_name::h79ecbb7850a9c7f3(a1, a2, a2, a3);
    if (!v40)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v19, v40, v41);
    if (v19)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v19, a1, a2);
    v7 = v21;
    v42 = *((int128_t *)&v19);
    v44 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
    v6 = v42;
    v25 = 1;
    v26 = v21;
    v27 = 0;
    if (!_$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next_back::h81b9c6b41e365607(&v25))
    {
        a0->field_10 = v7;
        *((char **)&a0->field_0) = v6;
        return (unsigned long long)(v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6);
    }
    do
    {
        uu_shred::FilenameIter::new::h75c47570d6e41809(&v37, v45);
        v47 = *((int128_t *)&v37);
        v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47;
        v48 = *((int128_t *)&v38);
        v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
        v34 = v48;
        v33 = v47;
        while (true)
        {
            _$LT$uu_shred..FilenameIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8e8e3d724658b94f(&v31, &v33);
            if (*((long long *)&v31) == 0x8000000000000000)
                break;
            v36 = *((long long *)&v32);
            v49 = *((int128_t *)&v31);
            v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
            v35 = v49;
            std::path::Path::with_file_name::h6ad9755a55c53ad4(&v15, a1, a2, &v35);
            std::fs::metadata::h605f1ca78403f0bd(&v19, *((long long *)&v16), *((long long *)&v17));
            if ((int)v19 != 2)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h057e93f1d1d682ca(&v19);
                ::0x4baef0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha6413bedadae7a14(&v15);
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h057e93f1d1d682ca(&v19);
                v50 = std::fs::rename::he0e2ca4a2337599c(&v6, &v15, v41);
                if (v50)
                {
                    v18 = v50;
                    v10 = uucore::util_name::h60d842bf27b05e82();
                    v11 = v41;
                    v0 = &v10;
                    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
                    v19 = &g_538698;
                    v20 = 2;
                    v23 = 0;
                    v21 = &v0;
                    v22 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v58, v41);
                    v28 = 1;
                    *((int128_t *)&v29) = *((int128_t *)&(&v6)[1]);
                    v30 = 0;
                    v0 = 1;
                    *((int128_t *)&v1) = *((int128_t *)&v16);
                    v5 = 1;
                    v19 = &v28;
                    v20 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v21 = &v0;
                    v22 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v23 = &v18;
                    v24 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v10 = &g_538888;
                    v11 = 4;
                    v14 = 0;
                    v12 = &v19;
                    v13 = 3;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v58, v41);
                    std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                }
                if ((char)v9)
                {
                    v10 = uucore::util_name::h60d842bf27b05e82();
                    v11 = v41;
                    v0 = &v10;
                    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
                    v19 = &g_538698;
                    v20 = 2;
                    v23 = 0;
                    v21 = &v0;
                    v22 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v51, v41);
                    v52 = *((int128_t *)&(&v6)[1]);
                    v10 = 1;
                    v11 = v52;
                    v13 = 0;
                    v53 = *((int128_t *)&v16);
                    v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
                    v28 = v53;
                    v0 = &v10;
                    v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v4 = &v28;
                    v5 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                    v19 = &g_538858;
                    v20 = 3;
                    v23 = 0;
                    v21 = &v0;
                    v22 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v19, v51, v41);
                }
                if ((char)v8 == 3)
                {
                    v0 = 0x1b600000000;
                    v3 = 0;
                    v1 = 0;
                    v2 = 1;
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hd63d5d024cbc8ccc(&v19, &v15);
                    v12 = v21;
                    v54 = *((int128_t *)&v19);
                    v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54;
                    v10 = v54;
                    std::fs::OpenOptions::open::h006d788eda6d20b4(&v19, &v0, &v10);
                    *((int *)&v10) = core::result::Result$LT$T$C$E$GT$::expect::hbf7455566ffa5658(&v19);
                    core::result::Result$LT$T$C$E$GT$::expect::hccf86eaae5770f98(std::fs::File::sync_all::ha0e03da750e69f90(&v10));
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::h7f7a30b7b330e79b((int)v10);
                }
                v21 = *((long long *)&v17);
                v56 = *((int128_t *)&v15);
                v19 = v56;
                ::0x4baef0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha6413bedadae7a14(&v6);
                v7 = v21;
                v57 = *((int128_t *)&v19);
                v44 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
                v6 = v57;
                break;
            }
        }
        core::ptr::drop_in_place$LT$uu_shred..FilenameIter$GT$::h234a690002371487(&v33);
    } while (_$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next_back::h81b9c6b41e365607(&v25));
}
