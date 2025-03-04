long long uu_join::exec::h84507deb68976620(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_2 *a4, char a5)
{
    char v0;  // [bp-0x258]
    char v1;  // [bp-0x250]
    char v2;  // [bp-0x244]
    char v3;  // [sp-0x243]
    char v4;  // [sp-0x242]
    char v5;  // [sp-0x241]
    unsigned int v6;  // [sp-0x240]
    char v7;  // [sp-0x239]
    struct struct_0 **v8;  // [sp-0x238], Other Possible Types: unsigned long
    struct struct_0 **v9;  // [sp-0x238]
    char v10;  // [bp-0x231]
    char *v11;  // [sp-0x230], Other Possible Types: unsigned long long
    char *v12;  // [sp-0x230]
    struct struct_0 **v13;  // [sp-0x228], Other Possible Types: unsigned long
    struct struct_0 **v14;  // [bp-0x220]
    unsigned long long v15;  // [sp-0x220]
    void* v16;  // [bp-0x218], Other Possible Types: struct struct_0 **
    char v17;  // [bp-0x210]
    char v18;  // [bp-0x200]
    char v19;  // [bp-0x1f0]
    char v20;  // [bp-0x1e0]
    char v21;  // [bp-0x1d8]
    unsigned long v22;  // [sp-0x1b0]
    struct struct_0 **v23;  // [sp-0x1a8]
    unsigned long long v24;  // [sp-0x1a0]
    struct struct_0 **v25;  // [bp-0x198], Other Possible Types: char
    struct struct_0 **v26;  // [sp-0x188]
    struct struct_0 **v27;  // [sp-0x178]
    unsigned long long v28;  // [sp-0x168]
    struct struct_0 **v29;  // [sp-0x160]
    char v30;  // [sp-0x150]
    char v31;  // [sp-0x14f]
    struct struct_0 **v32;  // [sp-0x148]
    unsigned long long v33;  // [sp-0x138]
    unsigned long v34;  // [sp-0x130]
    struct struct_0 **v35;  // [sp-0x128]
    unsigned long long v36;  // [sp-0x120]
    struct struct_0 **v37;  // [sp-0x118]
    struct struct_0 **v38;  // [sp-0x108]
    unsigned long v39;  // [sp-0xf0]
    char *v40;  // [sp-0xe8]
    unsigned long long v41;  // [sp-0xe0]
    struct struct_0 **v42;  // [sp-0xd8]
    struct struct_0 **v43;  // [sp-0xc8]
    struct struct_0 **v44;  // [sp-0xb8]
    struct struct_0 **v45;  // [sp-0xa8]
    unsigned long v46;  // [bp-0x98]
    char v47;  // [sp-0x95]
    unsigned long v48;  // [sp-0x90]
    char *v49;  // [sp-0x88]
    unsigned long long v50;  // [sp-0x80]
    struct struct_0 **v51;  // [sp-0x78]
    struct struct_0 **v52;  // [sp-0x68]
    struct struct_0 **v53;  // [sp-0x58]
    struct struct_0 **v54;  // [sp-0x48]
    unsigned long long v55;  // [bp-0x38]
    char v56;  // [sp-0x35]
    char *v58;  // r15
    unsigned long long v59;  // rcx
    struct struct_0 **v60;  // xmm0
    struct struct_0 **v61;  // xmm1
    struct struct_0 **v62;  // xmm2
    struct struct_0 **v63;  // xmm0
    int v64;  // ymm0
    int v65;  // ymm0
    struct struct_0 **v66;  // xmm1
    int v67;  // ymm1
    int v68;  // ymm1
    struct struct_0 **v69;  // xmm2
    int v70;  // ymm2
    int v71;  // ymm2
    char *v72;  // r15
    struct_1 *v73;  // rax
    unsigned long long v74;  // rcx
    unsigned long long v75;  // rdx
    struct struct_0 **v76;  // xmm0
    int v77;  // ymm0
    struct struct_0 **v78;  // xmm0
    struct struct_0 **v79;  // xmm0
    struct struct_0 **v80;  // xmm0
    int v81;  // ymm0
    unsigned long long v82;  // rax
    char *v83;  // rax
    unsigned long long v84;  // rax
    unsigned long long v85;  // rax
    unsigned long v86;  // rdx
    unsigned long long v87;  // rax
    struct struct_0 **v88;  // xmm0
    struct struct_0 **v89;  // xmm1
    struct struct_0 **v90;  // xmm2
    struct struct_0 **v91;  // xmm0
    struct struct_0 **v92;  // xmm1
    struct struct_0 **v93;  // xmm2
    unsigned long long v94;  // rax
    struct struct_0 **v95;  // xmm0
    struct struct_0 **v96;  // xmm1
    struct struct_0 **v97;  // xmm2
    struct struct_0 **v98;  // xmm0
    struct struct_0 **v99;  // xmm1
    struct struct_0 **v100;  // xmm2
    unsigned long long v101;  // rax
    unsigned long long v102;  // rax
    unsigned long long v103;  // rax
    unsigned long long v104;  // rax
    unsigned long long v105;  // rax
    char *v108;  // r12
    unsigned long long v109;  // rax
    unsigned long long v110;  // rax
    unsigned long long v111;  // r13

    v22 = std::io::stdio::stdin::h7215cc131abb55d8();
    uu_join::State::new::h1e047ff86b763ae6(&v8, 0, a0, a1, &v22, a4->field_48, v0, v1);
    v58 = v11;
    if (v39 == 0x8000000000000000)
        goto LABEL_46f46c;
    v59 = *((long long *)&v20);
    v46 = v59;
    v60 = *((int128_t *)&v14);
    v61 = *((int128_t *)&v17);
    v62 = *((int128_t *)&v18);
    *((int128_t *)&v45) = *((int128_t *)&v19);
    v44 = v62;
    v43 = v61;
    v42 = v60;
    v39 = v8;
    v40 = v58;
    v41 = v13;
    v6 = v59 & 0xffffffffffffff00 | 1;
    uu_join::State::new::h1e047ff86b763ae6(&v8, 1, a2, a3, &v22, a4->field_50, v0, v1);
    v58 = v11;
    if (v48 == 0x8000000000000000)
    {
        v6 = v48 & 0xffffffffffffff00 | 1;
        goto LABEL_46f45b;
    }
    v55 = *((long long *)&v20);
    v63 = *((int128_t *)&v14);
    v65 = (v64 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
    v66 = *((int128_t *)&v17);
    v68 = (v67 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66;
    v69 = *((int128_t *)&v18);
    v71 = (v70 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69;
    *((int128_t *)&v54) = *((int128_t *)&v19);
    v53 = v69;
    v52 = v66;
    v51 = v63;
    v48 = v8;
    v49 = v58;
    v50 = v13;
    v5 = a5;
    v3 = a4->field_5b;
    v4 = a4->field_5e;
    v72 = &a4->field_5c;
    v7 = a4->field_5c;
    if (!v7)
    {
        v6 = v7 & 0xffffffffffffff00 | 1;
        uu_join::State::initialize::hba6254d3450d7ee5(&v39, &v2, 0);
        uu_join::State::initialize::hba6254d3450d7ee5(&v48, &v2, *(v72));
        v33 = a4->field_10;
        v76 = *((int128_t *)&a4->field_0);
        v77 = v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
        v32 = v76;
        v6 = 0;
    }
    else
    {
        v73 = ::0x46c9d0::alloc::alloc::Global::alloc_impl::hf61749d460433fff(16);
        if (!v73)
        {
            v6 = v73 & 0xffffffffffffff00 | 1;
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 16); /* do not return */
        }
        v73->field_0 = 0;
        v74 = v8;
        v75 = *((long long *)&v10);
        *((unsigned long long *)&(&v73->field_0)[1]) = v74;
        v73->field_1 = v75;
        v6 = v74 & 0xffffffffffffff00 | 1;
        alloc::slice::hack::into_vec::h6319bf421152ad63(&v23, v73, 1);
        v9 = &v2;
        v12 = v72;
        v14 = &v23;
        uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h79a2c6a7251e6e02(&v8, &v39);
        uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h79a2c6a7251e6e02(&v8, &v48);
        v33 = *((long long *)&v25);
        v78 = *((int128_t *)&v23);
        v77 = v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
        v32 = v78;
        v6 = v33 & 0xffffffffffffff00 | 1;
    }
    v79 = v32;
    v27 = v79;
    v28 = v33;
    v80 = *((int128_t *)&a4->field_20);
    v81 = (v77 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
    v30 = a4->field_5f;
    v31 = a5;
    v29 = v80;
    v34 = std::io::stdio::stdout::h077da66234850927();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h7a3dd15b78101682(&v21, 0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&v34));
    if (a4->field_5d)
    {
        v82 = uu_join::State::print_headers::h1a14b3e3b41d9ab7(&v39, &v21, &v48, &v27);
        if (v82)
        {
            v83 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v82);
            goto LABEL_46f3d5;
        }
        v84 = uu_join::State::reset_read_line::haac158f16f521e22(&v39, &v3);
        if (v84)
        {
            v83 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v84);
        }
        else
        {
            v85 = uu_join::State::reset_read_line::haac158f16f521e22(&v48, &v3);
            if (!v85)
                goto LABEL_46f0ac;
            v83 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v85);
        }
LABEL_46f3d5:
        v58 = v83;
        goto LABEL_46f437;
    }
