long long uu_du::du(struct_1 *a0, struct_0 *a1, char a2[53], unsigned long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x43d]
    char v1;  // [bp-0x43c]
    char v2;  // [bp-0x43b]
    char v3;  // [bp-0x43a]
    char v4;  // [bp-0x439]
    unsigned long v5;  // [bp-0x418]
    unsigned long long v6;  // [bp-0x408]
    char v7;  // [bp-0x400]
    unsigned long long v8;  // [bp-0x3f8]
    void* v9;  // [bp-0x3f0], Other Possible Types: unsigned long long
    char *v10;  // [sp-0x3e8], Other Possible Types: unsigned long long
    int v11;  // [sp-0x3e0], Other Possible Types: unsigned long long
    int v12;  // [bp-0x3e0]
    void* v13;  // [bp-0x3d8]
    int v14;  // [bp-0x3d0], Other Possible Types: char *
    int v15;  // [bp-0x3c0]
    int v16;  // [bp-0x3b0]
    int v17;  // [bp-0x3a0]
    unsigned long long v18;  // [bp-0x390]
    int v19;  // [bp-0x388]
    int v20;  // [bp-0x378]
    unsigned long v21;  // [sp-0x368]
    char *v22;  // [bp-0x358]
    int v23;  // [bp-0x358]
    unsigned long long v24;  // [bp-0x350]
    char *v25;  // [bp-0x348]
    char v26;  // [bp-0x338], Other Possible Types: unsigned long long
    int v27;  // [bp-0x338]
    int v28;  // [bp-0x330]
    char *v29;  // [bp-0x328], Other Possible Types: char
    unsigned long long v30;  // [bp-0x320]
    int v31;  // [bp-0x318]
    int v32;  // [bp-0x310]
    int v33;  // [bp-0x300]
    int v34;  // [bp-0x2f0]
    int v35;  // [bp-0x2e0]
    unsigned long long v36;  // [bp-0x2d0]
    int v37;  // [bp-0x2c8]
    char v38;  // [bp-0x2b8]
    unsigned long long v39;  // [bp-0x298]
    unsigned long long v40;  // [bp-0x290]
    unsigned long long v41;  // [bp-0x288]
    unsigned long long v42;  // [bp-0x280]
    unsigned long long v43;  // [bp-0x278]
    int v44;  // [bp-0x270]
    unsigned long long v45;  // [bp-0x260]
    unsigned long long v46;  // [bp-0x258]
    unsigned long long v47;  // [bp-0x250]
    unsigned long long v48;  // [bp-0x248]
    int v49;  // [bp-0x240], Other Possible Types: char
    unsigned long long v50;  // [bp-0x238]
    char v51;  // [bp-0x230]
    int v52;  // [bp-0x228]
    unsigned long long v53;  // [bp-0x220]
    unsigned long long v54;  // [bp-0x218]
    char v55;  // [bp-0x208], Other Possible Types: unsigned long long
    char v56;  // [bp-0x200]
    int v57;  // [bp-0x1f8]
    int v58;  // [bp-0x1e8]
    unsigned long long v59;  // [bp-0x1c0]
    unsigned long long v60;  // [bp-0x1b8]
    int v61;  // [bp-0x1b0]
    int v62;  // [bp-0x188]
    int v63;  // [bp-0x178]
    int v64;  // [bp-0x168], Other Possible Types: char
    int v65;  // [bp-0x158]
    int v66;  // [bp-0x148]
    int v67;  // [bp-0x138]
    int v68;  // [bp-0x128]
    unsigned long long v69;  // [bp-0x110]
    unsigned long long v70;  // [bp-0x108]
    unsigned long long v71;  // [bp-0x100]
    int v72;  // [bp-0xf8]
    unsigned long long v73;  // [bp-0xe8]
    int v74;  // [bp-0xe0]
    int v75;  // [bp-0xc8]
    char v76;  // [bp-0xb8]
    struct_0 *v78;  // r15
    struct_3 *v79;  // r12
    unsigned long v80;  // rbx
    uint256_t v81;  // ymm0
    int v82;  // xmm0
    int v83;  // xmm0
    unsigned long long v84;  // rbp
    unsigned long long v85;  // rax
    int v86;  // xmm0
    uint256_t v87;  // ymm0
    char *v88;  // rax
    unsigned long long v89;  // rdx
    int v90;  // xmm0
    int v91;  // xmm0
    int v92;  // xmm0
    int v93;  // xmm0
    int v94;  // xmm0
    int v95;  // xmm0
    int v96;  // xmm0
    int v97;  // xmm0
    int v98;  // xmm1
    unsigned long long v99;  // rdx
    int v100;  // xmm0

    if (a1->padding_70[8])
    {
        v80 = &a1->padding_28[24];
        std::fs::read_dir(&v55, v80);
        if (v56 == 2)
        {
            v10 = v6.map_err_context(v80);
            v11 = &g_5e49f8;
            v9 = 0;
            v8 = 2;
            v26.send(a5, &v8);
            if (UnaryOp GetMSBs != 65535)
            {
                memcpy(&v10, &v29, 144);
                v9 = *((long long *)&(&v26)[8]);
                v8 = v26;
                a0->field_10 = v8.new();
                a0->field_8 = 0;
                a0->field_0 = 2;
                ::0x4d9d70::core::ptr::drop_in_place<uu_du::Stat>(a1);
                return a0;
            }
        }
        else
        {
            v6 = v55;
            v7 = v56;
            v4 = a2[52];
            v2 = a2[51];
            v0 = a2[48];
            v1 = a2[49];
            v3 = a2[50];
            v5 = a3 + 1;
            while (true)
            {
LABEL_4dc7c0:
                v69.next(&v6);
                if (!((char)v69 & 1))
                {
                    core::ptr::drop_in_place<std::fs::ReadDir>(&v6);
                    break;
                }
                if (v70)
                {
                    v42 = v70;
                    v43 = v71;
                    v45 = v73;
                    memcpy(&v44, &v72, 16);
                    v39.path(&v42);
                    v75.new(v40, v41, &v42, a2);
                    v82 = CmpEQV(v75, 2);
                    v81 = ((v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82;
                    if (UnaryOp GetMSBs == 65535)
                    {
                        v10 = *((long long *)&v76).map_err_context(&v42);
                        v11 = &g_5e49f8;
                        v9 = 0;
                        v8 = 2;
                        v26.send(a5, &v8);
                        v83 = CmpEQV(*((int128_t *)&v26), 3);
                        v81 = (v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v26)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
                        if (UnaryOp GetMSBs == 65535)
                            goto LABEL_4dc8f6;
                        memcpy(&v10, &v29, 144);
                        v9 = (long long)(&v27)[8];
                        v8 = v26;
                        v88 = v8.new();
                    }
                    else
                    {
                        memcpy(&v55, &v75, 144);
                        v46 = a2.into_iter();
                        v47 = v99;
                        while (true)
                        {
                            v84 = v46.next();
                            if (!v84)
                                break;
                            v8.to_string_lossy(v59, v60);
                            if (!v84.matches(v9, v10))
                            {
                                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v8);
                                v74.file_name(&v42);
                                v8.into_string(&v74);
                                v30 = v11;
                                v81 = v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v9);
                                *((int128_t *)&v28) = *((int128_t *)&v9);
                                v26 = v8;
                                v48.unwrap(&v26);
                                if (!v84.matches(*((long long *)&v49), v50))
                                {
                                    ::0x4d9e40::core::ptr::drop_in_place<alloc::string::String>(&v48);
                                }
                                else
                                {
                                    ::0x4d9e40::core::ptr::drop_in_place<alloc::string::String>(&v48);
LABEL_4dcd98:
                                    if ((v4 & 1))
                                    {
                                        (unsigned long long)v27.to_vec("pathzeroAnsi -- ", 4);
                                        v25 = v29;
                                        v94 = *((int128_t *)&v26);
                                        v23 = v94;
                                        v95 = *((int128_t *)&v59);
                                        v48 = 1;
                                        v49 = v95;
                                        v51 = 1;
                                        (unsigned long long)v27.spec_to_string(&v48);
                                        v10 = v25;
                                        v96 = (int128_t)v23;
                                        memcpy(&v8, &v22, 16);
                                        v14 = v29;
                                        v97 = *((int128_t *)&v26);
                                        v12 = v97;
                                        v81 = ((((v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v97) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v8);
                                        v98 = (int128_t)(&v12)[8];
                                        *((int128_t *)&v27) = *((int128_t *)&v8);
                                        v29 = v10;
                                        v30 = v11;
                                        v31 = v98;
                                        v8.from_iter(&(unsigned long long)v27);
                                        uucore::mods::locale::get_message_with_args(&(unsigned long long)v27, "du-verbose-ignoredno such file/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 18, &v8);
                                        v22 = &(unsigned long long)v27;
                                        v24 = <alloc::string::String as core::fmt::Display>::fmt;
                                        v8 = &g_5e49a0;
                                        v9 = 2;
                                        v13 = 0;
                                        v10 = &v22;
                                        v11 = 1;
                                        std::io::stdio::_print(&v8);
                                        ::0x4d9e40::core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v27);
                                    }
LABEL_4dcf0e:
                                    ::0x4d9d70::core::ptr::drop_in_place<uu_du::Stat>(&v55);
                                    ::0x4d9e10::core::ptr::drop_in_place<std::path::PathBuf>(&v39);
                                    core::ptr::drop_in_place<std::fs::DirEntry>(&v42);
                                    goto LABEL_4dc7c0;
                                }
                            }
                            else
                            {
                                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v8);
                                goto LABEL_4dcd98;
                            }
                        }
                        if ((v55 & 1))
                        {
                            v81 = v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
                            v85 = (long long)v58;
                            v52 = v57;
                            v54 = v85;
                            if (a4.get_inner(&(char)v52))
                            {
                                if (!(v2 & 1))
                                    goto LABEL_4dcf0e;
                                if (!(!(v0 & 1)))
                                    goto LABEL_4dcaea;
                                *((long long *)((char *)&a1->field_58 + 8)) = *((long long *)((char *)&a1->field_58 + 8)) + 1;
                                goto LABEL_4dcf0e;
                            }
                            else
                            {
LABEL_4dcaea:
                                a4.insert((long long)v52, v53, v54);
                            }
                        }
                        if ((char)v62 && (!(v3 & 1) || v55 != 1 || a1->field_0 != 1 || (long long)v58 == a1->field_20))
                        {
                            memcpy(&v8, &v55, 144);
                            uu_du::du(&v26, &v8, a2, v5, a4, a5);
                            v86 = CmpEQV(*((int128_t *)&v26), 2);
                            v87 = (v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v26)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86;
                            v88 = v29;
                            if (UnaryOp GetMSBs != 65535)
                            {
                                v89 = (long long)v28;
                                v90 = *((int128_t *)&v30);
                                v68 = v34;
                                v67 = v33;
                                v66 = v32;
                                v65 = v90;
                                v91 = v35;
                                memcpy(&v63, &v37, 16);
                                memcpy(&v64, &v38, 16);
                                if (!(v1 & 1))
                                {
                                    *((void*)&(&a1->padding_28)[1]) = AddV(*((int128_t *)&(&a1->padding_28)[1]), v17);
                                    *((unsigned long long *)((char *)&a1->field_58 + 8)) = *((long long *)((char *)&a1->field_58 + 8)) + v36;
                                }
                                v16 = v68;
                                v15 = v67;
                                v14 = v66;
                                v11 = v65;
                                v20 = v64;
                                v19 = v63;
                                v9 = v89;
                                v8 = v26;
                                v10 = v88;
                                v17 = v91;
                                v18 = v36;
                                v21 = v5;
                                v26.send(a5, &v8);
                                v92 = CmpEQV(*((int128_t *)&v26), 3);
                                v81 = (((v87 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v26)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92;
                                if (UnaryOp GetMSBs == 65535)
                                    goto LABEL_4dc8f6;
                                memcpy(&v10, &v29, 144);
                                v9 = (long long)v28;
                                v8 = v26;
                                v88 = v8.new();
                                goto LABEL_4dd01b;
                            }
                        }
                        v81 = v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v61;
                        *((int128_t *)&(&a1->padding_28)[1]) = AddV(*((int128_t *)&(&a1->padding_28)[1]), (int128_t)v61);
                        *((long long *)((char *)&a1->field_58 + 8)) = *((long long *)((char *)&a1->field_58 + 8)) + 1;
                        if ((v0 & 1))
                        {
                            memcpy(&v8, &v55, 144);
                            v21 = v5;
                            v26.send(a5, &v8);
                            v93 = CmpEQV(*((int128_t *)&v26), 3);
                            v81 = (v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v26)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93;
                            if (UnaryOp GetMSBs == 65535)
                                goto LABEL_4dc8f6;
                            memcpy(&v10, &v29, 144);
                            v9 = (long long)v28;
                            v8 = v26;
                            v88 = v8.new();
                        }
                        else
                        {
                            ::0x4d9d70::core::ptr::drop_in_place<uu_du::Stat>(&v55);
LABEL_4dc8f6:
                            ::0x4d9e10::core::ptr::drop_in_place<std::path::PathBuf>(&v39);
                            core::ptr::drop_in_place<std::fs::DirEntry>(&v42);
                            continue;
                        }
                    }
LABEL_4dd01b:
                    v79 = a0;
                    a0->field_10 = v88;
                    a0->field_8 = 0;
                    a0->field_0 = 2;
                    ::0x4d9e10::core::ptr::drop_in_place<std::path::PathBuf>(&v39);
                    core::ptr::drop_in_place<std::fs::DirEntry>(&v42);
                    core::ptr::drop_in_place<std::fs::ReadDir>(&v6);
                    ::0x4d9d70::core::ptr::drop_in_place<uu_du::Stat>(v78);
                    return v79;
                }
                else
                {
                    v10 = v43.from();
                    v11 = v99;
                    v9 = 0;
                    v8 = 2;
                    v26.send(a5, &v8);
                    v100 = CmpEQV((int128_t)v27, 3);
                    v81 = (v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v27) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100;
                    if (UnaryOp GetMSBs != 65535)
                    {
                        memcpy(&v10, &v29, 144);
                        v9 = (long long)(&v27)[8];
                        v8 = v26;
                        a0->field_10 = v8.new();
                        a0->field_8 = 0;
                        a0->field_0 = 2;
                        core::ptr::drop_in_place<std::fs::ReadDir>(&v6);
                        ::0x4d9d70::core::ptr::drop_in_place<uu_du::Stat>(v78);
                        return v79;
                    }
                }
            }
        }
    }
    memcpy(a0, a1, 144);
    return a0;
}
