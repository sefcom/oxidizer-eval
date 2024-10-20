long long uu_cp::copy_attributes::h1e6de8c81317045e(unsigned long long a0[4], unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, char a5[12])
{
    char v0;  // [bp-0x298]
    char v1;  // [bp-0x290]
    char v2;  // [bp-0x288]
    char v3;  // [bp-0x280]
    char v4;  // [bp-0x278]
    char v5;  // [bp-0x268]
    char v6;  // [bp-0x260]
    char v7;  // [sp-0x259]
    void* v8;  // [sp-0x258], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x248]
    unsigned long long v10;  // [sp-0x240]
    int v11;  // [bp-0x238], Other Possible Types: unsigned long
    char v12;  // [bp-0x228], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x220]
    int v14;  // [sp-0x218], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x210]
    unsigned long long v16;  // [sp-0x208]
    char v17;  // [sp-0x200]
    unsigned long v18;  // [sp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x1f0]
    unsigned long long v21;  // [sp-0x1e0]
    unsigned long v22;  // [sp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x1d0]
    unsigned long long v24;  // [sp-0x1c8]
    unsigned long long v25;  // [sp-0x1c0]
    unsigned long long v26;  // [sp-0x1b8]
    unsigned long long v27;  // [sp-0x1b0]
    int v28;  // [bp-0x1a8], Other Possible Types: unsigned int, unsigned long
    char v29;  // [bp-0x1a0], Other Possible Types: unsigned long long
    void* v30;  // [bp-0x198], Other Possible Types: char
    unsigned long v31;  // [sp-0x108], Other Possible Types: unsigned long long
    void* v32;  // [sp-0x100], Other Possible Types: unsigned long long
    unsigned int v33;  // [bp-0xf8], Other Possible Types: unsigned long
    unsigned long long v34;  // [sp-0xf0]
    void* v35;  // [sp-0xe8], Other Possible Types: unsigned long long
    char v36;  // [bp-0xd0]
    char v37;  // [bp-0xcc]
    char v38;  // [bp-0xa0]
    char v39;  // [bp-0x98]
    char v40;  // [bp-0x90]
    char v41;  // [bp-0x88]
    unsigned long long v42;  // [sp-0x58]
    unsigned long long v43;  // [sp-0x50]
    char v44;  // [bp-0x48]
    char v45;  // [bp-0x40]
    char v46;  // [bp-0x38]
    unsigned long long v48;  // r15
    unsigned long long v49;  // r13
    unsigned int v50;  // ebx
    unsigned long long v51;  // rbx
    unsigned int v52;  // r13d
    unsigned long long v53;  // rbx
    unsigned long long v54;  // rbp
    unsigned long long v55;  // r12
    unsigned long long v56[4];  // rax
    unsigned long long v57;  // rsi
    unsigned long long v58;  // rdx
    unsigned long long v59;  // rsi
    unsigned long long v60;  // rcx
    unsigned long long v61;  // r8
    unsigned long long v62;  // r9
    unsigned long long v64;  // rbx
    unsigned long long v65;  // rbx
    unsigned long long v66;  // rsi
    char v67;  // bl
    unsigned long long v68;  // rax
    unsigned long long v69;  // rsi
    unsigned long long v70;  // rdx
    char v71;  // bpl
    unsigned long long v72;  // rdi
    unsigned long long v73;  // rsi
    unsigned long long v74;  // rsi
    char *v75;  // rax
    char *v76;  // r15
    unsigned long long v77;  // r14
    unsigned long v78;  // rbp
    unsigned long long v79;  // rbx
    unsigned long long v80;  // rbx
    unsigned short v81;  // ax
    unsigned long long v83;  // rdx
    unsigned long long v84;  // rsi

    v14 = 1;
    v15 = a1;
    v16 = a2;
    v17 = 1;
    v26 = 1;
    v9 = a3;
    v27 = a3;
    v10 = a4;
    v28 = a4;
    v29 = 1;
    v22 = &v14;
    v23 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v24 = &v26;
    v25 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v31 = &anon.7947dff69a24cd925ba6dc87d49388a5.176.llvm.6903499209109998583;
    v32 = 2;
    v35 = 0;
    v33 = &v22;
    v34 = 2;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v44, &v31);
    v8 = *((long long *)&v45);
    v48 = *((long long *)&v46);
    v42 = a1;
    v43 = a2;
    std::sys::pal::unix::fs::lstat::hbbeb53ede4a4ae6e(&v31, v42, v43);
    if ((int)v31 == 2)
    {
        v49 = v32;
        v31 = v49;
        if (!v48)
        {
            v51 = 1;
            goto LABEL_4b93eb;
        }
        else
        {
            if (v48 < 0)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v51 = __rust_alloc(v48, 1);
            if (!v51)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
LABEL_4b93eb:
        }
        memcpy(v51, v8, v48);
        goto LABEL_4b94ed;
    }
    v50 = *((int *)&v36);
    v12 = *((long long *)&v38);
    v19 = *((long long *)&v39);
    v21 = *((long long *)&v40);
    v13 = *((long long *)&v41);
    if (a5[0])
    {
        v52 = *((int *)&v37);
        v7 = a5[1];
        std::sys::pal::unix::fs::lstat::hbbeb53ede4a4ae6e(&v31, v9, v10);
        v50 = v50;
        v53 = v31;
        v54 = v32;
        if (v53 != 2)
        {
            *((int128_t *)&v11) = *((int128_t *)&v33);
            memcpy(&v30, &v35, 144);
            v26 = v53;
            v27 = v31;
            *((int128_t *)&v28) = (int128_t)v11;
            uucore::features::perms::wrap_chown::h693d770c7dfb0915(&v14, v9, v10, &v26, 1, v52, *((int *)&v0), *((int *)&v1), v2, v3, v4);
            if (v15)
            {
                __rust_dealloc(v16);
                goto LABEL_4b9748;
            }
        }
        v11 = v54;
        v31 = v54;
        if (!v48)
        {
            v55 = 1;
        }
        else if (v48 < 0)
        {
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        else
        {
            v55 = __rust_alloc(v48, 1);
            if (!v55)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        memcpy(v55, v8, v48);
        if (v7)
        {
            a0 = a0;
            a0[0] = 3;
            a0[1] = v48;
            a0[2] = v55;
            a0[3] = v48;
            v56 = 32;
            v49 = v11;
            goto LABEL_4b9e09;
        }
        else
        {
            v31 = 3;
            v32 = v48;
            v33 = v55;
            v34 = v48;
            v35 = v11;
            v18 = &v31;
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            *((uint128_t *)&v14) = g_55c040;
            v22 = &v14;
            v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5c7cfdfb3184423;
            v26 = &g_555318;
            v27 = 2;
            v30 = 0;
            v28 = &v22;
            v29 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v26, v57, v58);
            v14 = &v18;
            v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4e13e03281125ccf;
            v26 = &g_555338;
            v27 = 2;
            v30 = 0;
            v28 = &v14;
            v29 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v26, v59, v58);
            ::0x4aaf10::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h208a3451f3a30570(&v31, v59, v58, v60, v61, v62, *((long long *)&v5), *((long long *)&v6));
        }
    }
