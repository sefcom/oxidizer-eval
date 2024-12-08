long long uu_ls::display_item_long::h418ba4a35ed53517(struct_4 *a0, struct_3 *a1, struct_2 *a2, unsigned long a3, unsigned long long a4[3], struct_1 *a5)
{
    char v0;  // [sp-0x179]
    void* v1;  // [bp-0x178], Other Possible Types: unsigned int, unsigned long
    unsigned long long v2;  // [sp-0x170]
    void* v3;  // [sp-0x168], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x160]
    void* v5;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x150]
    unsigned long long v7;  // [sp-0x148]
    unsigned long long v8;  // [sp-0x140]
    int v9;  // [sp-0x138], Other Possible Types: unsigned long, unsigned long long
    unsigned long v10;  // [sp-0x130], Other Possible Types: unsigned long long
    unsigned int v11;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x120]
    char v13;  // [bp-0x118], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v14;  // [sp-0x110]
    unsigned long v15;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x100]
    void* v17;  // [sp-0xf8]
    char v18;  // [bp-0xf0]
    void* v19;  // [sp-0xe0]
    unsigned long long v20;  // [sp-0xd8]
    void* v21;  // [sp-0xd0]
    int v22;  // [sp-0xc8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v23;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0xb8]
    int v25;  // [sp-0xa8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v26;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v27;  // [sp-0x98]
    char v28;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0x80]
    char v30;  // [bp-0x78]
    int v31;  // [sp-0x68], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v32;  // [sp-0x60]
    unsigned long v33;  // [sp-0x58]
    char v34;  // [bp-0x48]
    unsigned long v35;  // [bp+0x8]
    struct_0 *v36;  // r15
    unsigned long long v37;  // r12
    unsigned long long v38;  // rax
    unsigned long v39;  // rax
    unsigned long v40;  // cc_ndep
    unsigned long long v43;  // rcx
    unsigned long long v44;  // cc_ndep
    unsigned long long v48;  // rdx
    unsigned long long v49;  // r8
    unsigned long long v50;  // rdx
    unsigned long long v51;  // rax
    unsigned long v53;  // rcx
    unsigned long long v54;  // rcx
    void* v55;  // rax
    unsigned long long v56;  // rcx
    unsigned long long v57;  // r15
    unsigned long long v58;  // r8
    unsigned long long v59;  // rdx
    unsigned long long v60;  // rcx
    unsigned long long v62;  // rax

    v19 = 0;
    v20 = 1;
    v21 = 0;
    if (a5->field_1d != 2)
    {
        uu_ls::colors::StyleManager::apply_normal::h5da694d49000c72d(&v13, a5);
        v9 = &v13;
        v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_423d10;
        v2 = 1;
        v5 = 0;
        v3 = &v9;
        v4 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h146622fdeac84695((unsigned int)::0x51d9c0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h78f945a56e3c83fd(&v19, &v1), &g_612898);
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v13);
    }
    v0 = a2->field_ee;
    if (v0)
        ::0x51d250::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h2baecbd2ddd181b5(&v19, "  \t+bd-?????????cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs", 2);
    v36 = uu_ls::PathData::get_metadata::h8d9c1f19e7e4c4d2(a0, a3);
    if (!v36)
    {
        if (!(a0->field_f8 & 1))
        {
            v38 = "-?????????cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs";
        }
        else
        {
            v39 = 0xf000 & a0->field_fc;
            switch ((unsigned int)v39 - 0x2000 << 19 | (unsigned int)v39 - 0x2000 >> 13)
            {
            case 0:
                v38 = "cescapeinternal error: entered unreachable code: Should have been caught by Clap";
                break;
            case 1:
                v38 = "d-?????????cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs";
                break;
            case 2:
                v38 = "bd-?????????cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs";
                break;
            case 4:
                v38 = "lUse literal quoting style. Equivalent to `--quoting-style=literal`Use escape quoting style. Equivalent to `--quoting-style=escape`Use C quoting style. Equivalent to `--quoting-style=c`Replace control characters with '?' if they are not escaped.Show contro";
                break;
            default:
                v38 = "-?????????cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs";
                break;
            }
        }
        v25 = v38;
        v26 = 1;
        *((int *)&v22) = (2 <= *((long long *)&a0->field_40) ? "...a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5d" : 1);
        v23 = -0x100 | amd64g_calculate_condition(3, 8, *((long long *)&a0->field_40), 2, amd64g_calculate_rflags_all(3, v39 & 4294967295, 0xffffe000, v40)) & 255;
        uu_ls::pad_left::hd5432ad299f24fa7(&v9, "? , ,\n", 1, *((long long *)&a1->field_8));
        v1 = &v25;
        v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9e0c9cf7625be423;
        v3 = &v22;
        v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9e0c9cf7625be423;
        v5 = &v9;
        v6 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v13 = &g_612a18;
        v14 = 3;
        v17 = 0;
        v15 = &v1;
        v16 = 3;
        core::result::Result$LT$T$C$E$GT$::unwrap::h146622fdeac84695((unsigned int)::0x51d9c0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h78f945a56e3c83fd(&v19, &v13), &g_612a48);
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v9);
        if (a2->field_e2)
        {
            uu_ls::pad_right::hda8c3aa06159d4d1(&v13, "? , ,\n", 1, *((long long *)&a1->field_10));
            v9 = &v13;
            v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_612908;
            v2 = 1;
            v5 = 0;
            v3 = &v9;
            v4 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h146622fdeac84695((unsigned int)::0x51d9c0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h78f945a56e3c83fd(&v19, &v1), &g_612a60);
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v13);
        }
        if (a2->field_e1)
        {
            uu_ls::pad_right::hda8c3aa06159d4d1(&v13, "? , ,\n", 1, *((long long *)&a1->field_18));
            v9 = &v13;
            v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_612908;
            v2 = 1;
            v5 = 0;
            v3 = &v9;
            v4 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h146622fdeac84695((unsigned int)::0x51d9c0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h78f945a56e3c83fd(&v19, &v1), &g_612a78);
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v13);
        }
        if (a2->field_eb)
        {
            uu_ls::pad_right::hda8c3aa06159d4d1(&v13, *((long long *)&a0->field_38), *((long long *)&a0->field_40), *((long long *)&a1->field_20));
            v9 = &v13;
            v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_612908;
            v2 = 1;
            v5 = 0;
            v3 = &v9;
            v4 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h146622fdeac84695((unsigned int)::0x51d9c0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h78f945a56e3c83fd(&v19, &v1), &g_612a90);
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v13);
        }
        if (a2->field_e0)
        {
            uu_ls::pad_right::hda8c3aa06159d4d1(&v13, "? , ,\n", 1, *((long long *)&a1->field_10));
            v9 = &v13;
            v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_612908;
            v2 = 1;
            v5 = 0;
            v3 = &v9;
            v4 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h146622fdeac84695((unsigned int)::0x51d9c0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h78f945a56e3c83fd(&v19, &v1), &g_612aa8);
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v13);
        }
        v1 = 0;
        v2 = 1;
        v3 = 0;
        uu_ls::display_item_name::heea135a0d549edf1(&v28, a0, a2, 0, v49, &v1, a3, a5, ansi_width::ansi_width::h892ec55095f21e88(v20, v21, v48));
        uu_ls::pad_left::hd5432ad299f24fa7(&v22, "? , ,\n", 1, *((long long *)&a1->field_28));
        uu_ls::pad_left::hd5432ad299f24fa7(&v9, "? , ,\n", 1, 12);
        v13 = &v22;
        v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v15 = &v9;
        v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_612ac0;
        v2 = 3;
        v5 = 0;
        v3 = &v13;
        v4 = 2;
        core::result::Result$LT$T$C$E$GT$::unwrap::h146622fdeac84695((unsigned int)::0x51d9c0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h78f945a56e3c83fd(&v19, &v1), &g_612af0);
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v9);
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v22);
        if (v0)
        {
            core::str::_$LT$impl$u20$str$GT$::trim_matches::hcbec145dd2ec8c22(v29, *((long long *)&v30));
            uu_ls::dired::calculate_and_update_positions::h1784af61f57010e5(a4, v21, v50);
        }
        v13 = &v28;
        v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v15 = &a2[1].padding_0[8];
        v16 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h1cda345fbd5bfac0;
        v1 = &g_428d70;
        v2 = 2;
        v5 = 0;
        v3 = &v13;
        v4 = 2;
        core::result::Result$LT$T$C$E$GT$::unwrap::h146622fdeac84695((unsigned int)::0x51d9c0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h78f945a56e3c83fd(&v19, &v1), &g_612b08);
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v28);
    }
    else
    {
        v37 = (unsigned int)uucore::features::fsxattr::has_acl::h11501ecb991f32c5(a0->field_8, a0->field_10);
        uucore::features::fs::display_permissions::h1ab974404b69c90a(&v28, v36, 1);
        if (*((long long *)&a0->field_40) < 2)
            v43 = 1;
        else
            v43 = "...a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5d";
        v31 = v43;
        v32 = -0x100 | 2 <= *((long long *)&a0->field_40);
        *((int *)&v25) = (!(v37 & 255 & 255) ? 1 : "+bd-?????????cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs");
        v26 = v37 & 4294967295;
        uu_ls::display_symlink_count::hedc7b5f26afe3d50(&v9, v36->field_30);
        uu_ls::pad_left::hd5432ad299f24fa7(&v22, v10, v11, *((long long *)&a1->field_8));
        v1 = &v28;
        v2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v3 = &v31;
        v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9e0c9cf7625be423;
        v5 = &v25;
        v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9e0c9cf7625be423;
        v7 = &v22;
        v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v13 = &g_6128b0;
        v14 = 4;
        v17 = 0;
        v15 = &v1;
        v16 = 4;
        core::result::Result$LT$T$C$E$GT$::unwrap::h146622fdeac84695((unsigned int)::0x51d9c0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h78f945a56e3c83fd(&v19, &v13), &g_6128f0);
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v22);
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v9);
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v28);
        if (a2->field_e2)
        {
            uu_ls::display_uname::h2554da941fc99443(&v13, v36->field_3c, a2->field_e3);
            uu_ls::pad_right::hda8c3aa06159d4d1(&v9, v14, v15, *((long long *)&a1->field_10));
            v22 = &v9;
            v23 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_612908;
            v2 = 1;
            v5 = 0;
            v3 = &v22;
            v4 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h146622fdeac84695((unsigned int)::0x51d9c0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h78f945a56e3c83fd(&v19, &v1), &g_612918);
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v9);
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v13);
        }
        if (a2->field_e1)
        {
            uu_ls::display_group::h50f8547549316078(&v13, v36->field_40, a2->field_e3);
            uu_ls::pad_right::hda8c3aa06159d4d1(&v9, v14, v15, *((long long *)&a1->field_18));
            v22 = &v9;
            v23 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_612908;
            v2 = 1;
            v5 = 0;
            v3 = &v22;
            v4 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h146622fdeac84695((unsigned int)::0x51d9c0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h78f945a56e3c83fd(&v19, &v1), &g_612930);
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v9);
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v13);
        }
        if (a2->field_eb)
        {
            uu_ls::pad_right::hda8c3aa06159d4d1(&v13, *((long long *)&a0->field_38), *((long long *)&a0->field_40), *((long long *)&a1->field_20));
            v9 = &v13;
            v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_612908;
            v2 = 1;
            v5 = 0;
            v3 = &v9;
            v4 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h146622fdeac84695((unsigned int)::0x51d9c0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h78f945a56e3c83fd(&v19, &v1), &g_612948);
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v13);
        }
        if (a2->field_e0)
        {
            uu_ls::display_uname::h2554da941fc99443(&v13, v36->field_3c, a2->field_e3);
            uu_ls::pad_right::hda8c3aa06159d4d1(&v9, v14, v15, *((long long *)&a1->field_10));
            v22 = &v9;
            v23 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_612908;
            v2 = 1;
            v5 = 0;
            v3 = &v22;
            v4 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h146622fdeac84695((unsigned int)::0x51d9c0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h78f945a56e3c83fd(&v19, &v1), &g_612960);
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v9);
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v13);
        }
        uu_ls::display_len_or_rdev::h5ee228100dfbc998(&v13, v36, a2->field_d0, a2->field_f1);
        if (v16 == 0x8000000000000000)
        {
            v24 = v15;
            *((int128_t *)&v22) = *((int128_t *)&v13);
            uu_ls::pad_left::hd5432ad299f24fa7(&v9, v23, v15, *((long long *)&a1->field_28));
            v28 = &v9;
            v29 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_612908;
            v2 = 1;
            v5 = 0;
            v3 = &v28;
            v4 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h146622fdeac84695((unsigned int)::0x51d9c0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h78f945a56e3c83fd(&v19, &v1), &g_612978);
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v9);
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v22);
        }
        else
        {
            v33 = v15;
            *((int128_t *)&v31) = *((int128_t *)&v13);
            v27 = *((long long *)&v18);
            *((int128_t *)&v25) = *((int128_t *)&v16);
            v51 = *((long long *)&a1->field_28);
            v53 = a1->field_38;
            v54 = v53 + 2;
            if (!((char)amd64g_calculate_condition(3, 4, v53, 2, v44)))
                v54 = -1;
            v55 = v51 - v54;
            if (v54 > v51)
                v55 = 0;
            uu_ls::pad_left::hd5432ad299f24fa7(&v28, v32, v33, ::0x519c90::core::cmp::max_by::h44cff0f2ef2b93bc(a1->field_30, v55));
            uu_ls::pad_left::hd5432ad299f24fa7(&v22, v26, v27, v53);
            v9 = &v28;
            v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v11 = &v22;
            v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_612990;
            v2 = 2;
            v5 = 0;
            v3 = &v9;
            v4 = 2;
            core::result::Result$LT$T$C$E$GT$::unwrap::h146622fdeac84695((unsigned int)::0x51d9c0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h78f945a56e3c83fd(&v19, &v1), &g_6129b0);
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v22);
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v28);
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v25);
            ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v31);
        }
        uu_ls::display_date::hadbe9776faed1691(&v13, v36, a2, v56);
        v9 = &v13;
        v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_6129c8;
        v2 = 2;
        v5 = 0;
        v3 = &v9;
        v4 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h146622fdeac84695((unsigned int)::0x51d9c0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h78f945a56e3c83fd(&v19, &v1), &g_6129e8);
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v13);
        v1 = 0;
        v2 = 1;
        v3 = 0;
        v57 = &v22;
        uu_ls::display_item_name::heea135a0d549edf1(&v22, a0, a2, 0, v58, &v1, a3, a5, ansi_width::ansi_width::h892ec55095f21e88(v20, v21, v59));
        if (!(char)v35)
        {
LABEL_52b2cb:
        }
        else
        {
            v1 = 0;
            if (!(!(core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h2bace40beb907fb1(v23, v24, ::0x51c210::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(39, &v1), v59) & 255 & 255 & 255)))
                goto LABEL_52b2cb;
            v13 = &v22;
            v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_612908;
            v2 = 1;
            v5 = 0;
            v3 = &v13;
            v4 = 1;
            v57 = &v34;
            ::0x51ccd0::core::option::Option$LT$T$GT$::map_or_else::h4ac335b83d8d44c4(&v34, &v1);
        }
        v11 = *((long long *)(v57 + 16));
        *((int128_t *)&v9) = *((int128_t *)v57);
        if (v0)
        {
            v60 = a4[2];
            uu_ls::dired::update_positions::h8161300f4f972423(a4, (!v60 ? 0 : *((long long *)(v60 * 16 + a4[1] - 8)) + 1) + v21, v11 + (!v60 ? 0 : *((long long *)(v60 * 16 + a4[1] - 8)) + 1) + v21);
        }
        v13 = &v9;
        v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v15 = &a2[1].padding_0[8];
        v16 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h1cda345fbd5bfac0;
        v1 = &g_428d70;
        v2 = 2;
        v5 = 0;
        v3 = &v13;
        v4 = 2;
        core::result::Result$LT$T$C$E$GT$::unwrap::h146622fdeac84695((unsigned int)::0x51d9c0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h78f945a56e3c83fd(&v19, &v1), &g_612a00);
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v9);
    }
    v13 = &v19;
    v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v1 = &g_423d10;
    v2 = 1;
    v5 = 0;
    v3 = &v13;
    v4 = 1;
    v62 = std::io::Write::write_fmt::h9d32c17c2cadc496(a3, &v1);
    if (!v62)
    {
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v19);
        return 0;
    }
    ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v19);
    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v62);
}
