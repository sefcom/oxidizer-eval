long long uu_ls::list::ha4f54c9d24f4c406(struct_2 *a0, struct_1 *a1)
{
    char v0;  // [bp-0x468]
    void* v1;  // [sp-0x460]
    unsigned long long v2;  // [sp-0x458]
    void* v3;  // [sp-0x450]
    void* v4;  // [sp-0x448]
    struct_0 *v5;  // [sp-0x440]
    void* v6;  // [sp-0x438]
    char v7;  // [bp-0x430], Other Possible Types: unsigned long
    void* v8;  // [sp-0x428], Other Possible Types: unsigned long long [2]
    unsigned long long v9;  // [sp-0x420]
    unsigned long long v10;  // [sp-0x418]
    void* v11;  // [sp-0x410]
    char v12;  // [sp-0x408]
    unsigned long v13;  // [sp-0x400], Other Possible Types: unsigned long long
    char v14;  // [bp-0x3f8], Other Possible Types: unsigned long
    char v15;  // [bp-0x3f0], Other Possible Types: unsigned long
    unsigned long long *v16;  // [sp-0x3e8]
    char v17;  // [sp-0x3e0]
    void* v18;  // [sp-0x3d8]
    unsigned long long v19;  // [sp-0x3d0]
    int v20;  // [sp-0x3c8]
    unsigned long long *v21;  // [sp-0x3b8]
    int v22;  // [bp-0x3b0], Other Possible Types: unsigned long long *
    unsigned long long v23;  // [sp-0x3a8]
    struct_2 *v24;  // [sp-0x3a0]
    struct_1 *v25;  // [sp-0x398]
    unsigned long long *v26;  // [sp-0x390]
    unsigned long long v27;  // [sp-0x388]
    unsigned long long v28;  // [sp-0x380]
    unsigned long v31;  // [sp-0x368], Other Possible Types: unsigned long long
    char v32;  // [sp-0x360]
    char v33;  // [sp-0x34b]
    int v34;  // [sp-0x348]
    unsigned long long v35;  // [sp-0x338]
    unsigned long long *v36;  // [bp-0x328], Other Possible Types: char, unsigned long, unsigned long long
    char v37;  // [sp-0x327]
    unsigned long long *v38;  // [sp-0x320], Other Possible Types: unsigned long long
    unsigned long v39;  // [sp-0x318], Other Possible Types: unsigned long long
    void* v40;  // [sp-0x310], Other Possible Types: int, unsigned long long
    void* v41;  // [sp-0x308], Other Possible Types: unsigned long long
    int v42;  // [bp-0x1f8], Other Possible Types: unsigned long long *, char, unsigned long long
    unsigned int *v43;  // [sp-0x1f0]
    int v44;  // [sp-0x1e8], Other Possible Types: unsigned long long
    int v46;  // [bp-0x1d8]
    char v47;  // [bp-0x1b0]
    char v48;  // [bp-0x100]
    char v49;  // [bp-0xfc]
    unsigned long long *v50;  // [sp-0xc0]
    char v51;  // [bp-0xb8]
    struct_1 *v53;  // r13
    struct_2 *v54;  // r14
    unsigned long long v56;  // rax
    int v57;  // ymm0
    int v58;  // ymm0
    unsigned long long v59;  // rax
    unsigned long long v60[2];  // r12
    unsigned long long v61;  // r14
    int v62;  // ymm0
    int v63;  // xmm0
    unsigned long long v64;  // rax
    unsigned long long v65;  // rcx
    unsigned long long v66;  // r8
    unsigned long long v67;  // r9
    struct_1 *v68;  // r13
    unsigned int v69;  // eax
    unsigned long long v70;  // r13
    unsigned long long v71;  // r13
    unsigned int *v72;  // rax
    unsigned long long v73;  // rax
    uint128_t v74[2];  // rax
    int v75;  // xmm0
    unsigned long long v76;  // rax
    unsigned long long v77;  // rbx
    struct_0 *v78;  // rbp
    int v79;  // ymm1
    char v80;  // al
    unsigned long long *v81;  // r14
    unsigned long long v82;  // rsi
    unsigned long long v83;  // rdx
    unsigned long long v84;  // rax
    unsigned long long v85;  // rax
    unsigned long v87;  // r15
    unsigned long long v88;  // rbx
    struct_1 *v89;  // r13
    unsigned long long v90;  // rax
    unsigned long long v91;  // rax
    struct_1 *v92;  // r13
    unsigned long long v93;  // rax
    unsigned long long v95;  // rbx
    unsigned long long *v96;  // r14
    unsigned long long v99;  // rax
    unsigned long long *v100;  // rcx
    unsigned long long *v101;  // rdx
    unsigned long long *v102;  // rax
    unsigned long long v103;  // rbx
    int v104;  // xmm0
    int v105;  // xmm1
    int v106;  // xmm1
    unsigned long long v107;  // rsi
    unsigned long long v108;  // rdx
    unsigned int v109;  // ebx
    unsigned int *v110;  // rsi
    unsigned long long v111;  // rax
    unsigned long long v112;  // rcx
    unsigned long v114;  // rax
    unsigned long long v115;  // r8
    unsigned long long v116;  // r9
    unsigned long long v118;  // rax
    int v119;  // xmm0
    int v121;  // xmm0
    unsigned long long v123;  // r8
    unsigned long long v124;  // r9
    unsigned int *v125;  // rsi
    unsigned long long v126;  // rax
    unsigned long long v127;  // rax
    unsigned long long v128;  // rsi
    unsigned long long *v129;  // rax
    unsigned long long v130;  // rax
    unsigned long long v131;  // rsi
    unsigned long long v132;  // r15
    struct_0 *v133;  // rdi
    unsigned long long v135;  // rax
    unsigned long long v136;  // r15
    unsigned long long v137;  // rdi
    unsigned long long v139;  // r13
    struct_0 *v140;  // rdi
    unsigned long long v142;  // r13
    unsigned long long v143;  // rdi

    v53 = a1;
    v54 = a0;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v4 = 0;
    v5 = 8;
    v6 = 0;
    v24 = a0;
    v56 = __rust_alloc(0x2000, 1);
    if (!v56)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v9 = 0x2000;
    v10 = v56;
    v11 = 0;
    v12 = 0;
    v13 = std::io::stdio::stdout::h077da66234850927();
    v18 = 0;
    v19 = 8;
    v58 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *((int128_t *)&v20) = 0;
    v21 = 8;
    *((int128_t *)&v22) = 0;
    if (a1->field_18 != 0x8000000000000000)
    {
        v31 = &a1->field_18;
        v32 = 2;
    }
    v33 = 2;
    v59 = v54->field_10;
    v14 = v54->field_0;
    v8[0] = v54->field_8;
    v7 = v59;
    v25 = a1;
    if (v59)
    {
        v60 = v8;
        v61 = &v60[v7];
        v15 = a1->field_e8;
        do
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v36, v60[0], v60[1]);
            v35 = v39;
            v63 = *((int128_t *)&v36);
            v58 = v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
            v34 = v63;
            v36 = 0;
            v27 = 0x8000000000000000;
            uu_ls::PathData::new::hfdca4be64b8c2591(&v42, &v34, &v36, &v27, v53, 1);
            v64 = *((long long *)&v47);
            if (v64 == 3)
            {
                _ZN4core4cell4once17OnceCell$LT$T$GT$8try_init17h388cd46f185b73f7E.llvm.11628331613161155184(&v47, &v42, &v9, v65, v66, v67);
                v64 = *((long long *)&v47);
            }
            if (v64 == 2)
                core::ptr::drop_in_place$LT$uu_ls..PathData$GT$::hf3dd7148b8ab026a(&v42);
            v69 = *((int *)&v48);
            if (v69 == 2)
            {
                _ZN4core4cell4once17OnceCell$LT$T$GT$8try_init17h8f6604d6bd821c2eE.llvm.11628331613161155184(&v48, &v42, &v9, v65, v66, v67);
                v69 = *((int *)&v48);
            }
            if (!v69)
            {
                _ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108 = 1;
                if (CasCmpNE(_ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108, _ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108))
                    goto LABEL_0x4ceff1;
                else
                    goto LABEL_4ceff7;
            }
            else if (!v15 && ((short)*((int *)&v49) & 0xf000) == 0x4000)
            {
                memcpy(&v36, &v42, 304);
                v70 = v6;
                if (v70 == v4)
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfac2df601e6225ed(&v4);
                memmove(304 * v70 + (char *)v5, &v36, 304);
                v6 = v70 + 1;
                goto LABEL_4cf040;
            }
LABEL_4ceff7:
            memcpy(&v36, &v42, 304);
            v71 = v3;
            if (v71 == v1)
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfac2df601e6225ed(&v1);
            memmove(v71 * 304 + v2, &v36, 304);
            v3 = v71 + 1;
LABEL_4cf040:
            v68 = v25;
        } while ((v53 = v68, v60 += 16, v60 != v61));
    }
    if (v14)
        __rust_dealloc(v8);
    uu_ls::sort_entries::h14df21703f610e55(v2, v3, v53);
    uu_ls::sort_entries::h14df21703f610e55(v5, v6, v53);
    if (v33 != 2 && lscolors::LsColors::style_for_indicator::h42d4a0cedd22bade(v31, 0))
    {
        v33 = 1;
        v32 = 2;
        v72 = __rust_alloc(4, 1);
        if (!v72)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        *(v72) = 1831885595;
        v42 = 4;
        v43 = v72;
        v44 = 4;
        v27 = &v42;
        v28 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v36 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
        v38 = 1;
        v41 = 0;
        v39 = &v27;
        v40 = 1;
        v73 = std::io::Write::write_fmt::h20bee4a5c9f3cc3a(&v9, &v36);
        if (v73)
        {
            v36 = 0x8000000000000000;
            v40 = v73;
            v74 = __rust_alloc(32, 8);
            if (!v74)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v75 = *((int128_t *)&v36);
            v74[1] = *((int128_t *)&v39);
            *((void*)&v74[0]) = v75;
            if (v42)
            {
                __rust_dealloc(v43);
                goto LABEL_4cf890;
            }
        }
        else
        {
            if (v42)
                __rust_dealloc(v43);
            goto LABEL_4cf236;
        }
        goto LABEL_4cf890;
    }
