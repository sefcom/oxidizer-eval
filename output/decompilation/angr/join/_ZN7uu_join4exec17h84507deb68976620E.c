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
    struct struct_0 **v8;  // [bp-0x238], Other Possible Types: unsigned long
    char v9;  // [bp-0x231]
    char *v10;  // [sp-0x230], Other Possible Types: unsigned long long
    struct struct_0 **v11;  // [sp-0x228], Other Possible Types: unsigned long
    struct struct_0 **v12;  // [bp-0x220], Other Possible Types: unsigned long long
    void* v13;  // [bp-0x218], Other Possible Types: struct struct_0 **
    char v14;  // [bp-0x210]
    char v15;  // [bp-0x200]
    char v16;  // [bp-0x1f0]
    char v17;  // [bp-0x1e0]
    char v18;  // [bp-0x1d8]
    unsigned long v19;  // [sp-0x1b0], Other Possible Types: unsigned long long
    struct struct_0 **v20;  // [bp-0x1a8]
    unsigned long long v21;  // [sp-0x1a0]
    struct struct_0 **v22;  // [bp-0x198], Other Possible Types: char
    struct struct_0 **v23;  // [sp-0x188]
    struct struct_0 **v24;  // [sp-0x178]
    unsigned long long v25;  // [sp-0x168]
    struct struct_0 **v26;  // [sp-0x160]
    char v27;  // [sp-0x150]
    char v28;  // [sp-0x14f]
    struct struct_0 **v29;  // [sp-0x148]
    unsigned long long v30;  // [sp-0x138]
    unsigned long v31;  // [sp-0x130], Other Possible Types: unsigned long long
    struct struct_0 **v32;  // [bp-0x128]
    unsigned long long v33;  // [sp-0x120]
    struct struct_0 **v34;  // [sp-0x118]
    struct struct_0 **v35;  // [sp-0x108]
    unsigned long v36;  // [sp-0xf0], Other Possible Types: unsigned long long
    char *v37;  // [sp-0xe8]
    unsigned long long v38;  // [sp-0xe0]
    struct struct_0 **v39;  // [sp-0xd8]
    struct struct_0 **v40;  // [sp-0xc8]
    struct struct_0 **v41;  // [sp-0xb8]
    struct struct_0 **v42;  // [sp-0xa8]
    unsigned long v43;  // [bp-0x98]
    char v44;  // [sp-0x95]
    unsigned long v45;  // [sp-0x90], Other Possible Types: unsigned long long
    char *v46;  // [sp-0x88]
    unsigned long long v47;  // [sp-0x80]
    struct struct_0 **v48;  // [sp-0x78]
    struct struct_0 **v49;  // [sp-0x68]
    struct struct_0 **v50;  // [sp-0x58]
    struct struct_0 **v51;  // [sp-0x48]
    unsigned long long v52;  // [bp-0x38]
    char v53;  // [sp-0x35]
    char *v55;  // r15
    unsigned long long v56;  // rcx
    struct struct_0 **v57;  // xmm0
    struct struct_0 **v58;  // xmm1
    struct struct_0 **v59;  // xmm2
    struct struct_0 **v60;  // xmm0
    int v61;  // ymm0
    int v62;  // ymm0
    struct struct_0 **v63;  // xmm1
    int v64;  // ymm1
    int v65;  // ymm1
    struct struct_0 **v66;  // xmm2
    int v67;  // ymm2
    int v68;  // ymm2
    char *v69;  // r15
    struct_1 *v70;  // rax
    unsigned long long v71;  // rcx
    unsigned long long v72;  // rdx
    struct struct_0 **v73;  // xmm0
    int v74;  // ymm0
    struct struct_0 **v75;  // xmm0
    struct struct_0 **v76;  // xmm0
    struct struct_0 **v77;  // xmm0
    int v78;  // ymm0
    unsigned long long v79;  // rax
    unsigned long long v80;  // rax
    unsigned long long v81;  // rax
    unsigned long v82;  // rdx
    unsigned long long v83;  // rax
    struct struct_0 **v84;  // xmm0
    struct struct_0 **v85;  // xmm1
    struct struct_0 **v86;  // xmm2
    struct struct_0 **v87;  // xmm0
    struct struct_0 **v88;  // xmm1
    struct struct_0 **v89;  // xmm2
    unsigned long long v90;  // rax
    struct struct_0 **v91;  // xmm0
    struct struct_0 **v92;  // xmm1
    struct struct_0 **v93;  // xmm2
    struct struct_0 **v94;  // xmm0
    struct struct_0 **v95;  // xmm1
    struct struct_0 **v96;  // xmm2
    unsigned long long v97;  // rax
    char *v98;  // r15
    unsigned long long v99;  // rax
    unsigned long long v100;  // rax
    char *v101;  // r15
    unsigned long long v102;  // rax
    unsigned long long v103;  // rax
    unsigned long long v106;  // rax
    unsigned long long v107;  // rax
    unsigned long long v108;  // r13

    v19 = std::io::stdio::stdin::h7215cc131abb55d8();
    uu_join::State::new::h1e047ff86b763ae6(&v8, 0, a0, a1, &v19, a4->field_48, v0, v1);
    v55 = v10;
    if (v36 == 0x8000000000000000)
        goto LABEL_46f46c;
    v56 = *((long long *)&v17);
    v43 = v56;
    v57 = *((int128_t *)&v12);
    v58 = *((int128_t *)&v14);
    v59 = *((int128_t *)&v15);
    *((int128_t *)&v42) = *((int128_t *)&v16);
    v41 = v59;
    v40 = v58;
    v39 = v57;
    v36 = v8;
    v37 = v55;
    v38 = v11;
    v6 = v56 & 0xffffffffffffff00 | 1;
    uu_join::State::new::h1e047ff86b763ae6(&v8, 1, a2, a3, &v19, a4->field_50, v0, v1);
    v55 = v10;
    if (v45 == 0x8000000000000000)
    {
        v6 = v45 & 0xffffffffffffff00 | 1;
        goto LABEL_46f45b;
    }
    v52 = *((long long *)&v17);
    v60 = *((int128_t *)&v12);
    v62 = (v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
    v63 = *((int128_t *)&v14);
    v65 = (v64 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
    v66 = *((int128_t *)&v15);
    v68 = (v67 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66;
    *((int128_t *)&v51) = *((int128_t *)&v16);
    v50 = v66;
    v49 = v63;
    v48 = v60;
    v45 = v8;
    v46 = v55;
    v47 = v11;
    v5 = a5;
    v3 = a4->field_5b;
    v4 = a4->field_5e;
    v69 = &a4->field_5c;
    v7 = a4->field_5c;
    if (!v7)
    {
        v6 = v7 & 0xffffffffffffff00 | 1;
        uu_join::State::initialize::hba6254d3450d7ee5(&v36, &v2, 0);
        uu_join::State::initialize::hba6254d3450d7ee5(&v45, &v2, *(v69));
        v30 = a4->field_10;
        v73 = *((int128_t *)&a4->field_0);
        v74 = v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73;
        v29 = v73;
        v6 = 0;
    }
    else
    {
        v70 = ::0x46c9d0::alloc::alloc::Global::alloc_impl::hf61749d460433fff();
        if (!v70)
        {
            v6 = v70 & 0xffffffffffffff00 | 1;
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 16); /* do not return */
        }
        v70->field_0 = 0;
        v71 = v8;
        v72 = *((long long *)&v9);
        *((unsigned long long *)&(&v70->field_0)[1]) = v71;
        v70->field_1 = v72;
        v6 = v71 & 0xffffffffffffff00 | 1;
        alloc::slice::hack::into_vec::h6319bf421152ad63(&v20, v70, 1);
        v8 = &v2;
        v10 = v69;
        v11 = &v20;
        uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h79a2c6a7251e6e02(&v8, &v36);
        uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h79a2c6a7251e6e02(&v8, &v45);
        v30 = *((long long *)&v22);
        v75 = *((int128_t *)&v20);
        v74 = v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
        v29 = v75;
        v6 = v30 & 0xffffffffffffff00 | 1;
    }
    v76 = v29;
    v24 = v76;
    v25 = v30;
    v77 = *((int128_t *)&a4->field_20);
    v78 = (v74 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
    v27 = a4->field_5f;
    v28 = a5;
    v26 = v77;
    v31 = std::io::stdio::stdout::h077da66234850927();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h7a3dd15b78101682(&v18, 0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&v31));
    if (a4->field_5d)
    {
        v79 = uu_join::State::print_headers::h1a14b3e3b41d9ab7(&v36, &v18, &v45, &v24);
        if (v79)
        {
            v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v79);
            goto LABEL_46f3d5;
        }
        v80 = uu_join::State::reset_read_line::haac158f16f521e22(&v36, &v3);
        if (v80)
        {
            v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v80);
        }
        else
        {
            v81 = uu_join::State::reset_read_line::haac158f16f521e22(&v45, &v3);
            if (!v81)
                goto LABEL_46f0ac;
            v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v81);
        }