LABEL_4b9748:
    if (a5[2])
    {
        if (!(!(char)std::path::Path::is_symlink::h6ab8b58756c51c6b(v9, v10)) || !((v49 = std::sys::pal::unix::fs::set_perm::h50b7c529e6585f2e(v9, v10, (unsigned long long)v50), v49)))
            goto LABEL_4b992b;
        v31 = v49;
        if (!v48)
        {
            v64 = 1;
        }
        else if (v48 < 0)
        {
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        else
        {
            v64 = __rust_alloc(v48, 1);
            if (!v64)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        memcpy(v64, v8, v48);
        if (a5[3])
        {
LABEL_4b94ed:
            a0 = a0;
            a0[0] = 3;
            a0[1] = v48;
            a0[2] = v65;
            a0[3] = v48;
            v56 = 32;
            goto LABEL_4b9e09;
        }
        else
        {
            v31 = 3;
            v32 = v48;
            v33 = v64;
            v34 = v48;
            v35 = v49;
            v18 = &v31;
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            *((uint128_t *)&v14) = g_55c040;
            v22 = &v14;
            v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5c7cfdfb3184423;
            v26 = &g_555318;
            v27 = 2;
            v30 = 0;
            v28 = &v22;
            v29 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v26, v66, v58);
            v14 = &v18;
            v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4e13e03281125ccf;
            v26 = &g_555338;
            v27 = 2;
            v30 = 0;
            v28 = &v14;
            v29 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v26, v59, v58);
            ::0x4aaf10::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h208a3451f3a30570(&v31, v59, v58, v60, v61, v62, *((long long *)&v5), *((long long *)&v6));
        }
    }
