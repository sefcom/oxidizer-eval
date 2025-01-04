long long uu_ls::list::h6ddc1ea5566af8cc(struct_3 *a0, struct_2 *a1)
{
    char v0;  // [sp-0x469]
    char v1;  // [bp-0x460], Other Possible Types: unsigned long
    void* v2;  // [sp-0x458]
    unsigned long long v3;  // [sp-0x450]
    void* v4;  // [sp-0x448]
    void* v5;  // [sp-0x440]
    unsigned long long v6;  // [sp-0x438]
    void* v7;  // [sp-0x430]
    char v8;  // [bp-0x428]
    struct struct_0 **v9;  // [bp-0x400], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x3f8]
    char *v11;  // [sp-0x3f0]
    unsigned long long v12;  // [sp-0x3e8]
    unsigned long long v13;  // [sp-0x3d8]
    char v14;  // [sp-0x3d0]
    unsigned long v15;  // [sp-0x3c8], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x3c0]
    unsigned long long v17;  // [sp-0x3b8]
    void* v18;  // [sp-0x3b0]
    struct struct_0 **v19;  // [bp-0x3a8]
    struct_1 *v20;  // [sp-0x3a0]
    unsigned long long v21;  // [sp-0x398]
    void* v22;  // [sp-0x390]
    unsigned long long v23;  // [sp-0x388]
    struct struct_0 **v24;  // [sp-0x380]
    unsigned long long v25;  // [sp-0x370]
    struct struct_0 **v26;  // [bp-0x368]
    char v27;  // [bp-0x358]
    char v28;  // [bp-0x350]
    char v29;  // [bp-0x348]
    char v30;  // [sp-0x32b]
    void* v31;  // [bp-0x328], Other Possible Types: char, unsigned long
    char v32;  // [sp-0x327]
    unsigned long long v33;  // [sp-0x320]
    struct struct_0 **v34;  // [sp-0x318], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v35;  // [sp-0x310], Other Possible Types: unsigned long long
    void* v36;  // [sp-0x308], Other Possible Types: struct struct_0 **
    struct struct_0 **v37;  // [bp-0x1f8]
    unsigned long long v38;  // [sp-0x1f0]
    struct struct_0 **v39;  // [sp-0x1e8]
    unsigned long long v40;  // [sp-0x1e0]
    struct struct_0 **v41;  // [bp-0x1d8]
    unsigned long v42;  // [sp-0xc0], Other Possible Types: unsigned long long
    char v43;  // [bp-0xb8]
    int v45;  // ymm0
    int v46;  // ymm0
    unsigned long long v47;  // 4103
    unsigned long long v48;  // rax
    struct_2 *v49;  // rcx
    unsigned int v50;  // ebp
    unsigned int v51;  // r15d
    unsigned long long v52;  // rdx
    struct struct_0 **v53;  // xmm0
    unsigned int *v54;  // rax
    struct_1 *v55;  // rdx
    struct_2 *v56;  // r14
    unsigned long long v57;  // rax
    void* v58;  // rax
    unsigned long long v59;  // rax
    char *v61;  // r13
    char *v62;  // rbp
    struct_1 *v63;  // rdx
    struct_2 *v64;  // r14
    struct_1 *v66;  // r12
    struct_1 *v67;  // rdx
    int v68;  // ymm1
    int v69;  // ymm2
    unsigned long long v70;  // r15
    char v71;  // al
    unsigned long long v72;  // rbx
    unsigned long long v73;  // rsi
    unsigned long long v74;  // rax
    unsigned long long v75;  // rax
    struct struct_0 **v76;  // xmm0
    unsigned long long v77;  // rax
    unsigned long long v78;  // rax
    unsigned long long v79;  // rbx
    unsigned long long v80;  // rsi
    unsigned long long v81;  // rdx
    struct struct_0 **v82;  // xmm0
    struct struct_0 **v83;  // xmm1
    struct struct_0 **v84;  // xmm2
    unsigned long long v85;  // r15
    unsigned long long v86;  // rbx
    unsigned long long v87;  // [sp-0x360]

    v2 = 0;
    v3 = 8;
    v4 = 0;
    v5 = 0;
    v6 = 8;
    v7 = 0;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h869ec275f269e8ba(&v8, 0x2000, std::io::stdio::stdout::h077da66234850927());
    v22 = 0;
    v23 = 8;
    v46 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *((int128_t *)&v24) = 0;
    v25 = 8;
    *((int128_t *)&v26) = 0;
    v47 = a1->field_18;
    if (v47 == 0x8000000000000000)
        v30 = 2;
    else
        core::ops::function::FnOnce::call_once::hb012765dfd0482a2(&v29, &a1->field_18);
    v1 = a0->field_10;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h58ac219310b2eb09(&v9, a0);
    v48 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he27f369b65ee7c46(&v9);
    if (v48)
    {
        v49 = a1;
        v0 = v49->field_e8;
        v50 = v49->field_eb;
        v51 = v49->field_f2;
        do
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v31, v48, v52);
            v21 = v34;
            v53 = *((int128_t *)&v31);
            v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
            v19 = v53;
            v31 = 0;
            v16 = 0x8000000000000000;
            uu_ls::PathData::new::ha3e1f49dfc1f89b1(&v37, &v19, &v31, &v16, v50, v51);
            if (!uu_ls::PathData::get_metadata::hc7a96a0547653f90(&v37, &v8))
            {
                ::0x51a570::core::ptr::drop_in_place$LT$uu_ls..PathData$GT$::h882b87545de6c6bd(&v37);
                continue;
            }
            v54 = uu_ls::PathData::file_type::h128ed7d98b354477(&v37, &v8);
            if (!v54)
            {
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0();
                goto LABEL_52725b;
            }
            else if (!(!v0) || !(((unsigned short)*(v54) & 0xf000) == 0x4000))
            {
LABEL_52725b:
                memcpy(&v31, &v37, 304);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hda8522d54d2d0972(&v2, &v31, v55);
            }
            else
            {
                memcpy(&v31, &v37, 304);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hda8522d54d2d0972(&v5, &v31, v55);
            }
        } while ((v48 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he27f369b65ee7c46(&v9), v48));
    }
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..path..Path$GT$$GT$::hcfe75888939086e5(&v9);
    v56 = a1;
    uu_ls::sort_entries::h9b56d1e19b40eaef(v3, v4, v56);
    uu_ls::sort_entries::h9b56d1e19b40eaef(v6, v7, v56);
    if (v30 != 2 && uu_ls::colors::StyleManager::get_normal_style::hc92a465b83f2ab18(&v29))
    {
        uu_ls::colors::StyleManager::reset::h8e7360f134edbed2(&v37, &v29, 1);
        v9 = &v37;
        v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v31 = &g_423c10;
        v33 = 1;
        v36 = 0;
        v34 = &v9;
        v35 = 1;
        v57 = std::io::Write::write_fmt::h51abc44b465d2e67(&v8, &v31);
        if (v57)
        {
            v58 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v57);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v37);
            goto LABEL_5274c1;
        }
        else
        {
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v37);
        }
    }
    v58 = uu_ls::display_items::hbe9721d3f3017f49(v3, v4, v56, &v8, &v22, &v29);
    if (!v58)
    {
        v16 = v6;
        v17 = v7 * 304 + v16;
        v18 = 0;
        v59 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc66774401883fce1(&v16);
        if (!v55)
        {
            v64 = v56;
            if (!v56->field_ee)
                goto LABEL_5279de;
        }
        else
        {
            v0 = !v56->field_e6 & v1 < 2;
            v1 = v56->field_ee;
            v61 = &v31;
            v62 = &v16;
            v63 = v55;
            do
            {
                v66 = v63;
                v70 = &v66->padding_18;
                std::fs::read_dir::h9d938750fa0d5aed(&v27, v70, v67);
                v71 = v28;
                if (v14 == 2)
                {
                    v72 = *((long long *)&v27);
                    v15 = v72;
                    v74 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h5d2671fc0ed75d53(&v8, v73, v55);
                    if (v74)
                    {
                        v58 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v74);
                        ::0x51a6d0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8a1f0142156ca749(&v15);
                        goto LABEL_5274c1;
                    }
                    else
                    {
                        v9 = v72;
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&v37, v70);
                        v36 = v39;
                        v76 = *((int128_t *)&v37);
                        v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
                        v34 = v76;
                        v33 = v72;
                        v32 = v66->field_129;
                        v31 = 2;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0();
                        v19 = uucore::util_name::h60d842bf27b05e82();
                        v20 = v55;
                        v9 = &v19;
                        v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
                        v11 = v61;
                        v12 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
                        v37 = &g_612588;
                        v38 = 3;
                        v41 = 0;
                        v39 = &v9;
                        v40 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v37, v73, v55);
                        ::0x51a4b0::core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(v61);
                        goto LABEL_527590;
                    }
                }
                v13 = *((long long *)&v27);
                v14 = v71;
                if (!v0)
                {
                    if (!v59 && !v4)
                    {
                        if ((v48 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he27f369b65ee7c46(&v9), v48))
                            goto LABEL_527a7c;
                        uu_ls::show_dir_name::h15f4c75d324b24c3(v66, &v8, a1);
                        v31 = &g_6125b8;
                        v33 = 1;
                        v34 = 8;
                        v46 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        *((int128_t *)&v35) = 0;
                        v78 = std::io::Write::write_fmt::h51abc44b465d2e67(&v8, v61);
                        if (v78)
                        {
                            v58 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v78);
                            goto LABEL_527a79;
                        }
                        else if (v1)
                        {
                            v79 = v66->field_10;
                            uu_ls::dired::calculate_subdired::h85725549554709aa(&v22, v79);
                            v87 = v87 + v79 + 3;
                            goto LABEL_527882;
                        }
                    }
                    v31 = &g_6125b8;
                    v33 = 1;
                    v34 = 8;
                    *((int128_t *)&v35) = 0;
                    v75 = std::io::Write::write_fmt::h51abc44b465d2e67(&v8, v61);
                    if (v75)
                    {
                        v58 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v75);
                        goto LABEL_527a79;
                    }
                    uu_ls::show_dir_name::h15f4c75d324b24c3(v66, &v8, a1);
                    v31 = &g_6125b8;
                    v33 = 1;
                    v34 = 8;
                    v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    *((int128_t *)&v35) = 0;
                    v77 = std::io::Write::write_fmt::h51abc44b465d2e67(&v8, v61);
                    if (!v77)
                        goto LABEL_527882;
                    v58 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v77);