LABEL_46f3d5:
        goto LABEL_46f437;
    }
LABEL_46f0ac:
    if (!(v38) || !(v47))
    {
        v55 = uu_join::State::finalize::h510de24d915494e7(&v36, &v18, &v3, &v24);
        if (v55)
        {
            v103 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v18);
            if (!v103)
                goto LABEL_46f437;
            v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v103);
            ::0x46c130::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(v55, v82);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, v82);
            v55 = uu_join::State::finalize::h510de24d915494e7(&v45, &v18, &v3, &v24);
            if (v55)
            {
                v106 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v18);
                if (!v106)
                    goto LABEL_46f437;
                v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v106);
                ::0x46c130::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(v55, v82);
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, v82);
                v107 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v18);
                if (v107)
                {
                    v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v107);
                }
                else
                {
                    if (!(!*((char *)&v43 + 2)) || !(!*((char *)&v52 + 2)))
                    {
                        v20 = uucore::execution_phrase::h7a36a698673d06ab();
                        v21 = v82;
                        v32 = &v20;
                        v33 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a9acb5b6b087e94;
                        v8 = &g_5325f0;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v32;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v8);
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    }
                    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::he0aa85dca1b04db9(&v18);
                    core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..LineSep$GT$$GT$::ha91a9001b81fc2d4(&v24);
                    core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&v45);
                    core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&v36);
                    v108 = &a4->padding_18;
                    core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::h9f16980b2393dbc4(&a4->padding_28[8]);
                    if (!v7)
                    {
                        ::0x46c390::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8146444ea6c0efb2(v108);
                        return 0;
                    }
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hb0d1780117770078(a4);
                }
                goto LABEL_46f3d5;
            }
        }
