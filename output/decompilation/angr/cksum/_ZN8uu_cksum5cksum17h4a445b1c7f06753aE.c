long long uu_cksum::cksum()
{
    char *v0;  // [bp-0x308]
    int v1;  // [bp-0x308], Other Possible Types: char *, unsigned long long
    int v2;  // [bp-0x308], Other Possible Types: char, unsigned int, unsigned short
    unsigned long long v3;  // [bp-0x300]
    unsigned long long v4;  // [bp-0x300]
    char *v5;  // [bp-0x2f8]
    char *v6;  // [bp-0x2f8]
    unsigned long long v7;  // [bp-0x2f0]
    unsigned long long v8;  // [bp-0x2f0]
    int v9;  // [sp-0x2e8]
    unsigned long long v10;  // [bp-0x2e0]
    void* v11;  // [bp-0x2d8]
    unsigned long long v12;  // [bp-0x2d0]
    char *v13;  // [bp-0x2c8]
    int v14;  // [bp-0x2c8]
    unsigned long long v15;  // [bp-0x2c0]
    char *v16;  // [bp-0x2b8]
    int v17;  // [bp-0x2a8], Other Possible Types: char *, unsigned long long, unsigned long
    unsigned long long v18;  // [bp-0x2a8]
    int v19;  // [bp-0x2a8]
    unsigned long v20;  // [bp-0x2a0], Other Possible Types: unsigned long long
    char *v21;  // [bp-0x298]
    unsigned long long v22;  // [bp-0x290]
    char *v23;  // [bp-0x288]
    unsigned long long v24;  // [bp-0x280]
    unsigned short v25;  // [bp-0x26a]
    unsigned long long v26;  // [bp-0x268]
    int v27;  // [bp-0x268], Other Possible Types: unsigned long long
    int v28;  // [bp-0x268]
    int v29;  // [bp-0x268]
    int v30;  // [bp-0x268]
    unsigned long long v31;  // [bp-0x260]
    unsigned long long v32;  // [bp-0x260]
    char *v33;  // [bp-0x258], Other Possible Types: unsigned long long
    int v34;  // [bp-0x250], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v35;  // [bp-0x250]
    char *v36;  // [bp-0x248], Other Possible Types: void*
    void* v37;  // [bp-0x248]
    char *v38;  // [bp-0x240], Other Possible Types: unsigned long long
    char v39;  // [bp-0x238]
    unsigned long long v40;  // [bp-0x230]
    unsigned long long v41;  // [bp-0x220]
    unsigned long long v42;  // [bp-0x218]
    unsigned long long v43;  // [bp-0x210]
    unsigned long long v44;  // [bp-0x208]
    char v45;  // [bp-0x200]
    unsigned long long v46;  // [bp-0x1f8]
    unsigned long long v47;  // [bp-0x1e8]
    unsigned long long v48;  // [bp-0x1d8]
    unsigned long long v49;  // [bp-0x1d0]
    char v50;  // [bp-0x1c8]
    int v51;  // [bp-0x1b8], Other Possible Types: char *, char, unsigned long long, unsigned long
    unsigned int v52;  // [bp-0x1b4]
    unsigned long long v53;  // [bp-0x1b0]
    char *v54;  // [bp-0x1a8]
    char *v55;  // [bp-0x1a0]
    unsigned long long v56;  // [bp-0x198]
    char *v57;  // [bp-0x190]
    unsigned short v58;  // [bp-0x188]
    unsigned long long v59;  // [bp-0x188]
    unsigned long long v60;  // [bp-0x180]
    char *v61;  // [bp-0x178]
    unsigned long v62;  // [bp-0x170]
    unsigned long long v63;  // [bp-0x168]
    unsigned long long v64;  // [bp-0x168]
    char v65;  // [bp-0x160]
    unsigned long v66;  // [bp-0x150]
    unsigned long long v67;  // [bp-0x148]
    unsigned long long v68;  // [bp-0x140]
    char *v69;  // [bp-0x138]
    unsigned long long v70;  // [bp-0x130]
    unsigned long long v71;  // [bp-0x128]
    char *v72;  // [bp-0x120]
    char v73;  // [bp-0x118]
    int v74;  // [bp-0xf8]
    unsigned long long v75;  // [bp-0xe8]
    int v76;  // [bp-0xe0]
    char *v77;  // [bp-0xd0]
    int v78;  // [bp-0xc8]
    char *v79;  // [bp-0xb8]
    int v80;  // [bp-0xb0]
    char *v81;  // [bp-0xa0]
    int v82;  // [bp-0x98]
    char *v83;  // [bp-0x88]
    int v84;  // [bp-0x80]
    char *v85;  // [bp-0x70]
    int v86;  // [bp-0x68]
    unsigned long long v87;  // [bp-0x18]
    unsigned long long v89;  // r14
    struct_0 *v90;  // rdi
    struct_0 *v91;  // r14
    void* v92;  // r15
    unsigned long long v93;  // rax
    unsigned long long v94;  // r12
    struct_0 *v95;  // rax
    char *v96;  // r15
    unsigned long long v97;  // rdx
    unsigned long long v98;  // r14
    unsigned long long v99;  // r14
    char v100;  // bpl
    unsigned long long v101;  // rax
    unsigned long long v102;  // rcx
    int v103;  // xmm1
    char *v105;  // rdx
    unsigned int v106;  // eax
    unsigned long long v107;  // rbx
    unsigned long v108;  // rcx
    unsigned long long v110;  // rax
    unsigned long long v111;  // rdx
    char v113;  // bpl
    char *v114;  // rax
    unsigned long v115;  // rcx
    unsigned long long v117;  // rax
    unsigned long long v118;  // rdx
    void* v120;  // rcx
    unsigned long long v121;  // rax
    char *v122;  // rdx
    unsigned long long v123;  // rax
    unsigned long long v124;  // rax
    char *v125;  // [bp-0x2e8]

    v87 = v89;
    v91 = v90;
    v65.collect();
    if (v90->field_3a == 1 && v66 > 1)
    {
        v92 = 0.new();
        core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&v65);
        core::ptr::drop_in_place<uu_cksum::Options>(v90->field_20, v90->field_28);
        return v92;
    }
    v73.into_iter(&v65);
    v93 = v73.next();
    if (v93)
    {
        v94 = v93;
        v95 = v91;
        v62 = &v95->field_20;
        v61 = &v95[1].field_0;
        v96 = &v2;
        v60 = &g_60e3e8;
        do
        {
            v99 = v98;
            v96.components(v94, v99);
            v26.components("-: \ncrcbsdcrc32bblake2b  (BLAKE2b (", 1);
            v100 = v96.eq(&v26);
            if (v100)
            {
                v101 = std::io::stdio::stdin().new();
                v102 = &g_60e300;
            }
            else if ((char)v94.is_dir(v99))
            {
                v26.with_capacity(0x2000);
                v101 = v26.new();
                v102 = &g_60e2a8;
            }
            else
            {
                v51.open(v94, v99);
                if ((v51 & 1))
                {
                    v13 = v53.map_err_context(v94, v99);
                    uucore::mods::error::set_exit_code(1);
                    v18 = uucore::util_name();
                    v20 = v97;
                    v0 = &v18;
                    v4 = <&T as core::fmt::Display>::fmt;
                    v6 = &v13;
                    v8 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v26 = &g_60e180;
                    v32 = 3;
                    v37 = 0;
                    v33 = v96;
                    v35 = 2;
                    std::io::stdio::_eprint(&v26);
                    core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v13);
                    continue;
                }
                else
                {
                    v101 = v52.new();
                    v102 = &g_60e250;
                }
            }
            v86.with_capacity(0x2000, v101, v102);
            if ((char)v94.is_dir(v99))
            {
                v96.to_vec("filesizei128", 4);
                v21 = v6;
                *((int128_t *)&v17) = *((int128_t *)&v0);
                v51 = v94;
                v53 = v99;
                v96.spec_to_string(&(char)v51);
                v33 = v21;
                *((int128_t *)&v28) = *((int128_t *)&v18);
                v38 = v6;
                *((int128_t *)&v34) = *((int128_t *)&v0);
                v103 = (int128_t)(&v34)[8];
                *((int128_t *)&v2) = *((int128_t *)&v26);
                v5 = v33;
                v7 = v35;
                v9 = v103;
                v26.from_iter(v96);
                uucore::mods::locale::get_message_with_args(&v74, "cksum-error-is-directoryTry ' --help' for more information.\n", 24, &v26);
                v34 = 1;
                v29 = v74;
                v33 = v75;
                *((double *)&v13) = v26.new();
                v15 = &g_60e450;
                uucore::mods::error::set_exit_code((unsigned int)v13.code());
                v18 = uucore::util_name();
                v20 = v97;
                v0 = &v18;
                v4 = <&T as core::fmt::Display>::fmt;
                v6 = &v13;
                v8 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v26 = &g_60e180;
                v32 = 3;
                v37 = 0;
                v33 = v96;
                v35 = 2;
                std::io::stdio::_eprint(&v26);
                ::0x4c8e50::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v13, v15);
                core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v86);
                continue;
            }
            uucore::features::checksum::digest_reader(&v26, v62, &v86, 0, v91->field_30);
            v96.map_err_context(&v26);
            v105 = v96;
            v92 = v4;
            if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
                goto LABEL_4cb37d;
            v55 = v0;
            v56 = v92;
            v57 = v6;
            v64 = v8;
            switch (v106)
            {
            case 0:
                v16 = v57;
                v13 = v55;
                v15 = v56;
                v96 = v105;
                v64 = v63;
                break;
            case 2:
                v96 = v105;
                if ((char)v91->field_10.equal(v91->field_18, "crcbsdcrc32bblake2b  (BLAKE2b (", 3) || (char)v91->field_10.equal(v91->field_18, "crc32bblake2b  (BLAKE2b (", 6) || (char)v91->field_10.equal(v91->field_18, "sysvname", 4) || (char)v91->field_10.equal(v91->field_18, "bsdcrc32bblake2b  (BLAKE2b (", 3))
                {
                    v16 = v57;
                    *((int128_t *)&v14) = *((int128_t *)&v55);
                }
                else
                {
                    v21 = &g_60e3b0->field_0;
                    *((uint128_t *)&v19) = g_60e3a0;
                    v33 = v57;
                    *((int128_t *)&v30) = *((int128_t *)&v55);
                    v96.from_hex(&v26);
                    v26.unwrap(v96, &g_60e3b8);
                    v13.encode(&v18, v32, v33);
                    ::0x4c8f50::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v26);
                    core::ptr::drop_in_place<data_encoding::Encoding>(&v18);
                }
                v64 = v63;
                break;
            default:
                if ((char)v91->field_10.equal(v91->field_18, "crcbsdcrc32bblake2b  (BLAKE2b (", 3))
                {
                    v123 = ::0x4c8c90::core::num::<impl u32>::from_str_radix(v56, v57);
                    v2 = __buildin_bswap32(v123.unwrap());
                    v26.to_vec(&v2, 4);
                }
                else if ((char)v91->field_10.equal(v91->field_18, "sysvname", 4) || (char)v91->field_10.equal(v91->field_18, "bsdcrc32bblake2b  (BLAKE2b (", 3))
                {
                    v2 = __ROL__((short)(unsigned int)core::num::<impl u16>::from_str_radix(v56, v57).unwrap(&g_60e370), 8);
                    v26.to_vec(&v2, 2);
                }
                else
                {
                    v33 = v57;
                    *((int128_t *)&v27) = *((int128_t *)&v55);
                    v2.from_hex(&v26);
                    v26.unwrap(&v2, &g_60e358);
LABEL_4cb4a2:
                    v1 = std::io::stdio::stdout();
                    v124 = v1.write_all(v32, v33);
                    v92 = (!v124 ? 0 : v124.from());
                    ::0x4c8f50::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v26);
                    ::0x4c8f20::core::ptr::drop_in_place<alloc::string::String>(&v55);
