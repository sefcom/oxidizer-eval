long long uu_join::exec::h8aa96f90021f4f76(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_2 *a4)
{
    char v0;  // [bp-0x258]
    char v1;  // [bp-0x250]
    char v2;  // [sp-0x242]
    char v3;  // [sp-0x241]
    unsigned int v4;  // [sp-0x240]
    char v5;  // [sp-0x23a]
    char v6;  // [bp-0x239]
    struct struct_0 **v7;  // [bp-0x238], Other Possible Types: char, unsigned long long, unsigned long
    char v8;  // [bp-0x231]
    char *v9;  // [sp-0x230], Other Possible Types: unsigned long long
    struct struct_0 **v10;  // [sp-0x228], Other Possible Types: unsigned long long, unsigned long
    struct struct_0 **v11;  // [bp-0x220], Other Possible Types: unsigned long long
    void* v12;  // [bp-0x218], Other Possible Types: struct struct_0 **
    char v13;  // [bp-0x210]
    char v14;  // [bp-0x200]
    char v15;  // [bp-0x1f0]
    char v16;  // [bp-0x1e0]
    char v17;  // [bp-0x1d8]
    unsigned long v18;  // [sp-0x1b0], Other Possible Types: unsigned long long
    struct struct_0 **v19;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x1a0]
    struct struct_0 **v21;  // [bp-0x198], Other Possible Types: char
    struct struct_0 **v22;  // [sp-0x188]
    struct struct_0 **v23;  // [sp-0x178]
    unsigned long long v24;  // [sp-0x168]
    struct struct_0 **v25;  // [sp-0x160]
    char v26;  // [sp-0x150]
    struct struct_0 **v27;  // [sp-0x148]
    unsigned long long v28;  // [sp-0x138]
    unsigned long v29;  // [sp-0x130], Other Possible Types: unsigned long long
    struct struct_0 **v30;  // [bp-0x128], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v31;  // [sp-0x120]
    struct struct_0 **v32;  // [sp-0x118]
    struct struct_0 **v33;  // [sp-0x108]
    unsigned long v34;  // [sp-0xf0], Other Possible Types: unsigned long long
    char *v35;  // [sp-0xe8]
    unsigned long long v36;  // [sp-0xe0]
    struct struct_0 **v37;  // [sp-0xd8]
    struct struct_0 **v38;  // [sp-0xc8]
    struct struct_0 **v39;  // [sp-0xb8]
    struct struct_0 **v40;  // [sp-0xa8]
    unsigned long v41;  // [bp-0x98]
    char v42;  // [sp-0x95]
    unsigned long v43;  // [sp-0x90], Other Possible Types: unsigned long long
    char *v44;  // [sp-0x88]
    unsigned long long v45;  // [sp-0x80]
    struct struct_0 **v46;  // [sp-0x78]
    struct struct_0 **v47;  // [sp-0x68]
    struct struct_0 **v48;  // [sp-0x58]
    struct struct_0 **v49;  // [sp-0x48]
    unsigned long long v50;  // [bp-0x38]
    char v51;  // [sp-0x35]
    char *v53;  // r15
    unsigned long long v54;  // rcx
    struct struct_0 **v55;  // xmm0
    struct struct_0 **v56;  // xmm1
    struct struct_0 **v57;  // xmm2
    struct struct_0 **v58;  // xmm0
    int v59;  // ymm0
    int v60;  // ymm0
    struct struct_0 **v61;  // xmm1
    int v62;  // ymm1
    int v63;  // ymm1
    struct struct_0 **v64;  // xmm2
    int v65;  // ymm2
    int v66;  // ymm2
    char *v67;  // r15
    struct_1 *v68;  // rax
    unsigned long long v69;  // rcx
    unsigned long long v70;  // rdx
    struct struct_0 **v71;  // xmm0
    int v72;  // ymm0
    struct struct_0 **v73;  // xmm0
    struct struct_0 **v74;  // xmm0
    struct struct_0 **v75;  // xmm0
    int v76;  // ymm0
    unsigned long long v77;  // rsi
    unsigned long v78;  // rdx
    unsigned long long v79;  // rax
    unsigned long long v80;  // rax
    unsigned long long v81;  // rax
    unsigned long long v82;  // rax
    struct struct_0 **v83;  // xmm0
    struct struct_0 **v84;  // xmm1
    struct struct_0 **v85;  // xmm2
    struct struct_0 **v86;  // xmm0
    struct struct_0 **v87;  // xmm1
    struct struct_0 **v88;  // xmm2
    unsigned long long v89;  // rax
    unsigned long long v90;  // rdx
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

    v18 = std::io::stdio::stdin::h7215cc131abb55d8();
    uu_join::State::new::h0cd55892c1b4350a(&v7, 0, a0, a1, &v18, a4->field_48, v0, v1);
    v53 = v9;
    if (v34 == 0x8000000000000000)
        goto LABEL_470d7c;
    v54 = *((long long *)&v16);
    v41 = v54;
    v55 = *((int128_t *)&v11);
    v56 = *((int128_t *)&v13);
    v57 = *((int128_t *)&v14);
    *((int128_t *)&v40) = *((int128_t *)&v15);
    v39 = v57;
    v38 = v56;
    v37 = v55;
    v34 = v7;
    v35 = v53;
    v36 = v10;
    v4 = v54 | -0x100 | 1;
    uu_join::State::new::h0cd55892c1b4350a(&v7, 1, a2, a3, &v18, a4->field_50, v0, v1);
    v53 = v9;
    if (v43 == 0x8000000000000000)
    {
        v4 = v43 | -0x100 | 1;
        goto LABEL_470d6b;
    }
    v50 = *((long long *)&v16);
    v58 = *((int128_t *)&v11);
    v60 = v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
    v61 = *((int128_t *)&v13);
    v63 = v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
    v64 = *((int128_t *)&v14);
    v66 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
    *((int128_t *)&v49) = *((int128_t *)&v15);
    v48 = v64;
    v47 = v61;
    v46 = v58;
    v43 = v7;
    v44 = v53;
    v45 = v10;
    v2 = a4->field_5b;
    v3 = a4->field_5e;
    v67 = &a4->field_5c;
    v5 = a4->field_5c;
    if (!v5)
    {
        v4 = v5 | -0x100 | 1;
        uu_join::State::initialize::he90d5ee8a01dcc4c(&v34, &v6, 0);
        uu_join::State::initialize::he90d5ee8a01dcc4c(&v43, &v6, *(v67));
        v28 = a4->field_10;
        v71 = *((int128_t *)&a4->field_0);
        v72 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71;
        v27 = v71;
        v4 = 0;
    }
    else
    {
        v68 = ::0x46cba0::alloc::alloc::Global::alloc_impl::hf61749d460433fff(16);
        if (!v68)
        {
            v4 = v68 | -0x100 | 1;
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        v68->field_0 = 0;
        v69 = v7;
        v70 = *((long long *)&v8);
        *((unsigned long long *)&(&v68->field_0)[1]) = v69;
        v68->field_1 = v70;
        v4 = v69 | -0x100 | 1;
        alloc::slice::hack::into_vec::h442155ce6af6c91d(&v19, v68, 1);
        v7 = &v6;
        v9 = v67;
        v10 = &v19;
        uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::hfc9cab7bcd6e0fba(&v7, &v34);
        uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::hfc9cab7bcd6e0fba(&v7, &v43);
        v28 = *((long long *)&v21);
        v73 = *((int128_t *)&v19);
        v72 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73;
        v27 = v73;
        v4 = v28 | -0x100 | 1;
    }
    v24 = v28;
    v74 = v27;
    v23 = v74;
    v75 = *((int128_t *)&a4->field_20);
    v76 = v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
    v26 = a4->field_5f;
    v25 = v75;
    v29 = std::io::stdio::stdout::h077da66234850927();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h13159b36da620363(&v17, 0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&v29, v77, v78));
    if (a4->field_5d)
    {
        v79 = uu_join::State::print_headers::hc21449c6cf200738(&v34, &v17, &v43);
        if (v79)
        {
            v53 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v79);
            goto LABEL_470ce5;
        }
        v80 = uu_join::State::reset_read_line::h5aff516ea1909e51(&v34, &v2);
        if (v80)
        {
            v53 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v80);
        }
        else
        {
            v81 = uu_join::State::reset_read_line::h5aff516ea1909e51(&v43, &v2);
            if (!v81)
                goto LABEL_4709b2;
            v53 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v81);
        }