LABEL_46f431:
        goto LABEL_46f437;
    }
    else
    {
        do
        {
            v83 = uu_join::Input$LT$Sep$GT$::compare::h29bf124cec785704(v3, uu_join::State::get_current_key::h6b22667ac5a703a7(&v36), v82, uu_join::State::get_current_key::h6b22667ac5a703a7(&v45), v82);
            if (!(char)v83)
            {
                uu_join::State::extend::h51589ed765d771bd(&v8, &v36, &v3);
                if (v8 == 9223372036854775809)
                {
                    v98 = v10;
                    v99 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v18);
                    if (v99)
                    {
                        ::0x46c130::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(v98, v11);
                        goto LABEL_46f437;
                    }
                }
                v84 = *((int128_t *)&v8);
                v85 = *((int128_t *)&v11);
                v86 = *((int128_t *)&(&v12)[1]);
                v35 = v86;
                v34 = v85;
                v32 = v84;
                uu_join::State::extend::h51589ed765d771bd(&v8, &v45, &v3);
                if (v8 == 9223372036854775809)
                {
                    v101 = v10;
                    v102 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v18);
                    if (v102)
                        ::0x46c130::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(v101, v11);
                }
                else
                {
                    v87 = *((int128_t *)&v8);
                    v88 = *((int128_t *)&v11);
                    v89 = *((int128_t *)&(&v12)[1]);
                    v23 = v89;
                    v22 = v88;
                    v20 = v87;
                    if (!a4->field_5a || (v90 = uu_join::State::combine::ha24f6cdfc00f5a5d(&v36, &v18, &v45), !v90))
                    {
                        v91 = *((int128_t *)&v32);
                        v92 = v34;
                        v93 = v35;
                        v13 = v93;
                        v11 = v92;
                        v8 = v91;
                        uu_join::State::reset::h80c820df90bbe344(&v36, &v8);
                        v94 = *((int128_t *)&v20);
                        v78 = (((v78 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94;
                        v95 = v22;
                        v65 = (((v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95;
                        v96 = v23;
                        v68 = (((v68 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96;
                        v13 = v96;
                        v11 = v95;
                        v8 = v94;
                        uu_join::State::reset::h80c820df90bbe344(&v45, &v8);
                    }
                    else
                    {
                        v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v90);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&v20);
                    }
                }
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&v32);
                goto LABEL_46f437;
            }
            if ((unsigned int)v83 != 1)
            {
                v55 = uu_join::State::skip_line::h623909881d2af289(&v36, &v18, &v3, &v24);
                if (!v55)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, v82);
                }
                else
                {
                    v100 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v18);
                    if (!v100)
                        goto LABEL_46f437;
                    v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v100);
                    ::0x46c130::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(v55, v82);
                    goto LABEL_46f431;
                }
            }
            else
            {
                v55 = uu_join::State::skip_line::h623909881d2af289(&v45, &v18, &v3, &v24);
                if (v55)
                {
                    v97 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&v18);
                    if (!v97)
                        goto LABEL_46f437;
                    v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v97);
                    ::0x46c130::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(v55, v82);
                    goto LABEL_46f431;
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, v82);
                }
            }
        } while ((v44 = 1, v53 = 1, v38 && v47));
LABEL_46f437:
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::he0aa85dca1b04db9(&v18);
        core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..LineSep$GT$$GT$::ha91a9001b81fc2d4(&v24);
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&v45);
LABEL_46f45b:
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&v36);
LABEL_46f46c:
        core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::h9f16980b2393dbc4(&a4->padding_28[8]);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hb0d1780117770078(a4);
        v108 = &a4->padding_18;
        ::0x46c390::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8146444ea6c0efb2(v108);
        return v55;
    }
}
