long long uu_ls::list::h6ddc1ea5566af8cc(struct_3 *a0, struct_2 *a1)
{
    char v0;  // [bp-0x488]
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
    unsigned long v17;  // [sp-0x3c8]
    unsigned long long v18[3];  // [sp-0x3c0], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x3b8]
    void* v20;  // [sp-0x3b0]
    struct struct_1 **v21;  // [bp-0x3a8]
    struct_0 *v22;  // [sp-0x3a0]
    unsigned long long v23;  // [sp-0x398]
    void* v24;  // [sp-0x390]
    unsigned long long v25;  // [sp-0x388]
    struct struct_1 **v26;  // [sp-0x380]
    unsigned long long v27;  // [sp-0x370]
    struct struct_1 **v28;  // [bp-0x368]
    unsigned long long v29;  // [sp-0x360]
    char v30;  // [bp-0x358]
    char v31;  // [bp-0x350]
    char v32;  // [bp-0x348]
    char v33;  // [sp-0x32b]
    unsigned long v34;  // [bp-0x328], Other Possible Types: char
    void* v35;  // [bp-0x328], Other Possible Types: unsigned long
    char v36;  // [sp-0x327]
    unsigned long long v37;  // [sp-0x320]
    struct struct_1 **v38;  // [sp-0x318], Other Possible Types: unsigned long, unsigned long long
    struct struct_1 **v39;  // [sp-0x318], Other Possible Types: unsigned long long
    struct struct_1 **v40;  // [bp-0x310]
    struct struct_1 **v41;  // [sp-0x308]
    struct struct_1 **v42;  // [sp-0x308]
    struct struct_1 **v43;  // [bp-0x1f8]
    struct struct_1 **v44;  // [sp-0x1f8]
    struct struct_1 **v45;  // [sp-0x1e8]
    unsigned long long v46;  // [sp-0x1e0]
    struct struct_1 **v47;  // [bp-0x1d8]
    unsigned long v48;  // [sp-0xc0]
    char v49;  // [bp-0xb8]
    int v51;  // ymm0
    int v52;  // ymm0
    unsigned long long v53;  // 4103
    unsigned long long v54;  // rax
    struct_2 *v55;  // rcx
    unsigned int v56;  // ebp
    unsigned int v57;  // r15d
    unsigned long long v58;  // rdx
    struct struct_1 **v59;  // xmm0
    unsigned int *v60;  // rax
    struct_2 *v61;  // r14
    unsigned long long v62;  // rax
    void* v63;  // rbx
    struct_0 *v65;  // rdx
    unsigned long long v66;  // rbx
    struct_0 *v67;  // r12
    char *v69;  // r13
    char *v70;  // rbp
    int v71;  // ymm1
    int v72;  // ymm2
    unsigned long long v73;  // r15
    char v74;  // al
    unsigned long long v75;  // rbx
    unsigned long long v76;  // rax
    unsigned long long v77;  // rax
    struct struct_1 **v78;  // xmm0
    unsigned long long v79;  // rax
    unsigned long long v80;  // rax
    unsigned long long v81;  // rbx
    struct struct_1 **v82;  // xmm0
    struct struct_1 **v83;  // xmm1
    struct struct_1 **v84;  // xmm2
    unsigned long long v85;  // r15
    unsigned long long v86;  // rbx
    unsigned long long v87;  // rax

    v4 = 0;
    v5 = 8;
    v6 = 0;
    v7 = 0;
    v8 = 8;
    v9 = 0;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h869ec275f269e8ba(&v10, 0x2000, std::io::stdio::stdout::h077da66234850927());
    v24 = 0;
    v25 = 8;
    v52 = v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *((uint128_t *)&v26) = 0;
    v27 = 8;
    *((uint128_t *)&v28) = 0;
    v53 = a1->field_18;
    if (v53 == 0x8000000000000000)
        v33 = 2;
    else
        core::ops::function::FnOnce::call_once::hb012765dfd0482a2(&v32, &a1->field_18);
    v3 = a0->field_10;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h58ac219310b2eb09(&v11, a0);
    v54 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he27f369b65ee7c46(&v11);
    if (v54)
    {
        v55 = a1;
        v2 = v55->field_e8;
        v56 = v55->field_eb;
        v57 = v55->field_f2;
        do
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v34, v54, v58);
            v23 = v38;
            v59 = *((int128_t *)&v35);
            v52 = v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
            v21 = v59;
            v35 = 0;
            v18 = 0x8000000000000000;
            uu_ls::PathData::new::ha3e1f49dfc1f89b1(&v43, &v21, &v34, &v18, v56, v57, v0);
            if (!uu_ls::PathData::get_metadata::hc7a96a0547653f90(&v43, &v10))
            {
                ::0x51a570::core::ptr::drop_in_place$LT$uu_ls..PathData$GT$::h882b87545de6c6bd(&v43);
                continue;
            }
            v60 = uu_ls::PathData::file_type::h128ed7d98b354477(&v43, &v10);
            if (!v60)
            {
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                goto LABEL_52725b;
            }
            else if (!(!v2) || !(((unsigned short)*(v60) & 0xf000) == 0x4000))
            {
LABEL_52725b:
                memcpy(&v34, &v43, 304);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hda8522d54d2d0972(&v4, &v34);
            }
            else
            {
                memcpy(&v34, &v43, 304);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hda8522d54d2d0972(&v7, &v34);
            }
        } while ((v54 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he27f369b65ee7c46(&v11), v54));
    }
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..path..Path$GT$$GT$::hcfe75888939086e5(&v11);
    v61 = a1;
    uu_ls::sort_entries::h9b56d1e19b40eaef(v5, v6, v61);
    uu_ls::sort_entries::h9b56d1e19b40eaef(v8, v9, v61);
    if (v33 != 2 && uu_ls::colors::StyleManager::get_normal_style::hc92a465b83f2ab18(&v32))
    {
        uu_ls::colors::StyleManager::reset::h8e7360f134edbed2(&v43, &v32, 1);
        v11 = &v43;
        v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v35 = &g_423c10;
        v37 = 1;
        v41 = 0;
        v39 = &v11;
        v41 = 1;
        v62 = std::io::Write::write_fmt::h51abc44b465d2e67(&v10, &v34);
        if (v62)
        {
            v63 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v62);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v43);
            goto LABEL_5274c1;
        }
        else
        {
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v43);
        }
    }
    v63 = uu_ls::display_items::hbe9721d3f3017f49(v5, v6, v61, &v10, &v24, &v32);
    if (!v63)
    {
        *((unsigned long long *)v18) = v8;
        *((unsigned long long [3])&v19) = v9 * 304 + v18;
        v20 = 0;
        if (v65)
        {
            v66 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc66774401883fce1(&v18);
            v67 = v65;
            v2 = !v61->field_e6 & v3 < 2;
            v3 = v61->field_ee;
            v69 = &v34;
            v70 = &v18;
            do
            {
                v73 = &v67->padding_18;
                std::fs::read_dir::h9d938750fa0d5aed(&v30, v73);
                v74 = v31;
                if (v16 == 2)
                {
                    v75 = *((long long *)&v30);
                    v17 = v75;
                    v76 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h5d2671fc0ed75d53(&v10);
                    if (!v76)
                    {
                        v11 = v75;
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&v43, v73);
                        v42 = v45;
                        v78 = *((int128_t *)&v44);
                        v52 = v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
                        v38 = v78;
                        v37 = v75;
                        v36 = v67->field_129;
                        v34 = 2;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(2 - (v36 < 1));
                        v21 = uucore::util_name::h60d842bf27b05e82();
                        v22 = v65;
                        v11 = &v21;
                        v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
                        v13 = v69;
                        v14 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
                        v44 = &g_612588;
                        v44 = 3;
                        v47 = 0;
                        v45 = &v11;
                        v46 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v43);
                        ::0x51a4b0::core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(v69);
                        goto LABEL_527590;
                    }
                    else
                    {
                        v63 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v76);
                        ::0x51a6d0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h8a1f0142156ca749(&v17);
                        goto LABEL_5274c1;
                    }
                }
                v15 = *((long long *)&v30);
                v16 = v74;
                if (!v2)
                {
                    if (!v66 && !v6)
                    {
                        if (v3 && (v63 = uu_ls::dired::indent::h541a64321517b8c5(&v10), v63))
                            goto LABEL_527a7c;
                        uu_ls::show_dir_name::h15f4c75d324b24c3(v67, &v10, a1);
                        v35 = &g_6125b8;
                        v37 = 1;
                        v39 = 8;
                        v52 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        *((uint128_t *)&v41) = 0;
                        v80 = std::io::Write::write_fmt::h51abc44b465d2e67(&v10, v69);
                        if (v80)
                        {
                            v87 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v80);
                            goto LABEL_527a79;
                        }
                        else
                        {
                            if (v3)
                            {
                                v81 = v67->field_10;
                                uu_ls::dired::calculate_subdired::h85725549554709aa(&v24, v81);
                                v29 = v29 + v81 + 3;
                                goto LABEL_527882;
                            }
                        }
                    }
                    v34 = &g_6125b8;
                    v37 = 1;
                    v38 = 8;
                    *((uint128_t *)&v40) = 0;
                    v77 = std::io::Write::write_fmt::h51abc44b465d2e67(&v10, v69);
                    if (v77)
                    {
                        v87 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v77);
                        goto LABEL_527a79;
                    }
                    uu_ls::show_dir_name::h15f4c75d324b24c3(v67, &v10, a1);
                    v35 = &g_6125b8;
                    v37 = 1;
                    v39 = 8;
                    v52 = v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    *((uint128_t *)&v41) = 0;
                    v79 = std::io::Write::write_fmt::h51abc44b465d2e67(&v10, v69);
                    if (!v79)
                        goto LABEL_527882;
                    v87 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v79);