LABEL_46f0ac:
    if (!(v41) || !(v50))
    {
        v58 = uu_join::State::finalize::h510de24d915494e7(&v39, &v21, &v3, &v27);
        if (v58)
        {
            v105 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v21);
            if (!v105)
                goto LABEL_46f437;
            v108 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v105);
            ::0x46c130::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(v58, v86);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, v86);
            v58 = uu_join::State::finalize::h510de24d915494e7(&v48, &v21, &v3, &v27);
            if (v58)
            {
                v109 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v21);
                if (!v109)
                    goto LABEL_46f437;
                v108 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v109);
                ::0x46c130::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(v58, v86);
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, v86);
                v110 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v21);
                if (v110)
                {
                    v83 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v110);
                }
                else
                {
                    if (!(!*((char *)&v46 + 2)) || !(!*((char *)&v55 + 2)))
                    {
                        v23 = uucore::execution_phrase::h7a36a698673d06ab();
                        v24 = v86;
                        v35 = &v23;
                        v36 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a9acb5b6b087e94;
                        v8 = &g_5325f0;
                        v11 = 2;
                        v16 = 0;
                        v13 = &v35;
                        v15 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v8);
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    }
                    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::he0aa85dca1b04db9(&v21);
                    core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..LineSep$GT$$GT$::ha91a9001b81fc2d4(&v27);
                    core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&v48);
                    core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&v39);
                    v111 = &a4->padding_18;
                    core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::h9f16980b2393dbc4(&a4->padding_28[8]);
                    if (!v7)
                    {
                        ::0x46c390::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8146444ea6c0efb2(v111);
                        return 0;
                    }
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hb0d1780117770078(a4);
                }
                goto LABEL_46f3d5;
            }
        }
