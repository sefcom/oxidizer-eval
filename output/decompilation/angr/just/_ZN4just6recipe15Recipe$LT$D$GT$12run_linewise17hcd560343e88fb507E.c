long long just::recipe::Recipe<D>::run_linewise(struct_4 *a0, struct_2 *a1, struct_1 *a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    char v0;  // [bp-0x355]
    unsigned int v1;  // [bp-0x354]
    void* v2;  // [bp-0x350]
    void* v4;  // [bp-0x348]
    void* v5;  // [sp-0x340]
    void* v6;  // [bp-0x340]
    unsigned long long v7[3];  // [bp-0x338], Other Possible Types: char
    void* v8;  // [bp-0x330]
    void* v9;  // [bp-0x328]
    unsigned long v10;  // [bp-0x318]
    unsigned long v11;  // [bp-0x310]
    char *v12;  // [bp-0x308], Other Possible Types: unsigned long long
    int v13;  // [bp-0x308]
    unsigned long long v14;  // [bp-0x300]
    unsigned long long v15;  // [bp-0x2f8]
    int v16;  // [bp-0x2f0]
    void* v17;  // [bp-0x2d0]
    unsigned long long v18;  // [bp-0x2c8]
    void* v19;  // [bp-0x2c0]
    char v20;  // [bp-0x2b2]
    unsigned long long v21;  // [bp-0x2b1]
    unsigned long long v22;  // [bp-0x2a9]
    char v23;  // [bp-0x2a1]
    unsigned long v24;  // [bp-0x2a0]
    unsigned long v25;  // [bp-0x298]
    unsigned long v26;  // [bp-0x288]
    unsigned long v27;  // [bp-0x280]
    unsigned long v28;  // [bp-0x278]
    unsigned long v29;  // [bp-0x270]
    unsigned long long v30;  // [bp-0x250]
    unsigned long long v31;  // [bp-0x248]
    unsigned long long v32;  // [bp-0x240]
    char *v33;  // [bp-0x238]
    unsigned long long v34;  // [bp-0x230]
    int v35;  // [bp-0x228]
    char v36;  // [bp-0x228]
    int v37;  // [bp-0x228]
    unsigned long v38;  // [bp-0x228]
    char v39;  // [bp-0x227]
    unsigned int v40;  // [bp-0x226]
    unsigned int v41;  // [bp-0x223]
    char v42;  // [bp-0x220], Other Possible Types: unsigned long long
    unsigned int v43;  // [bp-0x21f]
    unsigned int v44;  // [bp-0x21b]
    char *v45;  // [bp-0x218], Other Possible Types: unsigned short
    char v46;  // [bp-0x217]
    unsigned long long v47;  // [bp-0x210]
    int v49;  // [bp-0x1f8]
    int v50;  // [bp-0x1e8]
    int v51;  // [bp-0x1d8]
    char v52;  // [bp-0x1c8]
    int v53;  // [bp-0x140]
    int v54;  // [bp-0x128]
    int v55;  // [bp-0x118], Other Possible Types: unsigned long
    unsigned long long v56;  // [bp-0x118]
    int v57;  // [bp-0x111]
    unsigned long long v58;  // [bp-0x110]
    char v59;  // [bp-0x109]
    char *v60;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v61;  // [bp-0x101]
    int v62;  // [sp-0x100], Other Possible Types: void*
    void* v63;  // [bp-0xf8], Other Possible Types: char
    char *v65;  // r12
    unsigned long long *v66;  // rax
    unsigned long long v67;  // cc_ndep
    unsigned long long v68;  // r14
    struct_0 *v69;  // rbp
    char *v70;  // r15
    unsigned long long v71;  // xmm1lq
    unsigned long long v72[3];  // rax
    unsigned long long v74;  // r13
    unsigned long long v75[3];  // rax
    unsigned long long v76[3];  // rax
    char v77;  // bl
    void* v78;  // r15
    unsigned long long v79;  // cc_op
    void* v80;  // cc_dep1
    void* v81;  // cc_dep2
    char v82;  // al
    int v83;  // xmm0
    unsigned long long v84;  // rcx
    unsigned long long v85[3];  // r15
    void* v86;  // r15
    int v87;  // xmm0
    char *v88;  // rbp
    unsigned long long v89;  // r15
    unsigned long long v90;  // rax
    unsigned long long v91;  // rdx
    unsigned long long v92;  // rbx
    void* v93;  // r14
    char v94;  // al
    char v95;  // cl
    unsigned int v96;  // edx
    unsigned long v97;  // rcx
    uint256_t v98;  // ymm0
    unsigned long v99;  // r14
    char *v100;  // r13
    uint256_t v101;  // ymm0
    char v103;  // dl
    unsigned int v104;  // ebx
    char v105;  // r15b
    unsigned int v106;  // eax
    int v107;  // xmm2
    unsigned long long v108;  // rax
    unsigned long long v109;  // rax
    struct_4 *v110;  // rcx
    unsigned long long v111;  // rax
    char v112;  // al
    void* v114;  // [bp-0x208]
    unsigned long long v115;  // [bp-0x100]

    v65 = &v7;
    v7[0] = a1->field_8;
    v8 = 32 * a1->field_10 + (char *)a1->field_8;
    v4 = 0;
    v66 = v4.get_or_insert_with(&v7);
    if (!*(v66))
    {
        a0->field_0 = 56;
        return core::ptr::drop_in_place<just::evaluator::Evaluator>(a6);
    }
    v10 = &a1->padding_18[120];
    v67 = *(v66) < 0;
    v68 = a1->field_c0 + 1;
    v69 = a2->field_10;
    v28 = a2->field_8;
    v0 = a1->field_fd;
    v24 = &a1->padding_c8[16];
    v9 = a2->field_0;
    v26 = a2->field_0 + 388;
    v25 = &v69->padding_0[168];
    v29 = a2->field_18;
    v27 = &v69[1].padding_0[74];
    v70 = &v4;
    while (true)
    {
        v17 = 0;
        v18 = 1;
        v19 = 0;
        v72 = *((long long *)v70.get_or_insert_with(v65));
        v74 = (!v72 ? 0 : (unsigned int)v72[1].is_quiet(v72[2]));
        v75 = *((long long *)v70.get_or_insert_with(v65));
        if (v75)
        {
            v1 = v75[1].is_infallible(v75[2]);
            if (v69->field_1e7 == 1)
                goto LABEL_683f71;
        }
        else
        {
            v1 = 0;
            if (v69->field_1e7 == 1)
            {
LABEL_683f71:
                v76 = *((long long *)v70.get_or_insert_with(v65));
                if (v76)
                {
                    v77 = v76[1].is_comment(v76[2]);
                    goto LABEL_683fa2;
                }
            }
        }
        v77 = 0;
LABEL_683fa2:
        if (*((long long *)v70.get_or_insert_with(v65)))
        {
            v78 = v5;
            v4 = 0;
            if (v77)
            {
                if (((char)v4 & 1))
                {
                    v79 = 20;
                    v80 = v78;
                    v81 = 0;
                    if (!v78)
                        core::option::unwrap_failed(&g_830c10); /* do not return */
                }
                else
                {
                    v78 = v7;
                    v79 = 8;
                    v80 = v78;
                    v81 = v8;
                    if (v78 == v8)
                        core::option::unwrap_failed(&g_830c10); /* do not return */
                    v7[0] = v78 + 32;
                }
                (long long)v78[8].is_continuation((long long)v78[16]);
                v67 = _ccall(v79, v80, v81, v67);
                v68 += 1;
LABEL_683ea3:
                v70 = &v4;
            }
            else
            {
                if (!((char)v4 & 1))
                {
                    v78 = v7;
                    if (v78 == v8)
                        core::option::unwrap_failed(&g_830c10); /* do not return */
                    v7[0] = v78 + 32;
                }
                else if (!v78)
                {
                    core::option::unwrap_failed(&g_830c10); /* do not return */
                }
                v36.evaluate_line(a6, (long long)v78[8], (long long)v78[16], 0);
                v82 = v36;
                if (v36 != 56)
                {
                    v107 = *((int128_t *)&v114);
                    memcpy(&v59, &v42, 16);
                    *((int128_t *)&v55) = *((int128_t *)&v39);
                    *((long long *)&v2[96]) = *((long long *)&v52);
                    v2[80] = v51;
                    v2[64] = v50;
                    v2[48] = v49;
                    v2[32] = v107;
                    *((int128_t *)&v2[16]) = *((int128_t *)&v59);
                    *((int128_t *)&v2[1]) = (int128_t)v55;
                    *((char *)v2) = v82;
                    core::ptr::drop_in_place<alloc::string::String>(&v17);
                    return core::ptr::drop_in_place<just::evaluator::Evaluator>(a6);
                }
                v61 = v47;
                v83 = (int128_t)(&v35)[8];
                v57 = v83;
                v101 = (v101 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v57;
                *((int128_t *)&v13) = (int128_t)v57;
                v15 = v61;
                v17.spec_extend(v14, v61 + v14);
                core::ptr::drop_in_place<alloc::string::String>(&v12);
                v68 += 1;
                if ((char)(long long)v78[8].is_continuation((long long)v78[16]))
                {
                    v17.pop();
                    if (*((long long *)v4.get_or_insert_with(v65)))
                    {
                        v84 = v68 + 2;
                        while (true)
                        {
                            v68 = v84;
                            v4 = 0;
                            if (((char)v4 & 1))
                            {
                                v6 = v5;
                                if (!v6)
                                    core::option::unwrap_failed(&g_830c10); /* do not return */
                            }
                            else
                            {
                                v85 = v7;
                                if (v85 == v8)
                                    core::option::unwrap_failed(&g_830c10); /* do not return */
                                v7[0] = &v85[1 + 1];
                                v6 = v85;
                            }
                            v86 = v6;
                            v36.evaluate_line(a6, (long long)v86[8], (long long)v86[16], 1);
                            v82 = v36;
                            if (v36 != 56)
                                break;
                            v61 = v47;
                            v87 = *((int128_t *)&v42);
                            v57 = v87;
                            v101 = (v101 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v57;
                            *((int128_t *)&v13) = (int128_t)v57;
                            v15 = v61;
                            v17.spec_extend(v14, v61 + v14);
                            core::ptr::drop_in_place<alloc::string::String>(&v12);
                            if (!(char)(long long)v86[8].is_continuation((long long)v86[16]))
                            {
                                v70 = &v4;
                                if (!v77)
                                    goto LABEL_68422d;
                                goto LABEL_683ea8;
                            }
                            v17.pop();
                            v70 = &v4;
                            v84 = v68 + 1;
                            if (!*((long long *)v4.get_or_insert_with(v65)))
                                goto LABEL_684220;
                        }
                    }
                }
            }
        }
        else
        {
LABEL_684220:
            if (!v77)
            {
LABEL_68422d:
                v88 = v65;
                v89 = (v74 & 4294967295) + (char)v1;
                v90 = v89.get(1, 0);
                if (!v90)
                    core::str::slice_error_fail(1, 0, v89, 0, &g_830c28); /* do not return */
                if (!v91)
                {
                    v65 = v88;
                    goto LABEL_683e9e;
                }
                v92 = v90;
                v93 = v9;
                v65 = v88;
                v69 = v11;
                v70 = &v4;
                if (!(char)v93[408])
                {
                    v94 = (char)v93[423];
                    if ((char)v93[423] >= 2)
                        goto LABEL_6842a3;
                    if (!(((char)v74 ^ v0) & 1))
                    {
                        if (v69->field_1e8[2])
                        {
                            v93 = v9;
                            if (v24.contains(11))
                            {
                                v94 = (char)v93[423];
                                goto LABEL_68445a;
                            }
                        }
                        else
                        {
LABEL_68445a:
                            if (v94)
                                goto LABEL_6842a3;
                        }
                    }
                }
                else
                {
LABEL_6842a3:
                    if ((char)v93[411])
                    {
                        v95 = (char)v93[405];
                        v96 = (int)v93[384];
                        v36 = (char)v93[388];
                        v39 = 1;
                        v41 = 0;
                        v40 = 0;
                        v43 = v96;
                        v44 = 10;
                        v46 = v95;
                    }
                    else
                    {
                        v97 = v26;
                        v45 = *((short *)(v26 + 16));
                        v101 = v101 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)v26);
                        *((int128_t *)&v37) = *((int128_t *)v26);
                    }
                    v20.stderr(&(char)v38);
                    if ((char)v93[418])
                    {
                        v54.now();
                        v98 = v101 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v9[104];
                        *((int128_t *)&v55) = (int128_t)v9[104];
                        v60 = 8;
                        v62 = 0;
                        v63 = 0;
                        (char)v38.format_with_items(&v54, &(char)v55);
                        v30.spec_to_string(&(char)v38);
                        v99 = v23;
                        if ((unsigned int)v99)
                        {
                            v98 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                            if ((unsigned int)v99 == 1 && v20 == 1)
                                goto LABEL_6843e8;
                        }
                        else
                        {
LABEL_6843e8:
                            v98 = v98 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v21;
                            v71 = v22;
                        }
                        v101 = v98 & 115792089237316195423570985008687907852929702298719625576012656144555070980095 | v71 * 0x10000000000000000;
                        *((uint128_t *)&v16) = v101;
                        v12 = 0x8000000000000000;
                        v14 = v31;
                        v15 = v32;
                        v33 = &v12;
                        v34 = <ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
                        v55 = &g_830bf0;
                        v58 = 2;
                        v63 = 0;
                        v60 = &v33;
                        v115 = 1;
                        std::io::stdio::_eprint(&(char)v55);
                        core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(&v12);
                        core::ptr::drop_in_place<alloc::string::String>(&v30);
                        core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&(char)v38);
                        v100 = &(char)v55;
                        if (!(v99 & 255))
                            goto LABEL_68455e;
LABEL_684541:
                        v101 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        if ((unsigned int)v99 == 1)
                        {
                            if (v20 != 1)
                                goto LABEL_684579;
LABEL_68455e:
                            v101 = v101 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v21;
                            v71 = v22;
                            goto LABEL_684579;
                        }
                        else
                        {
LABEL_684579:
                            v101 = v101 & 115792089237316195423570985008687907852929702298719625576012656144555070980095 | v71 * 0x10000000000000000;
                            *((uint128_t *)&v62) = v101;
                            v56 = 0x8000000000000000;
                            v58 = v92;
                            v60 = v91;
                            v12 = v100;
                            v14 = <ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
                            v38 = &g_82dbd8;
                            v42 = 2;
                            v114 = 0;
                            v45 = &v12;
                            v47 = 1;
                            std::io::stdio::_eprint(&(char)v38);
                            core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(v100);
                            v93 = v9;
                        }
                    }
                    else
                    {
                        v99 = v23;
                        v100 = &(char)v55;
                        if ((v99 & 255))
                            goto LABEL_684541;
                        goto LABEL_68455e;
                    }
                }
                if (!(char)v93[408])
                {
                    (char)v56.shell_command(v25, v93);
                    v53.working_directory(a1, v69, v29);
                    if ((long long)v53 != 0x8000000000000000)
                        (char)v56.current_dir(&v53);
                    (char)v56.arg(v92, v91);
                    if (v69->field_1e8[1] || v24.contains(14))
                    {
                        (char)v56.arg(v10.lexeme(), a2);
                        (char)v56.args(a4, a5);
                    }
                    if (!(char)v9[423])
                    {
                        (char)v56.stderr(1);
                        (char)v56.stdout(1);
                    }
                    (char)v56.export(v25, v28, a3, v27);
                    memcpy(&v36, &(char)v56, 224);
                    v12.status_guard(&v36);
                    v103 = v1;
                    v101 = v101 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v12);
                    *((int128_t *)&v35) = *((int128_t *)&v12);
                    if (*((int *)&v36) == 1)
                    {
                        v12 = (long long)(&v35)[8];
                        v108 = v10.lexeme();
                        *((char *)v2) = 31;
                        *((unsigned long long *)&v2[8]) = v108;
                        *((unsigned long long *)&v2[16]) = v91;
                        *((unsigned long long *)&v2[24]) = v12;
                        break;
                    }
                    v104 = (int)(&v35)[4] & 127;
                    if (!((char)(int)(&v35)[4] & 127))
                    {
                        v105 = (int)(&v35)[4] >> 8;
                        if (!v105 || v103)
                        {
                            v106 = v15;
                            if (!v103 && !!v106)
                            {
                                *((char *)v2) = 30;
                                *((unsigned int *)&v2[4]) = v106;
                                break;
                            }
                        }
                        else
                        {
                            v111 = v10.lexeme();
                            v112 = a1.print_exit_message(*((int *)(v11 + 488)));
                            v110 = a0;
                            *((char *)v2) = 9;
                            *((char *)&v2[1]) = v112;
                            *((unsigned int *)&v2[4]) = v105;
                            *((unsigned long long *)&v2[8]) = v111;
                            *((unsigned long long *)&v2[16]) = v91;
LABEL_68493b:
                            v110->field_18 = 1;
                            v110->field_20 = v68;
                            break;
                        }
                    }
                    else if (!v103)
                    {
                        v109 = v10.lexeme();
                        v110 = a0;
                        *((int *)v2) = ((char)_ccall(13, 5, (unsigned long long)(v104 + 1 & 255), 2, v67) ? 44 : 50);
                        *((unsigned int *)&v2[4]) = v104;
                        *((unsigned long long *)&v2[8]) = v109;
                        *((unsigned long long *)&v2[16]) = v91;
                        goto LABEL_68493b;
                    }
LABEL_683e9e:
                    v69 = v11;
                    goto LABEL_683ea3;
                }
            }
        }
LABEL_683ea8:
        core::ptr::drop_in_place<alloc::string::String>(&v17);
        if (!*((long long *)v70.get_or_insert_with(v65)))
        {
            a0->field_0 = 56;
            return core::ptr::drop_in_place<just::evaluator::Evaluator>(a6);
        }
    }
    core::ptr::drop_in_place<alloc::string::String>(&v17);
    return core::ptr::drop_in_place<just::evaluator::Evaluator>(a6);
}
