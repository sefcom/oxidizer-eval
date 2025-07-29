long long uu_cp::Options::from_matches(unsigned long long a0[3], unsigned long long a1)
{
    unsigned int v0;  // [bp-0x2fc]
    unsigned short v1;  // [bp-0x2f8]
    unsigned int v2;  // [bp-0x2f4]
    char v3;  // [bp-0x2f0]
    char v4;  // [bp-0x2ef]
    char v5;  // [bp-0x2ee]
    char v6;  // [bp-0x2ed]
    char v7;  // [bp-0x2ec]
    char v8;  // [bp-0x2eb]
    char v9;  // [bp-0x2ea]
    char v10;  // [bp-0x2e9]
    char v11;  // [bp-0x2e8]
    char v12;  // [bp-0x2e7]
    char v13;  // [bp-0x2e6]
    char v14;  // [bp-0x2e5]
    char v15;  // [bp-0x2e4]
    char v16;  // [bp-0x2e2]
    char v17;  // [bp-0x2e1]
    struct_0 *v18;  // [bp-0x2e0]
    unsigned int v19;  // [sp-0x2d8]
    int v20;  // [bp-0x2d8], Other Possible Types: unsigned long, unsigned long long
    int v21;  // [bp-0x2d8]
    unsigned short v22;  // [sp-0x2d4]
    char v23;  // [sp-0x2d2]
    char v24;  // [bp-0x2d1]
    unsigned int v25;  // [bp-0x2d0], Other Possible Types: unsigned long long
    int v26;  // [bp-0x2d0], Other Possible Types: unsigned long long
    int v27;  // [bp-0x2c8]
    char *v28;  // [bp-0x2c8]
    unsigned long long v29;  // [bp-0x2c8]
    char *v30;  // [bp-0x2c0], Other Possible Types: unsigned long long
    void* v31;  // [bp-0x2b8], Other Possible Types: int, unsigned long long
    unsigned long long v32;  // [bp-0x2b0]
    int v33;  // [bp-0x2a8], Other Possible Types: unsigned long
    unsigned int v34;  // [bp-0x2a4]
    unsigned long long v35;  // [bp-0x2a0]
    unsigned long long v36;  // [bp-0x298]
    char *v37;  // [bp-0x290], Other Possible Types: unsigned long long
    void* v38;  // [bp-0x288], Other Possible Types: unsigned long long
    unsigned long long v39;  // [bp-0x280]
    char *v40;  // [bp-0x278], Other Possible Types: int, char
    int v41;  // [bp-0x278]
    int v42;  // [bp-0x278]
    int v43;  // [bp-0x278]
    unsigned long long v44;  // [sp-0x270]
    char *v45;  // [bp-0x270]
    char *v46;  // [bp-0x268], Other Possible Types: unsigned long long
    char *v47;  // [bp-0x260], Other Possible Types: int
    unsigned long long v48;  // [bp-0x258]
    unsigned long long v49;  // [sp-0x250]
    void* v50;  // [bp-0x250], Other Possible Types: unsigned long long
    unsigned int v51;  // [bp-0x23c]
    unsigned int v52;  // [bp-0x238]
    unsigned int v53;  // [bp-0x234]
    unsigned short v54;  // [bp-0x230]
    char v55;  // [bp-0x22e]
    char v56;  // [bp-0x22d]
    unsigned int v57;  // [bp-0x22c]
    unsigned int v58;  // [bp-0x228]
    int v59;  // [sp-0x228], Other Possible Types: unsigned long long
    unsigned short v60;  // [bp-0x224]
    char v61;  // [bp-0x222]
    char v62;  // [bp-0x221]
    unsigned int v63;  // [bp-0x220]
    unsigned long long v64;  // [bp-0x218]
    int v65;  // [bp-0x208], Other Possible Types: unsigned long long
    unsigned short v66;  // [bp-0x204]
    char v67;  // [bp-0x202]
    char v68;  // [bp-0x201]
    unsigned long long v69;  // [bp-0x200]
    unsigned long long v70;  // [bp-0x1f8]
    int v71;  // [bp-0x1f0]
    unsigned long long v72;  // [bp-0x1e0]
    unsigned long long v73;  // [bp-0x1d0], Other Possible Types: char
    void* v74;  // [bp-0x1c8], Other Possible Types: char, unsigned long long
    unsigned long v75;  // [bp-0x1c0], Other Possible Types: unsigned long long
    unsigned long v76;  // [bp-0x1b8], Other Possible Types: unsigned long long
    char v77;  // [bp-0x1b0]
    int v78;  // [bp-0x1a8], Other Possible Types: char
    unsigned long long v79;  // [bp-0x198]
    int v80;  // [bp-0x188], Other Possible Types: unsigned long
    unsigned long long v81;  // [bp-0x188]
    unsigned long long v82;  // [bp-0x180]
    char *v83;  // [bp-0x178]
    unsigned long long v84;  // [bp-0x170]
    unsigned int v85;  // [bp-0x168]
    unsigned long long v86;  // [bp-0x160]
    unsigned int v87;  // [bp-0x158]
    void* v88;  // [bp-0x150]
    unsigned long long v89;  // [bp-0x148]
    void* v90;  // [bp-0x140]
    int v91;  // [bp-0x138], Other Possible Types: char
    unsigned long long v92;  // [bp-0x128]
    char v93;  // [bp-0x120], Other Possible Types: unsigned long
    char *v94;  // [bp-0x118]
    char *v95;  // [bp-0x110]
    char v96;  // [bp-0x108]
    unsigned short v97;  // [bp-0xfa]
    unsigned long long v98;  // [bp-0xf8]
    unsigned int v99;  // [bp-0xf0]
    unsigned short v100;  // [bp-0xec]
    int v101;  // [bp-0xe8], Other Possible Types: char
    unsigned long long v102;  // [bp-0xd8]
    void* v103;  // [bp-0xd0]
    unsigned long long v104;  // [bp-0xc8]
    void* v105;  // [bp-0xc0]
    int v106;  // [bp-0xb8]
    unsigned long long v107;  // [bp-0xa8]
    int v108;  // [bp-0xa0]
    unsigned long long v109;  // [bp-0x90]
    int v110;  // [bp-0x88]
    unsigned long long v111;  // [bp-0x78]
    int v112;  // [bp-0x70], Other Possible Types: char
    char *v113;  // [bp-0x60]
    unsigned long long v114;  // [bp-0x58]
    char v115;  // [bp-0x50]
    unsigned long long v117;  // rax
    unsigned long long v118;  // rax
    char *v119;  // rdx
    char *v120;  // r15
    char *v121;  // r15
    char v122;  // r13b
    unsigned long long v123[3];  // rax
    char v124;  // al
    char v125;  // al
    unsigned long long v126;  // rax
    char *v127;  // rbp
    unsigned long long v128;  // rax
    char v129;  // r13b
    char v130;  // bpl
    char *v131;  // rdi
    char *v132;  // rsi
    char v133[12];  // rdx
    unsigned long long v134;  // rax
    unsigned long long v135;  // rax
    unsigned long long v136;  // rdx
    unsigned long long v137;  // rax
    unsigned long long v138[3];  // rax
    unsigned int v139;  // ecx
    unsigned long v140;  // rbx
    unsigned long v141;  // r15
    int v142;  // xmm2
    int v143;  // xmm3
    unsigned long long v144[3];  // rbx
    unsigned long long v145;  // r15
    int v146;  // xmm0
    int v147;  // xmm2
    int v148;  // xmm3
    char v149;  // al
    char v150;  // r14b
    unsigned long long v151[3];  // rdx
    int v152;  // xmm0
    unsigned long long v153;  // rcx
    int v154;  // xmm0
    char *v156;  // [bp-0x278]

    v117 = 0.alloc_impl();
    if (!v117)
        alloc::alloc::handle_alloc_error(8, 0); /* do not return */
    v103 = 0;
    v104 = v117;
    v105 = 0;
    (char)v20.into_iter(&v103);
    if ((char)v20.next())
    {
        do
        {
            v121 = v120;
            if ((char)a1.contains_id(v118, v121) && (char)a1.value_source(v118, v121) == 2)
            {
                v40.to_vec(v118, v121);
                v18->field_1c = v46;
                *((int128_t *)&v18->field_10) = *((int128_t *)&v40);
                *((unsigned long long *)&v18->padding_1[7]) = 9223372036854775817;
                *((unsigned long long *)&v18->field_0) = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(&(char)v20);
                return a0;
            }
            v118 = (char)v20.next();
            v120 = v119;
        } while (v118);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(&(char)v20);
    if (!(char)a1.get_flag("recursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_L", 9))
        a1.get_flag("archivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/to", 7);
    uucore::features::backup_control::determine_backup_mode(&v74, a1);
    if (v74)
    {
        v65 = v74;
        v69 = v75;
        v40 = &(char)v65;
        v44 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v20 = &g_4390f0;
        v25 = 1;
        v31 = 0;
        v28 = &v40;
        v30 = 1;
        v112.map_or_else(&(char)v20);
        v18->field_1c = v113;
        *((void*)&v18->field_10) = v112;
        *((unsigned long long *)&v18->padding_1[7]) = 9223372036854775818;
        *((unsigned long long *)&v18->field_0) = 0x8000000000000000;
        ::0x4d3530::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v65, v69);
        return a0;
    }
    v122 = v75;
    v17 = uucore::features::update_control::determine_update_mode(a1);
    if (v122)
    {
        (char)v20.try_get_one(a1, _ZN6uucore8features14update_control9arguments10OPT_UPDATE17h95c884df776c9effE, g_5ffb88);
        v123 = _ZN6uucore8features14update_control9arguments10OPT_UPDATE17h95c884df776c9effE.unwrap(g_5ffb88, &(char)v20);
        if (v123 && (char)uu_cp::Options::from_matches::{{closure}}(v123[1], v123[2]))
        {
            uucore::mods::locale::get_message(&(char)v20, "cp-error-invalid-backup-argumentoverride the usual backup suffix", 32);
            (char)v40.clone(&(char)v20);
            v18->field_1c = v46;
            *((int128_t *)&v18->field_10) = *((int128_t *)&v40);
            *((unsigned long long *)&v18->padding_1[7]) = 9223372036854775816;
            *((unsigned long long *)&v18->field_0) = 0x8000000000000000;
            ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&(char)v20);
            return a0;
        }
    }
    uucore::features::backup_control::determine_backup_suffix(&v101, a1);
    v124 = a1.from_matches();
    v125 = a1.get_flag("no-target-directorycp-help-target-directorycp-help-no-target-directoryinteractiveno-clobbercp-help-interactivesymbolic-linkattributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slas", 19);
    (char)v20.try_get_one(a1, "target-directory", 16);
    v126 = "target-directory".unwrap(16, &(char)v20);
    if (v126)
    {
        (char)v20.clone(v126);
        v83 = v28;
        *((int128_t *)&v80) = *((int128_t *)&v20);
        if (v80 != 0x8000000000000000 && !(char)v82.is_dir(v83))
        {
            (char)v20.clone(&(char)v81);
            v18->field_1c = v28;
            *((int128_t *)&v18->field_10) = *((int128_t *)&v20);
            *((unsigned long long *)&v18->padding_1[7]) = 9223372036854775819;
            *((unsigned long long *)&v18->field_0) = 0x8000000000000000;
            ::0x4d4130::core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&(char)v81);
            ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&v101);
            return a0;
        }
    }
    else
    {
        v81 = 0x8000000000000000;
    }
    v14 = v125;
    v15 = v124;
    v16 = v122;
    v4 = 1;
    v88 = 0;
    v89 = 8;
    v90 = 0;
    v20 = "preserve";
    v25 = 8;
    v29 = "no-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-links";
    v30 = 11;
    v31 = "archivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/to";
    v32 = 7;
    v33 = "preserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-";
    v35 = 27;
    v36 = "no-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/toolchains/nightly-2025-";
    v37 = 29;
    v38 = 0;
    v39 = 5;
    while (true)
    {
        v127 = (char)v20.next();
        if (!v127)
            break;
        v114.try_get_one(a1, v127, v119);
        v128 = a1.index_of(v127, v119);
        if (!((int)v114 == 2 && v128 == 1 && *((long long *)&v115)))
        {
            v156.try_get_occurrences(a1, v127, v119);
            v106.unwrap(v127, v119, &v156);
            v108.indices_of(a1, v127, v119);
            if ((long long)v106 && (long long)v108)
            {
                v111 = v107;
                v110 = v106;
                v70 = v109;
                v65 = v108;
                v156 = &(char)v65;
                v45 = &v88;
                v46 = v127;
                v47 = v119;
                v110.fold(&v156);
            }
        }
        else if (*((char *)*((long long *)&v115)) == 1)
        {
            v46 = v119;
            v156 = v127;
            v45 = v119;
            v47 = 0;
            v48 = 8;
            v50 = 0;
            v88.push(&v156, &g_5fb6a8);
        }
    }
    core::ptr::drop_in_place<core::array::iter::IntoIter<&str,5_usize>>();
    alloc::slice::<impl [T]>::sort_by(8, 0);
    v1 = 0;
    v0 = 0;
    v74.into_iter(&v88);
    v156.next(&v74);
    v129 = 0;
    v130 = 0;
    v2 = 0;
    if (v47 != 0x8000000000000000)
    {
        v2 = 0;
        v73 = 9223372036854775820;
        v130 = 0;
        v129 = 0;
        do
        {
            v79 = v50;
            memcpy(&v78, &v47, 16);
            if ((char)v156.equal(v45, "archivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/to", 7))
            {
                v1 = 257;
                v0 = 16843009;
                v2 = 65793;
                v129 = 0;
                v130 = 0;
                goto LABEL_4da671;
            }
            if ((char)v156.equal(v45, "preserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-", 27))
            {
                v22 = v1;
                v19 = v0;
                v23 = v129;
                v24 = v130;
                v25 = v2;
                v131 = &(char)v65;
                v132 = &v19;
                v133 = &g_43b5ba[0];
                v25 = v26;
                goto LABEL_4da637;
            }
            else if ((char)v156.equal(v45, "no-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/toolchains/nightly-2025-", 29))
            {
                v22 = v1;
                v19 = v0;
                v23 = v129;
                v24 = v130;
                v25 = v2;
                v131 = &(char)v65;
                v132 = &v19;
                v133 = &g_43b5ae[0];
                v25 = v26;
LABEL_4da637:
                v131.union(v132, v133);
                v0 = (int)v65;
                v1 = v66;
                v129 = v67;
                v130 = v68;
                v2 = v69;
                goto LABEL_4da671;
            }
            else
            {
                if ((char)v156.equal(v45, "preserve", 8))
                {
                    v60 = v1;
                    v58 = v0;
                    v61 = v129;
                    v62 = v130;
                    v63 = v2;
                    (char)v65.into_iter(&v78);
                    (char)v20.parse_iter(&(char)v65);
                    v134 = v20;
                    v84 = v25;
                    v85 = v29;
                    if (v134 == v73)
                    {
                        v53.union(&v58, &v84);
                        goto LABEL_4da847;
                    }
                    else
                    {
                        v151 = a0;
                        *((unsigned int *)&v18->field_28[16]) = v34;
                        v152 = *((int128_t *)((char *)&v29 + 4));
                        *((int128_t *)&v18->field_28[0]) = *((int128_t *)((char *)&v31 + 4));
                        *((void*)&(&v18->padding_11)[1]) = v152;
                        *((unsigned int *)&v18->padding_11[7]) = v85;
                        v153 = v84;
                        goto LABEL_4db23b;
                    }
                }
                if (!(char)v156.equal(v45, "no-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-links", 11) || !v79)
                {
LABEL_4da671:
                    ::0x4d4190::core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(&v78);
                }
                else
                {
                    v60 = v1;
                    v58 = v0;
                    v61 = v129;
                    v62 = v130;
                    v63 = v2;
                    (char)v65.into_iter(&v78);
                    (char)v20.parse_iter(&(char)v65);
                    v134 = v20;
                    v86 = v25;
                    v87 = v29;
                    if (v134 != v73)
                    {
                        v151 = a0;
                        *((unsigned int *)&v18->field_28[16]) = v34;
                        v154 = *((int128_t *)((char *)&v29 + 4));
                        *((int128_t *)&v18->field_28[0]) = *((int128_t *)((char *)&v31 + 4));
                        *((void*)&(&v18->padding_11)[1]) = v154;
                        *((unsigned int *)&v18->padding_11[7]) = v87;
                        v153 = v86;
LABEL_4db23b:
                        v151[2] = v153;
                        v151[1] = v134;
                        v151[0] = 0x8000000000000000;
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(usize,&str,alloc::vec::Vec<&alloc::string::String>)>>(&v74);
                        ::0x4d4130::core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&(char)v81);
                        ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&v101);
                        return a0;
                    }
                    v53.diff(&v58, &v86);
LABEL_4da847:
                    v0 = v53;
                    v1 = v54;
                    v129 = v55;
                    v130 = v56;
                    v2 = v57;
                }
            }
            v156.next(&v74);
        } while (v47 != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(usize,&str,alloc::vec::Vec<&alloc::string::String>)>>(&v74);
    if ((v129 & 1))
    {
        uucore::mods::locale::get_message(&v156, "cp-error-selinux-not-enabledcp-error-invalid-argument", 28);
        v30 = v46;
        *((int128_t *)&v26) = *((int128_t *)&v156);
        v20 = 9223372036854775811;
        if ((v130 & 1))
        {
            *((unsigned long *)&v18->field_28[12]) = v33;
            v135 = v20;
            v136 = (long long)(&v26)[8];
            *((int128_t *)&v18->padding_24) = *((int128_t *)&v31);
            *((unsigned long long *)&v18->padding_11[7]) = v136;
            v18->field_1c = v30;
            *((unsigned long long *)&v18->padding_1[7]) = v135;
            *((unsigned long long *)&v18->field_10) = v25;
            *((unsigned long long *)&v18->field_0) = 0x8000000000000000;
            ::0x4d4130::core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&(char)v81);
            ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&v101);
            return a0;
        }
        uu_cp::show_error_if_needed(&(char)v20);
        ::0x4d37f0::core::ptr::drop_in_place<uu_cp::CpError>(&(char)v20);
    }
    v13 = a1.get_flag("Zcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 1);
    if ((char)a1.contains_id("contextlinksxattrall\n\n(uutils coreutils) 0.1.0cp-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  ", 7))
    {
        (char)v20.try_get_one(a1, "contextlinksxattrall\n\n(uutils coreutils) 0.1.0cp-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  ", 7);
        v137 = "contextlinksxattrall\n\n(uutils coreutils) 0.1.0cp-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  ".unwrap(7, &(char)v20);
        if (!v137)
            goto LABEL_4da926;
        (char)v20.clone(v137);
        v64 = (long long)(&v26)[8];
        *((int128_t *)&v59) = *((int128_t *)&v19);
    }
    else
    {
LABEL_4da926:
        v59 = 0x8000000000000000;
    }
    v12 = a1.get_flag("attributes-onlycopy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinat", 15);
    v11 = a1.get_flag("copy-contentscp-help-linkcp-help-no-clobberrecursivecp-help-recursivestrip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysneverc", 13);
    v10 = a1.get_flag("cli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-erro", 18);
    v9 = a1.from_matches();
    if (!(char)a1.get_flag("no-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-he", 14) && !(char)a1.get_flag("no-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/toolchains/nightly-2025-", 29) && !(char)a1.get_flag("archivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/to", 7))
    {
        v3 = 1;
        if (!(v4 && !(!(char)a1.from_matches())))
            goto LABEL_4daa0b;
    }
    v3 = a1.get_flag("dereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXc", 11);
LABEL_4daa0b:
    v8 = a1.get_flag("one-file-systemcp-help-one-file-systemcp-help-sparseZcp-help-selinuxCTXcp-help-contextcp-help-copy-contentspathsvaluecp-error-invalid-attributeargoption/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/sr", 15);
    v7 = a1.get_flag("parentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-symbolic-linkscp-help-cli-symbolic-linksarchivecp-help-archiveno-dereference-preserve-linkscp-help-no-dereference-preserve-linksone-file-systemcp-help-one-fil", 7);
    v6 = a1.get_flag("debugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-default", 5);
    v73 = 1;
    if (!(char)a1.get_flag("verbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help", 7))
        v73 = a1.get_flag("debugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-default", 5);
    v5 = a1.get_flag("strip-trailing-slashescp-help-strip-trailing-slashesdebugcp-help-debugverbosecp-help-verbosecp-help-symbolic-linkforcecp-help-forceremove-destinationcp-help-remove-destinationalwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestam", 22);
    (char)v20.try_get_one(a1, "reflinksparse\ncp-debug-copy-offload", 7);
    v138 = "reflinksparse\ncp-debug-copy-offload".unwrap(7, &(char)v20);
    v52 = v139 & 0xffffff00 | 1;
    if (v138)
    {
        v140 = v138[1];
        v141 = v138[2];
        if ((char)v140.equal(v141, "alwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferenc", 6))
        {
            v52 = 0;
        }
        else if (!(char)v140.equal(v141, "auto", 4))
        {
            v52 = v139 & 0xffffff00 | 2;
            if (!(char)v140.equal(v141, "nevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-s", 5))
            {
                (char)v20.to_vec("argoption/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 3);
                v46 = (long long)(&v26)[8];
                *((int128_t *)&v40) = *((int128_t *)&v19);
                v74 = 0;
                v75 = v140;
                v76 = v141;
                v77 = 1;
                (char)v20.spec_to_string(&v74);
                v70 = v46;
                *((int128_t *)&v65) = *((int128_t *)&v156);
                *((int128_t *)&v71) = *((int128_t *)&v19);
                v72 = (long long)(&v26)[8];
                (char)v20.to_vec("option/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 6);
                v79 = (long long)(&v26)[8];
                memcpy(&v78, &(char)v20, 16);
                (char)v20.to_vec("reflinksparse\ncp-debug-copy-offload", 7);
                v49 = (long long)(&v26)[8];
                *((int128_t *)&v47) = *((int128_t *)&v19);
                v46 = v79;
                v41 = v78;
                v142 = *((int128_t *)&v70);
                v143 = (int128_t)(&v71)[8];
                *((int128_t *)&v21) = (int128_t)v65;
                v27 = v142;
                v31 = v143;
                v38 = v48;
                v39 = v49;
                v36 = v46;
                v37 = v47;
                v33 = v78;
                (unsigned long long)v41.from_iter(&(char)v20);
                uucore::mods::locale::get_message_with_args(&(char)v20, "cp-error-invalid-argument", 25, &(unsigned long long)v41);
                goto LABEL_4db199;
            }
        }
    }
    (char)v20.try_get_one(a1, "sparse\ncp-debug-copy-offload", 6);
    v144 = "sparse\ncp-debug-copy-offload".unwrap(6, &(char)v20);
    v51 = (unsigned int)v144 & 0xffffff00 | 1;
    if (v144)
    {
        v145 = v144[1];
        if ((char)v145.equal(v144[2], "alwaysnevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferenc", 6))
        {
            v51 = 0;
        }
        else if (!(char)v145.equal(v144[2], "auto", 4))
        {
            v51 = v139 & 0xffffff00 | 2;
            if (!(char)v145.equal(v144[2], "nevercp-help-reflinkcp-help-attributes-onlyATTR_LISTmode,ownership,timestamppreserve-default-attributescp-help-preserve-defaultno-preservecp-help-no-preserveparentsparentcp-help-parentsno-dereferencedereferencecp-help-no-dereferencecp-help-dereferencecli-s", 5))
            {
                (char)v20.to_vec("argoption/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 3);
                v46 = (long long)(&v26)[8];
                *((int128_t *)&v42) = *((int128_t *)&v19);
                (char)v20.clone(v144);
                v70 = v46;
                *((int128_t *)&v65) = *((int128_t *)&v156);
                *((int128_t *)&v71) = *((int128_t *)&v19);
                v72 = (long long)(&v26)[8];
                (char)v20.to_vec("option/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 6);
                v76 = (long long)(&v26)[8];
                memcpy(&v74, &(char)v20, 16);
                (char)v20.to_vec("sparse\ncp-debug-copy-offload", 6);
                v49 = (long long)(&v26)[8];
                *((int128_t *)&v47) = *((int128_t *)&v19);
                v46 = v76;
                v146 = *((int128_t *)&v74);
                v43 = v146;
                v147 = *((int128_t *)&v70);
                v148 = (int128_t)(&v71)[8];
                *((int128_t *)&v21) = (int128_t)v65;
                v27 = v147;
                v31 = v148;
                v38 = v48;
                v39 = v49;
                v36 = v46;
                v37 = v47;
                v33 = v146;
                (unsigned long long)v41.from_iter(&(char)v20);
                uucore::mods::locale::get_message_with_args(&(char)v20, "cp-error-invalid-argument", 25, &(unsigned long long)v41);
LABEL_4db199:
                v18->field_1c = (long long)v27;
                *((int128_t *)&v18->field_10) = (int128_t)v21;
                *((unsigned long long *)&v18->padding_1[7]) = 9223372036854775816;
                *((unsigned long long *)&v18->field_0) = 0x8000000000000000;
                ::0x4d4280::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v58);
                ::0x4d4130::core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&(char)v81);
                ::0x4d38f0::core::ptr::drop_in_place<alloc::string::String>(&v101);
                return a0;
            }
        }
    }
    v46 = v102;
    v40 = v101;
    v28 = v83;
    *((int128_t *)&v20) = (int128_t)v80;
    v149 = a1.get_flag("progress", 8);
    v150 = v13 | (long long)v59 != 0x8000000000000000;
    memcpy(&v96, &v58, 16);
    v98 = v64;
    v99 = v0;
    v100 = v1;
    memcpy(&v91, &v40, 16);
    v92 = v46;
    memcpy(&v93, &(char)v20, 16);
    v95 = v28;
    *((unsigned short *)&v18->field_28[18]) = v97;
    *((unsigned long long *)&v18->field_28[20]) = v98;
    *((unsigned int *)&v18->field_2c[4]) = v99;
    *((unsigned short *)&v18->field_2c[8]) = v100;
    v18->field_1c = v94;
    *((char **)&v18->padding_24) = v95;
    *((unsigned long long *)&v18->field_10) = v92;
    *((unsigned long *)&v18->padding_11[7]) = v93;
    *((int128_t *)&v18->field_28[4]) = *((int128_t *)&v96);
    *((void*)&v18->field_0) = v91;
    v18->field_2c[10] = v129;
    v18->field_2c[11] = v130;
    *((unsigned int *)&v18->field_2c[12]) = v2;
    v18->field_2c[16] = v15;
    v18->field_2c[17] = (char)v119;
    *((unsigned long long *)&v18->field_2c[18]) = (0 CONCAT (v5 * 0x100 | v7) * 0x1000000000000) | ((0 CONCAT (v8 * 0x100 | v14) * 0x100000000) | v3 * 0x1000000 | v10 * 0x10000 | v11 * 0x100 | v12) & 281474976710655;
    v18->padding_31[5] = v4;
    v18->padding_31[6] = v6;
    v18->padding_31[7] = v73;
    v18->padding_31[8] = v149;
    v18->padding_31[9] = v150;
    v18->padding_31[10] = v51;
    v18->padding_31[11] = v52;
    v18->padding_31[12] = v16;
    v18->padding_31[13] = v17;
    v18->padding_31[14] = v9;
    return a0;
}
