long long uu_join::exec::h00f5ecc5c0ef90df(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_2 *a4, char a5)
{
    char v0;  // [bp-0x258]
    char v1;  // [bp-0x250]
    char v2;  // [bp-0x244]
    char v3;  // [sp-0x243]
    char v4;  // [sp-0x242]
    char v5;  // [sp-0x241]
    unsigned int v6;  // [sp-0x240]
    char v7;  // [sp-0x239]
    struct struct_0 **v8;  // [bp-0x238], Other Possible Types: char, unsigned long long, unsigned long
    char v9;  // [bp-0x231]
    char *v10;  // [sp-0x230], Other Possible Types: unsigned long long
    struct struct_0 **v11;  // [sp-0x228], Other Possible Types: unsigned long long, unsigned long
    struct struct_0 **v12;  // [bp-0x220], Other Possible Types: unsigned long long
    void* v13;  // [bp-0x218], Other Possible Types: struct struct_0 **
    char v14;  // [bp-0x210]
    char v15;  // [bp-0x200]
    char v16;  // [bp-0x1f0]
    char v17;  // [bp-0x1e0]
    char v18;  // [bp-0x1d8]
    unsigned long v19;  // [sp-0x1b0], Other Possible Types: unsigned long long
    struct struct_0 **v20;  // [bp-0x1a8], Other Possible Types: unsigned long long
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
    struct struct_0 **v32;  // [bp-0x128], Other Possible Types: unsigned long, unsigned long long
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
    unsigned long long v79;  // rsi
    unsigned long v80;  // rdx
    unsigned long long v81;  // rax
    unsigned long long v82;  // rax
    unsigned long long v83;  // rax
    unsigned long long v84;  // rax
    struct struct_0 **v85;  // xmm0
    struct struct_0 **v86;  // xmm1
    struct struct_0 **v87;  // xmm2
    struct struct_0 **v88;  // xmm0
    struct struct_0 **v89;  // xmm1
    struct struct_0 **v90;  // xmm2
    unsigned long long v91;  // rax
    unsigned long long v92;  // rdx
    struct struct_0 **v93;  // xmm0
    struct struct_0 **v94;  // xmm1
    struct struct_0 **v95;  // xmm2
    struct struct_0 **v96;  // xmm0
    struct struct_0 **v97;  // xmm1
    struct struct_0 **v98;  // xmm2
    unsigned long long v99;  // rax
    char *v100;  // r15
    unsigned long long v101;  // rax
    unsigned long long v102;  // rax
    char *v103;  // r15
    unsigned long long v104;  // rax
    unsigned long long v105;  // rax
    unsigned long long v108;  // rax
    unsigned long long v109;  // rax
    unsigned long long v110;  // r13

    v19 = std::io::stdio::stdin::h7215cc131abb55d8();
    uu_join::State::new::h0cd55892c1b4350a(&v8, 0, a0, a1, &v19, a4->field_48, v0, v1);
    v55 = v10;
    if (v36 == 0x8000000000000000)
        goto LABEL_46eb6c;
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
    v6 = v56 | -0x100 | 1;
    uu_join::State::new::h0cd55892c1b4350a(&v8, 1, a2, a3, &v19, a4->field_50, v0, v1);
    v55 = v10;
    if (v45 == 0x8000000000000000)
    {
        v6 = v45 | -0x100 | 1;
        goto LABEL_46eb5b;
    }
    v52 = *((long long *)&v17);
    v60 = *((int128_t *)&v12);
    v62 = v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
    v63 = *((int128_t *)&v14);
    v65 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
    v66 = *((int128_t *)&v15);
    v68 = v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66;
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
        v6 = v7 | -0x100 | 1;
        uu_join::State::initialize::hb6d0f1410e5ab35a(&v36, &v2, 0);
        uu_join::State::initialize::hb6d0f1410e5ab35a(&v45, &v2, *(v69));
        v30 = a4->field_10;
        v73 = *((int128_t *)&a4->field_0);
        v74 = v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73;
        v29 = v73;
        v6 = 0;
    }
    else
    {
        v70 = ::0x46cba0::alloc::alloc::Global::alloc_impl::hf61749d460433fff(16);
        if (!v70)
        {
            v6 = v70 | -0x100 | 1;
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        v70->field_0 = 0;
        v71 = v8;
        v72 = *((long long *)&v9);
        *((unsigned long long *)&(&v70->field_0)[1]) = v71;
        v70->field_1 = v72;
        v6 = v71 | -0x100 | 1;
        alloc::slice::hack::into_vec::h442155ce6af6c91d(&v20, v70, 1);
        v8 = &v2;
        v10 = v69;
        v11 = &v20;
        uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h26b84be8d40d41ad(&v8, &v36);
        uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h26b84be8d40d41ad(&v8, &v45);
        v30 = *((long long *)&v22);
        v75 = *((int128_t *)&v20);
        v74 = v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
        v29 = v75;
        v6 = v30 | -0x100 | 1;
    }
    v76 = v29;
    v24 = v76;
    v25 = v30;
    v77 = *((int128_t *)&a4->field_20);
    v78 = v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
    v27 = a4->field_5f;
    v28 = a5;
    v26 = v77;
    v31 = std::io::stdio::stdout::h077da66234850927();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h13159b36da620363(&v18, 0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&v31, v79, v80));
    if (a4->field_5d)
    {
        v81 = uu_join::State::print_headers::h72efc808c78f5617(&v36, &v18, &v45);
        if (v81)
        {
            v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v81);
            goto LABEL_46ead5;
        }
        v82 = uu_join::State::reset_read_line::h31323458d718e1fa(&v36, &v3);
        if (v82)
        {
            v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v82);
        }
        else
        {
            v83 = uu_join::State::reset_read_line::h31323458d718e1fa(&v45, &v3);
            if (!v83)
                goto LABEL_46e7ac;
            v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v83);
        }
