long long uu_ls::list::h6ddc1ea5566af8cc(struct_3 *a0, struct_0 *a1)
{
    char *v0;  // [sp-0x488], Other Possible Types: unsigned long long
    char *v1;  // [sp-0x480]
    char v2;  // [sp-0x469]
    char v3;  // [bp-0x460], Other Possible Types: unsigned long
    void* v4;  // [sp-0x458]
    unsigned long long v5;  // [sp-0x450]
    void* v6;  // [sp-0x448]
    void* v7;  // [sp-0x440]
    unsigned long long v8;  // [sp-0x438]
    void* v9;  // [sp-0x430]
    char v10;  // [bp-0x428]
    struct struct_1 **v11;  // [bp-0x400], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x3f8]
    char *v13;  // [sp-0x3f0]
    unsigned long long v14;  // [sp-0x3e8]
    unsigned long long v15;  // [sp-0x3d8]
    char v16;  // [sp-0x3d0]
    unsigned long v17;  // [sp-0x3c8], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x3c0]
    unsigned long long v19;  // [sp-0x3b8]
    void* v20;  // [sp-0x3b0]
    struct struct_1 **v21;  // [bp-0x3a8]
    struct_2 *v22;  // [sp-0x3a0]
    unsigned long long v23;  // [sp-0x398]
    void* v24;  // [sp-0x390]
    unsigned long long v25;  // [sp-0x388]
    struct struct_1 **v26;  // [sp-0x380]
    unsigned long long v27;  // [sp-0x370]
    struct struct_1 **v28;  // [bp-0x368]
    char v29;  // [bp-0x358]
    char v30;  // [bp-0x350]
    char v31;  // [bp-0x348]
    char v32;  // [sp-0x32b]
    void* v33;  // [bp-0x328], Other Possible Types: char, unsigned long
    char v34;  // [sp-0x327]
    unsigned long long v35;  // [sp-0x320]
    struct struct_1 **v36;  // [sp-0x318], Other Possible Types: unsigned long, unsigned long long
    struct struct_1 **v37;  // [sp-0x310], Other Possible Types: unsigned long long
    void* v38;  // [sp-0x308], Other Possible Types: struct struct_1 **
    struct struct_1 **v39;  // [bp-0x1f8]
    unsigned long long v40;  // [sp-0x1f0]
    struct struct_1 **v41;  // [sp-0x1e8]
    unsigned long long v42;  // [sp-0x1e0]
    struct struct_1 **v43;  // [bp-0x1d8]
    unsigned long v44;  // [sp-0xc0], Other Possible Types: unsigned long long
    char v45;  // [bp-0xb8]
    int v47;  // ymm0
    int v48;  // ymm0
    unsigned long long v49;  // 4103
    unsigned long long v50;  // rax
    struct_0 *v51;  // rcx
    unsigned int v52;  // ebp
    unsigned int v53;  // r15d
    unsigned long long v54;  // rdx
    struct struct_1 **v55;  // xmm0
    unsigned int *v56;  // rax
    struct_0 *v57;  // r14
    unsigned long long v58;  // rax
    void* v59;  // rax
    unsigned long long v60;  // rax
    struct_2 *v61;  // rdx
    char *v63;  // r13
    char *v64;  // rbp
    struct_0 *v65;  // r14
    struct_2 *v67;  // r12
    struct_2 *v68;  // r12
    int v69;  // ymm1
    int v70;  // ymm2
    unsigned long long v71;  // r15
    char v72;  // al
    unsigned long long v73;  // rbx
    unsigned long long v74;  // rax
    unsigned long long v75;  // rax
    struct struct_1 **v76;  // xmm0
    unsigned long long v77;  // rax
    unsigned long long v78;  // rax
    unsigned long long v79;  // rbx
    struct struct_1 **v80;  // xmm0
    struct struct_1 **v81;  // xmm1
    struct struct_1 **v82;  // xmm2
    unsigned long long v83;  // r15
    unsigned long long v84;  // rbx
    unsigned long long v85;  // [sp-0x360]

    v4 = 0;
    v5 = 8;
    v6 = 0;
    v7 = 0;
    v8 = 8;
    v9 = 0;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h869ec275f269e8ba(&v10, 0x2000, std::io::stdio::stdout::h077da66234850927());
    v24 = 0;
    v25 = 8;
    v48 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *((uint128_t *)&v26) = 0;
    v27 = 8;
    *((uint128_t *)&v28) = 0;
    v49 = a1->field_18;
    if (v49 == 0x8000000000000000)
        v32 = 2;
    else
        core::ops::function::FnOnce::call_once::hb012765dfd0482a2(&v31, &a1->field_18);
    v3 = a0->field_10;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h58ac219310b2eb09(&v11, a0);
    v50 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he27f369b65ee7c46(&v11);
    if (v50)
    {
        v51 = a1;
        v2 = v51->field_e8;
        v52 = v51->field_eb;
        v53 = v51->field_f2;
        do
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v33, v50, v54);
            v23 = v36;
            v55 = *((int128_t *)&v33);
            v48 = v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
            v21 = v55;
            v33 = 0;
            v18 = 0x8000000000000000;
            v0 = 1;
            uu_ls::PathData::new::ha3e1f49dfc1f89b1(&v39, &v21, &v33, &v18, v52, v53);
            if (!uu_ls::PathData::get_metadata::hc7a96a0547653f90(&v39, &v10))
            {
                ::0x51a570::core::ptr::drop_in_place$LT$uu_ls..PathData$GT$::h882b87545de6c6bd(&v39);
                continue;
            }
            v56 = uu_ls::PathData::file_type::h128ed7d98b354477(&v39, &v10);
            if (!v56)
            {
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                goto LABEL_52725b;
            }
            else if (!(!v2) || !(((unsigned short)*(v56) & 0xf000) == 0x4000))
            {
LABEL_52725b:
                memcpy(&v33, &v39, 304);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hda8522d54d2d0972(&v4, &v33);
            }
            else
            {
                memcpy(&v33, &v39, 304);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hda8522d54d2d0972(&v7, &v33);
            }
        } while ((v50 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he27f369b65ee7c46(&v11), v50));
    }
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..path..Path$GT$$GT$::hcfe75888939086e5(&v11);
    v57 = a1;
    uu_ls::sort_entries::h9b56d1e19b40eaef(v5, v6, v57);
    uu_ls::sort_entries::h9b56d1e19b40eaef(v8, v9, v57);
    if (v32 != 2 && uu_ls::colors::StyleManager::get_normal_style::hc92a465b83f2ab18(&v31))
    {
        uu_ls::colors::StyleManager::reset::h8e7360f134edbed2(&v39, &v31, 1);
        v11 = &v39;
        v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v33 = &g_423c10;
        v35 = 1;
        v38 = 0;
        v36 = &v11;
        v37 = 1;
        v58 = std::io::Write::write_fmt::h51abc44b465d2e67(&v10, &v33);
        if (v58)
        {
            v59 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v58);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v39);
            goto LABEL_5274c1;
        }
        else
        {
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v39);
        }
    }
    v59 = uu_ls::display_items::hbe9721d3f3017f49(v5, v6, v57, &v10, &v24, &v31);
    if (!v59)
    {
        v18 = v8;
        v19 = v9 * 304 + v18;
        v20 = 0;
        v60 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc66774401883fce1(&v18);
        if (!v61)
        {
            v65 = v57;
            if (!v57->field_ee)
                goto LABEL_5279de;
        }
        else
        {
            v2 = !v57->field_e6 & v3 < 2;
            v3 = v57->field_ee;
            v63 = &v33;
            v64 = &v18;
            do
            {
                v67 = v68;
                v71 = &v67->padding_18;
                std::fs::read_dir::h9d938750fa0d5aed(&v29, v71);
                v72 = v30;
                if (v16 == 2)
                {
                    v73 = *((long long *)&v29);
                    v17 = v73;
                    v74 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h5d2671fc0ed75d53(&v10);
                    if (v74)
                    {
                        v59 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v74);
                        ::0x51a6d0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8a1f0142156ca749(&v17);
                        goto LABEL_5274c1;
                    }
                    else
                    {
                        v11 = v73;
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&v39, v71);
                        v38 = v41;
                        v76 = *((int128_t *)&v39);
                        v48 = v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
                        v36 = v76;
                        v35 = v73;
                        v34 = v67->field_129;
                        v33 = 2;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(2 - (v34 < 1));
                        v21 = uucore::util_name::h60d842bf27b05e82();
                        v22 = v61;
                        v11 = &v21;
                        v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
                        v13 = v63;
                        v14 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
                        v39 = &g_612588;
                        v40 = 3;
                        v43 = 0;
                        v41 = &v11;
                        v42 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v39);
                        ::0x51a4b0::core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(v63);
                        goto LABEL_527590;
                    }
                }
                v15 = *((long long *)&v29);
                v16 = v72;
                if (!v2)
                {
                    if (!v60 && !v6)
                    {
                        if ((v50 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he27f369b65ee7c46(&v11), v50))
                            goto LABEL_527a7c;
                        uu_ls::show_dir_name::h15f4c75d324b24c3(v67, &v10, a1);
                        v33 = &g_6125b8;
                        v35 = 1;
                        v36 = 8;
                        v48 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        *((uint128_t *)&v37) = 0;
                        v78 = std::io::Write::write_fmt::h51abc44b465d2e67(&v10, v63);
                        if (v78)
                        {
                            v59 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v78);
                            goto LABEL_527a79;
                        }
                        else if (v3)
                        {
                            v79 = v67->field_10;
                            uu_ls::dired::calculate_subdired::h85725549554709aa(&v24, v79);
                            v85 = v85 + v79 + 3;
                            goto LABEL_527882;
                        }
                    }
                    v33 = &g_6125b8;
                    v35 = 1;
                    v36 = 8;
                    *((uint128_t *)&v37) = 0;
                    v75 = std::io::Write::write_fmt::h51abc44b465d2e67(&v10, v63);
                    if (v75)
                    {
                        v59 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v75);
                        goto LABEL_527a79;
                    }
                    uu_ls::show_dir_name::h15f4c75d324b24c3(v67, &v10, a1);
                    v33 = &g_6125b8;
                    v35 = 1;
                    v36 = 8;
                    v48 = v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    *((uint128_t *)&v37) = 0;
                    v77 = std::io::Write::write_fmt::h51abc44b465d2e67(&v10, v63);
                    if (!v77)
                        goto LABEL_527882;
                    v59 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v77);