LABEL_4b992b:
    if (a5[4])
    {
        v67 = a5[5];
        if (!(char)std::path::Path::is_symlink::h6ab8b58756c51c6b(v9, v10))
        {
            v27 = v12;
            v28 = v19;
            v26 = 1;
            v32 = v21;
            v33 = v13;
            v31 = 1;
            v68 = _ZN8filetime3imp5linux9set_times17h2b0efcb4bbf15890E.llvm.4881640005072607065(v9, v10, &v26, &v31, 0, v62);
        }
        else
        {
            v27 = v12;
            v28 = v19;
            v26 = 1;
            v32 = v21;
            v33 = v13;
            v31 = 1;
            v68 = _ZN8filetime3imp5linux9set_times17h2b0efcb4bbf15890E.llvm.4881640005072607065(v9, v10, &v26, &v31, 1, v62);
        }
        v49 = v68;
        if (!v49)
            goto LABEL_4b9b73;
        if (v67)
        {
            goto LABEL_4b9dfd;
        }
        else
        {
            v31 = 2;
            v32 = v49;
            v18 = &v31;
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            *((uint128_t *)&v14) = g_55c040;
            v22 = &v14;
            v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5c7cfdfb3184423;
            v26 = &g_555318;
            v27 = 2;
            v30 = 0;
            v28 = &v22;
            v29 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v26, v69, v70);
            v14 = &v18;
            v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4e13e03281125ccf;
            v26 = &g_555338;
            v27 = 2;
            v30 = 0;
            v28 = &v14;
            v29 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v26, v59, v58);
            ::0x4aaf10::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h208a3451f3a30570(&v31, v59, v58, v60, v61, v62, *((long long *)&v5), *((long long *)&v6));
        }
    }
LABEL_4b9b73:
    if (!a5[10])
    {
LABEL_4b9fd4:
        a0 = a0;
        a0[0] = 13;
        goto LABEL_4b9fe0;
    }
    v71 = a5[11];
    xattr::sys::linux_macos::list_path::h093efb6c391529c6(&v31, v42, v43, 0);
    v49 = v32;
    v13 = v31;
    if (!v13)
    {
        if (!v71)
            goto LABEL_4b9eb5;
        goto LABEL_4b9dfd;
    }
    v12 = v71;
    v72 = v33;
    v11 = v49;
    if (v72 > v49)
        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
    v21 = 9223372036854775809;
    v73 = v11;
    do
    {
        v74 = v73 - v72;
        if (v73 == v72)
        {
LABEL_4b9e12:
            if (v11)
            {
                __rust_dealloc(v13);
                goto LABEL_4b9fd4;
            }
        }
        v75 = v13 + v72;
        v76 = 0;
        while (*((char *)(v75 + v76)))
        {
            v76 += 1;
            if (v74 == v76)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        }
        if (v76 > v74)
            core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v14, v75, v76);
        v77 = v14;
        if (v77 == 0x8000000000000000)
            goto LABEL_4b9e12;
        v8 = v15;
        v78 = v16;
        if (v78)
        {
            if (v78 < 0)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v79 = __rust_alloc(v78, 1);
            if (v79)
                goto LABEL_4b9ce5;
        }
        v79 = 1;
LABEL_4b9ce5:
        memcpy(v32, v8, v78);
        v31 = v78;
        v32 = v79;
        v33 = v78;
        xattr::get::he4042305b6410e87(&v26, v42, v43, &v31);
        v80 = v26;
        v49 = v27;
        if (v80 == v21)
        {
            if (!v77)
            {
                goto LABEL_4b9e80;
            }
            else
            {
                __rust_dealloc(v8);
                goto LABEL_4b9e80;
            }
        }
        if (v80 == 0x8000000000000000 && v77)
        {
            v8 = v8;
            goto LABEL_4b9c00;
        }
        v19 = v49;
        v81 = _ZN6rustix2fs5xattr9lsetxattr17h86350cdb406e3bd6E.llvm.8838279859924697073(v9, v10, v8, v78, v49, (long long)v28, v4);
        if (v77)
            __rust_dealloc(v8);
        if (v81)
        {
            v49 = 2 - (v58 & 4294967295 & 65535) * 0x100000000;
            if (v80)
                __rust_dealloc(v19);
LABEL_4b9e80:
            v84 = v11;
            if (v84)
                __rust_dealloc(v13);
            if (!v12)
            {
LABEL_4b9eb5:
                v31 = 2;
                v32 = v49;
                v18 = &v31;
                if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                    once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                *((uint128_t *)&v14) = g_55c040;
                v22 = &v14;
                v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5c7cfdfb3184423;
                v26 = &g_555318;
                v27 = 2;
                v30 = 0;
                v28 = &v22;
                v29 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v26, v84, v83);
                v14 = &v18;
                v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4e13e03281125ccf;
                v26 = &g_555338;
                v27 = 2;
                v30 = 0;
                v28 = &v14;
                v29 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v26, v59, v58);
                ::0x4aaf10::core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h208a3451f3a30570(&v31, v59, v58, v60, v61, v62, *((long long *)&v5), *((long long *)&v6));
            }
            else
            {
LABEL_4b9dfd:
                a0[0] = 2;
                v56 = 8;
LABEL_4b9e09:
                *((unsigned long long *)(a0 + v56)) = v49;
LABEL_4b9fe0:
                if (!*((long long *)&v44))
                    return a0;
                __rust_dealloc(*((long long *)&v45));
            }
            goto LABEL_4b9fd4;
        }
        if (v80)
        {
            v8 = v19;
LABEL_4b9c00:
            __rust_dealloc(v8);
        }
        v72 = &v76[v72 + 1];
        v73 = v11;
    } while (v72 <= v73);
}