LABEL_46f431:
        v58 = v108;
        goto LABEL_46f437;
    }
    else
    {
        do
        {
            v87 = uu_join::Input$LT$Sep$GT$::compare::h29bf124cec785704(v3, uu_join::State::get_current_key::h6b22667ac5a703a7(&v39), v86, uu_join::State::get_current_key::h6b22667ac5a703a7(&v48), v86);
            if (!(char)v87)
            {
                uu_join::State::extend::h51589ed765d771bd(&v8, &v39, &v3);
                if (v9 == 9223372036854775809)
                {
                    v58 = v12;
                    v102 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v21);
                    if (v102)
                    {
                        ::0x46c130::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(v58, v14);
                        v58 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v102);
                        goto LABEL_46f437;
                    }
                }
                v88 = *((int128_t *)&v9);
                v89 = *((int128_t *)&v14);
                v90 = *((int128_t *)&(&v14)[1]);
                v38 = v90;
                v37 = v89;
                v35 = v88;
                uu_join::State::extend::h51589ed765d771bd(&v8, &v48, &v3);
                if (v9 == 9223372036854775809)
                {
                    v58 = v12;
                    v104 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v21);
                    if (v104)
                    {
                        ::0x46c130::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(v58, v14);
                        v58 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v104);
                    }
                }
                else
                {
                    v91 = *((int128_t *)&v9);
                    v92 = *((int128_t *)&v14);
                    v93 = *((int128_t *)&(&v14)[1]);
                    v26 = v93;
                    v25 = v92;
                    v23 = v91;
                    if (!a4->field_5a || (v94 = uu_join::State::combine::ha24f6cdfc00f5a5d(&v39, &v21, &v48), !v94))
                    {
                        v95 = *((int128_t *)&v35);
                        v96 = v37;
                        v97 = v38;
                        v16 = v97;
                        v13 = v96;
                        v8 = v95;
                        uu_join::State::reset::h80c820df90bbe344(&v39, &v8);
                        v98 = *((int128_t *)&v23);
                        v81 = (((v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98;
                        v99 = v25;
                        v68 = (((v68 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99;
                        v100 = v26;
                        v71 = (((v71 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v97) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100;
                        v16 = v100;
                        v14 = v99;
                        v8 = v98;
                        uu_join::State::reset::h80c820df90bbe344(&v48, &v8);
                    }
                    else
                    {
                        v58 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v94);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&v23);
                    }
                }
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&v35);
                goto LABEL_46f437;
            }
            if ((unsigned int)v87 != 1)
            {
                v58 = uu_join::State::skip_line::h623909881d2af289(&v39, &v21, &v3, &v27);
                if (!v58)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, v86);
                }
                else
                {
                    v103 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v21);
                    if (!v103)
                        goto LABEL_46f437;
                    v108 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v103);
                    ::0x46c130::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(v58, v86);
                    goto LABEL_46f431;
                }
            }
            else
            {
                v58 = uu_join::State::skip_line::h623909881d2af289(&v48, &v21, &v3, &v27);
                if (v58)
                {
                    v101 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v21);
                    if (!v101)
                        goto LABEL_46f437;
                    v108 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v101);
                    ::0x46c130::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(v58, v86);
                    goto LABEL_46f431;
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, v86);
                }
            }
        } while ((v47 = 1, v56 = 1, v41 && v50));
LABEL_46f437:
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::he0aa85dca1b04db9(&v21);
        core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..LineSep$GT$$GT$::ha91a9001b81fc2d4(&v27);
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&v48);
LABEL_46f45b:
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&v39);
LABEL_46f46c:
        core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::h9f16980b2393dbc4(&a4->padding_28[8]);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hb0d1780117770078(a4);
        v111 = &a4->padding_18;
        ::0x46c390::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8146444ea6c0efb2(v111);
        return v58;
    }
}