LABEL_527a79:
LABEL_527a7c:
LABEL_527a7f:
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c();
LABEL_5274c1:
                    core::ptr::drop_in_place$LT$uu_ls..dired..DiredOutput$GT$::h57b2c8ef12c6840d(&v24);
                    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h15dbe50861716c12(&v10);
                    ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                    ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v4);
                    return v59;
                }
LABEL_527882:
                _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h627ba5d5895a5d3c(v63);
                v80 = *((int128_t *)&v33);
                v48 = v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
                v81 = *((int128_t *)&v36);
                v69 = v69 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
                v82 = *((int128_t *)&v38);
                v70 = v70 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82;
                v43 = v82;
                v41 = v81;
                v39 = v80;
                uucore::features::fs::FileInformation::from_path::h569773e274f836e3(v63, v71, v67->field_128);
                v83 = v33;
                v84 = v35;
                if (v83)
                {
                    v59 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v84);
LABEL_527a40:
                    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::h2a00dd81781aac6d();
                    if (!v83)
                        goto LABEL_5274c1;
                    goto LABEL_527a7f;
                }
                memcpy(&v45, &v36, 136);
                v44 = v84;
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h5dc8e28f7c38d974(&v39, &v44);
                v1 = &v31;
                v0 = &v24;
                v59 = uu_ls::enter_directory::h306ec720e186c34e(v67, v15, v16, a1, &v10, &v39);
                if ((v50 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he27f369b65ee7c46(&v11), v50))
                    goto LABEL_527a40;
                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::h2a00dd81781aac6d();
                v64 = &v18;
LABEL_527590:
                v60 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc66774401883fce1(v64);
                v68 = v61;
            } while (v61);
            v65 = a1;
            if (!v3)
            {
LABEL_5279de:
                core::ptr::drop_in_place$LT$uu_ls..dired..DiredOutput$GT$::h57b2c8ef12c6840d(&v24);
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h15dbe50861716c12(&v10);
                ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v4);
                return 0;
            }
        }
        if ((v50 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he27f369b65ee7c46(&v11), v50))
            goto LABEL_5279de;
    }
    goto LABEL_5274c1;
}
