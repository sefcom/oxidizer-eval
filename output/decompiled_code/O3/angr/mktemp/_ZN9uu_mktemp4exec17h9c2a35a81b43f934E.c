long long uu_mktemp::exec::h9c2a35a81b43f934(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0x170]
    void* v1;  // [sp-0x168], Other Possible Types: unsigned long, unsigned long long
    struct_0 *v2;  // [sp-0x160], Other Possible Types: uint128_t [3], unsigned int *, unsigned long long
    void* v3;  // [sp-0x158], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v4;  // [sp-0x150]
    unsigned long v5;  // [sp-0x148], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x140]
    unsigned long long v7;  // [sp-0x138]
    char v8;  // [sp-0x130]
    int v9;  // [bp-0x128], Other Possible Types: char, unsigned long long, unsigned long
    unsigned long v10;  // [sp-0x120], Other Possible Types: unsigned long long
    unsigned long v11;  // [sp-0x118], Other Possible Types: unsigned long long
    void* v12;  // [sp-0x108], Other Possible Types: unsigned long long, unsigned long
    uint128_t v13[3];  // [sp-0x100], Other Possible Types: unsigned long long
    void* v14;  // [sp-0xf8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v15;  // [sp-0xf0]
    void* v16;  // [sp-0xe8]
    char v17;  // [bp-0xd8]
    char v18;  // [bp-0xd0]
    char v19;  // [bp-0xc8]
    char v20;  // [bp-0xc0]
    char v21;  // [bp-0xb8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v22;  // [sp-0xb0], Other Possible Types: unsigned long long
    char v23;  // [bp-0xa8]
    unsigned long v24;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x98]
    unsigned long v26;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v27;  // [sp-0x88]
    unsigned int v28;  // [sp-0x80]
    unsigned long long v29;  // [sp-0x78]
    unsigned long long v30;  // [sp-0x70]
    unsigned long long v31;  // [sp-0x68]
    unsigned long long v32;  // [sp-0x60]
    unsigned long long v33;  // [sp-0x58]
    unsigned short v34;  // [sp-0x50]
    char v35;  // [bp-0x48]
    char v36;  // [bp-0x38]
    unsigned long v37;  // [bp+0x8]
    char v38;  // [bp+0x10]
    char v39;  // [bp+0x18]
    unsigned long long v40;  // rax
    unsigned long long v41;  // r9
    unsigned long long v42;  // r12
    unsigned long long v43;  // r14
    uint128_t v45[3];  // rax
    unsigned long long v46;  // r14
    unsigned long long v47;  // rax
    unsigned long long v48;  // rbp
    int v49;  // xmm0
    unsigned long long v50;  // rdx
    unsigned long long v51;  // rcx
    unsigned long long v52;  // rax
    unsigned long long v53;  // rbp
    int v54;  // xmm0
    unsigned long long v55;  // rbp
    unsigned long long v56;  // rdx
    struct_0 *v57;  // rax
    unsigned int *v58;  // rax
    int v59;  // xmm0
    int v60;  // xmm1
    int v61;  // xmm0
    int v62;  // xmm1

    v40 = *((long long *)&v38);
    v41 = v37;
    if (!v39)
    {
        v24 = a3;
        v25 = a4;
        v26 = v41;
        v27 = v40;
        v34 = 0;
        v28 = 0;
        v29 = a3;
        v30 = a4;
        v33 = a5;
        v31 = v41;
        v32 = v40;
        tempfile::util::create_helper::h9dfe52bbf5caaa24(&v17, a1, a2, a3, a4, v41, v40, a5, &v28);
        if (v19 == 2)
        {
            v43 = *((long long *)&v17);
            if (!(char)std::io::error::Error::kind::hb2ff5fa058639b3d(v43))
            {
                v42 = v43;
                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v9, "X", 1, a5);
                v1 = &v24;
                v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha50f48721d06c012;
                v3 = &v9;
                v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v5 = &v26;
                v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha50f48721d06c012;
                v12 = &g_41b0c0;
                v13 = 3;
                v16 = 0;
                v14 = &v1;
                v15 = 3;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v21, &v12);
                if (v9)
                    __rust_dealloc(v10);
                v55 = v22;
                std::path::Path::_join::h609728e54bd034cb(&v9, a1, a2, v55, *((long long *)&v23));
                if (v21)
                    __rust_dealloc(v55);
                v21 = v10;
                v22 = v11;
                v12 = 0;
                v13 = 1;
                v14 = 0;
                v7 = 32;
                v8 = 3;
                v1 = 0;
                v3 = 0;
                v5 = &v12;
                v6 = &g_4f0000;
                if ((char)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76(&v21, &v1))
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                v58 = __rust_alloc(4, 1);
                if (!v58)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                *(v58) = 1701603686;
                v4 = v12;
                v5 = v13;
                v6 = v14;
                v1 = 4;
                v2 = v58;
                v3 = 4;
                v45 = __rust_alloc(48, 8);
                if (!v45)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v61 = *((int128_t *)&v1);
                v62 = *((int128_t *)&v3);
                v45[2] = *((int128_t *)&v5);
                *((void*)&v45[1]) = v62;
                *((void*)&v45[0]) = v61;
                if (v9)
                    __rust_dealloc(v21);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1565fdd18e22f7a5(v42);
                a0[1] = v45;
                a0[2] = &g_4f02e8;
                a0[0] = 0x8000000000000000;
                return a0;
            }
            else
            {
                v1 = 0x8000000000000000;
                v4 = v43;
                v45 = __rust_alloc(32, 8);
                if (!v45)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            }
        }
        else
        {
            v11 = *((long long *)&v19);
            *((int128_t *)&v9) = *((int128_t *)&v17);
            v12 = 0;
            v13 = 1;
            v14 = 0;
            std::ffi::os_str::OsString::into_boxed_os_str::h38779c521d92bd53(&v12);
            v0 = a2;
            std::ffi::os_str::OsStr::into_os_string::h7d640718be907545(&v1, v9, v10);
            v48 = v1;
            v45 = v2;
            v46 = v3;
            close(*((int *)&v20));
            if (v48 == 0x8000000000000000)
            {
                a0[1] = v45;
                a0[2] = v46;
                a0[0] = 0x8000000000000000;
                return a0;
            }
LABEL_48bbbc:
            v52 = std::path::Path::file_name::h79ecbb7850a9c7f3(v45, v46, v50, v51);
            if (!v52)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v1, v52, v56);
            if (!v1)
            {
                std::path::Path::_join::h609728e54bd034cb(&v35, a1, v0, v2, v3);
                a0[2] = *((long long *)&v36);
                *((int128_t *)&a0[0]) = *((int128_t *)&v35);
                if (v48)
                {
                    __rust_dealloc(v45);
                    return a0;
                }
                return a0;
            }
        }
    }
    else
    {
        v24 = a3;
        v25 = a4;
        v26 = v41;
        v27 = v40;
        v34 = 0;
        v28 = 0;
        v29 = a3;
        v30 = a4;
        v33 = a5;
        v31 = v41;
        v32 = v40;
        v0 = a2;
        tempfile::Builder::tempdir_in::ha20e867cb5863261(&v21, &v28, a1, a2);
        if (v23 == 2)
        {
            v42 = v21;
            if (!(char)std::io::error::Error::kind::hb2ff5fa058639b3d(v42))
            {
                alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v17, "X", 1, a5);
                v1 = &v24;
                v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha50f48721d06c012;
                v3 = &v17;
                v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v5 = &v26;
                v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha50f48721d06c012;
                v12 = &g_41b0c0;
                v13 = 3;
                v16 = 0;
                v14 = &v1;
                v15 = 3;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v9, &v12);
                if (*((long long *)&v17))
                    __rust_dealloc(*((long long *)&v18));
                v53 = v10;
                std::path::Path::_join::h609728e54bd034cb(&v17, a1, v0, v53, v11);
                if (v9)
                    __rust_dealloc(v53);
                v0 = *((long long *)&v18);
                v9 = v0;
                v10 = *((long long *)&v19);
                v12 = 0;
                v13 = 1;
                v14 = 0;
                v7 = 32;
                v8 = 3;
                v1 = 0;
                v3 = 0;
                v5 = &v12;
                v6 = &g_4f0000;
                if ((char)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76(&v9, &v1))
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                v57 = __rust_alloc(9, 1);
                if (!v57)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                v57->field_0 = 8245937412991248740;
                v57->field_8 = 121;
                v4 = v12;
                v5 = v13;
                v6 = v14;
                v1 = 9;
                v2 = v57;
                v3 = 9;
                v45 = __rust_alloc(48, 8);
                if (!v45)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v59 = *((int128_t *)&v1);
                v60 = *((int128_t *)&v3);
                v45[2] = *((int128_t *)&v5);
                *((void*)&v45[1]) = v60;
                *((void*)&v45[0]) = v59;
                if (*((long long *)&v17))
                    __rust_dealloc(v0);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1565fdd18e22f7a5(v42);
                a0[1] = v45;
                a0[2] = &g_4f02e8;
                a0[0] = 0x8000000000000000;
                return a0;
            }
            else
            {
                v1 = 0x8000000000000000;
                v4 = v42;
                v45 = __rust_alloc(32, 8);
                if (!v45)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            }
        }
        else
        {
            v1 = 0;
            v2 = 1;
            v3 = 0;
            std::ffi::os_str::OsString::into_boxed_os_str::h38779c521d92bd53(&v1);
            std::ffi::os_str::OsStr::into_os_string::h7d640718be907545(&v12, v21, v22);
            v45 = v13;
            v46 = v14;
            v47 = std::sys::pal::unix::fs::set_perm::h50b7c529e6585f2e(v45, v46, 448);
            if (v47)
            {
                v1 = 0x8000000000000000;
                v4 = v47;
                v45 = __rust_alloc(32, 8);
                if (!v45)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v54 = *((int128_t *)&v1);
                v45[1] = *((int128_t *)&v3);
                *((void*)&v45[0]) = v54;
                if (v12)
                    __rust_dealloc(v45);
LABEL_48b62d:
                v46 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
            }
            else
            {
                v48 = v12;
                if (!(v48 == 0x8000000000000000))
                    goto LABEL_48bbbc;
            }
            a0[1] = v45;
            a0[2] = v46;
            a0[0] = 0x8000000000000000;
            return a0;
        }
    }
    v49 = *((int128_t *)&v1);
    v45[1] = *((int128_t *)&v3);
    *((void*)&v45[0]) = v49;
    goto LABEL_48b62d;
}