LABEL_46ead5:
        goto LABEL_46eb37;
    }
LABEL_46e7ac:
    if (!(v38) || !(v47))
    {
        v55 = uu_join::State::finalize::hae0abbbd50edb9fd(&v36, &v18, &v3, &v24);
        if (v55)
        {
            v105 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v18);
            if (!v105)
                goto LABEL_46eb37;
            v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v105);
            ::0x46c300::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::he130ce20a56a1611(v55, v80);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h7b07a396a19b1245(0, v80);
            v55 = uu_join::State::finalize::hae0abbbd50edb9fd(&v45, &v18, &v3, &v24);
            if (v55)
            {
                v108 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v18);
                if (!v108)
                    goto LABEL_46eb37;
                v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v108);
                ::0x46c300::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::he130ce20a56a1611(v55, v80);
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h7b07a396a19b1245(0, v80);
                v109 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v18);
                if (v109)
                {
                    v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v109);
                }
                else
                {
                    if (!(!*((char *)&v43 + 2)) || !(!*((char *)&v52 + 2)))
                    {
                        v20 = uucore::execution_phrase::h54f12bf70b2cca36();
                        v21 = v80;
                        v32 = &v20;
                        v33 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h338ded74354255ed;
                        v8 = &g_533190;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v32;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v8, v79, v80);
                        uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                    }
                    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbc18d3774155f6d8(&v18);
                    core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..LineSep$GT$$GT$::hcfceae0c49a7d8fd(&v24);
                    core::ptr::drop_in_place$LT$uu_join..State$GT$::h989692c6be533a96(&v45);
                    core::ptr::drop_in_place$LT$uu_join..State$GT$::h989692c6be533a96(&v36);
                    v110 = &a4->padding_18;
                    core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::hdd67fa844d6b97f7(&a4->padding_28[8]);
                    if (!v7)
                    {
                        ::0x46c560::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h087390dedeb3a8a6(v110);
                        return 0;
                    }
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::h01c683ba8faa70de(a4);
                }
                goto LABEL_46ead5;
            }
        }
