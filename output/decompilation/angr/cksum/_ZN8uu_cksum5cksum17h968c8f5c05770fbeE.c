long long uu_cksum::cksum::h968c8f5c05770fbe(struct_1 *a0, unsigned long long a1)
{
    struct_1 *v0;  // [sp-0x310]
    struct struct_0 **v1;  // [bp-0x308]
    struct struct_0 **v2;  // [bp-0x308]
    struct struct_0 **v3;  // [bp-0x308]
    unsigned long long v4;  // [sp-0x300]
    struct struct_0 **v5;  // [sp-0x2f8]
    unsigned long long v6;  // [sp-0x2f0]
    struct struct_0 **v7;  // [sp-0x2e8], Other Possible Types: void*
    unsigned long long v8;  // [sp-0x2e0]
    unsigned long long v9;  // [sp-0x2d8]
    void* v10;  // [sp-0x2d0]
    struct struct_0 **v11;  // [sp-0x2c8]
    struct struct_0 **v12;  // [bp-0x2c8]
    char v13;  // [bp-0x2c4]
    unsigned long long v14;  // [sp-0x2c0]
    struct struct_0 **v15;  // [sp-0x2b8]
    struct struct_0 **v16;  // [sp-0x2a8]
    struct struct_0 **v17;  // [sp-0x2a8]
    unsigned long long v18;  // [sp-0x2a0]
    struct struct_0 **v19;  // [sp-0x298]
    unsigned long long v20;  // [sp-0x290]
    struct struct_0 **v21;  // [sp-0x288]
    unsigned long long v22;  // [sp-0x280]
    unsigned short v23;  // [sp-0x26a]
    struct struct_0 **v24;  // [sp-0x268]
    struct struct_0 **v25;  // [bp-0x268]
    unsigned long long v26;  // [sp-0x260]
    struct struct_0 **v27;  // [sp-0x258]
    struct struct_0 **v28;  // [bp-0x248]
    struct struct_0 **v29;  // [sp-0x248]
    struct struct_0 **v30;  // [bp-0x248]
    struct struct_0 **v31;  // [sp-0x240], Other Possible Types: unsigned long long
    char *v32;  // [sp-0x238], Other Possible Types: struct struct_0 **, unsigned long long
    struct struct_0 **v33;  // [sp-0x238]
    unsigned int v34;  // [bp-0x230], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v35;  // [sp-0x228], Other Possible Types: void*
    unsigned long long v36;  // [sp-0x220]
    char v37;  // [sp-0x218]
    unsigned long long v38;  // [sp-0x210]
    unsigned long long v39;  // [sp-0x200]
    unsigned long long v40;  // [sp-0x1f8]
    unsigned long long v41;  // [sp-0x1f0]
    unsigned long long v42;  // [sp-0x1e8]
    char v43;  // [sp-0x1e0]
    unsigned long long v44;  // [sp-0x1d8]
    unsigned long long v45;  // [sp-0x1c8]
    unsigned long long v46;  // [sp-0x1b8]
    unsigned long long v47;  // [sp-0x1b0]
    char v48;  // [sp-0x1a8]
    struct struct_0 **v49;  // [sp-0x1a0]
    unsigned long long v50;  // [sp-0x198]
    struct struct_0 **v51;  // [sp-0x190]
    unsigned long v52;  // [bp-0x188], Other Possible Types: unsigned short
    unsigned long long v53;  // [sp-0x180]
    struct struct_0 **v54;  // [sp-0x178]
    unsigned long long v55;  // [sp-0x170]
    unsigned long v56;  // [sp-0x168]
    char v57;  // [bp-0x160]
    char v58;  // [bp-0x150]
    char v59;  // [bp-0x148]
    char v60;  // [bp-0x140]
    char v61;  // [bp-0x138]
    char v62;  // [bp-0x130]
    char v63;  // [bp-0x128]
    char v64;  // [bp-0x120]
    char v65;  // [bp-0x118]
    char v66;  // [bp-0xf8]
    char v67;  // [bp-0xe8]
    char v68;  // [bp-0xe0]
    char v69;  // [bp-0xd0]
    char v70;  // [bp-0xc8]
    char v71;  // [bp-0xb8]
    char v72;  // [bp-0xb0]
    char v73;  // [bp-0xa0]
    char v74;  // [bp-0x98]
    char v75;  // [bp-0x88]
    char v76;  // [bp-0x80]
    char v77;  // [bp-0x70]
    char v78;  // [bp-0x68]
    unsigned long long v79;  // [sp-0x18]
    unsigned long v81;  // r14
    struct_1 *v82;  // r14
    struct struct_0 **v83;  // rax
    struct struct_0 **v84;  // rbp
    unsigned long v85;  // rdx
    unsigned long long v86;  // r12
    struct_1 *v87;  // rax
    unsigned long long v88;  // r13
    int v89;  // ymm0
    char v90;  // r14b
    unsigned long long v91;  // rax
    unsigned long long v92;  // rcx
    struct struct_0 **v93;  // xmm0
    struct struct_0 **v94;  // rcx
    void* v96;  // rbx, Other Possible Types: unsigned long long
    unsigned int v97;  // eax
    struct struct_0 **v98;  // rbx
    struct struct_0 **v99;  // xmm0
    struct struct_0 **v100;  // xmm0
    unsigned long long v101;  // rcx
    unsigned long long v102;  // rax
    unsigned long long v103;  // rax
    unsigned long long v104;  // rdx
    unsigned int v105;  // eax
    unsigned long long v106;  // rcx
    struct_1 *v109;  // rsi
    char v110;  // cl
    unsigned long long v111;  // rax
    unsigned long long v112;  // rax
    unsigned long long v113;  // rdx
    unsigned int v114;  // eax
    struct struct_0 **v115;  // xmm0
    int v116;  // ymm0
    struct struct_0 **v117;  // rax
    struct struct_0 **v118;  // xmm0
    struct struct_0 **v121;  // xmm0
    int v122;  // ymm0
    struct struct_0 **v123;  // xmm0
    struct struct_0 **v124;  // xmm0
    unsigned long long v125;  // rax
    struct struct_0 **v126;  // xmm0
    struct struct_0 **v127;  // rcx
    struct struct_0 **v128;  // rdx
    struct struct_0 **v129;  // xmm0
    struct struct_0 **v130;  // xmm0
    struct struct_0 **v131;  // xmm0
    struct struct_0 **v132;  // xmm0
    unsigned long long v133;  // rax

    v79 = v81;
    v82 = a0;
    v0 = a0;
    core::iter::traits::iterator::Iterator::collect::hd51e304b73a29e2d(&v57, a1);
    if (a0->field_3a != 1 || *((long long *)&v58) < 2)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h1fb92bba1baf3ed0(&v65, &v57);
        v83 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h64ffba3b6722510b(&v65);
        if (v83)
        {
            v84 = v83;
            v86 = v85;
            v87 = v0;
            v55 = &v87->field_20;
            v54 = &v87[1].field_0;
            v98 = &v1;
            v88 = "-: \ncrcbsdblake2b  (BLAKE2b (";
            v53 = &g_7527f0;
            do
            {
                std::path::Path::components::h4f3217acf0fc8653(v98, v84, v86);
                std::path::Path::components::h4f3217acf0fc8653(&v30, v88, 1);
                v90 = ::0x57d910::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(v98, &v30);
                if (v90)
                {
                    v91 = alloc::boxed::Box$LT$T$GT$::new::h8a8cfe4d0220fa65(std::io::stdio::stdin::h7215cc131abb55d8());
                    v92 = &g_752708;
                }
                else if ((char)std::path::Path::is_dir::h9ac0db933706da51(v84, v86))
                {
                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4959fc360751633b(&v30, 0x2000);
                    v91 = alloc::boxed::Box$LT$T$GT$::new::hd4bad29e7eee4d0f(&v30);
                    v92 = &g_7526b0;
                }
                else
                {
                    std::fs::File::open::h7ee72332435a5b84(&v12, v84, v86);
                    if (!(int)v12)
                    {
                        v91 = alloc::boxed::Box$LT$T$GT$::new::hf9ffa0e11f6228ff(*((int *)&v13));
                        v92 = &g_752658;
                    }
                    else
                    {
                        v24 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h4e5d434c1aa53f46(v14, v84, v86);
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                        v17 = uucore::util_name::h60d842bf27b05e82();
                        v18 = v85;
                        v3 = &v17;
                        v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb73bee75b677639e;
                        v5 = &v24;
                        v6 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hecc426ab1f5da2eb;
                        v29 = &g_7524d8;
                        v31 = 3;
                        v35 = 0;
                        v33 = v98;
                        v34 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v30);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h15e3a96f6f9dbf4f(v24);
                        continue;
                    }
                }
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hc4db813bde19958a(&v78, 0x2000, v91, v92);
                if ((char)std::path::Path::is_dir::h9ac0db933706da51(v84, v86))
                {
                    v1 = v84;
                    v4 = v86;
                    v16 = v98;
                    v18 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                    v29 = &g_752508;
                    v31 = 2;
                    v35 = 0;
                    v32 = &v17;
                    v34 = 1;
                    core::option::Option$LT$T$GT$::map_or_else::hc5f016e47121d65f(&v66, &v30);
                    v34 = 1;
                    v93 = *((int128_t *)&v66);
                    v89 = v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93;
                    v29 = v93;
                    v32 = *((long long *)&v67);
                    *((double *)&v12) = alloc::boxed::Box$LT$T$GT$::new::h7e187ac5f822efad(&v30);
                    v14 = &g_752870;
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0((unsigned int)::0x57dd00::_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(v12));
                    v17 = uucore::util_name::h60d842bf27b05e82();
                    v18 = v85;
                    v3 = &v17;
                    v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb73bee75b677639e;
                    v5 = &v12;
                    v6 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h412ef4f961bd2408;
                    v29 = &g_7524d8;
                    v31 = 3;
                    v35 = 0;
                    v33 = v98;
                    v34 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v30);
                    ::0x57c4d0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h88065cc496e49ab5(v12, v14);
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h35ed789f6648ed59(&v78);
                    continue;
                }
                uucore::features::checksum::digest_reader::hb3e7cc01e934b03f(&v30, v55, &v78, 0, v0->field_30);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6371967b4e91eb46(v98, &v30);
                v94 = v98;
                v96 = v4;
                if (v49 == 0x8000000000000000)
                {
                    v82 = v0;
                    goto LABEL_580132;
                }
                v49 = v3;
                v50 = v96;
                v51 = v5;
                v56 = v6;
                switch (v97)
                {
                case 0:
                    v27 = v51;
                    v25 = v49;
                    v26 = v50;
                    v98 = v94;
                    break;
                case 2:
                    v98 = v94;
                    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(v0->field_10, v0->field_18, "crcbsdblake2b  (BLAKE2b (", 3) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(v0->field_10, v0->field_18, "sysvCoreTextSlimm", 4) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(v0->field_10, v0->field_18, "bsdblake2b  (BLAKE2b (", 3))
                    {
                        v27 = v51;
                        v99 = *((int128_t *)&v49);
                        v89 = v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99;
                        v25 = v99;
                    }
                    else
                    {
                        v19 = &g_7527b8->field_0;
                        *((int128_t *)&v17) = *((int128_t *)&g_7527a8);
                        v33 = v51;
                        v100 = *((int128_t *)&v49);
                        v89 = (v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&g_7527a8)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100;
                        v30 = v100;
                        _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$hex..FromHex$GT$::from_hex::h6fda53b93a1b4a9b(v98, &v30);
                        core::result::Result$LT$T$C$E$GT$::unwrap::h72eff9fffdfc2e9e(&v30, v98, &g_7527c0);
                        data_encoding::Encoding::encode::h8eff78e31b7db764(&v24, &v17, v31, v33);
                        ::0x57c5c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h33f821fc08e83651(&v30);
                        core::ptr::drop_in_place$LT$data_encoding..Encoding$GT$::ha055e00dd9a05262(&v17);
                    }
                    v88 = "-: \ncrcbsdblake2b  (BLAKE2b (";
                    break;
                default:
                    v82 = v0;
                    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(v82->field_10, v82->field_18, "crcbsdblake2b  (BLAKE2b (", 3))
                    {
                        *((unsigned int *)&v1) = __buildin_bswap32(core::result::Result$LT$T$C$E$GT$::unwrap::hf3b40991d8ebbd58(core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u32$GT$::from_str::hecf13f2b24d2aba7(v50, v51)));
                        ::0x57cb20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h30fbc9471dcc217c(&v30, &v1, 4);
                    }
                    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(v82->field_10, v82->field_18, "sysvCoreTextSlimm", 4) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(v82->field_10, v82->field_18, "bsdblake2b  (BLAKE2b (", 3))
                    {
                        *((short *)&v1) = __ROL__((short)core::result::Result$LT$T$C$E$GT$::unwrap::h2fb53f7747cb9e4e((unsigned int)core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u16$GT$::from_str::haf22888ecbeba9aa(v50, v51), &g_752778), 8);
                        ::0x57cb20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h30fbc9471dcc217c(&v30, &v1, 2);
                    }
                    else
                    {
                        v33 = v51;
                        *((int128_t *)&v30) = *((int128_t *)&v49);
                        _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$hex..FromHex$GT$::from_hex::h6fda53b93a1b4a9b(&v1, &v30);
                        core::result::Result$LT$T$C$E$GT$::unwrap::h72eff9fffdfc2e9e(&v30, &v1, &g_752760);
LABEL_58025d:
                        v1 = std::io::stdio::stdout::h077da66234850927();
                        v133 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(&v1, v31, v33);
                        v96 = (!v133 ? 0 : uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v133));
                        ::0x57c5c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h33f821fc08e83651(&v30);
