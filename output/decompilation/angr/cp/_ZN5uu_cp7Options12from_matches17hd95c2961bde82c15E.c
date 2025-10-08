long long uu_cp::Options::from_matches(unsigned long long a0[3], unsigned long long a1)
{
    unsigned int v0;  // [bp-0x304]
    unsigned short v1;  // [bp-0x300]
    unsigned int v2;  // [bp-0x2fc]
    unsigned int v3;  // [bp-0x2f8]
    unsigned int v4;  // [bp-0x2f4]
    char v5;  // [bp-0x2f0]
    char v6;  // [bp-0x2ef]
    char v7;  // [bp-0x2ee]
    char v8;  // [bp-0x2ed]
    char v9;  // [bp-0x2ec]
    char v10;  // [bp-0x2eb]
    char v11;  // [bp-0x2ea]
    char v12;  // [bp-0x2e9]
    char v13;  // [bp-0x2e8]
    char v14;  // [bp-0x2e7]
    char v15;  // [bp-0x2e6]
    char v16;  // [bp-0x2e5]
    char v17;  // [bp-0x2e4]
    char v18;  // [bp-0x2e2]
    char v19;  // [bp-0x2e1]
    void* v20;  // [bp-0x2e0]
    int v21;  // [bp-0x2d8], Other Possible Types: unsigned long long
    unsigned short v22;  // [bp-0x2d4]
    char v23;  // [bp-0x2d2]
    char v24;  // [bp-0x2d1]
    unsigned long long v25;  // [bp-0x2d0]
    unsigned long long v26;  // [bp-0x2d0]
    unsigned long v27;  // [bp-0x2c8]
    unsigned int v29;  // [bp-0x2b4]
    unsigned int v30;  // [bp-0x2b0]
    unsigned short v31;  // [bp-0x2ac]
    char v32;  // [bp-0x2aa]
    char v33;  // [bp-0x2a9]
    unsigned int v34;  // [bp-0x2a8]
    unsigned int v35;  // [bp-0x2a4]
    unsigned short v36;  // [bp-0x2a0]
    char v37;  // [bp-0x29e]
    char v38;  // [bp-0x29d]
    unsigned int v39;  // [bp-0x29c]
    unsigned int v40;  // [sp-0x298]
    char v41;  // [bp-0x298], Other Possible Types: unsigned long long, unsigned long
    unsigned short v42;  // [sp-0x294]
    char v43;  // [sp-0x292]
    char v44;  // [bp-0x291]
    unsigned int v45;  // [bp-0x290], Other Possible Types: unsigned long long
    int v46;  // [bp-0x290], Other Possible Types: unsigned long long
    char *v47;  // [bp-0x288]
    unsigned long long v48;  // [bp-0x288]
    char *v49;  // [bp-0x280], Other Possible Types: unsigned long long
    void* v50;  // [bp-0x278], Other Possible Types: unsigned long long
    unsigned long long v51;  // [bp-0x270]
    unsigned long long v52;  // [bp-0x268]
    unsigned int v53;  // [bp-0x264]
    unsigned long long v54;  // [bp-0x260]
    unsigned long long v55;  // [bp-0x258]
    unsigned long long v56;  // [bp-0x250]
    unsigned long long v57;  // [bp-0x248]
    unsigned long long v58;  // [bp-0x240]
    void* v59;  // [bp-0x238], Other Possible Types: char *, char
    char *v60;  // [bp-0x230], Other Possible Types: unsigned long, unsigned long long
    char *v61;  // [bp-0x228], Other Possible Types: unsigned long
    char *v62;  // [sp-0x220], Other Possible Types: char
    char *v63;  // [bp-0x220]
    unsigned long long v64;  // [bp-0x218]
    void* v65;  // [bp-0x210]
    int v66;  // [bp-0x208], Other Possible Types: unsigned long
    unsigned long long v67;  // [bp-0x208]
    unsigned long long v68;  // [bp-0x200]
    char *v69;  // [bp-0x1f8]
    unsigned long long v70;  // [bp-0x1e8]
    unsigned int v71;  // [bp-0x1e0]
    unsigned long long v72;  // [bp-0x1d8]
    unsigned int v73;  // [bp-0x1d0]
    void* v74;  // [bp-0x1c8]
    unsigned long long v75;  // [bp-0x1c0]
    void* v76;  // [bp-0x1b8]
    char *v77;  // [bp-0x1b0], Other Possible Types: char, unsigned long long
    unsigned long long v78;  // [bp-0x1a8]
    char *v79;  // [bp-0x190]
    unsigned long long v80;  // [bp-0x188]
    void* v81;  // [bp-0x180]
    int v82;  // [bp-0x178], Other Possible Types: char
    unsigned long long v83;  // [bp-0x168]
    unsigned long long v84[3];  // [bp-0x160]
    int v85;  // [bp-0x158]
    unsigned long long v86;  // [bp-0x148]
    char v87;  // [bp-0x140]
    char *v88;  // [bp-0x138]
    char *v89;  // [bp-0x130]
    int v90;  // [bp-0x128]
    unsigned short v91;  // [bp-0x11a]
    unsigned long v92;  // [bp-0x118]
    unsigned int v93;  // [bp-0x110]
    unsigned short v94;  // [bp-0x10c]
    void* v95;  // [bp-0x100]
    unsigned long long v96;  // [bp-0xf8]
    void* v97;  // [bp-0xf0]
    int v98;  // [bp-0xe8]
    unsigned long long v99;  // [bp-0xd8]
    int v100;  // [bp-0xd0]
    unsigned long v101;  // [bp-0xc0]
    int v102;  // [bp-0xb8]
    unsigned long long v103;  // [bp-0xa8]
    int v104;  // [bp-0xa0], Other Possible Types: char
    char *v105;  // [bp-0x90]
    unsigned long long v106;  // [bp-0x88]
    int v107;  // [bp-0x80]
    char v108;  // [bp-0x60]
    char v109;  // [bp-0x48]
    unsigned long long v111;  // rax
    unsigned long long v112;  // rax
    char *v113;  // rdx
    char *v114;  // r15
    char *v115;  // r15
    unsigned long long v116[3];  // rax
    char v117;  // al
    char v118;  // al
    unsigned long long v119[3];  // rax
    char *v120;  // rax
    char *v121;  // r12
    char *v122;  // rbx
    char v123;  // al
    char *v124;  // rbp
    unsigned long long v125;  // r15
    void* v126;  // r13
    char *v127;  // rdi
    char *v128;  // rsi
    char v129[12];  // rdx
    unsigned long long v130;  // rax
    unsigned long v131;  // rax
    unsigned long v132;  // rdx
    char v133;  // al
    unsigned long long v134;  // rax
    char v135;  // al
    unsigned long long v136[3];  // rax
    unsigned int v137;  // ecx
    unsigned long v138;  // rbx
    unsigned long v139;  // r15
    struct_0 *v140;  // rbx
    unsigned long long v141[3];  // rax
    unsigned long v143;  // rbx
    unsigned long v144;  // r15
    char v145;  // al
    unsigned long long v146;  // 4098
    int v147;  // xmm0
    unsigned long long v148[3];  // rdx
    int v149;  // xmm0
    unsigned long long v150;  // rcx
    int v151;  // xmm0

    v111 = 8.alloc_impl(0, 0);
    if (!v111)
        alloc::alloc::handle_alloc_error(8, 0); /* do not return */
    v95 = 0;
    v96 = v111;
    v97 = 0;
    v41.into_iter(&v95);
    if (v41.next())
    {
        do
        {
            v115 = v114;
            if ((char)a1.contains_id(v112, v115) && (char)a1.value_source(v112, v115) == 2)
            {
                v59.to_vec(v112, v115);
                *((char **)&v20[32]) = v61;
                *((int128_t *)&v20[16]) = *((int128_t *)&v59);
                *((unsigned long long *)&v20[8]) = 9223372036854775817;
                *((unsigned long long *)v20) = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(&v41);
                return a0;
            }
            v112 = v41.next();
            v114 = v113;
        } while (v112);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(&v41);
    if (!(char)a1.get_flag("recursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is copied. Implies -vverboseexplicitly state what is being donemake symbolic links instead of copyingforceif an existing", 9))
        a1.get_flag("archiveSame as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --preserve=linksone-file-systemstay on this file systemsparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default type", 7);
    uucore::features::backup_control::determine_backup_mode(&v77, a1);
    if (v77)
    {
        v21 = v77;
        v25 = v78;
        v59 = &(char)v21;
        v60 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v41 = &g_420910;
        v45 = 1;
        v50 = 0;
        v47 = &v59;
        v49 = 1;
        v104.map_or_else(&v41);
        *((char **)&v20[32]) = v105;
        v20[16] = v104;
        *((unsigned long long *)&v20[8]) = 9223372036854775818;
        *((unsigned long long *)v20) = 0x8000000000000000;
        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v21, v25);
        return a0;
    }
    v18 = uucore::features::update_control::determine_update_mode(a1);
    v19 = v78;
    if ((char)v78)
    {
        v41.try_get_one(a1, _ZN6uucore8features14update_control9arguments10OPT_UPDATE17hebbbf4cdadb38e0fE, g_560aa0);
        v116 = _ZN6uucore8features14update_control9arguments10OPT_UPDATE17hebbbf4cdadb38e0fE.unwrap(g_560aa0, &v41);
        if (v116 && (char)uu_cp::Options::from_matches::{{closure}}(v116[1], v116[2]))
        {
            v20 + 16.to_vec("--backup is mutually exclusive with -n or --update=none-failSELinux was not enabled during the compile time!invalid argument  for 'reflink' for 'sparse'", 60);
            *((unsigned long long *)&v20[8]) = 9223372036854775816;
            *((unsigned long long *)v20) = 0x8000000000000000;
            return a0;
        }
    }
    uucore::features::backup_control::determine_backup_suffix(&v82, a1);
    v117 = a1.from_matches();
    v118 = a1.get_flag("no-target-directorycopy all SOURCE arguments into target-directoryTreat DEST as a regular file and not a directoryinteractiveno-clobberask before overwriting filesreflinksymbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overw", 19);
    v41.try_get_one(a1);
    v119 = v41.unwrap();
    v17 = v118;
    if (v119)
    {
        v41.clone(v119[1], v119[2]);
        v69 = v47;
        *((int128_t *)&v66) = *((int128_t *)&v41);
        if (v66 != 0x8000000000000000 && !(char)v68.is_dir(v69))
        {
            v41.clone(v68, v69);
            *((char **)&v20[32]) = v47;
            *((int128_t *)&v20[16]) = *((int128_t *)&v41);
            *((unsigned long long *)&v20[8]) = 9223372036854775819;
            *((unsigned long long *)v20) = 0x8000000000000000;
            core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&(char)v66);
            core::ptr::drop_in_place<alloc::string::String>(&v82);
            return a0;
        }
    }
    else
    {
        v67 = 0x8000000000000000;
    }
    v16 = v117;
    v7 = 1;
    v74 = 0;
    v75 = 8;
    v76 = 0;
    v41 = 0;
    v45 = 5;
    v48 = "preserveENETDOWNOption '";
    v49 = 8;
    v50 = "no-preservedon't preserve the specified attributesparentsparentuse full source file name under DIRECTORYno-dereferencedereferencenever follow symbolic links in SOURCEalways follow symbolic links in SOURCEcli-symbolic-linksfollow command-line symbolic links";
    v51 = 11;
    v52 = "archiveSame as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --preserve=linksone-file-systemstay on this file systemsparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default type";
    v54 = 7;
    v55 = "preserve-default-attributessame as --preserve=mode,ownership(unix only),timestampsno-preservedon't preserve the specified attributesparentsparentuse full source file name under DIRECTORYno-dereferencedereferencenever follow symbolic links in SOURCEalways f";
    v56 = 27;
    v57 = "no-dereference-preserve-linkssame as --no-dereference --preserve=linksone-file-systemstay on this file systemsparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default typeCTXlike -Z, or if CTX is specifie";
    v58 = 29;
    v120 = v41.next();
    if (v120)
    {
        v121 = v120;
        v122 = v113;
        do
        {
            v106.try_get_one(a1, v121, v122);
            v123 = a1.index_of(v121, v122);
            if (!((int)v106 == 2 && (v123 & 1) && (long long)v107))
            {
                v59.try_get_occurrences(a1, v121, v122);
                v98.unwrap(v121, v122, &v59);
                v100.indices_of(a1, v121, v122);
                if ((long long)v98 && (long long)v100)
                {
                    v103 = v99;
                    v102 = v98;
                    v27 = v101;
                    v21 = v100;
                    v59 = &(char)v21;
                    v60 = &v74;
                    v61 = v121;
                    v62 = v122;
                    v102.fold(&v59);
                }
            }
            else if (*((char *)(long long)v107) == 1)
            {
                v61 = v113;
                v59 = v121;
                v60 = v122;
                v62 = 0;
                v64 = 8;
                v65 = 0;
                v74.push(&v59, &g_55e9e8);
            }
            v121 = v41.next();
            v122 = v113;
        } while (v121);
    }
    alloc::slice::<impl [T]>::sort_by(8, 0);
    v1 = 0;
    v0 = 0;
    v77.into_iter(&v74);
    v59.next(&v77);
    v3 = 0;
    v2 = 0;
    v4 = 0;
    if (v62 != 0x8000000000000000)
    {
        v4 = 0;
        v2 = 0;
        v3 = 0;
        v63 = v62;
        do
        {
            v124 = v63;
            v125 = v64;
            v126 = v65;
            if ((char)v59.equal(v60, "archiveSame as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --preserve=linksone-file-systemstay on this file systemsparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default type", 7))
            {
                v1 = 257;
                v0 = 16843009;
                v4 = 65793;
                v3 = 0;
                v2 = 0;
                goto LABEL_49f0ec;
            }
            if ((char)v59.equal(v60, "preserve-default-attributessame as --preserve=mode,ownership(unix only),timestampsno-preservedon't preserve the specified attributesparentsparentuse full source file name under DIRECTORYno-dereferencedereferencenever follow symbolic links in SOURCEalways f", 27))
            {
                v42 = v1;
                v40 = v0;
                v43 = v3;
                v44 = v2;
                v45 = v4;
                v127 = &(char)v21;
                v128 = &v40;
                v129 = &g_424a8c[0];
                v45 = v46;
                goto LABEL_49f0ba;
            }
            else if ((char)v59.equal(v60, "no-dereference-preserve-linkssame as --no-dereference --preserve=linksone-file-systemstay on this file systemsparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default typeCTXlike -Z, or if CTX is specifie", 29))
            {
                v42 = v1;
                v40 = v0;
                v43 = v3;
                v44 = v2;
                v45 = v4;
                v127 = &(char)v21;
                v128 = &v40;
                v129 = &g_424a80[0];
                v45 = v46;
LABEL_49f0ba:
                v127.union(v128, v129);
                v0 = (int)v21;
                v1 = v22;
                v3 = v23;
                v2 = v24;
                v4 = v26;
                goto LABEL_49f0ec;
            }
            else
            {
                if ((char)v59.equal(v60, "preserveENETDOWNOption '", 8))
                {
                    v31 = v1;
                    v30 = v0;
                    v32 = v3;
                    v33 = v2;
                    v34 = v4;
                    v79 = v124;
                    v80 = v125;
                    v81 = v126;
                    (char)v21.into_iter(&v79);
                    v41.parse_iter(&(char)v21);
                    v130 = *((long long *)&v40);
                    v70 = v45;
                    v71 = v48;
                    if (v130 == 9223372036854775820)
                    {
                        v35.union(&v30, &v70);
                        goto LABEL_49f2db;
                    }
                    else
                    {
                        v148 = a0;
                        *((unsigned int *)&v20[60]) = v53;
                        v149 = *((int128_t *)((char *)&v48 + 4));
                        *((int128_t *)&v20[44]) = *((int128_t *)((char *)&v50 + 4));
                        v20[28] = v149;
                        *((unsigned int *)&v20[24]) = v71;
                        v150 = v70;
                        goto LABEL_49f9b0;
                    }
                }
                if (!(char)v59.equal(v60, "no-preservedon't preserve the specified attributesparentsparentuse full source file name under DIRECTORYno-dereferencedereferencenever follow symbolic links in SOURCEalways follow symbolic links in SOURCEcli-symbolic-linksfollow command-line symbolic links", 11) || !v126)
                {
LABEL_49f0ec:
                    core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(v124, v125);
                    continue;
                }
                else
                {
                    v31 = v1;
                    v30 = v0;
                    v32 = v3;
                    v33 = v2;
                    v34 = v4;
                    v79 = v124;
                    v80 = v125;
                    v81 = v126;
                    (char)v21.into_iter(&v79);
                    v41.parse_iter(&(char)v21);
                    v130 = *((long long *)&v40);
                    v72 = v45;
                    v73 = v48;
                    if (v130 != 9223372036854775820)
                    {
                        v148 = a0;
                        *((unsigned int *)&v20[60]) = v53;
                        v151 = *((int128_t *)((char *)&v48 + 4));
                        *((int128_t *)&v20[44]) = *((int128_t *)((char *)&v50 + 4));
                        v20[28] = v151;
                        *((unsigned int *)&v20[24]) = v73;
                        v150 = v72;
LABEL_49f9b0:
                        v148[2] = v150;
                        v148[1] = v130;
                        v148[0] = 0x8000000000000000;
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(usize,&str,alloc::vec::Vec<&alloc::string::String>)>>(&v77);
                        core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&(char)v66);
                        core::ptr::drop_in_place<alloc::string::String>(&v82);
                        return a0;
                    }
                    v35.diff(&v30, &v72);
LABEL_49f2db:
                    v0 = v35;
                    v1 = v36;
                    v3 = v37;
                    v2 = v38;
                    v4 = v39;
                }
            }
            v59.next(&v77);
            v63 = v62;
        } while (v63 != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(usize,&str,alloc::vec::Vec<&alloc::string::String>)>>(&v77);
    if (((char)v3 & 1))
    {
        v59.to_vec("SELinux was not enabled during the compile time!invalid argument  for 'reflink' for 'sparse'", 48);
        v49 = v61;
        *((int128_t *)&v46) = *((int128_t *)&v59);
        v41 = 9223372036854775811;
        if (((char)v2 & 1))
        {
            *((unsigned long long *)&v20[56]) = v52;
            v131 = v41;
            v132 = (long long)(&v46)[8];
            *((int128_t *)&v20[40]) = *((int128_t *)&v50);
            *((unsigned long *)&v20[24]) = v132;
            *((char **)&v20[32]) = v49;
            *((unsigned long *)&v20[8]) = v131;
            *((unsigned long long *)&v20[16]) = v45;
            *((long long *)v20) = 0x8000000000000000;
            core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&(char)v66);
            core::ptr::drop_in_place<alloc::string::String>(&v82);
            return a0;
        }
        uu_cp::show_error_if_needed(&v41);
        core::ptr::drop_in_place<uu_cp::Error>(&v41);
    }
    v133 = a1.get_flag("Zset SELinux security context of destination file to default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXDisplay a progress bar. \nNote: this feature is not supported by GNU coreutils.NotImplemented: copy cont", 1);
    if ((char)a1.contains_id("contextTemplateErrorstate/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/fs.rs", 7))
    {
        v41.try_get_one(a1, "contextTemplateErrorstate/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/fs.rs", 7);
        v134 = "contextTemplateErrorstate/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/fs.rs".unwrap(7, &v41);
        if (!v134)
            goto LABEL_49f3ab;
        v41.clone(v134);
        v27 = (long long)(&v46)[8];
        *((int128_t *)&v21) = *((int128_t *)&v40);
    }
    else
    {
LABEL_49f3ab:
        v21 = 0x8000000000000000;
    }
    v135 = a1.get_flag("attributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is copied. Impli", 15);
    v15 = a1.get_flag("copy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is copied. Implies -vverboseexp", 13);
    v14 = a1.get_flag("cli-symbolic-linksfollow command-line symbolic links in SOURCEarchiveSame as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --preserve=linksone-file-systemstay on this file systemsparsecontrol creation of sparse files. See belowZse", 18);
    v13 = a1.from_matches();
    if (!(char)a1.get_flag("no-dereferencedereferencenever follow symbolic links in SOURCEalways follow symbolic links in SOURCEcli-symbolic-linksfollow command-line symbolic links in SOURCEarchiveSame as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --prese", 14) && !(char)a1.get_flag("no-dereference-preserve-linkssame as --no-dereference --preserve=linksone-file-systemstay on this file systemsparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default typeCTXlike -Z, or if CTX is specifie", 29) && !(char)a1.get_flag("archiveSame as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --preserve=linksone-file-systemstay on this file systemsparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default type", 7))
    {
        v5 = 1;
        if (!v7 || !(char)a1.from_matches())
            goto LABEL_49f47f;
    }
    v5 = a1.get_flag("dereferencenever follow symbolic links in SOURCEalways follow symbolic links in SOURCEcli-symbolic-linksfollow command-line symbolic links in SOURCEarchiveSame as -dR --preserve=allno-dereference-preserve-linkssame as --no-dereference --preserve=linksone-f", 11);