LABEL_4cf236:
    v74 = uu_ls::display_items::hb556aa14ac00fc86(v2, v3, v53, &v9, &v18, &v31);
    if (v74)
    {
LABEL_4cf265:
        goto LABEL_4cf897;
    }
    else
    {
        v76 = v6;
        if (v76)
        {
            v14 = !v53->field_e6 & v7 < 2;
            v7 = v53->field_ee;
            v77 = v76 * 304;
            v8 = 0;
            v5 = v5;
        }
        else if (!v53->field_ee)
        {
            goto LABEL_4cfa07;
        }
    }
    while (true)
    {
        v78 = v5;
        std::sys::pal::unix::fs::readdir::h9e1c3c12d516a70c(&v36, v78->field_20, v78->field_28);
        v80 = (char)v38;
        v81 = v36;
        v15 = v77;
        if (v80 == 2)
            break;
        v16 = v81;
        v17 = v80;
        if (!v14)
        {
            if (!(!v3) || !(!v8))
            {
                v36 = &g_5ac748;
                v38 = 1;
                v39 = 8;
                *((int128_t *)&v40) = 0;
                v85 = std::io::Write::write_fmt::h20bee4a5c9f3cc3a(&v9, &v36);
                if (v85)
                {
                    v74 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v85);
                    goto LABEL_4cfc05;
                }
                uu_ls::show_dir_name::ha190ab568f7f4d0f(v78, &v9, v53);
                v36 = &g_5ac748;
                v38 = 1;
                v39 = 8;
                v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                *((int128_t *)&v40) = 0;
                v90 = std::io::Write::write_fmt::h20bee4a5c9f3cc3a(&v9, &v36);
                if (v90)
                {
                    v74 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v90);
LABEL_4cfc05:
LABEL_4cfc08:
LABEL_4cfc0b:
                    v129 = v16;
                    *(v129) = vvar_1893 - 1;
                    if (CasCmpNE(*(v129), vvar_1893))
                        goto LABEL_0x4cfc13;
                    if ((Not ((vvar_1893 - 0x1<64>) == 0x0<64>))) { Goto None } else { Goto None }
                    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::ha1e2c202d11a9dd7(&v16);
                    goto LABEL_4cf897;
                }
            }
            else
            {
                if (v7 && (v74 = uu_ls::dired::indent::h2754f2a87710210f(&v9), v74))
                    goto LABEL_4cfc08;
                uu_ls::show_dir_name::ha190ab568f7f4d0f(v78, &v9, v53);
                v36 = &g_5ac748;
                v38 = 1;
                v39 = 8;
                v58 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                *((int128_t *)&v40) = 0;
                v91 = std::io::Write::write_fmt::h20bee4a5c9f3cc3a(&v9, &v36);
                if (v91)
                {
                    v74 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v91);
                    goto LABEL_4cfc05;
                }
                else if (v7)
                {
                    v93 = (long long)v20;
                    v95 = v78->field_10;
                    v96 = v22;
                    if (v96 == (long long)(&v20)[8])
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h8b514c726a3ac53f(&v20);
                    v99 = (!v93 ? 2 : *((long long *)(v93 * 16 + v19 - 8)) + 3) + (-0x100 | v96) * 2;
                    v100 = v21;
                    v101 = v96 * 16;
                    *((unsigned long long *)(v100 + v101)) = v99;
                    *((unsigned long long *)(v100 + v101 + 8)) = v99 + v95;
                    v22 = (char *)v96 + 1;
                    v23 = v23 + v95 + 3;
                }
            }
        }
        v102 = _ZN4core3ops8function6FnOnce9call_once17h1d10ea17c1e66bebE.llvm.15267917218625265870(0);
        if (!v102)
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        v104 = *((int128_t *)&v102);
        v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104;
        *(v102) = *(v102) + 1;
        v105 = g_5ad570;
        v44 = v105;
        v106 = anon.8ad7a2c4114f08ca7db24dfdc43d9a46.9.llvm.15267917218625265870;
        v79 = v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v105 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106;
        v42 = v106;
        v46 = v104;
        v107 = v78->field_20;
        v108 = v78->field_28;
        if (!v78->field_128)
            nix::sys::stat::lstat::hdc758bb4b484920c(&v36, v107, v108);
        else
            nix::sys::stat::stat::haeed5e41487abfbf(&v36, v107, v108);
        v109 = v36;
        if (v109)
        {
            v118 = *((int *)((char *)&v36 + 4)) * 0x100000000;
            v36 = 0x8000000000000000;
            v40 = v118 | 2;
            v74 = __rust_alloc(32, 8);
            if (!v74)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v121 = *((int128_t *)&v36);
            v74[1] = *((int128_t *)&v39);
            *((void*)&v74[0]) = v121;
            goto LABEL_4cfba5;
            goto LABEL_4cfba5;
        }
        else
        {
            memcpy(&v51, &v39, 136);
            v50 = v38;
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h6ef7487f15bb6ba5(&v42, &v50);
            v74 = uu_ls::enter_directory::h7e0c2c0d4f691867(v78, v16, v17, v53, &v9, &v42, &v18, &v31);
            if (!v74)
            {
                v110 = v43;
                if (v110)
                {
                    v111 = (char *)v110 + 1;
                    v112 = 144;
                    v114 = v111 * 144;
                    if (17 + (char *)v110 + v114)
                        __rust_dealloc(v42 - v114);
                }
                v103 = v15;
            }
            else
            {
LABEL_4cfba5:
                v125 = v43;
                if (v125)
                {
                    v126 = (char *)v125 + 1;
                    v127 = v126 * 144;
                    if (17 + (char *)v125 + v127)
                        __rust_dealloc(v42 - v127);
                }
                if (!v109)
                    goto LABEL_4cf897;
                goto LABEL_4cfc0b;
            }
        }
        v8 -= 1;
        v77 = v103 - 304;
        if (v103 == 304)
        {
            if (!(v7) || !(!v92->field_ef) || !((v74 = uu_ls::dired::print_dired_output::h9c381e0bcb1a3b12(v92, &v18, &v9, v112, v115, v116), v74)))
            {
LABEL_4cfa07:
                if (v18)
                    __rust_dealloc(v19);
                v128 = (long long)(&v20)[8];
                if (v128)
                    __rust_dealloc(v21);
                if (!v12)
                {
                    v130 = _ZN3std2io8buffered9bufwriter18BufWriter$LT$W$GT$9flush_buf17hb095e311e22d771dE.llvm.15944453427201852302(&v9, v128, v111 * 144 >> 64, v112, v115, v116, *((long long *)&v0), 0);
                    if (v130)
                        _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h5fe6eaabeda97e49E.llvm.15944453427201852302(v130);
                }
                if (v9)
                    __rust_dealloc(v10);
                v132 = v6 + 1;
                v5 = v5;
                while (true)
                {
                    v133 = v5;
                    if (v132 == 1)
                        break;
                    v132 -= 1;
                    _ZN4core3ptr36drop_in_place$LT$uu_ls..PathData$GT$17hf3dd7148b8ab026aE.llvm.11905061688577303374(v133);
                }
                if (v4)
                    __rust_dealloc(v5);
                v136 = v3 + 1;
                v2 = v2;
                while (true)
                {
                    v137 = v2;
                    if (v136 == 1)
                        break;
                    v136 -= 1;
                    _ZN4core3ptr36drop_in_place$LT$uu_ls..PathData$GT$17hf3dd7148b8ab026aE.llvm.11905061688577303374(v137);
                }
                if (!v1)
                    return 0;
                __rust_dealloc(v2);
            }
            goto LABEL_4cf265;
        }
    }
    v26 = v81;
    v84 = _ZN3std2io8buffered9bufwriter18BufWriter$LT$W$GT$9flush_buf17hb095e311e22d771dE.llvm.15944453427201852302(&v9, v82, v83, v65, v66, v67, *((long long *)&v0), 0);
    if (v84 || (v84 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&v13, v82, v83), v84))
    {
        v36 = 0x8000000000000000;
        v40 = v84;
        v74 = __rust_alloc(32, 8);
        if (!v74)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v119 = *((int128_t *)&v36);
        v74[1] = *((int128_t *)&v39);
        *((void*)&v74[0]) = v119;
        _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h5fe6eaabeda97e49E.llvm.15718868642555390090(&v26);
LABEL_4cf890:
LABEL_4cf897:
        if (v18)
            __rust_dealloc(v19);
        v131 = (long long)(&v20)[8];
        if (v131)
            __rust_dealloc(v21);
        if (!v12)
        {
            v135 = _ZN3std2io8buffered9bufwriter18BufWriter$LT$W$GT$9flush_buf17hb095e311e22d771dE.llvm.15944453427201852302(&v9, v131, v126 * 144 >> 64, 144, v123, v124, *((long long *)&v0), 0);
            if (v135)
                _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h5fe6eaabeda97e49E.llvm.15944453427201852302(v135);
        }
        if (v9)
            __rust_dealloc(v10);
        v139 = v6 + 1;
        v5 = v5;
        while (true)
        {
            v140 = v5;
            if (v139 == 1)
                break;
            v139 -= 1;
            _ZN4core3ptr36drop_in_place$LT$uu_ls..PathData$GT$17hf3dd7148b8ab026aE.llvm.11905061688577303374(v140);
        }
        if (v4)
            __rust_dealloc(v5);
        v142 = v3 + 1;
        v2 = v2;
        while (true)
        {
            v143 = v2;
            if (v142 == 1)
                break;
            v142 -= 1;
            _ZN4core3ptr36drop_in_place$LT$uu_ls..PathData$GT$17hf3dd7148b8ab026aE.llvm.11905061688577303374(v143);
        }
        if (!v1)
            return v74;
        __rust_dealloc(v2);
    }
    v42 = v81;
    v87 = v78->field_28;
    if (v87)
    {
        if (v87 < 0)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v88 = __rust_alloc(v87, 1);
        if (v88)
        {
            v89 = v25;
            goto LABEL_4cf482;
        }
    }
    v88 = 1;
LABEL_4cf482:
    memcpy(v40, v78->field_20, v87);
    v39 = v87;
    v40 = v88;
    v41 = v87;
    v38 = v81;
    v37 = v78->field_129;
    v36 = 2;
    _ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108 = 2 - (v37 < 1);
    if (CasCmpNE(_ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108, _ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108))
        goto LABEL_0x4cf4d1;
    if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 == 2)
        goto LABEL_0x4cf4f3;
}
