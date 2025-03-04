long long uu_join::exec::h99a16e0e986e240a(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_1 *a4, void* a5)
{
    char v0;  // [bp-0x4e0]
    char v1;  // [bp-0x4d8]
    unsigned int v2;  // [sp-0x4c8]
    char v3;  // [sp-0x4c1]
    struct struct_0 **v4;  // [sp-0x4b0]
    unsigned long long v5;  // [sp-0x4a8]
    struct struct_0 **v6;  // [sp-0x4a0]
    unsigned long long v7;  // [sp-0x498]
    void* v8;  // [bp-0x490], Other Possible Types: struct struct_0 **
    char v9;  // [bp-0x478]
    unsigned long long v10;  // [sp-0x450]
    unsigned long v11;  // [sp-0x448]
    struct struct_0 **v12;  // [sp-0x440]
    struct struct_0 **v13;  // [sp-0x430]
    unsigned long long v14;  // [sp-0x420]
    unsigned long v15;  // [sp-0x418]
    struct struct_0 **v16;  // [sp-0x410]
    unsigned long long v17;  // [sp-0x408]
    struct struct_0 **v18;  // [sp-0x400]
    struct struct_0 **v19;  // [sp-0x3f0]
    struct struct_0 **v20;  // [sp-0x3e0]
    unsigned long long v21;  // [sp-0x3d8]
    struct struct_0 **v22;  // [sp-0x3d0]
    struct struct_0 **v23;  // [sp-0x3c0]
    unsigned long v24;  // [sp-0x3b0]
    unsigned long long v25;  // [sp-0x3a8]
    unsigned long long v26;  // [sp-0x3a0]
    struct struct_0 **v27;  // [sp-0x398]
    struct struct_0 **v28;  // [sp-0x388]
    struct struct_0 **v29;  // [sp-0x378]
    struct struct_0 **v30;  // [sp-0x368]
    unsigned long long v31;  // [bp-0x358]
    char v32;  // [sp-0x355]
    unsigned long v33;  // [sp-0x350]
    unsigned long long v34;  // [sp-0x348]
    unsigned long long v35;  // [sp-0x340]
    struct struct_0 **v36;  // [sp-0x338]
    struct struct_0 **v37;  // [sp-0x328]
    struct struct_0 **v38;  // [sp-0x318]
    struct struct_0 **v39;  // [sp-0x308]
    unsigned long long v40;  // [bp-0x2f8]
    char v41;  // [sp-0x2f5]
    unsigned long v42;  // [sp-0x2f0]
    char v43;  // [bp-0x2f0], Other Possible Types: unsigned long
    char v44;  // [bp-0x2e9]
    char *v45;  // [sp-0x2e8], Other Possible Types: unsigned long
    struct struct_0 **v46;  // [sp-0x2e0], Other Possible Types: unsigned long
    char v47;  // [bp-0x2d8]
    char v48;  // [bp-0x2c8]
    char v49;  // [bp-0x2b8]
    char v50;  // [bp-0x2a8]
    char v51;  // [bp-0x298]
    struct struct_0 **v52;  // [sp-0x1d0]
    struct struct_0 **v53;  // [sp-0x1c0]
    struct struct_0 **v54;  // [sp-0x1b0]
    char v55;  // [sp-0x1a8]
    char v56;  // [bp-0x190]
    char v57;  // [sp-0x70]
    char v58;  // [sp-0x6f]
    unsigned long v60;  // rax
    void* v61;  // r12
    unsigned long v62;  // rbx
    char v63;  // bl
    struct struct_0 **v64;  // xmm0
    struct struct_0 **v65;  // xmm1
    struct struct_0 **v66;  // xmm2
    unsigned long v67;  // rdx
    unsigned long long v68;  // r14
    struct struct_0 **v69;  // xmm0
    int v70;  // ymm0
    int v71;  // ymm0
    struct struct_0 **v72;  // xmm1
    int v73;  // ymm1
    int v74;  // ymm1
    struct struct_0 **v75;  // xmm2
    int v76;  // ymm2
    int v77;  // ymm2
    struct_1 *v78;  // r12
    char *v81;  // r15
    struct_2 *v82;  // rax
    unsigned long long v83;  // rcx
    unsigned long long v84;  // rdx
    struct_1 *v85;  // r14
    struct struct_0 **v86;  // xmm0
    int v87;  // ymm0
    struct struct_0 **v88;  // xmm0
    char v89;  // bl
    struct struct_0 **v90;  // xmm0
    struct struct_0 **v91;  // xmm0
    int v92;  // ymm0
    unsigned long long v93;  // rax
    unsigned long long v94;  // rax
    unsigned long long v95;  // rax
    unsigned long long v96;  // rax
    unsigned long long v97;  // rax
    struct struct_0 **v98;  // xmm0
    struct struct_0 **v99;  // xmm1
    struct struct_0 **v100;  // xmm2
    struct struct_0 **v101;  // xmm0
    struct struct_0 **v102;  // xmm1
    struct struct_0 **v103;  // xmm2
    unsigned long long v104;  // rax
    struct struct_0 **v105;  // xmm0
    struct struct_0 **v106;  // xmm1
    struct struct_0 **v107;  // xmm2
    struct struct_0 **v108;  // xmm0
    struct struct_0 **v109;  // xmm1
    struct struct_0 **v110;  // xmm2
    unsigned long long v111;  // rax
    unsigned long long v112;  // rax
    unsigned long long v113;  // rax
    unsigned long long v114;  // rax
    unsigned long long v115;  // rax
    unsigned long long v118;  // r14
    unsigned long long v119;  // rax
    unsigned long long v120;  // rax
    struct_1 *v121;  // rax
    unsigned long long v122;  // r14

    v2 = v60 & 0xffffffffffffff00 | 1;
    v11 = std::io::stdio::stdin::h7215cc131abb55d8();
    uu_join::State::new::h1e047ff86b763ae6(&v43, 0, a0, a1, &v11, a4->field_48, v0, v1);
    v61 = v45;
    if (v24 == 0x8000000000000000)
    {
        v63 = ((v62 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
        goto LABEL_47007d;
    }
    v31 = *((long long *)&v51);
    v64 = *((int128_t *)&v47);
    v65 = *((int128_t *)&v48);
    v66 = *((int128_t *)&v49);
    *((int128_t *)&v30) = *((int128_t *)&v50);
    v29 = v66;
    v28 = v65;
    v27 = v64;
    v24 = v42;
    v25 = v61;
    v26 = v46;
    v2 = v67 & 0xffffffffffffff00 | 1;
    uu_join::State::new::h1e047ff86b763ae6(&v43, 1, a2, a3, &v11, a4->field_50, v0, v1);
    v68 = v42;
    v61 = v45;
    if (v68 == 0x8000000000000000)
    {
        v2 = 1;
        goto LABEL_47005d;
    }
    v40 = *((long long *)&v51);
    v69 = *((int128_t *)&v47);
    v71 = (v70 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69;
    v72 = *((int128_t *)&v48);
    v74 = (v73 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
    v75 = *((int128_t *)&v49);
    v77 = (v76 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
    *((int128_t *)&v39) = *((int128_t *)&v50);
    v38 = v75;
    v37 = v72;
    v36 = v69;
    v14 = v68;
    v33 = v68;
    v34 = v61;
    v35 = v46;
    _$LT$uu_join..MultiByteSep$u20$as$u20$core..clone..Clone$GT$::clone::h1a937755992eb5de(&v43, a5);
    v78 = a4;
    memcpy(&v56, &v43, 288);
    v57 = v78->field_5b;
    v58 = v78->field_5e;
    v81 = &v78->field_5c;
    v3 = v78->field_5c;
    if (!v3)
    {
        v2 = v3 & 0xffffffffffffff00 | 1;
        uu_join::State::initialize::h5880c996c8e1a0f0(&v24, a5, 0);
        uu_join::State::initialize::h5880c996c8e1a0f0(&v33, a5, *(v81));
        v85 = a4;
        v13 = &v85->field_10->field_0;
        v86 = *((int128_t *)&v85->field_0);
        v87 = v71 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86;
        v12 = v86;
        v2 = 0;
    }
    else
    {
        v82 = ::0x46c9d0::alloc::alloc::Global::alloc_impl::hf61749d460433fff(16);
        if (!v82)
        {
            v2 = v82 & 0xffffffffffffff00 | 1;
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 16); /* do not return */
        }
        v82->field_0 = 0;
        v83 = v42;
        v84 = *((long long *)&v44);
        *((unsigned long long *)&(&v82->field_0)[1]) = v83;
        v82->field_1 = v84;
        v2 = v83 & 0xffffffffffffff00 | 1;
        alloc::slice::hack::into_vec::h6319bf421152ad63(&v4, v82, 1);
        v43 = a5;
        v45 = v81;
        v46 = &v4;
        uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h906e94d0f8a5403b(&v43, &v24);
        uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h906e94d0f8a5403b(&v43, &v33);
        v13 = v6;
        v88 = *((int128_t *)&v4);
        v87 = v71 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88;
        v12 = v88;
        v2 = v13 & 0xffffffffffffff00 | 1;
        v85 = a4;
    }
    v89 = v85->field_5f;
    memcpy(&v43, a5, 288);
    v90 = v12;
    v53 = v90;
    v54 = v13;
    v91 = *((int128_t *)&v85->field_20);
    v92 = (v87 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
    v55 = v89;
    v52 = v91;
    v15 = std::io::stdio::stdout::h077da66234850927();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h7a3dd15b78101682(&v9, 0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&v15));
    if (a4->field_5d)
    {
        v93 = uu_join::State::print_headers::h9c33b910610aa5ae(&v24, &v9, &v33, &v43);
        if (v93)
        {
            v94 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v93);
            goto LABEL_46ffbe;
        }
        v95 = uu_join::State::reset_read_line::h2903dcabb2a1b3f0(&v24, &v56);
        if (v95)
        {
            v94 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v95);
        }
        else
        {
            v96 = uu_join::State::reset_read_line::h2903dcabb2a1b3f0(&v33, &v56);
            if (!v96)
                goto LABEL_46fc62;
            v94 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v96);
        }
LABEL_46ffbe:
        v61 = v94;
        goto LABEL_470020;
    }
LABEL_46fc62:
    if (!(v26) || !(v35))
    {
        v61 = uu_join::State::finalize::hd2bfe30b3763388f(&v24, &v9, &v56, &v43);
        if (v61)
        {
            v115 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v9);
            if (!v115)
                goto LABEL_470020;
            v118 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v115);
            ::0x46c130::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(v61, v67);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, v67);
            v61 = uu_join::State::finalize::hd2bfe30b3763388f(&v33, &v9, &v56, &v43);
            if (v61)
            {
                v119 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v9);
                if (!v119)
                    goto LABEL_470020;
                v118 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v119);
                ::0x46c130::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(v61, v67);
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, v67);
                v120 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v9);
                if (v120)
                {
                    v94 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v120);
                }
                else
                {
                    if (!(!*((char *)&v31 + 2)) || !(!*((char *)&v40 + 2)))
                    {
                        v20 = uucore::execution_phrase::h7a36a698673d06ab();
                        v21 = v67;
                        v16 = &v20;
                        v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a9acb5b6b087e94;
                        v4 = &g_5325f0;
                        v5 = 2;
                        v8 = 0;
                        v6 = &v16;
                        v7 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v4);
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    }
                    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::he0aa85dca1b04db9(&v9);
                    core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..MultiByteSep$GT$$GT$::h8a3c31f87c643312(&v43);
                    core::ptr::drop_in_place$LT$uu_join..Input$LT$uu_join..MultiByteSep$GT$$GT$::h2bbc03a57292d429(&v56);
                    core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&v33);
                    core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&v24);
                    v121 = a4;
                    v122 = &v121->padding_18;
                    core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::h9f16980b2393dbc4(&v121->padding_28[8]);
                    if (!v3)
                    {
                        ::0x46c390::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8146444ea6c0efb2(v122);
                        return 0;
                    }
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hb0d1780117770078(a4);
                }
                goto LABEL_46ffbe;
            }
        }