LABEL_470ce5:
        goto LABEL_470d47;
    }
LABEL_4709b2:
    if (!(v36) || !(v45))
    {
        v53 = uu_join::State::finalize::he54334732d625f48(&v34, &v17, &v2, &v23);
        if (v53)
        {
            v103 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v17);
            if (!v103)
                goto LABEL_470d47;
            v53 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v103);
            ::0x46c300::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::he130ce20a56a1611(v53, v78);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h7b07a396a19b1245(0, v78);
            v53 = uu_join::State::finalize::he54334732d625f48(&v43, &v17, &v2, &v23);
            if (v53)
            {
                v106 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v17);
                if (!v106)
                    goto LABEL_470d47;
                v53 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v106);
                ::0x46c300::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::he130ce20a56a1611(v53, v78);
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h7b07a396a19b1245(0, v78);
                v107 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v17);
                if (v107)
                {
                    v53 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v107);
                }
                else
                {
                    if (!(!*((char *)&v41 + 2)) || !(!*((char *)&v50 + 2)))
                    {
                        v19 = uucore::execution_phrase::h54f12bf70b2cca36();
                        v20 = v78;
                        v30 = &v19;
                        v31 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h338ded74354255ed;
                        v7 = &g_533190;
                        v9 = 2;
                        v12 = 0;
                        v10 = &v30;
                        v11 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v7, v77, v78);
                        uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                    }
                    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbc18d3774155f6d8(&v17);
                    core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..LineSep$GT$$GT$::hcfceae0c49a7d8fd(&v23);
                    core::ptr::drop_in_place$LT$uu_join..State$GT$::h989692c6be533a96(&v43);
                    core::ptr::drop_in_place$LT$uu_join..State$GT$::h989692c6be533a96(&v34);
                    v108 = &a4->padding_18;
                    core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::hdd67fa844d6b97f7(&a4->padding_28[8]);
                    if (!v5)
                    {
                        ::0x46c560::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h087390dedeb3a8a6(v108);
                        return 0;
                    }
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::h01c683ba8faa70de(a4);
                }
                goto LABEL_470ce5;
            }
        }