LABEL_580132:
                        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h35ed789f6648ed59(&v78);
                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::hbb2f4177c99bb2cb(&v65);
                        core::ptr::drop_in_place$LT$uu_cksum..Options$GT$::h97266c7ff74129ed(v82->field_20, v82->field_28);
                        return v96;
                    }
                    goto LABEL_58025d;
                }
                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(v0->field_10, v0->field_18, "sysvCoreTextSlimm", 4))
                {
                    v52 = core::result::Result$LT$T$C$E$GT$::unwrap::h2fb53f7747cb9e4e((unsigned int)core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u16$GT$::from_str::haf22888ecbeba9aa(v26, v27), &g_752808);
                    v101 = v0->field_30;
                    if (!v101)
                    {
                        v53 = &g_752820;
                        core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(v53); /* do not return */
                    }
                    if ((v56 | v101) >> 32)
                    {
                        v102 = v56;
                        v103 = (unsigned long long)((0 CONCAT v102) % v101) CONCAT (unsigned long long)((0 CONCAT v102) / v101);
                        v104 = ((unsigned long long)((0 CONCAT v102) % v101) CONCAT (unsigned long long)((0 CONCAT v102) / v101)) >> 64;
                    }
                    else
                    {
                        v105 = v56;
                        v103 = ((unsigned int)((0 CONCAT v105) % (v101 & 4294967295)) CONCAT (unsigned int)((0 CONCAT v105) / (v101 & 4294967295))) & 4294967295;
                        v104 = ((unsigned int)((0 CONCAT v105) % (v101 & 4294967295)) CONCAT (unsigned int)((0 CONCAT v105) / (v101 & 4294967295))) >> 32 & 4294967295;
                    }
                    v11 = v103 - -1 - (v104 < 1);
                    *((int *)&v16) = (v90 ? 1 : "  (BLAKE2b (");
                    v18 = v90 ^ 1;
                    v29 = &v52;
                    v31 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hc16e9a303f8fca40;
                    v32 = &v12;
                    v34 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    v35 = &v17;
                    v36 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb73bee75b677639e;
                    v1 = &g_752528;
                    v4 = 3;
                    v7 = 0;
                    v5 = &v30;
                    v6 = 3;
                    core::option::Option$LT$T$GT$::map_or_else::hc5f016e47121d65f(&v68, v98);
                    v118 = *((int128_t *)&v68);
                    v116 = v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v118;
                    v28 = v118;
                    v117 = *((long long *)&v69);
                    goto LABEL_57fbff;
                }
                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(v0->field_10, v0->field_18, "bsdblake2b  (BLAKE2b (", 3))
                {
                    v23 = core::result::Result$LT$T$C$E$GT$::unwrap::h2fb53f7747cb9e4e((unsigned int)core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u16$GT$::from_str::haf22888ecbeba9aa(v26, v27), &g_7527d8);
                    v106 = v0->field_30;
                    if (!v106)
                        core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(v53); /* do not return */
                    if ((v56 | v106) >> 32)
                    {
                        v111 = v56;
                        v112 = (unsigned long long)((0 CONCAT v111) % v106) CONCAT (unsigned long long)((0 CONCAT v111) / v106);
                        v113 = ((unsigned long long)((0 CONCAT v111) % v106) CONCAT (unsigned long long)((0 CONCAT v111) / v106)) >> 64;
                    }
                    else
                    {
                        v114 = v56;
                        v112 = ((unsigned int)((0 CONCAT v114) % (v106 & 4294967295)) CONCAT (unsigned int)((0 CONCAT v114) / (v106 & 4294967295))) & 4294967295;
                        v113 = ((unsigned int)((0 CONCAT v114) % (v106 & 4294967295)) CONCAT (unsigned int)((0 CONCAT v114) / (v106 & 4294967295))) >> 32 & 4294967295;
                    }
                    v52 = v112 - -1 - (v113 < 1);
                    *((int *)&v11) = (v90 ? 1 : "  (BLAKE2b (");
                    v14 = v90 ^ 1;
                    v1 = &v23;
                    v4 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hc16e9a303f8fca40;
                    v5 = &v52;
                    v6 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    v7 = &v12;
                    v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb73bee75b677639e;
                    v9 = 5;
                    v10 = 0;
                    v29 = 2;
                    v32 = 1;
                    v34 = 3;
                    v35 = 0;
                    v36 = 34359738400;
                    v37 = 3;
                    v38 = 2;
                    v39 = 1;
                    v40 = 3;
                    v41 = 1;
                    v42 = 32;
                    v43 = 3;
                    v44 = 2;
                    v45 = 2;
                    v46 = 2;
                    v47 = 32;
                    v48 = 3;
                    v16 = &g_752528;
                    v18 = 3;
                    v21 = &v30;
                    v22 = 3;
                    v19 = v98;
                    v20 = 4;
                    core::option::Option$LT$T$GT$::map_or_else::hc5f016e47121d65f(&v70, &v17);
                    v130 = *((int128_t *)&v70);
                    v116 = v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v130;
                    v28 = v130;
                    v117 = *((long long *)&v71);
                    goto LABEL_57fbff;
                    goto LABEL_57fbff;
                }
                else if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(v0->field_10, v0->field_18, "crcbsdblake2b  (BLAKE2b (", 3))
                {
                    v109 = v0;
                    v110 = v109->field_38;
                    if ((v110 & (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3c86d19f285204ed(v0->field_10, v0->field_18, "blake2b  (BLAKE2b (", 7)))
                    {
                        if (!v109->field_0)
                        {
                            ::0x57cb20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h30fbc9471dcc217c(&v30, "BLAKE2b (", 9);
                            v5 = v33;
                            v123 = *((int128_t *)&v30);
                            v122 = v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v123;
                            v2 = v123;
                        }
                        else
                        {
                            v16 = v109->field_8 * 8;
                            v1 = &v17;
                            v4 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                            v29 = &g_752558;
                            v31 = 2;
                            v35 = 0;
                            v32 = v98;
                            v34 = 1;
                            core::option::Option$LT$T$GT$::map_or_else::hc5f016e47121d65f(&v74, &v30);
                            v121 = *((int128_t *)&v74);
                            v122 = v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v121;
                            v2 = v121;
                            v5 = *((long long *)&v75);
                        }
                        v16 = &v24;
                        v18 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v29 = &g_752578;
                        v31 = 1;
                        v35 = 0;
                        v32 = &v17;
                        v34 = 1;
                        core::option::Option$LT$T$GT$::map_or_else::hc5f016e47121d65f(&v59, &v30);
                        v126 = *((int128_t *)&v2);
                        v116 = v122 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v126;
                        v28 = v126;
                        v32 = v5;
                        v127 = *((long long *)&v59);
                        v125 = *((long long *)&v60);
                        v128 = *((long long *)&v61);
                    }
                    else if (v110)
                    {
                        alloc::str::_$LT$impl$u20$str$GT$::to_ascii_uppercase::h60b631a23b970e6a(v98, v0->field_10, v0->field_18);
                        v11 = v98;
                        v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v29 = &g_752588;
                        v31 = 2;
                        v35 = 0;
                        v32 = &v12;
                        v34 = 1;
                        core::option::Option$LT$T$GT$::map_or_else::hc5f016e47121d65f(&v17, &v30);
                        ::0x57c590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h23113bc82093f2bc(v98);
                        v129 = *((int128_t *)&v17);
                        v1 = v129;
                        v5 = v19;
                        v16 = &v24;
                        v18 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v29 = &g_752578;
                        v31 = 1;
                        v35 = 0;
                        v32 = &v17;
                        v34 = 1;
                        core::option::Option$LT$T$GT$::map_or_else::hc5f016e47121d65f(&v62, &v30);
                        v131 = *((int128_t *)&v1);
                        v116 = (v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v129) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v131;
                        v28 = v131;
                        v32 = v5;
                        v127 = *((long long *)&v62);
                        v125 = *((long long *)&v63);
                        v128 = *((long long *)&v64);
                    }
                    else
                    {
                        *((int *)&v16) = (!v0->field_39 ? "  (BLAKE2b (" : "*Try ' --help' for more information.\n");
                        v18 = 1;
                        v1 = &v24;
                        v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v5 = &v17;
                        v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb73bee75b677639e;
                        v29 = &g_7525a8;
                        v31 = 2;
                        v35 = 0;
                        v32 = v98;
                        v34 = 2;
                        core::option::Option$LT$T$GT$::map_or_else::hc5f016e47121d65f(&v76, &v30);
                        v124 = *((int128_t *)&v76);
                        v116 = v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v124;
                        v28 = v124;
                        v32 = *((long long *)&v77);
                        v125 = 1;
LABEL_57fc0c:
                        v127 = 0;
                        v128 = 0;
                        goto LABEL_57fc10;
                    }
LABEL_57fc10:
                    v15 = v32;
                    v132 = *((int128_t *)&v28);
                    v89 = v116 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v132;
                    v12 = v132;
                    v17 = v127;
                    v18 = v125;
                    v19 = v128;
                    v1 = &v12;
                    v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v29 = &g_454f40;
                    v31 = 1;
                    v35 = 0;
                    v32 = v98;
                    v34 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&v30);
                    v29 = std::io::stdio::stdout::h077da66234850927();
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h62fbe6402467233a(_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(&v30, v84, v86));
                    v3 = &v17;
                    v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v5 = v54;
                    v6 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
                    v29 = &g_455720;
                    v31 = 2;
                    v35 = 0;
                    v33 = v98;
                    v34 = 2;
                    std::io::stdio::_print::he918bceb0c89db46(&v30);
                    ::0x57c590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h23113bc82093f2bc(&v17);
                    ::0x57c590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h23113bc82093f2bc(&v12);
                    ::0x57c590::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h23113bc82093f2bc(&v24);
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h35ed789f6648ed59(&v78);
                }
                else
                {
                    *((int *)&v16) = (v90 ? 1 : "  (BLAKE2b (");
                    v18 = v90 ^ 1;
                    v29 = &v24;
                    v31 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v32 = &v56;
                    v34 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    v35 = &v17;
                    v36 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb73bee75b677639e;
                    v1 = &g_752528;
                    v4 = 3;
                    v7 = 0;
                    v5 = &v30;
                    v6 = 3;
                    core::option::Option$LT$T$GT$::map_or_else::hc5f016e47121d65f(&v72, v98);
                    v115 = *((int128_t *)&v72);
                    v116 = v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v115;
                    v28 = v115;
                    v117 = *((long long *)&v73);
LABEL_57fbff:
                    v32 = v117;
                    v125 = 1;
                    goto LABEL_57fc0c;
                }
            } while ((v84 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h64ffba3b6722510b(&v65), v86 = v85, v84));
        }
        v82 = v0;
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::hbb2f4177c99bb2cb(&v65);
        v96 = 0;
    }
    else
    {
        v96 = alloc::boxed::Box$LT$T$GT$::new::hf9354996cb72aa80(0);
        ::0x57c780::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h6eb853ba25e83800(&v57);
    }
    core::ptr::drop_in_place$LT$uu_cksum..Options$GT$::h97266c7ff74129ed(v82->field_20, v82->field_28);
    return v96;
}
