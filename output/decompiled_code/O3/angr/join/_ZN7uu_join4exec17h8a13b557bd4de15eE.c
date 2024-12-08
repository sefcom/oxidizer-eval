long long uu_join::exec::h8a13b557bd4de15e(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_1 *a4, void* a5)
{
    char v0;  // [bp-0x4e0]
    char v1;  // [bp-0x4d8]
    unsigned int v2;  // [sp-0x4c8]
    char v3;  // [sp-0x4c1]
    int v4;  // [bp-0x4b0], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v5;  // [sp-0x4a8]
    int v6;  // [sp-0x4a0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v7;  // [sp-0x498]
    void* v8;  // [bp-0x490], Other Possible Types: int, char
    char v9;  // [bp-0x478]
    unsigned long long v10;  // [sp-0x450]
    unsigned long v11;  // [sp-0x448], Other Possible Types: unsigned long long
    int v12;  // [sp-0x440]
    unsigned long long v13;  // [sp-0x430]
    unsigned long long v14;  // [sp-0x420]
    unsigned long v15;  // [sp-0x418], Other Possible Types: unsigned long long
    int v16;  // [bp-0x410], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v17;  // [sp-0x408]
    int v18;  // [sp-0x400]
    int v19;  // [sp-0x3f0]
    int v20;  // [bp-0x3e0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v21;  // [sp-0x3d8]
    int v22;  // [sp-0x3d0]
    int v23;  // [sp-0x3c0]
    unsigned long v24;  // [sp-0x3b0], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x3a8]
    unsigned long long v26;  // [sp-0x3a0]
    int v27;  // [sp-0x398]
    int v28;  // [sp-0x388]
    int v29;  // [sp-0x378]
    int v30;  // [sp-0x368]
    unsigned long long v31;  // [bp-0x358]
    char v32;  // [sp-0x355]
    unsigned long v33;  // [sp-0x350], Other Possible Types: unsigned long long
    unsigned long long v34;  // [sp-0x348]
    unsigned long long v35;  // [sp-0x340]
    int v36;  // [sp-0x338]
    int v37;  // [sp-0x328]
    int v38;  // [sp-0x318]
    int v39;  // [sp-0x308]
    unsigned long long v40;  // [bp-0x2f8]
    char v41;  // [sp-0x2f5]
    char v42;  // [bp-0x2f0], Other Possible Types: unsigned long long, unsigned long
    char v43;  // [bp-0x2e9]
    char *v44;  // [sp-0x2e8], Other Possible Types: unsigned long
    unsigned long long v45;  // [sp-0x2e0], Other Possible Types: unsigned long
    char v46;  // [bp-0x2d8]
    char v47;  // [bp-0x2c8]
    char v48;  // [bp-0x2b8]
    char v49;  // [bp-0x2a8]
    char v50;  // [bp-0x298]
    int v51;  // [sp-0x1d0]
    int v52;  // [sp-0x1c0]
    unsigned long long v53;  // [sp-0x1b0]
    char v54;  // [sp-0x1a8]
    char v55;  // [bp-0x190]
    char v56;  // [sp-0x70]
    char v57;  // [sp-0x6f]
    unsigned long v59;  // rax
    void* v60;  // r12
    unsigned long v61;  // rbx
    char v62;  // bl
    int v63;  // xmm0
    int v64;  // xmm1
    int v65;  // xmm2
    unsigned long v66;  // rdx
    unsigned long long v67;  // r14
    unsigned long long v68;  // r14
    int v69;  // xmm0
    int v70;  // ymm0
    int v71;  // ymm0
    int v72;  // xmm1
    int v73;  // ymm1
    int v74;  // ymm1
    int v75;  // xmm2
    int v76;  // ymm2
    int v77;  // ymm2
    struct_1 *v78;  // r12
    char *v81;  // r15
    struct_2 *v82;  // rax
    unsigned long long v83;  // rcx
    unsigned long long v84;  // rdx
    struct_1 *v85;  // r14
    int v86;  // xmm0
    int v87;  // ymm0
    struct_1 *v88;  // r14
    int v89;  // xmm0
    struct_1 *v90;  // r14
    int v92;  // xmm0
    int v93;  // xmm0
    int v94;  // ymm0
    unsigned long long v95;  // rsi
    unsigned long long v96;  // rax
    unsigned long long v97;  // rax
    unsigned long long v98;  // rax
    struct struct_0 **v99;  // rbx
    unsigned long long v100;  // rax
    int v101;  // xmm0
    int v102;  // xmm1
    int v103;  // xmm2
    int v104;  // xmm0
    int v105;  // xmm1
    int v106;  // xmm2
    unsigned long long v107;  // rax
    unsigned long long v108;  // rdx
    int v109;  // xmm0
    int v110;  // xmm1
    int v111;  // xmm2
    int v112;  // xmm0
    int v113;  // xmm1
    int v114;  // xmm2
    unsigned long long v115;  // rax
    unsigned long long v116;  // r12
    unsigned long long v117;  // rax
    unsigned long long v118;  // rax
    unsigned long long v119;  // r12
    unsigned long long v120;  // rax
    unsigned long long v121;  // rax
    unsigned long long v124;  // rax
    unsigned long long v125;  // rax
    struct_1 *v126;  // rax
    unsigned long long v127;  // r14

    v2 = v59 | -0x100 | 1;
    v11 = std::io::stdio::stdin::h7215cc131abb55d8();
    uu_join::State::new::h0cd55892c1b4350a(&v42, 0, a0, a1, &v11, a4->field_48, v0, v1);
    v60 = v44;
    if (v24 == 0x8000000000000000)
    {
        v62 = v61 | -0x100 | 1 | -0x100 | 1 | -0x100 | 1;
        goto LABEL_47024d;
    }
    v31 = *((long long *)&v50);
    v63 = *((int128_t *)&v46);
    v64 = *((int128_t *)&v47);
    v65 = *((int128_t *)&v48);
    *((int128_t *)&v30) = *((int128_t *)&v49);
    v29 = v65;
    v28 = v64;
    v27 = v63;
    v24 = v42;
    v25 = v60;
    v26 = v45;
    v2 = v66 | -0x100 | 1;
    uu_join::State::new::h0cd55892c1b4350a(&v42, 1, a2, a3, &v11, a4->field_50, v0, v1);
    v67 = v42;
    v60 = v44;
    if (v67 == 0x8000000000000000)
    {
        v2 = -255;
        goto LABEL_47022d;
    }
    v40 = *((long long *)&v50);
    v69 = *((int128_t *)&v46);
    v71 = v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69;
    v72 = *((int128_t *)&v47);
    v74 = v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
    v75 = *((int128_t *)&v48);
    v77 = v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
    *((int128_t *)&v39) = *((int128_t *)&v49);
    v38 = v75;
    v37 = v72;
    v36 = v69;
    v14 = v67;
    v33 = v67;
    v34 = v60;
    v35 = v45;
    _$LT$uu_join..MultiByteSep$u20$as$u20$core..clone..Clone$GT$::clone::hf4517c1cd2803ad8(&v42, a5);
    v78 = a4;
    memcpy(&v55, &v42, 288);
    v56 = v78->field_5b;
    v57 = v78->field_5e;
    v81 = &v78->field_5c;
    v3 = v78->field_5c;
    if (!v3)
    {
        v2 = v3 | -0x100 | 1;
        uu_join::State::initialize::h0d6343785e1b8bfa(&v24, a5, 0);
        uu_join::State::initialize::h0d6343785e1b8bfa(&v33, a5, *(v81));
        v85 = a4;
        v13 = v85->field_10;
        v86 = v85->field_0;
        v87 = v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86;
        v12 = v86;
        v2 = 0;
    }
    else
    {
        v82 = ::0x46cba0::alloc::alloc::Global::alloc_impl::hf61749d460433fff(16);
        if (!v82)
        {
            v2 = v82 | -0x100 | 1;
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        v82->field_0 = 0;
        v83 = v42;
        v84 = *((long long *)&v43);
        *((unsigned long long *)&(&v82->field_0)[1]) = v83;
        v82->field_1 = v84;
        v2 = v83 | -0x100 | 1;
        alloc::slice::hack::into_vec::h442155ce6af6c91d(&v4, v82, 1);
        v42 = a5;
        v44 = v81;
        v45 = &v4;
        uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h06953f2087213536(&v42, &v24);
        uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h06953f2087213536(&v42, &v33);
        v13 = v6;
        v89 = *((int128_t *)&v4);
        v87 = v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89;
        v12 = v89;
        v2 = v13 | -0x100 | 1;
    }
    v90 = v88;
    memcpy(&v42, a5, 288);
    v92 = v12;
    v52 = v92;
    v53 = v13;
    v93 = v90->field_20;
    v94 = v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93;
    v54 = v90->field_5f;
    v51 = v93;
    v15 = std::io::stdio::stdout::h077da66234850927();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h13159b36da620363(&v9, 0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&v15, v95, v66));
    if (a4->field_5d)
    {
        v96 = uu_join::State::print_headers::h4b8f52b1d4aec868(&v24, &v9, &v33);
        if (v96)
        {
            v60 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v96);
            goto LABEL_47018e;
        }
        v97 = uu_join::State::reset_read_line::h670d4e3b65afec38(&v24, &v55);
        if (v97)
        {
            v60 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v97);
        }
        else
        {
            v98 = uu_join::State::reset_read_line::h670d4e3b65afec38(&v33, &v55);
            if (!v98)
                goto LABEL_46fe32;
            v60 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v98);
        }
