long long fish::builtins::path::path_resolve(unsigned long long a0, struct_0 *a1, unsigned long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x260]
    unsigned long long v1;  // [bp-0x258]
    unsigned long long v2;  // [bp-0x250]
    unsigned long long v3;  // [bp-0x248]
    int v4;  // [bp-0x248]
    unsigned long long v5;  // [bp-0x240]
    unsigned long long v6;  // [bp-0x238]
    unsigned long long v7;  // [bp-0x228]
    unsigned long long v9;  // [bp-0x218]
    int v10;  // [bp-0x208]
    int v11;  // [bp-0x208]
    int v12;  // [bp-0x208]
    int v13;  // [bp-0x208]
    unsigned long long v14;  // [bp-0x1f8]
    int v15;  // [bp-0x1e8]
    unsigned long long v16;  // [bp-0x1e0]
    unsigned long long v17;  // [bp-0x1d8]
    int v18;  // [bp-0x1c8]
    int v19;  // [bp-0x1c8]
    unsigned long long v20;  // [bp-0x1c0]
    unsigned long long v21;  // [bp-0x1b8]
    void* v22;  // [bp-0x1a8]
    void* v23;  // [bp-0x1a8]
    void* v24;  // [bp-0x1a0]
    int v25;  // [bp-0x198]
    unsigned long long v26;  // [bp-0x190]
    unsigned long long v27;  // [bp-0x188]
    unsigned long v28;  // [bp-0x178]
    unsigned long v29;  // [bp-0x170]
    unsigned long long v30;  // [bp-0x168]
    int v31;  // [bp-0x160]
    unsigned long long v32;  // [bp-0x150]
    unsigned int v33;  // [bp-0x148]
    unsigned int v34;  // [bp-0x140]
    void* v35;  // [bp-0x138]
    void* v36;  // [bp-0x128]
    int v37;  // [bp-0x118]
    char v38;  // [bp-0x117]
    int v39;  // [bp-0x116]
    char v40;  // [bp-0x108]
    int v41;  // [bp-0x100]
    char v42;  // [bp-0x100]
    int v43;  // [bp-0xf0]
    int v44;  // [bp-0xe0]
    char v45;  // [bp-0xd0]
    int v46;  // [bp-0xc0]
    int v47;  // [bp-0xb0]
    char v48;  // [bp-0xa0]
    int v49;  // [bp-0x98]
    int v50;  // [bp-0x88]
    int v51;  // [bp-0x78]
    char v52;  // [bp-0x68]
    int v53;  // [bp-0x58]
    char v54;  // [bp-0x48]
    unsigned long long v55;  // [bp-0x38]
    unsigned long long v57;  // rbx
    char v58;  // al
    unsigned long long v59;  // rcx
    unsigned long v60;  // cc_ndep
    unsigned long long v61;  // cc_ndep
    int v62;  // xmm0
    int v63;  // xmm0
    int v64;  // ymm0
    uint256_t v65;  // ymm0
    unsigned long long v66;  // rbx
    unsigned long long v67;  // r15
    uint256_t v68;  // ymm0
    unsigned long long v69;  // rbp
    unsigned long long v70;  // r13
    int v73;  // xmm0
    uint256_t v74;  // ymm0
    uint256_t v76;  // ymm0
    char v77;  // r14b
    char v78;  // al
    unsigned long v79;  // cc_dep1
    unsigned long long v80;  // cc_ndep

    v57 = 0x200000000;
    v35 = 0;
    v33 = 0;
    v34 = 0;
    v36 = 0;
    *((uint128_t *)&v37) = 0;
    v40 = 0;
    v24 = 0;
    v58 = fish::builtins::path::parse_opts(&v33, &v24, 0, a2, a3, a0, a1);
    v59 = 1;
    if (!(v58 & 1))
    {
        v42.new(a2, a3, &v24, a1, 0x1000);
        v61 = _ccall(17, (unsigned long long)(v58 & 1), 0, v60);
        v48 = (char)v37 + 1;
        v55 = *((long long *)&v48);
        memcpy(&v54, &v47, 16);
        v62 = v46;
        v53 = v62;
        v63 = v41;
        v65 = ((v64 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
        memcpy(&v52, &v45, 16);
        v51 = v44;
        v50 = v43;
        v49 = v63;
        v29 = a0 + 472;
        v28 = a1->field_8;
        v22 = 0;
        v30 = 9223372036854775809;
        v66 = fish::wutil::wrealpath;
        while (true)
        {
            v42.next(&v49);
            if ((long long)v41 == 9223372036854775809)
            {
                core::ptr::drop_in_place<fish::builtins::shared::Arguments>(&v49);
                v59 = !v22;
                v57 = 0x100000000;
                break;
            }
            v67 = (long long)v43;
            v27 = v67;
            v68 = v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
            v25 = v41;
            v69 = v26;
            v70 = v66;
            fish::wutil::wrealpath(&v31, v69, v67);
            if ((long long)v31 == 0x8000000000000000)
            {
                if ((long long)v25 == 0x8000000000000000)
                {
                    v0.to_vec(v69, v67);
                    v67 = v2;
                    v6 = v67;
                    v68 = v68 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v0);
                    *((int128_t *)&v4) = *((int128_t *)&v0);
                    v69 = v5;
                    v66 = v70;
                    if (v6)
                        goto LABEL_135d6d7;
                }
                else
                {
                    v3 = (long long)v25;
                    v5 = v69;
                    v6 = v67;
                    v66 = v70;
                    if (v67)
                    {
LABEL_135d6d7:
                        if ((int)v69.char_at(v67, 0) != 47)
                        {
                            v0.get_pwd_slash(v29);
                            fish::path::path_apply_working_directory(&v10, v69, v67, v1, v2);
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
                            v6 = v14;
                            v68 = v68 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v10;
                            v4 = v10;
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                            v69 = v5;
                            v67 = v6;
                        }
LABEL_135d749:
                        v0.to_vec(fish::wutil::wbasename(v69, v67), a2);
                        v17 = v2;
                        v65 = v68 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v0);
                        *((int128_t *)&v15) = *((int128_t *)&v0);
                        v7 = 0x8000000000000000;
                        v11 = v10;
                        if (v67)
                        {
                            while (true)
                            {
                                v10 = v11;
                                v10 = v10;
                                if (v69.eq(v67, "/dirname", 1))
                                    break;
                                v0.to_vec(fish::wutil::wdirname(v69, v67), a2);
                                v14 = v2;
                                v73 = *((int128_t *)&v0);
                                v12 = v73;
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
                                v67 = v14;
                                v6 = v67;
                                v4 = v12;
                                v69 = v5;
                                fish::wutil::wrealpath(&v0, v69, v67);
                                core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v7);
                                v9 = v2;
                                v74 = ((v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v12) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v0);
                                memcpy(&v7, &v0, 16);
                                v0.to_vec(fish::wutil::wbasename(v69, v67), a2);
                                v14 = v2;
                                memcpy(&v12, &v0, 16);
                                v0.add(&v12, "/", 1);
                                v12.add(&v0, v16, v17);
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v15);
                                v17 = v14;
                                v65 = (v74 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v0)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v13;
                                v15 = v13;
                                v10 = v13;
                                v11 = v13;
                                if (!v67)
                                    break;
                            }
                        }
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v15);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
                    }
                }
                v67 = 0;
                goto LABEL_135d749;
            }
            else
            {
                v21 = v32;
                v76 = v68 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31;
                v18 = v31;
                v77 = 1;
                v66 = v70;
                fish::wutil::normalize_path(&v0, v20, v21, 0);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v19);
                v21 = v2;
                v65 = v76 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v0);
                *((int128_t *)&v19) = *((int128_t *)&v0);
                v78 = (char)v39;
                v79 = v78;
                if (!v78)
                {
                    fish::builtins::path::path_out(v28, v38, v78, &(char)v19);
                    v23 = v22 + 1;
                    v80 = _ccall(17, v79, 0, v61);
                    if ((char)_ccall(4, 24, v22 + 1, 0, _ccall(17, v79, 0, v61)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14cb1d0); /* do not return */
                    v22 = v23;
                    v61 = v80;
                    if (v77)
                    {
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&(char)v25);
                        v22 = v23;
                        v61 = v80;
                    }
                }
                else
                {
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v19);
                    if (v77)
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&(char)v25);
                    core::ptr::drop_in_place<fish::builtins::shared::Arguments>(&v49);
                    v59 = 0;
                    v57 = 0x200000000;
                    break;
                }
            }
        }
    }
    return v57 | v59;
}