LABEL_527a79:
LABEL_527a7c:
LABEL_527a7f:
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&v13);
LABEL_5274c1:
                    core::ptr::drop_in_place$LT$uu_ls..dired..DiredOutput$GT$::h57b2c8ef12c6840d(&v22);
                    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h15dbe50861716c12(&v8);
                    ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v5);
                    ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v2);
                    return v58;
                }
LABEL_527882:
                _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h627ba5d5895a5d3c(v61, v80, v81);
                v82 = *((int128_t *)&v31);
                v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82;
                v83 = *((int128_t *)&v34);
                v68 = v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
                v84 = *((int128_t *)&v36);
                v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84;
                v41 = v84;
                v39 = v83;
                v37 = v82;
                uucore::features::fs::FileInformation::from_path::h569773e274f836e3(v61, v70, v66->field_128);
                v85 = v31;
                v86 = v33;
                if (v85)
                {
                    v58 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v86);
LABEL_527a40:
                    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::h2a00dd81781aac6d(&v37);
                    if (!v85)
                        goto LABEL_5274c1;
                    goto LABEL_527a7f;
                }
                memcpy(&v43, &v34, 136);
                v42 = v86;
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h5dc8e28f7c38d974(&v37, &v42);
                v58 = uu_ls::enter_directory::h306ec720e186c34e(v66, v13, v14, a1, &v8, &v37, &v22, &v29);
                if ((v48 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he27f369b65ee7c46(&v9), v48))
                    goto LABEL_527a40;
                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::h2a00dd81781aac6d(&v37);
                v62 = &v16;
LABEL_527590:
                v59 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc66774401883fce1(v62);
                v63 = v67;
            } while (v67);
            v64 = a1;
            if (!v1)
            {
LABEL_5279de:
                core::ptr::drop_in_place$LT$uu_ls..dired..DiredOutput$GT$::h57b2c8ef12c6840d(&v22);
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h15dbe50861716c12(&v8);
                ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v5);
                ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v2);
                return 0;
            }
        }
        if ((v48 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he27f369b65ee7c46(&v9), v48))
            goto LABEL_5279de;
    }
    goto LABEL_5274c1;
}