LABEL_470d41:
        goto LABEL_470d47;
    }
    else
    {
        do
        {
            v82 = uu_join::Input$LT$Sep$GT$::compare::h261f74b1101789a8(v2, uu_join::State::get_current_key::h4148c5666ccca327(&v34), v78, uu_join::State::get_current_key::h4148c5666ccca327(&v43), v78);
            if (!(char)v82)
            {
                uu_join::State::extend::h732f8fd7b338100f(&v7, &v34, &v2);
                if (v7 == 9223372036854775809)
                {
                    v98 = v9;
                    v99 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v17);
                    if (v99)
                    {
                        ::0x46c300::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::he130ce20a56a1611(v98, v10);
                        goto LABEL_470d47;
                    }
                }
                v83 = *((int128_t *)&v7);
                v84 = *((int128_t *)&v10);
                v85 = *((int128_t *)&(&v11)[1]);
                v33 = v85;
                v32 = v84;
                v30 = v83;
                uu_join::State::extend::h732f8fd7b338100f(&v7, &v43, &v2);
                if (v7 == 9223372036854775809)
                {
                    v101 = v9;
                    v102 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v17);
                    if (v102)
                        ::0x46c300::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::he130ce20a56a1611(v101, v10);
                }
                else
                {
                    v86 = *((int128_t *)&v7);
                    v87 = *((int128_t *)&v10);
                    v88 = *((int128_t *)&(&v11)[1]);
                    v22 = v88;
                    v21 = v87;
                    v19 = v86;
                    if (!a4->field_5a || (v89 = uu_join::State::combine::hf842623c2a4efb9b(&v34, &v17, &v43, &v23), !v89))
                    {
                        v91 = *((int128_t *)&v30);
                        v92 = v32;
                        v93 = v33;
                        v12 = v93;
                        v10 = v92;
                        v7 = v91;
                        uu_join::State::reset::h0fc47730b66e1f19(&v34, &v7, v90);
                        v94 = *((int128_t *)&v19);
                        v76 = v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94;
                        v95 = v21;
                        v63 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95;
                        v96 = v22;
                        v66 = v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96;
                        v12 = v96;
                        v10 = v95;
                        v7 = v94;
                        uu_join::State::reset::h0fc47730b66e1f19(&v43, &v7, v78);
                    }
                    else
                    {
                        v53 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v89);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h400859eed0716e49(&v19);
                    }
                }
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h400859eed0716e49(&v30);
                goto LABEL_470d47;
            }
            if ((unsigned int)v82 != 1)
            {
                v53 = uu_join::State::skip_line::h523cb714b181cd38(&v34, &v17, &v2, &v23);
                if (!v53)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h7b07a396a19b1245(0, v78);
                }
                else
                {
                    v100 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v17);
                    if (!v100)
                        goto LABEL_470d47;
                    v53 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v100);
                    ::0x46c300::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::he130ce20a56a1611(v53, v78);
                    goto LABEL_470d41;
                }
            }
            else
            {
                v53 = uu_join::State::skip_line::h523cb714b181cd38(&v43, &v17, &v2, &v23);
                if (v53)
                {
                    v97 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h90af43238acd2385(&v17);
                    if (!v97)
                        goto LABEL_470d47;
                    v53 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v97);
                    ::0x46c300::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::he130ce20a56a1611(v53, v78);
                    goto LABEL_470d41;
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h7b07a396a19b1245(0, v78);
                }
            }
        } while ((v42 = 1, v51 = 1, v36 && v45));
LABEL_470d47:
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbc18d3774155f6d8(&v17);
        core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..LineSep$GT$$GT$::hcfceae0c49a7d8fd(&v23);
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h989692c6be533a96(&v43);
LABEL_470d6b:
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h989692c6be533a96(&v34);
LABEL_470d7c:
        core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::hdd67fa844d6b97f7(&a4->padding_28[8]);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::h01c683ba8faa70de(a4);
        v108 = &a4->padding_18;
        ::0x46c560::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h087390dedeb3a8a6(v108);
        return v53;
    }
}