LABEL_527a79:
                    v63 = v87;
LABEL_527a7c:
LABEL_527a7f:
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h7af0794fa1946e9c(&v15);
LABEL_5274c1:
                    core::ptr::drop_in_place$LT$uu_ls..dired..DiredOutput$GT$::h57b2c8ef12c6840d(&v24);
                    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h15dbe50861716c12(&v10);
                    ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v7);
                    ::0x51ac10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::h40cc1e9309e62c08(&v4);
                    return v63;
                }
LABEL_527882:
                _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h627ba5d5895a5d3c(v69);
                v82 = *((int128_t *)&v35);
                v52 = v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82;
                v83 = *((int128_t *)&v39);
                v71 = v71 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
                v84 = *((int128_t *)&v42);
                v72 = v72 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84;
                v47 = v84;
                v45 = v83;
                v44 = v82;
                uucore::features::fs::FileInformation::from_path::h569773e274f836e3(v69, v73, v67->field_128);
                v85 = v35;
                v86 = v37;
                if (v85)
                {
                    v63 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v86);
LABEL_527a40:
                    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::h2a00dd81781aac6d(&v43);
                    if (!v85)
                        goto LABEL_5274c1;
                    goto LABEL_527a7f;
                }
                memcpy(&v49, &v39, 136);
                v48 = v86;
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h5dc8e28f7c38d974(&v43, &v48);
                v1 = &v32;
                v63 = uu_ls::enter_directory::h306ec720e186c34e(v67, v15, v16, a1, &v10, &v43);
                if (!(!v63))
                    goto LABEL_527a40;
                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::h2a00dd81781aac6d(&v43);
                v70 = &v18;
LABEL_527590:
                v66 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc66774401883fce1(v70);
                v67 = v65;
            } while (v65);
            v61 = a1;
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
        else if (!v61->field_ee)
        {
            goto LABEL_5279de;
        }
        if (!(!v61->field_ef && (v63 = uu_ls::dired::print_dired_output::h12a985547a0b3a50(v61, &v24, &v10), v63)))
            goto LABEL_5279de;
    }
    goto LABEL_5274c1;
}