LABEL_47018e:
        goto LABEL_4701f0;
    }
LABEL_46fe32:
    if (!(v26) || !(v35))
    {
        v60 = uu_join::State::finalize::h602cd4dd171a4716(&v24, &v9, &v55, &v42);
        if (v60)
        {
            v121 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v9);
            if (!v121)
                goto LABEL_4701f0;
            v60 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v121);
            ::0x46c300::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::he130ce20a56a1611(v60, v66);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h7b07a396a19b1245(0, v66);
            v60 = uu_join::State::finalize::h602cd4dd171a4716(&v33, &v9, &v55, &v42);
            if (v60)
            {
                v124 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v9);
                if (!v124)
                    goto LABEL_4701f0;
                v60 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v124);
                ::0x46c300::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::he130ce20a56a1611(v60, v66);
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h7b07a396a19b1245(0, v66);
                v125 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v9);
                if (v125)
                {
                    v60 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v125);
                }
                else
                {
                    if (!(!*((char *)&v31 + 2)) || !(!*((char *)&v40 + 2)))
                    {
                        v20 = uucore::execution_phrase::h54f12bf70b2cca36();
                        v21 = v66;
                        v16 = &v20;
                        v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h338ded74354255ed;
                        v4 = &g_533190;
                        v5 = 2;
                        v8 = 0;
                        v6 = &v16;
                        v7 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v4, v95, v66);
                        uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                    }
                    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbc18d3774155f6d8(&v9);
                    core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..MultiByteSep$GT$$GT$::h5e9187f52450fdb7(&v42);
                    core::ptr::drop_in_place$LT$uu_join..Input$LT$uu_join..MultiByteSep$GT$$GT$::h09f869a49278a7b4(&v55);
                    core::ptr::drop_in_place$LT$uu_join..State$GT$::h989692c6be533a96(&v33);
                    core::ptr::drop_in_place$LT$uu_join..State$GT$::h989692c6be533a96(&v24);
                    v126 = a4;
                    v127 = &v126->padding_18;
                    core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::hdd67fa844d6b97f7(&v126->padding_30);
                    if (!v3)
                    {
                        ::0x46c560::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h087390dedeb3a8a6(v127);
                        return 0;
                    }
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::h01c683ba8faa70de(a4);
                }
                goto LABEL_47018e;
            }
        }