LABEL_4cb37d:
                    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v86);
                    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(&v73);
                    core::ptr::drop_in_place<uu_cksum::Options>(v91->field_20, v91->field_28);
                    return v92;
                }
                goto LABEL_4cb4a2;
            }
            v107 = v64;
            if ((char)v91->field_10.equal(v91->field_18, "sysvname", 4))
            {
                v58 = (unsigned int)core::num::<impl u16>::from_str_radix(v15, v16).unwrap(&g_60e400);
                v108 = v91->field_30;
                if (!v108)
                {
                    v60 = &g_60e418;
                    v60 = &g_60e418;
                    core::panicking::panic_const::panic_const_div_by_zero(&g_60e418); /* do not return */
                }
                if ((v107 | v108) >> 32)
                {
                    v110 = (unsigned long long)((0 CONCAT v107) % v108) CONCAT (unsigned long long)((0 CONCAT v107) / v108);
                    v111 = ((unsigned long long)((0 CONCAT v107) % v108) CONCAT (unsigned long long)((0 CONCAT v107) / v108)) >> 64;
                }
                else
                {
                    v110 = ((unsigned int)((0 CONCAT (unsigned int)v107) % (v108 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v107) / (v108 & 4294967295))) & 4294967295;
                    v111 = ((unsigned int)((0 CONCAT (unsigned int)v107) % (v108 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v107) / (v108 & 4294967295))) >> 32;
                }
                v51 = v110 + 1 - (v111 < 1);
                v113 = v100 ^ 1;
                *((int *)&v17) = (v100 ? 1 : "  (BLAKE2b (");
                v20 = v100 ^ 1;
                v27 = &v58;
                v31 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
                v33 = &(char)v51;
                v34 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v36 = &v17;
                v38 = <&T as core::fmt::Display>::fmt;
                v1 = &g_60e1b0;
                v3 = 3;
                v125 = 0;
                v5 = &v27;
                v7 = 3;
                v76.map_or_else(v96);
                memcpy(&v27, &v76, 16);
                v114 = v77;
                goto LABEL_4cad64;
            }
            if ((char)v91->field_10.equal(v91->field_18, "bsdcrc32bblake2b  (BLAKE2b (", 3))
            {
                v25 = (unsigned int)core::num::<impl u16>::from_str_radix(v15, v16).unwrap(&g_60e3d0);
                v115 = v91->field_30;
                if (!v115)
                    core::panicking::panic_const::panic_const_div_by_zero(0x60e3e8); /* do not return */
                if ((v107 | v115) >> 32)
                {
                    v117 = (unsigned long long)((0 CONCAT v107) % v115) CONCAT (unsigned long long)((0 CONCAT v107) / v115);
                    v118 = ((unsigned long long)((0 CONCAT v107) % v115) CONCAT (unsigned long long)((0 CONCAT v107) / v115)) >> 64;
                }
                else
                {
                    v117 = ((unsigned int)((0 CONCAT (unsigned int)v107) % (v115 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v107) / (v115 & 4294967295))) & 4294967295;
                    v118 = ((unsigned int)((0 CONCAT (unsigned int)v107) % (v115 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v107) / (v115 & 4294967295))) >> 32;
                }
                v59 = v117 + 1 - (v118 < 1);
                v113 = v100 ^ 1;
                *((int *)&v51) = (v100 ? 1 : "  (BLAKE2b (");
                v53 = v100 ^ 1;
                v1 = &v25;
                v3 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
                v5 = &v59;
                v7 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v125 = &(char)v51;
                v10 = <&T as core::fmt::Display>::fmt;
                v11 = 0;
                v12 = 5;
                v27 = 2;
                v33 = 1;
                v34 = 3;
                v36 = 0;
                v38 = 34359738400;
                v39 = 3;
                v40 = 2;
                v41 = 1;
                v42 = 3;
                v43 = 1;
                v44 = 32;
                v45 = 3;
                v46 = 2;
                v47 = 2;
                v48 = 2;
                v49 = 32;
                v50 = 3;
                v17 = &g_60e1b0;
                v20 = 3;
                v23 = &v27;
                v24 = 3;
                v21 = v96;
                v22 = 4;
                v78.map_or_else(&v17);
                memcpy(&v27, &v78, 16);
                v114 = v79;
                goto LABEL_4cad64;
            }
            else if ((char)v91->field_10.equal(v91->field_18, "crcbsdcrc32bblake2b  (BLAKE2b (", 3) || (char)v91->field_10.equal(v91->field_18, "crc32bblake2b  (BLAKE2b (", 6))
            {
                v113 = v100 ^ 1;
                *((int *)&v17) = (v100 ? 1 : "  (BLAKE2b (");
                v20 = v100 ^ 1;
                v27 = &v13;
                v31 = <alloc::string::String as core::fmt::Display>::fmt;
                v33 = &v64;
                v34 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v36 = &v17;
                v38 = <&T as core::fmt::Display>::fmt;
                v1 = &g_60e1b0;
                v3 = 3;
                v125 = 0;
                v5 = &v27;
                v7 = 3;
                v80.map_or_else(v96);
                memcpy(&v27, &v80, 16);
                v114 = v81;
LABEL_4cad64:
                v33 = v114;
                v121 = 1;
                goto LABEL_4cad71;
            }
            else
            {
                if ((char)v91->field_10.equal(v91->field_18, "blake2b  (BLAKE2b (", 7))
                {
                    if (!(v91->field_38 & 1))
                        goto LABEL_4cb1b7;
                    if ((v91->field_0 & 1))
                    {
                        v17 = v91->field_8 * 8;
                        v0 = &v17;
                        v3 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                        v27 = &g_60e1e0;
                        v31 = 2;
                        v36 = 0;
                        v33 = v96;
                        v34 = 1;
                        v82.map_or_else(&v27);
                        v1 = v82;
                        v5 = v83;
                    }
                    else
                    {
                        v26.to_vec("BLAKE2b (", 9);
                        v5 = v33;
                        *((int128_t *)&v2) = *((int128_t *)&v26);
                    }
                    v17 = &v13;
                    v20 = <alloc::string::String as core::fmt::Display>::fmt;
                    v27 = &g_60e200;
                    v31 = 1;
                    v36 = 0;
                    v33 = &v17;
                    v34 = 1;
                    v67.map_or_else(&v27);
                    memcpy(&v27, &v0, 16);
                    v33 = v5;
                    v120 = v67;
                    v121 = v68;
                    v122 = v69;
                    v113 = 1;
                }
                else if ((v91->field_38 & 1))
                {
                    alloc::str::<impl str>::to_ascii_uppercase(v96, v91->field_10, v91->field_18);
                    v51 = v96;
                    v53 = <alloc::string::String as core::fmt::Display>::fmt;
                    v27 = &g_60e210;
                    v31 = 2;
                    v36 = 0;
                    v33 = &(char)v51;
                    v34 = 1;
                    v18.map_or_else(&v27);
                    ::0x4c8f20::core::ptr::drop_in_place<alloc::string::String>(v96);
                    *((int128_t *)&v2) = *((int128_t *)&v18);
                    v5 = v21;
                    v17 = &v13;
                    v20 = <alloc::string::String as core::fmt::Display>::fmt;
                    v27 = &g_60e200;
                    v31 = 1;
                    v36 = 0;
                    v33 = &v17;
                    v34 = 1;
                    v70.map_or_else(&v27);
                    memcpy(&v27, &v2, 16);
                    v33 = v5;
                    v120 = v70;
                    v121 = v71;
                    v122 = v72;
                    v113 = 1;
                }
                else
                {
LABEL_4cb1b7:
                    *((int *)&v17) = (v91->field_39 ? "*cksum-error-is-directoryTry ' --help' for more information.\n" : "  (BLAKE2b (");
                    v20 = 1;
                    v1 = &v13;
                    v3 = <alloc::string::String as core::fmt::Display>::fmt;
                    v5 = &v17;
                    v7 = <&T as core::fmt::Display>::fmt;
                    v27 = &g_60e230;
                    v31 = 2;
                    v36 = 0;
                    v33 = v96;
                    v34 = 2;
                    v84.map_or_else(&v27);
                    memcpy(&v27, &v84, 16);
                    v33 = v85;
                    v121 = 1;
                    v113 = 1;
LABEL_4cad71:
                    v120 = 0;
                    v122 = 0;
                }
                v54 = v33;
                *((int128_t *)&v51) = *((int128_t *)&v27);
                v18 = v120;
                v20 = v121;
                v21 = v122;
                v1 = &(char)v51;
                v3 = <alloc::string::String as core::fmt::Display>::fmt;
                v27 = &g_41a0d0;
                v31 = 1;
                v36 = 0;
                v33 = v96;
                v34 = 1;
                std::io::stdio::_print(&v27);
                if (v113)
                {
                    v27 = std::io::stdio::stdout();
                    v1 = v27.write_all(v94, v99);
                    ::0x4c9240::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v96);
                }
                v0 = &v18;
                v4 = <alloc::string::String as core::fmt::Display>::fmt;
                v6 = v61;
                v8 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
                v26 = &g_41ae60;
                v32 = 2;
                v37 = 0;
                v33 = v96;
                v35 = 2;
                std::io::stdio::_print(&v26);
                ::0x4c8f20::core::ptr::drop_in_place<alloc::string::String>(&v18);
                ::0x4c8f20::core::ptr::drop_in_place<alloc::string::String>(&(char)v51);
                ::0x4c8f20::core::ptr::drop_in_place<alloc::string::String>(&v13);
                core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v86);
            }
            v94 = v73.next();
            v98 = v97;
        } while (v94);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(&v73);
    core::ptr::drop_in_place<uu_cksum::Options>(v91->field_20, v91->field_28);
    return 0;
}
