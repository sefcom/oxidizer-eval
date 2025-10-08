long long uu_du::du(struct_4 *a0, struct_3 *a1, struct_2 *a2, unsigned long long a3, unsigned long long a4, unsigned long long a5[2])
{
    char v0;  // [bp-0x44d]
    char v1;  // [bp-0x44c]
    char v2;  // [bp-0x44b]
    char v3;  // [bp-0x44a]
    char v4;  // [bp-0x449]
    struct_2 *v5;  // [bp-0x438]
    unsigned long v6;  // [bp-0x430], Other Possible Types: unsigned long long
    unsigned long v7;  // [bp-0x420]
    unsigned long v8;  // [bp-0x420]
    unsigned long v9;  // [sp-0x418]
    unsigned long v10;  // [bp-0x418]
    unsigned long long v11;  // [bp-0x408]
    void* v12;  // [bp-0x400], Other Possible Types: unsigned long long
    unsigned long v13;  // [sp-0x3f8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x3f0]
    int v15;  // [bp-0x3f0]
    void* v16;  // [bp-0x3e8]
    int v17;  // [bp-0x3e0]
    int v18;  // [bp-0x3d0]
    int v19;  // [bp-0x3c0]
    int v20;  // [bp-0x3b0]
    unsigned long long v21;  // [bp-0x3a0]
    int v22;  // [bp-0x398]
    int v23;  // [bp-0x388]
    unsigned long v24;  // [sp-0x378]
    unsigned long long v25;  // [bp-0x368]
    char v26;  // [bp-0x360]
    unsigned long long v27;  // [bp-0x358]
    unsigned long long v28;  // [bp-0x350]
    char v29;  // [bp-0x348]
    unsigned long long v30;  // [bp-0x330]
    unsigned long long v31;  // [bp-0x328]
    unsigned long long v32;  // [bp-0x320]
    char v33;  // [sp-0x318], Other Possible Types: unsigned long long
    int v34;  // [sp-0x310], Other Possible Types: unsigned long long
    char v35;  // [bp-0x308]
    unsigned long v36;  // [bp-0x300]
    char v37;  // [bp-0x300]
    int v38;  // [bp-0x2f0]
    int v39;  // [bp-0x2e0]
    int v40;  // [bp-0x2d0]
    int v41;  // [bp-0x2c0]
    unsigned long long v42;  // [bp-0x2b0]
    int v43;  // [bp-0x2a8]
    char v44;  // [bp-0x298]
    unsigned long v45;  // [bp-0x270]
    unsigned long long v46;  // [bp-0x268]
    unsigned long v47;  // [bp-0x260]
    unsigned long v48;  // [bp-0x258]
    char *v49;  // [bp-0x250]
    int v50;  // [sp-0x248]
    unsigned long long v51;  // [bp-0x240]
    unsigned long v52;  // [bp-0x238]
    int v53;  // [bp-0x228]
    unsigned long long v54;  // [bp-0x220]
    unsigned long long v55;  // [bp-0x218]
    unsigned long long v56;  // [bp-0x208]
    unsigned long long v57;  // [bp-0x200]
    unsigned long long v58;  // [bp-0x1f8]
    char v59;  // [bp-0x1f0]
    int v60;  // [bp-0x1d8]
    int v61;  // [bp-0x1c8], Other Possible Types: char
    int v62;  // [bp-0x1b8]
    int v63;  // [bp-0x1a8]
    int v64;  // [bp-0x198]
    int v65;  // [bp-0x188]
    char v66;  // [bp-0x178], Other Possible Types: unsigned long long
    char v67;  // [bp-0x170]
    int v68;  // [bp-0x168]
    int v69;  // [bp-0x158]
    unsigned long long v70;  // [bp-0x130]
    unsigned long v71;  // [bp-0x128]
    int v72;  // [bp-0x120]
    int v73;  // [bp-0xf8]
    int v74;  // [bp-0xe0]
    int v75;  // [bp-0xc8]
    char v76;  // [bp-0xb8]
    struct_3 *v78;  // r15
    struct_4 *v79;  // r12
    struct_3 *v80;  // 4096
    struct_2 *v81;  // rbx
    struct_0 *v82;  // r14
    struct_1 *v83;  // r15
    unsigned long v84;  // rax
    unsigned long v85;  // rcx
    unsigned long v86;  // rdx
    unsigned long long v87;  // cc_ndep
    unsigned long v88;  // r13
    unsigned long long v89;  // rbp
    uint256_t v90;  // ymm0
    int v91;  // xmm0
    int v92;  // xmm0
    int v93;  // xmm0
    unsigned long v94;  // rax
    unsigned long long v95;  // r12
    unsigned long v96;  // r15
    unsigned long v97;  // r14
    char v98;  // al
    unsigned long long v99;  // 4106
    unsigned long long v100;  // rax
    int v101;  // xmm0
    char v102;  // al
    char *v103;  // r14
    char v104;  // bl
    unsigned long long v105;  // rax
    char v106;  // cc_dep1
    int v107;  // xmm0
    uint256_t v108;  // ymm0
    unsigned long v109;  // rax
    int v110;  // xmm0
    int v111;  // xmm0
    int v112;  // xmm0
    int v113;  // xmm0
    unsigned long long v114;  // rdx
    int v115;  // xmm0
    unsigned long long v117;  // [bp-0x318]
    unsigned long long v118;  // [bp-0x310]
    unsigned long v119;  // [bp-0x308]
    char *v121;  // [bp-0x248]

    v6 = a3;
    v80 = a1;
    if (v80->padding_70[8])
    {
        v81 = a2;
        v78 = a1;
        std::fs::read_dir(&v66, &a1->padding_28[24]);
        if (v67 == 2)
        {
            v13 = v25.map_err_context(a1->field_48, a1->field_50);
            v14 = &g_545c80;
            v12 = 0;
            v11 = 2;
            v33.send(a5[0], a5[1], &v11);
            v80 = a1;
            if (UnaryOp GetMSBs != 65535)
            {
                memcpy(&v13, &v35, 144);
                v12 = v34;
                v11 = v33;
                a0->field_10 = v11.new();
                a0->field_8 = 0;
                a0->field_0 = 2;
                core::ptr::drop_in_place<uu_du::Stat>(a1);
                return a0;
            }
        }
        else
        {
            v25 = v66;
            v26 = v67;
            v82 = &v59;
            v83 = &v29;
            v84 = a2->field_8;
            v85 = a2->field_10;
            v86 = (!v85 ? 0 : 56);
            v47 = v84;
            v45 = v84 + v86;
            v4 = a2->field_34;
            v2 = a2->field_33;
            v0 = a2->field_30;
            v6 += 1;
            v87 = (v84 + v86 <= v84 ? 1 : 0);
            v88 = a5[0];
            v89 = a5[1];
            v3 = a2->field_32;
            v1 = a2->field_31;
            v48 = v85;
            v46 = v86 - v85 * 56;
            v5 = a2;
            v9 = v88;
            while (true)
            {
                v56.next(&v25);
                if ((int)v56 != 1)
                {
                    core::ptr::drop_in_place<std::fs::ReadDir>(&v25);
                    v80 = v78;
                    break;
                }
                if (v57)
                {
                    v27 = v57;
                    v28 = v58;
                    v83->field_10 = v82->field_10;
                    v91 = v82->field_0;
                    v83->field_0 = v82->field_0;
                    v30.path(&v27);
                    v75.new(v31, v32, &v27, v81);
                    v92 = CmpEQV(v75, 2);
                    v90 = ((v90 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92;
                    if (UnaryOp GetMSBs == 65535)
                    {
                        v13 = *((long long *)&v76).map_err_context(&v27);
                        v14 = &g_545c80;
                        v12 = 0;
                        v11 = 2;
                        v117.send(v88, v89, &v11);
                        v93 = CmpEQV(*((int128_t *)&v117), 3);
                        v90 = (v90 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v117)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93;
                        if (UnaryOp GetMSBs == 65535)
                            goto LABEL_497248;
                        memcpy(&v13, &v119, 144);
                        v12 = v118;
                        v11 = v117;
                        v79 = a0;
                        a0->field_10 = v11.new();
                        a0->field_8 = 0;
                        a0->field_0 = 2;
                        goto LABEL_4973eb;
                    }
                    memcpy(&v66, &v75, 144);
                    if (v48)
                    {
                        v94 = v45;
                        v95 = v46;
                        v96 = v47;
                        do
                        {
                            v97 = v94;
                            v11.from_utf8_lossy(v70, v71);
                            v98 = v96.matches(v12, v13);
                            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v11);
                            if (!v98)
                            {
                                v74.file_name(&v27);
                                v11.from_utf8(&v74);
                                v99 = v11;
                                v100 = ((0 ^ v99) & (0 ^ -(v99))) >> 63 & 255;
                                v101 = *((int128_t *)&(&v11)[v100]);
                                v90 = v90 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101;
                                v50 = v101;
                                v52 = (&v13)[v100];
                                v36 = (&v13)[v100];
                                v34 = v101;
                                v117 = _ccall(1, 8, 0, v99, v87) & 255;
                                v11.unwrap(&v117);
                                v102 = v96.matches(v12, v13);
                                core::ptr::drop_in_place<alloc::string::String>(&v11);
                                if (v102)
                                    goto LABEL_4970e5;
                            }
                            else
                            {
LABEL_4970e5:
                                v103 = &v27;
                                if ((v4 & 1))
                                {
                                    v117 = 1;
                                    v118 = v70;
                                    v119 = v71;
                                    v37 = 1;
                                    v49 = &v117;
                                    v121 = &v49;
                                    v51 = <&T as core::fmt::Display>::fmt;
                                    v11 = &g_545c28;
                                    v12 = 2;
                                    v16 = 0;
                                    v13 = &v121;
                                    v14 = 1;
                                    std::io::stdio::_print(&v11);
                                    goto LABEL_496b2e;
                                }
                            }
                            v95 += 56;
                            v94 = v97 + 56;
                            v96 = v97;
                        } while (v95 != 56);
                    }
                    v104 = v66;
                    v103 = &v27;
                    if ((v104 & 1))
                    {
                        v90 = v90 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68;
                        v105 = (long long)v69;
                        v53 = v68;
                        v55 = v105;
                        if (!a4.get_inner(&(char)v53))
                        {
LABEL_496eca:
                            a4.insert((long long)v53, v54, v55);
                        }
                        else if ((v2 & 1))
                        {
                            if ((v0 & 1))
                                goto LABEL_496eca;
                            *((long long *)((char *)&v78->field_58 + 8)) = *((long long *)((char *)&v78->field_58 + 8)) + 1;
                            v87 = _ccall(17, (unsigned long long)(v0 & 1), 0, v87);
                            goto LABEL_496b2e;
                        }
                    }
                    v106 = (char)v73;
                    if ((char)v73)
                    {
                        if ((v104 & v3 & 1) && (v78->field_0 & 1) && (long long)v69 != v78->field_20)
                        {
LABEL_496b2e:
                            core::ptr::drop_in_place<uu_du::Stat>(&v66);
                            core::ptr::drop_in_place<std::path::PathBuf>(&v30);
                            core::ptr::drop_in_place<std::fs::DirEntry>(v103);
                            v81 = v5;
                            v82 = &v59;
                            v83 = &v29;
                            v88 = v9;
                            v89 = v7;
                            continue;
                        }
                        memcpy(&v11, &v75, 144);
                        v81 = v5;
                        uu_du::du(&v117, &v11, v5, v6, a4, a5);
                        v107 = CmpEQV(*((int128_t *)&v117), 2);
                        v108 = (v90 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v117)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v107;
                        v109 = v119;
                        if (UnaryOp GetMSBs != 65535)
                        {
                            v110 = *((int128_t *)&v36);
                            v65 = v40;
                            v64 = v39;
                            v63 = v38;
                            v62 = v110;
                            v111 = v41;
                            memcpy(&v60, &v43, 16);
                            memcpy(&v61, &v44, 16);
                            if (!(v1 & 1))
                            {
                                *((void*)&(&v78->field_50)[1]) = AddV(*((int128_t *)&(&v78->field_50)[1]), v20);
                                *((unsigned long long *)((char *)&v78->field_58 + 8)) = *((long long *)((char *)&v78->field_58 + 8)) + v42;
                            }
                            v19 = v65;
                            v18 = v64;
                            v17 = v63;
                            v15 = v62;
                            v23 = v61;
                            v22 = v60;
                            v12 = v118;
                            v11 = v117;
                            v13 = v109;
                            v20 = v111;
                            v21 = v42;
                            v24 = v6;
                            v117.send(v9, v7, &v11);
                            v112 = CmpEQV(*((int128_t *)&v117), 3);
                            v90 = (((v108 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v110) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v111) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v117)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v112;
                            v8 = v7;
                            v10 = v9;
                            if (UnaryOp GetMSBs == 65535)
                                goto LABEL_497238;
                            memcpy(&v13, &v119, 144);
                            v12 = v118;
                            v11 = v117;
                            v109 = v11.new();
                        }
                    }
                    else
                    {
                        v90 = v90 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v72;
                        *((int128_t *)&(&v78->field_50)[1]) = AddV(*((int128_t *)&(&v78->field_50)[1]), (int128_t)v72);
                        *((long long *)((char *)&v78->field_58 + 8)) = *((long long *)((char *)&v78->field_58 + 8)) + 1;
                        v87 = v106 < 0;
                        if ((v0 & 1))
                        {
                            memcpy(&v11, &v75, 144);
                            v24 = v6;
                            v117.send(v9, v7, &v11);
                            v81 = v5;
                            v113 = CmpEQV(*((int128_t *)&v117), 3);
                            v90 = (v90 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v117)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v113;
                            v8 = v7;
                            v10 = v9;
                            if (UnaryOp GetMSBs == 65535)
                                goto LABEL_497238;
                            memcpy(&v13, &v119, 144);
                            v12 = v118;
                            v11 = v117;
                            v109 = v11.new();
                        }
                        else
                        {
                            core::ptr::drop_in_place<uu_du::Stat>(&v75);
                            v81 = v5;
                            v8 = v7;
                            v10 = v9;
LABEL_497238:
                            v82 = &v59;
                            v83 = &v29;
LABEL_497248:
                            core::ptr::drop_in_place<std::path::PathBuf>(&v30);
                            core::ptr::drop_in_place<std::fs::DirEntry>(&v27);
                            continue;
                        }
                    }
                    v79 = a0;
                    a0->field_10 = v109;
                    a0->field_8 = 0;
                    a0->field_0 = 2;
LABEL_4973eb:
                    core::ptr::drop_in_place<std::path::PathBuf>(&v30);
                    core::ptr::drop_in_place<std::fs::DirEntry>(&v27);
                    core::ptr::drop_in_place<std::fs::ReadDir>(&v25);
                    core::ptr::drop_in_place<uu_du::Stat>(v78);
                    return v79;
                }
                else
                {
                    v13 = v28.from();
                    v14 = v114;
                    v12 = 0;
                    v11 = 2;
                    v117.send(v88, v89, &v11);
                    v115 = CmpEQV(*((int128_t *)&v117), 3);
                    v90 = (v90 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v117)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v115;
                    if (UnaryOp GetMSBs != 65535)
                    {
                        memcpy(&v13, &v119, 144);
                        v12 = v118;
                        v11 = v117;
                        a0->field_10 = v11.new();
                        a0->field_8 = 0;
                        a0->field_0 = 2;
                        core::ptr::drop_in_place<std::fs::ReadDir>(&v25);
                        core::ptr::drop_in_place<uu_du::Stat>(v78);
                        return v79;
                    }
                }
            }
        }
    }
    memcpy(a0, v80, 144);
    return a0;
}