LABEL_4701ea:
        goto LABEL_4701f0;
    }
    else
    {
        v99 = uu_join::State::get_current_key::h4148c5666ccca327;
        v10 = 9223372036854775809;
        do
        {
            v100 = uu_join::Input$LT$Sep$GT$::compare::h261f74b1101789a8(*((int *)&v56), v99(&v24), v66, v99(&v33), v66);
            if (!(char)v100)
            {
                uu_join::State::extend::hcd00f330514aa917(&v4, &v24, &v55);
                if (v4 == v10)
                {
                    v116 = v5;
                    v117 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v9);
                    if (v117)
                    {
                        ::0x46c300::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::he130ce20a56a1611(v116, v6);
                        goto LABEL_4701f0;
                    }
                }
                v101 = *((int128_t *)&v4);
                v102 = (int128_t)v6;
                v103 = *((int128_t *)&v8);
                v19 = v103;
                v18 = v102;
                v16 = v101;
                uu_join::State::extend::hcd00f330514aa917(&v4, &v33, &v55);
                if (v4 == v10)
                {
                    v119 = v5;
                    v120 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v9);
                    if (v120)
                        ::0x46c300::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::he130ce20a56a1611(v119, v6);
                }
                else
                {
                    v104 = *((int128_t *)&v4);
                    v105 = (int128_t)v6;
                    v106 = *((int128_t *)&v8);
                    v23 = v106;
                    v22 = v105;
                    v20 = v104;
                    if (!a4->field_5a || (v107 = uu_join::State::combine::h71dca64a51e3130b(&v24, &v9, &v33, &v42), !v107))
                    {
                        v109 = (int128_t)v16;
                        v110 = v18;
                        v111 = v19;
                        v8 = v111;
                        v6 = v110;
                        v4 = v109;
                        uu_join::State::reset::h0fc47730b66e1f19(&v24, &v4, v108);
                        v112 = (int128_t)v20;
                        v94 = v94 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v109 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v112;
                        v113 = v22;
                        v74 = v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v105 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v110 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v113;
                        v114 = v23;
                        v77 = v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v111 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v114;
                        v8 = v114;
                        v6 = v113;
                        v4 = v112;
                        uu_join::State::reset::h0fc47730b66e1f19(&v33, &v4, v66);
                    }
                    else
                    {
                        v60 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v107);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h400859eed0716e49(&v20);
                    }
                }
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h400859eed0716e49(&v16);
                goto LABEL_4701f0;
            }
            if ((unsigned int)v100 != 1)
            {
                v60 = uu_join::State::skip_line::h52e0b7f3363a1099(&v24, &v9, &v55, &v42);
                if (!v60)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h7b07a396a19b1245(0, v66);
                }
                else
                {
                    v118 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v9);
                    if (!v118)
                        goto LABEL_4701f0;
                    v60 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v118);
                    ::0x46c300::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::he130ce20a56a1611(v60, v66);
                    goto LABEL_4701ea;
                }
            }
            else
            {
                v60 = uu_join::State::skip_line::h52e0b7f3363a1099(&v33, &v9, &v55, &v42);
                if (v60)
                {
                    v115 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v9);
                    if (!v115)
                        goto LABEL_4701f0;
                    v60 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v115);
                    ::0x46c300::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::he130ce20a56a1611(v60, v66);
                    goto LABEL_4701ea;
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h7b07a396a19b1245(0, v66);
                }
            }
        } while ((v32 = 1, v41 = 1, v26 && v35));
LABEL_4701f0:
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbc18d3774155f6d8(&v9);
        core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..MultiByteSep$GT$$GT$::h5e9187f52450fdb7(&v42);
        core::ptr::drop_in_place$LT$uu_join..Input$LT$uu_join..MultiByteSep$GT$$GT$::h09f869a49278a7b4(&v55);
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h989692c6be533a96(&v33);
        v68 = v14;
LABEL_47022d:
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h989692c6be533a96(&v24);
        v62 = v2;
        if (v68 == 0x8000000000000000)
        {
LABEL_47024d:
            core::ptr::drop_in_place$LT$uu_join..MultiByteSep$GT$::h47928ca357a99c66(a5);
        }
        core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::hdd67fa844d6b97f7(&a4->padding_30);
        if (v62)
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::h01c683ba8faa70de(a4);
        v127 = &a4->padding_18;
        ::0x46c560::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h087390dedeb3a8a6(v127);
        return v60;
    }
}