LABEL_49f47f:
    v12 = a1.get_flag("one-file-systemstay on this file systemsparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXDisplay a progr", 15);
    v11 = a1.get_flag("parentsparentuse full source file name under DIRECTORYno-dereferencedereferencenever follow symbolic links in SOURCEalways follow symbolic links in SOURCEcli-symbolic-linksfollow command-line symbolic links in SOURCEarchiveSame as -dR --preserve=allno-dere", 7);
    v10 = a1.get_flag("debugexplain how a file is copied. Implies -vverboseexplicitly state what is being donemake symbolic links instead of copyingforceif an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also u", 5);
    v6 = 1;
    if (!(char)a1.get_flag("verboseexplicitly state what is being donemake symbolic links instead of copyingforceif an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used). Currently not implemented for Windows.r", 7))
        v6 = a1.get_flag("debugexplain how a file is copied. Implies -vverboseexplicitly state what is being donemake symbolic links instead of copyingforceif an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also u", 5);
    v9 = a1.get_flag("strip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a file is copied. Implies -vverboseexplicitly state what is being donemake symbolic links instead of copyingforceif an existing destination file cannot be opened, r", 22);
    v41.try_get_one(a1, "reflinksymbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a f", 7);
    v136 = "reflinksymbolic-linkattributes-onlycopy-contentshard-link files instead of copyingdon't overwrite a file that already existsrecursivecopy directories recursivelystrip-trailing-slashesremove any trailing slashes from each SOURCE argumentdebugexplain how a f".unwrap(7, &v41);
    v29 = v137 & 0xffffff00 | 1;
    if (v136)
    {
        v138 = v136[1];
        v139 = v136[2];
        if ((char)v138.equal(v139, "alwaysnevercontrol clone/CoW copies. See belowDon't copy the file data, just the attributesATTR_LISTmode,ownership,timestampPreserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, li", 6))
        {
            v29 = 0;
        }
        else if (!(char)v138.equal(v139, "auto", 4))
        {
            v29 = v137 & 0xffffff00 | 2;
            if (!(char)v138.equal(v139, "nevercontrol clone/CoW copies. See belowDon't copy the file data, just the attributesATTR_LISTmode,ownership,timestampPreserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, x", 5))
            {
                v59 = 0;
                v60 = v138;
                v61 = v139;
                v62 = 1;
                v77 = &v59;
                v78 = <os_display::Quoted as core::fmt::Display>::fmt;
                v41 = &g_55e9a8;
                v45 = 2;
                v50 = 0;
                v47 = &v77;
                v49 = 1;
                v140 = &v108;
                v108.map_or_else(&v41);
LABEL_49f90e:
                *((struct struct_1 **)&v20[32]) = v140->field_10;
                *((char [16])&v20[16]) = v140->field_0;
                *((unsigned long long *)&v20[8]) = 9223372036854775816;
                *((long long *)v20) = 0x8000000000000000;
                core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&(char)v21);
                core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&(char)v66);
                core::ptr::drop_in_place<alloc::string::String>(&v82);
                return a0;
            }
        }
    }
    v41.try_get_one(a1, "sparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXDisplay a progress bar. \nNote: this feature is not sup", 6);
    v141 = "sparsecontrol creation of sparse files. See belowZset SELinux security context of destination file to default typeCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXDisplay a progress bar. \nNote: this feature is not sup".unwrap(6, &v41);
    v8 = v135;
    if (!v141)
    {
        v145 = a1.get_flag("progress", 8);
        v146 = (long long)v21;
        v147 = (int128_t)v21;
        v90 = v147;
        v92 = v27;
        v94 = v1;
        v93 = v0;
        v85 = v82;
        v86 = v83;
        memcpy(&v87, &(char)v66, 16);
        v89 = v69;
        v20[48] = v147;
        *((unsigned short *)&v20[62]) = v91;
        *((unsigned long *)&v20[64]) = v92;
        *((unsigned int *)&v20[72]) = v93;
        *((unsigned short *)&v20[76]) = v94;
        *((char **)&v20[32]) = v88;
        *((char **)&v20[40]) = v89;
        *(v20) = v82;
        *((int128_t *)&v20[16]) = *((int128_t *)&v86);
        *((char *)&v20[78]) = v3;
        *((char *)&v20[79]) = v2;
        *((unsigned int *)&v20[80]) = v4;
        *((char *)&v20[84]) = v16;
        *((char *)&v20[85]) = (char)v113;
        *((char *)&v20[86]) = v8;
        *((char *)&v20[87]) = v15;
        *((char *)&v20[88]) = v14;
        *((char *)&v20[89]) = v5;
        *((char *)&v20[90]) = v17;
        *((char *)&v20[91]) = v12;
        *((char *)&v20[92]) = v11;
        *((char *)&v20[93]) = v9;
        *((char *)&v20[94]) = v7;
        *((char *)&v20[95]) = v10;
        *((char *)&v20[96]) = v6;
        *((char *)&v20[97]) = v145;
        *((char *)&v20[98]) = v133 | v146 != 0x8000000000000000;
        *((char *)&v20[99]) = 1;
        *((char *)&v20[100]) = v29;
        *((char *)&v20[101]) = v19;
        *((char *)&v20[102]) = v18;
        *((char *)&v20[103]) = v13;
        return a0;
    }
    v84[0] = v141;
    v143 = v141[1];
    v144 = v141[2];
    if ((char)v143.equal(v144, "alwaysnevercontrol clone/CoW copies. See belowDon't copy the file data, just the attributesATTR_LISTmode,ownership,timestampPreserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, li", 6))
    {
        v145 = a1.get_flag("progress", 8);
        v146 = (long long)v21;
        v147 = (int128_t)v21;
        v90 = v147;
        v92 = v27;
        v94 = v1;
        v93 = v0;
        v85 = v82;
        v86 = v83;
        memcpy(&v87, &(char)v66, 16);
        v89 = v69;
        v20[48] = v147;
        *((unsigned short *)&v20[62]) = v91;
        *((unsigned long *)&v20[64]) = v92;
        *((unsigned int *)&v20[72]) = v93;
        *((unsigned short *)&v20[76]) = v94;
        *((char **)&v20[32]) = v88;
        *((char **)&v20[40]) = v89;
        *(v20) = v82;
        *((int128_t *)&v20[16]) = *((int128_t *)&v86);
        *((char *)&v20[78]) = v3;
        *((char *)&v20[79]) = v2;
        *((unsigned int *)&v20[80]) = v4;
        *((char *)&v20[84]) = v16;
        *((char *)&v20[85]) = (char)v113;
        *((char *)&v20[86]) = v8;
        *((char *)&v20[87]) = v15;
        *((char *)&v20[88]) = v14;
        *((char *)&v20[89]) = v5;
        *((char *)&v20[90]) = v17;
        *((char *)&v20[91]) = v12;
        *((char *)&v20[92]) = v11;
        *((char *)&v20[93]) = v9;
        *((char *)&v20[94]) = v7;
        *((char *)&v20[95]) = v10;
        *((char *)&v20[96]) = v6;
        *((char *)&v20[97]) = v145;
        *((char *)&v20[98]) = v133 | v146 != 0x8000000000000000;
        *((char *)&v20[99]) = 1;
        *((char *)&v20[100]) = v29;
        *((char *)&v20[101]) = v19;
        *((char *)&v20[102]) = v18;
        *((char *)&v20[103]) = v13;
        return a0;
    }
    if ((char)v143.equal(v144, "auto", 4))
    {
        v145 = a1.get_flag("progress", 8);
        v146 = (long long)v21;
        v147 = (int128_t)v21;
        v90 = v147;
        v92 = v27;
        v94 = v1;
        v93 = v0;
        v85 = v82;
        v86 = v83;
        memcpy(&v87, &(char)v66, 16);
        v89 = v69;
        v20[48] = v147;
        *((unsigned short *)&v20[62]) = v91;
        *((unsigned long *)&v20[64]) = v92;
        *((unsigned int *)&v20[72]) = v93;
        *((unsigned short *)&v20[76]) = v94;
        *((char **)&v20[32]) = v88;
        *((char **)&v20[40]) = v89;
        *(v20) = v82;
        *((int128_t *)&v20[16]) = *((int128_t *)&v86);
        *((char *)&v20[78]) = v3;
        *((char *)&v20[79]) = v2;
        *((unsigned int *)&v20[80]) = v4;
        *((char *)&v20[84]) = v16;
        *((char *)&v20[85]) = (char)v113;
        *((char *)&v20[86]) = v8;
        *((char *)&v20[87]) = v15;
        *((char *)&v20[88]) = v14;
        *((char *)&v20[89]) = v5;
        *((char *)&v20[90]) = v17;
        *((char *)&v20[91]) = v12;
        *((char *)&v20[92]) = v11;
        *((char *)&v20[93]) = v9;
        *((char *)&v20[94]) = v7;
        *((char *)&v20[95]) = v10;
        *((char *)&v20[96]) = v6;
        *((char *)&v20[97]) = v145;
        *((char *)&v20[98]) = v133 | v146 != 0x8000000000000000;
        *((char *)&v20[99]) = 1;
        *((char *)&v20[100]) = v29;
        *((char *)&v20[101]) = v19;
        *((char *)&v20[102]) = v18;
        *((char *)&v20[103]) = v13;
        return a0;
    }
    if ((char)v143.equal(v144, "nevercontrol clone/CoW copies. See belowDon't copy the file data, just the attributesATTR_LISTmode,ownership,timestampPreserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, x", 5))
    {
        v145 = a1.get_flag("progress", 8);
        v146 = (long long)v21;
        v147 = (int128_t)v21;
        v90 = v147;
        v92 = v27;
        v94 = v1;
        v93 = v0;
        v85 = v82;
        v86 = v83;
        memcpy(&v87, &(char)v66, 16);
        v89 = v69;
        v20[48] = v147;
        *((unsigned short *)&v20[62]) = v91;
        *((unsigned long *)&v20[64]) = v92;
        *((unsigned int *)&v20[72]) = v93;
        *((unsigned short *)&v20[76]) = v94;
        *((char **)&v20[32]) = v88;
        *((char **)&v20[40]) = v89;
        *(v20) = v82;
        *((int128_t *)&v20[16]) = *((int128_t *)&v86);
        *((char *)&v20[78]) = v3;
        *((char *)&v20[79]) = v2;
        *((unsigned int *)&v20[80]) = v4;
        *((char *)&v20[84]) = v16;
        *((char *)&v20[85]) = (char)v113;
        *((char *)&v20[86]) = v8;
        *((char *)&v20[87]) = v15;
        *((char *)&v20[88]) = v14;
        *((char *)&v20[89]) = v5;
        *((char *)&v20[90]) = v17;
        *((char *)&v20[91]) = v12;
        *((char *)&v20[92]) = v11;
        *((char *)&v20[93]) = v9;
        *((char *)&v20[94]) = v7;
        *((char *)&v20[95]) = v10;
        *((char *)&v20[96]) = v6;
        *((char *)&v20[97]) = v145;
        *((char *)&v20[98]) = v133 | v146 != 0x8000000000000000;
        *((char *)&v20[99]) = 2;
        *((char *)&v20[100]) = v29;
        *((char *)&v20[101]) = v19;
        *((char *)&v20[102]) = v18;
        *((char *)&v20[103]) = v13;
        return a0;
    }
    v59 = &v84;
    v60 = <&T as core::fmt::Display>::fmt;
    v41 = &g_55e9c8;
    v45 = 2;
    v50 = 0;
    v47 = &v59;
    v49 = 1;
    v140 = &v109;
    v109.map_or_else(&v41);
    goto LABEL_49f90e;
}