LABEL_46eb31:
        goto LABEL_46eb37;
    }
    else
    {
        do
        {
            v84 = uu_join::Input$LT$Sep$GT$::compare::h261f74b1101789a8(v3, uu_join::State::get_current_key::h4148c5666ccca327(&v36), v80, uu_join::State::get_current_key::h4148c5666ccca327(&v45), v80);
            if (!(char)v84)
            {
                uu_join::State::extend::h8d926105535ac5ad(&v8, &v36, &v3);
                if (v8 == 9223372036854775809)
                {
                    v100 = v10;
                    v101 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v18);
                    if (v101)
                    {
                        ::0x46c300::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::he130ce20a56a1611(v100, v11);
                        goto LABEL_46eb37;
                    }
                }
                v85 = *((int128_t *)&v8);
                v86 = *((int128_t *)&v11);
                v87 = *((int128_t *)&(&v12)[1]);
                v35 = v87;
                v34 = v86;
                v32 = v85;
                uu_join::State::extend::h8d926105535ac5ad(&v8, &v45, &v3);
                if (v8 == 9223372036854775809)
                {
                    v103 = v10;
                    v104 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v18);
                    if (v104)
                        ::0x46c300::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::he130ce20a56a1611(v103, v11);
                }
                else
                {
                    v88 = *((int128_t *)&v8);
                    v89 = *((int128_t *)&v11);
                    v90 = *((int128_t *)&(&v12)[1]);
                    v23 = v90;
                    v22 = v89;
                    v20 = v88;
                    if (!a4->field_5a || (v91 = uu_join::State::combine::hde3d425dab9cc98f(&v36, &v18, &v45, &v24), !v91))
                    {
                        v93 = *((int128_t *)&v32);
                        v94 = v34;
                        v95 = v35;
                        v13 = v95;
                        v11 = v94;
                        v8 = v93;
                        uu_join::State::reset::h0fc47730b66e1f19(&v36, &v8, v92);
                        v96 = *((int128_t *)&v20);
                        v78 = v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96;
                        v97 = v22;
                        v65 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v97;
                        v98 = v23;
                        v68 = v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98;
                        v13 = v98;
                        v11 = v97;
                        v8 = v96;
                        uu_join::State::reset::h0fc47730b66e1f19(&v45, &v8, v80);
                    }
                    else
                    {
                        v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v91);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h400859eed0716e49(&v20);
                    }
                }
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h400859eed0716e49(&v32);
                goto LABEL_46eb37;
            }
            if ((unsigned int)v84 != 1)
            {
                v55 = uu_join::State::skip_line::hf7359788a7638416(&v36, &v18, &v3, &v24);
                if (!v55)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h7b07a396a19b1245(0, v80);
                }
                else
                {
                    v102 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v18);
                    if (!v102)
                        goto LABEL_46eb37;
                    v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v102);
                    ::0x46c300::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::he130ce20a56a1611(v55, v80);
                    goto LABEL_46eb31;
                }
            }
            else
            {
                v55 = uu_join::State::skip_line::hf7359788a7638416(&v45, &v18, &v3, &v24);
                if (v55)
                {
                    v99 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v18);
                    if (!v99)
                        goto LABEL_46eb37;
                    v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v99);
                    ::0x46c300::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::he130ce20a56a1611(v55, v80);
                    goto LABEL_46eb31;
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h7b07a396a19b1245(0, v80);
                }
            }
        } while ((v44 = 1, v53 = 1, v38 && v47));
LABEL_46eb37:
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbc18d3774155f6d8(&v18);
        core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..LineSep$GT$$GT$::hcfceae0c49a7d8fd(&v24);
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h989692c6be533a96(&v45);
LABEL_46eb5b:
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h989692c6be533a96(&v36);
LABEL_46eb6c:
        core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::hdd67fa844d6b97f7(&a4->padding_28[8]);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::h01c683ba8faa70de(a4);
        v110 = &a4->padding_18;
        ::0x46c560::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h087390dedeb3a8a6(v110);
        return v55;
    }
}