LABEL_47001a:
        v61 = v118;
        goto LABEL_470020;
    }
    else
    {
        v10 = 9223372036854775809;
        do
        {
            v97 = uu_join::Input$LT$Sep$GT$::compare::h29bf124cec785704(*((int *)&v57), uu_join::State::get_current_key::h6b22667ac5a703a7(&v24), v67, uu_join::State::get_current_key::h6b22667ac5a703a7(&v33), v67);
            if (!(char)v97)
            {
                uu_join::State::extend::h9f5126199f367c57(&v4, &v24, &v56);
                if (v4 == v10)
                {
                    v61 = v5;
                    v112 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v9);
                    if (v112)
                    {
                        ::0x46c130::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(v61, v6);
                        v61 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v112);
                        goto LABEL_470020;
                    }
                }
                v98 = *((int128_t *)&v4);
                v99 = *((int128_t *)&v6);
                v100 = *((int128_t *)&v8);
                v19 = v100;
                v18 = v99;
                v16 = v98;
                uu_join::State::extend::h9f5126199f367c57(&v4, &v33, &v56);
                if (v4 == v10)
                {
                    v61 = v5;
                    v114 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v9);
                    if (v114)
                    {
                        ::0x46c130::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(v61, v6);
                        v61 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v114);
                    }
                }
                else
                {
                    v101 = *((int128_t *)&v4);
                    v102 = *((int128_t *)&v6);
                    v103 = *((int128_t *)&v8);
                    v23 = v103;
                    v22 = v102;
                    v20 = v101;
                    if (!a4->field_5a || (v104 = uu_join::State::combine::he1c3f6ec163eb0f7(&v24, &v9, &v33), !v104))
                    {
                        v105 = *((int128_t *)&v16);
                        v106 = v18;
                        v107 = v19;
                        v8 = v107;
                        v6 = v106;
                        v4 = v105;
                        uu_join::State::reset::h80c820df90bbe344(&v24, &v4);
                        v108 = *((int128_t *)&v20);
                        v92 = (((v92 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v105) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v108;
                        v109 = v22;
                        v74 = (((v74 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v109;
                        v110 = v23;
                        v77 = (((v77 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v107) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v110;
                        v8 = v110;
                        v6 = v109;
                        v4 = v108;
                        uu_join::State::reset::h80c820df90bbe344(&v33, &v4);
                    }
                    else
                    {
                        v61 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v104);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&v20);
                    }
                }
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&v16);
                goto LABEL_470020;
            }
            if ((unsigned int)v97 != 1)
            {
                v61 = uu_join::State::skip_line::h163df7266a805834(&v24, &v9, &v56, &v43);
                if (!v61)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, v67);
                }
                else
                {
                    v113 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v9);
                    if (!v113)
                        goto LABEL_470020;
                    v118 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v113);
                    ::0x46c130::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(v61, v67);
                    goto LABEL_47001a;
                }
            }
            else
            {
                v61 = uu_join::State::skip_line::h163df7266a805834(&v33, &v9, &v56, &v43);
                if (v61)
                {
                    v111 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v9);
                    if (!v111)
                        goto LABEL_470020;
                    v118 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v111);
                    ::0x46c130::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(v61, v67);
                    goto LABEL_47001a;
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, v67);
                }
            }
        } while ((v32 = 1, v41 = 1, v26 && v35));
LABEL_470020:
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::he0aa85dca1b04db9(&v9);
        core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..MultiByteSep$GT$$GT$::h8a3c31f87c643312(&v43);
        core::ptr::drop_in_place$LT$uu_join..Input$LT$uu_join..MultiByteSep$GT$$GT$::h2bbc03a57292d429(&v56);
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&v33);
        v68 = v14;
LABEL_47005d:
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&v24);
        v63 = v2;
        if (v68 == 0x8000000000000000)
        {
LABEL_47007d:
            core::ptr::drop_in_place$LT$uu_join..MultiByteSep$GT$::hf74166ddf105f89f(a5);
        }
        core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::h9f16980b2393dbc4(&a4->padding_28[8]);
        if (v63)
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hb0d1780117770078(a4);
        v122 = &a4->padding_18;
        ::0x46c390::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8146444ea6c0efb2(v122);
        return v61;
    }
}
