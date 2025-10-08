void just::subcommand::Subcommand::format(void* a0, char a1[424], void* a2)
{
    char v0;  // [bp-0x2b8]
    void* v1;  // [bp-0x2b8]
    char v2;  // [bp-0x2b7]
    char v3;  // [bp-0x2b6]
    char v4;  // [bp-0x2b5]
    char v5;  // [bp-0x2b4]
    char v6;  // [bp-0x2b3]
    char v7;  // [bp-0x2b2]
    char v8;  // [bp-0x2b1]
    unsigned int v9;  // [bp-0x2b0]
    unsigned int v10;  // [bp-0x2ac]
    char v11;  // [bp-0x2a0]
    char v12;  // [bp-0x29f]
    char v13;  // [bp-0x29e]
    char v14;  // [bp-0x29d]
    char v15;  // [bp-0x29c]
    char v16;  // [bp-0x29b]
    char v17;  // [bp-0x29a]
    char v18;  // [bp-0x299]
    unsigned int v19;  // [bp-0x298]
    unsigned int v20;  // [bp-0x294]
    char v21[424];  // [bp-0x290], Other Possible Types: unsigned long
    char *v22;  // [bp-0x280], Other Possible Types: char
    char v23;  // [bp-0x27f]
    char v24;  // [bp-0x27e]
    char v25;  // [bp-0x27d]
    char v26;  // [bp-0x27c]
    char v27;  // [bp-0x27b]
    char v28;  // [bp-0x27a]
    char v29;  // [bp-0x279]
    char v30;  // [bp-0x278], Other Possible Types: unsigned long
    unsigned int v31;  // [bp-0x277]
    int v32;  // [bp-0x273]
    char *v33;  // [bp-0x270]
    int v34;  // [bp-0x26f]
    unsigned long long v35;  // [bp-0x268]
    char *v36;  // [bp-0x260]
    unsigned long long v37;  // [bp-0x258]
    char *v38;  // [bp-0x250]
    unsigned long long v39;  // [bp-0x248]
    char v40;  // [bp-0x240]
    unsigned long long v41;  // [bp-0x238]
    unsigned long long v42;  // [bp-0x230]
    int v43;  // [bp-0x228], Other Possible Types: unsigned long, unsigned long long
    char v44;  // [bp-0x227]
    unsigned long long v45;  // [bp-0x220]
    int v46;  // [bp-0x218], Other Possible Types: char *
    unsigned long long v47;  // [bp-0x210], Other Possible Types: unsigned short
    int v48;  // [bp-0x208], Other Possible Types: void*
    char v49;  // [bp-0x207]
    int v50;  // [bp-0x1f8]
    char v51;  // [bp-0x1f7]
    int v52;  // [bp-0x1e8]
    int v53;  // [bp-0x1e7]
    char v54;  // [bp-0x1d8]
    char v55;  // [bp-0x1d7]
    unsigned long long v56;  // [bp-0x1c8]
    unsigned long long v57;  // [bp-0x1c0]
    int v58;  // [bp-0x1b8], Other Possible Types: char
    unsigned long v59;  // [bp-0x1b0]
    int v60;  // [bp-0x1a8], Other Possible Types: char
    int v61;  // [bp-0x198], Other Possible Types: char
    int v62;  // [bp-0x188], Other Possible Types: char
    int v63;  // [bp-0x178]
    int v64;  // [bp-0x168]
    unsigned long long v65;  // [bp-0x159]
    unsigned long long v66;  // [bp-0x150]
    unsigned long long v67;  // [bp-0x148]
    unsigned long long v68;  // [bp-0x140]
    unsigned long long v69;  // [bp-0x138]
    char *v70;  // [bp-0x130]
    unsigned long long v71;  // [bp-0x128]
    void* v72;  // [bp-0x120]
    int v73;  // [bp-0x110]
    int v74;  // [bp-0x100]
    int v75;  // [bp-0xf0]
    unsigned long long v76;  // [bp-0xe0]
    int v77;  // [bp-0xd8]
    int v78;  // [bp-0xc8]
    int v79;  // [bp-0xb8]
    unsigned long long v80;  // [bp-0xa8]
    int v81;  // [bp-0x98]
    int v82;  // [bp-0x88]
    int v83;  // [bp-0x78]
    int v84;  // [bp-0x68]
    int v85;  // [bp-0x58]
    int v86;  // [bp-0x48]
    char v87;  // [bp-0x38]
    struct_0 *v89;  // rcx
    unsigned long long v90;  // r12
    unsigned long long v91;  // rax
    unsigned long long v92;  // rdx
    unsigned long v93;  // rbx
    unsigned long v94;  // rax
    unsigned long v95;  // rax
    char v96;  // bpl
    unsigned long v97;  // r12
    unsigned int v98;  // edx
    unsigned int v99;  // eax
    char v100;  // cl
    unsigned long long v101;  // r14
    char v102;  // sil
    char v103;  // dil
    char v104;  // r8b
    char v105;  // r9b
    char v106;  // r10b
    char v107;  // r11b
    char v108;  // bl
    unsigned long long v109;  // rax
    char v110;  // al
    int v111;  // xmm0

    v90 = v89.root_src();
    v91 = v89.root_ast();
    if (a1[420] || v89->field_1eb)
    {
        v40.spec_to_string(v91);
        if ((char)v41.equal(v42, v90, v92))
        {
            *((char *)a0) = 56;
            core::ptr::drop_in_place<alloc::string::String>(&v40);
        }
        else if (a1[407])
        {
            if (a1[423])
            {
                *((char *[424])&v21[0]) = a1;
                v43 = 2;
                v47 = 513;
                v58.diff_lines(&(char)v43, v90, v92, v41, v42);
                if (*((long long *)&v60))
                {
                    v93 = v59;
                    v57 = v93 + *((long long *)&v60) * 40;
                    v94 = v93 + 40;
                    v21 = &v21[388];
                    while (true)
                    {
                        v81.iter_changes(&v58, v93);
                        v56 = *((long long *)&v87);
                        memcpy(&v54, &v86, 16);
                        v52 = v85;
                        v50 = v84;
                        v48 = v83;
                        v46 = v82;
                        v43 = v81;
                        v95 = v94;
                        while (true)
                        {
                            v93 = v95;
                            v73.next(&(char)v43);
                            if ((int)v73 == 2)
                                break;
                            v80 = v76;
                            v79 = v75;
                            v78 = v74;
                            v77 = v73;
                            if ((char)v76)
                            {
                                if ((char)v76 == 1)
                                {
                                    (char)v22.stdout(v21);
                                    v96 = v22;
                                    v97 = (char)v34;
                                    v98 = 10;
                                    v99 = 1;
                                    v100 = 0;
                                    v101 = "-# https://just.systems\n\ndefault:\n    echo 'Hello, world!'\nwriting to buffer cannot fail";
                                }
                                else
                                {
                                    v22.stdout(v21);
                                    v96 = v22;
                                    v97 = (char)v34;
                                    v98 = 10;
                                    v99 = 2;
                                    v100 = 0;
                                    v101 = "+*src/parser.rs";
                                }
                                v102 = 0;
                                v103 = 0;
                                v104 = 0;
                                v105 = 0;
                                v106 = 0;
                                v107 = 0;
                                v108 = 0;
                                v66 = v101;
                                v67 = 1;
                                if ((char)v97 == 2)
                                    goto LABEL_68e180;
                            }
                            else
                            {
                                v22.stdout(v21);
                                v96 = v22;
                                v100 = v23;
                                v102 = v24;
                                v103 = v25;
                                v104 = v26;
                                v105 = v27;
                                v106 = v28;
                                v107 = v29;
                                v108 = v30;
                                v99 = v31;
                                v98 = (int)v32;
                                v97 = (char)v34;
                                v66 = " [private]\nexport ";
                                v67 = 1;
                                if ((char)v97 == 2)
                                    goto LABEL_68e180;
                            }
                            if ((unsigned int)v97 != 1 || (v96 & 1))
                            {
                                v0 = v100;
                                v2 = v102;
                                v3 = v103;
                                v4 = v104;
                                v5 = v105;
                                v6 = v106;
                                v7 = v107;
                                v8 = v108;
                                goto LABEL_68e1a6;
                            }
LABEL_68e180:
                            v1 = 0;
                            v99 = 10;
                            v100 = 0;
                            v98 = 10;
                            v102 = 0;
                            v103 = 0;
                            v104 = 0;
                            v105 = 0;
                            v106 = 0;
                            v107 = 0;
                            v108 = 0;
LABEL_68e1a6:
                            v11 = v100;
                            v12 = v102;
                            v13 = v103;
                            v14 = v104;
                            v15 = v105;
                            v16 = v106;
                            v17 = v107;
                            v18 = v108;
                            v9 = v99;
                            v19 = v99;
                            v10 = v98;
                            v20 = v98;
                            v22 = &v0;
                            v30 = <ansi_term::ansi::Prefix as core::fmt::Display>::fmt;
                            v33 = &v66;
                            v35 = <&T as core::fmt::Display>::fmt;
                            v36 = &v77;
                            v37 = similar::types::text_additions::<impl core::fmt::Display for similar::types::Change<&T>>::fmt;
                            v38 = &v11;
                            v39 = <ansi_term::ansi::Suffix as core::fmt::Display>::fmt;
                            v68 = &g_49e550;
                            v69 = 4;
                            v72 = 0;
                            v70 = &(char)v22;
                            v71 = 4;
                            std::io::stdio::_print(&v68);
                            v95 = v94;
                        }
                        v94 = v93 + 40;
                        if (v93 == v57)
                        {
                            v94 = v93;
                            if (v93 == v57)
                                break;
                        }
                        else if (v93 == v57)
                        {
                            break;
                        }
                    }
                }
                core::ptr::drop_in_place<similar::text::TextDiff<str>>(&v58);
            }
            *((char *)a0) = 24;
            core::ptr::drop_in_place<alloc::string::String>(&v40);
            goto LABEL_68e3fe;
        }
        else
        {
            v109 = std::fs::write(a2, &v40);
            if (v109)
            {
                just::subcommand::Subcommand::format::{{closure}}(&(char)v43, (long long)a2[8], (long long)a2[16], v109);
                v110 = (char)v43;
                *((int128_t *)&v58) = *((int128_t *)&v44);
                memcpy(&v60, &(char)v46, 16);
                memcpy(&v61, &v49, 16);
                memcpy(&v62, &v51, 16);
                v63 = v53;
                *((int128_t *)&v64) = *((int128_t *)&v55);
                v65 = v56;
                if (v110 == 56)
                    goto LABEL_68e35c;
                *((unsigned long long *)&a0[96]) = v65;
                *((int128_t *)&a0[81]) = (int128_t)v64;
                a0[65] = v63;
                v111 = (int128_t)v58;
                a0[49] = v62;
                a0[33] = v61;
                a0[17] = v60;
                a0[1] = v111;
                *((char *)a0) = v110;
            }
            else
            {
LABEL_68e35c:
                if (a1[423])
                {
                    *((int128_t *)&v58) = (int128_t)a2[8];
                    v22 = &(char)v58;
                    v30 = <std::path::Display as core::fmt::Display>::fmt;
                    v43 = &g_831158;
                    v45 = 2;
                    v48 = 0;
                    v46 = &(char)v22;
                    v47 = 1;
                    std::io::stdio::_eprint(&(char)v43);
                }
                *((char *)a0) = 56;
LABEL_68e3fe:
                core::ptr::drop_in_place<just::compilation::Compilation>(v89);
                return;
            }
        }
    }
    else
    {
        *((unsigned short *)a0) = 54;
    }
    core::ptr::drop_in_place<just::compilation::Compilation>(v89);
    return;
}
