long long uu_ls::display_item_long::he4defe602b238d5a(struct_5 *a0, struct_2 *a1, struct_3 *a2, unsigned long long a3, unsigned long long a4[3], struct_4 *a5)
{
    char v0;  // [sp-0x179]
    struct_0 *v1;  // [bp-0x178]
    unsigned long long v2;  // [sp-0x170]
    struct struct_0 **v3;  // [sp-0x168], Other Possible Types: void*, struct_0 *
    unsigned long long v4;  // [sp-0x160]
    struct_0 *v5;  // [sp-0x158], Other Possible Types: void*
    unsigned long long v6;  // [sp-0x150]
    struct_0 *v7;  // [sp-0x148]
    unsigned long long v8;  // [sp-0x140]
    struct_0 *v9;  // [sp-0x138]
    unsigned long v10;  // [sp-0x130], Other Possible Types: unsigned long long
    struct_0 *v11;  // [sp-0x128], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v12;  // [sp-0x120]
    struct_0 *v13;  // [bp-0x118]
    unsigned long long v14;  // [sp-0x110]
    struct_0 *v15;  // [sp-0x108], Other Possible Types: struct struct_0 **, unsigned long long
    unsigned long long v16;  // [sp-0x100]
    void* v17;  // [sp-0xf8]
    char v18;  // [bp-0xf0]
    void* v19;  // [sp-0xe0]
    unsigned long long v20;  // [sp-0xd8]
    void* v21;  // [sp-0xd0]
    struct_0 *v22;  // [sp-0xc8]
    unsigned long v23;  // [sp-0xc0], Other Possible Types: unsigned long long
    struct struct_0 **v24;  // [sp-0xb8]
    struct_0 *v25;  // [sp-0xa8]
    unsigned long long v26;  // [sp-0xa0]
    unsigned long long v27;  // [sp-0x98]
    struct_0 *v28;  // [bp-0x88]
    unsigned long long v29;  // [sp-0x80]
    char v30;  // [bp-0x78]
    struct_0 *v31;  // [sp-0x68]
    unsigned long long v32;  // [sp-0x60]
    struct struct_0 **v33;  // [sp-0x58]
    char v34;  // [bp-0x48]
    unsigned long v35;  // [bp+0x8]
    struct_1 *v36;  // r15
    unsigned long long v37;  // r12
    struct_0 *v38;  // rax
    unsigned long v39;  // rax
    unsigned long v40;  // cc_ndep
    struct_0 *v43;  // rcx
    unsigned long long v44;  // cc_ndep
    unsigned long long v48;  // r8
    unsigned long long v49;  // rdx
    unsigned long long v50;  // rax
    unsigned long v52;  // rcx
    unsigned long long v53;  // rcx
    void* v54;  // rax
    struct_0 *v55;  // r15
    unsigned long long v56;  // r8
    unsigned long long v57;  // rdx
    unsigned long long v58;  // rcx
    unsigned long long v60;  // rax

    v19 = 0;
    v20 = 1;
    v21 = 0;
    if (a5->field_1d != 2)
    {
        uu_ls::colors::StyleManager::apply_normal::h404909a10cb94e2b(&v13, a5);
        v9 = &v13;
        v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_423c10.field_0;
        v2 = 1;
        v5 = 0;
        v3 = &v9;
        v4 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v19, &v1), &g_612788);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v13);
    }
    v0 = a2->field_ee;
    if (v0)
        ::0x51d270::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&v19, "  \t?????????+bd-cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs", 2);
    v36 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(a0, a3);
    if (!v36)
    {
        if (!(a0->field_f8 & 1))
        {
            v38 = "-cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs";
        }
        else
        {
            v39 = 0xf000 & a0->field_fc;
            switch (((unsigned int)v39 - 0x2000) * 0x80000 | (unsigned int)v39 - 0x2000 >> 13)
            {
            case 0:
                v38 = "cescapeinternal error: entered unreachable code: Should have been caught by Clap";
                break;
            case 1:
                v38 = "d-cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs";
                break;
            case 2:
                v38 = "bd-cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs";
                break;
            case 4:
                v38 = "lUse literal quoting style. Equivalent to `--quoting-style=literal`Use escape quoting style. Equivalent to `--quoting-style=escape`Use C quoting style. Equivalent to `--quoting-style=c`Replace control characters with '?' if they are not escaped.Show contro";
                break;
            default:
                v38 = "-cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs";
                break;
            }
        }
        v25 = v38;
        v26 = 1;
        *((int *)&v22) = (2 <= *((long long *)&a0->field_40) ? "...a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5d" : 1);
        v23 = -0x100 | amd64g_calculate_condition(3, 8, *((long long *)&a0->field_40), 2, amd64g_calculate_rflags_all(3, v39 & 4294967295, 0xffffe000, v40)) & 255;
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&v9, "? ,\n, ", 1, *((long long *)&a1->field_8));
        v1 = &v25;
        v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
        v3 = &v22;
        v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
        v5 = &v9;
        v6 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v13 = &g_612728.field_0;
        v14 = 3;
        v17 = 0;
        v15 = &v1;
        v16 = 3;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v19, &v13), &g_612878);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v9);
        if (a2->field_e2)
        {
            uu_ls::pad_right::h03bdecf4fae380b6(&v13, "? ,\n, ", 1, *((long long *)&a1->field_10));
            v9 = &v13;
            v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_6126d8.field_0;
            v2 = 1;
            v5 = 0;
            v3 = &v9;
            v4 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v19, &v1), &g_612890);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v13);
        }
        if (a2->field_e1)
        {
            uu_ls::pad_right::h03bdecf4fae380b6(&v13, "? ,\n, ", 1, *((long long *)&a1->field_18));
            v9 = &v13;
            v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_6126d8.field_0;
            v2 = 1;
            v5 = 0;
            v3 = &v9;
            v4 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v19, &v1), &g_6128a8);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v13);
        }
        if (a2->field_eb)
        {
            uu_ls::pad_right::h03bdecf4fae380b6(&v13, *((long long *)&a0->field_38), *((long long *)&a0->field_40), *((long long *)&a1->field_20));
            v9 = &v13;
            v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_6126d8.field_0;
            v2 = 1;
            v5 = 0;
            v3 = &v9;
            v4 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v19, &v1), &g_6128c0);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v13);
        }
        if (a2->field_e0)
        {
            uu_ls::pad_right::h03bdecf4fae380b6(&v13, "? ,\n, ", 1, *((long long *)&a1->field_10));
            v9 = &v13;
            v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_6126d8.field_0;
            v2 = 1;
            v5 = 0;
            v3 = &v9;
            v4 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v19, &v1), &g_6128d8);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v13);
        }
        v1 = 0;
        v2 = 1;
        v3 = 0;
        uu_ls::display_item_name::h2be516ffa591d327(&v28, a0, a2, 0, v48, &v1, a3, a5, ansi_width::ansi_width::h2f2b875c576f64e5(v20, v21));
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&v22, "? ,\n, ", 1, *((long long *)&a1->field_28));
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&v9, "? ,\n, ", 1, 12);
        v13 = &v22;
        v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v15 = &v9;
        v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_612758.field_0;
        v2 = 3;
        v5 = 0;
        v3 = &v13;
        v4 = 2;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v19, &v1), &g_6128f0);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v9);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v22);
        if (v0)
        {
            core::str::_$LT$impl$u20$str$GT$::trim_matches::hc93eafa728d7d508(v29, *((long long *)&v30));
            uu_ls::dired::calculate_and_update_positions::ha13b4b5d54cc4d09(a4, v21, v49);
        }
        v13 = &v28;
        v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v15 = &a2[1].padding_0[8];
        v16 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
        v1 = &g_428c70.field_0;
        v2 = 2;
        v5 = 0;
        v3 = &v13;
        v4 = 2;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v19, &v1), &g_612908);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v28);
    }
    else
    {
        v37 = (unsigned int)uucore::features::fsxattr::has_acl::h71ae0ae5f3d767a3(a0->field_8, a0->field_10);
        uucore::features::fs::display_permissions::h7f7460be11af54d3(&v28, v36, 1);
        if (*((long long *)&a0->field_40) < 2)
            v43 = 1;
        else
            v43 = "...a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5d";
        v31 = v43;
        v32 = -0x100 | 2 <= *((long long *)&a0->field_40);
        *((int *)&v25) = (!(v37 & 255 & 255) ? 1 : "+bd-cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs");
        v26 = v37 & 4294967295;
        uu_ls::display_symlink_count::h0e09a9bc6ad70230(&v9, v36->field_30);
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&v22, v10, v11, *((long long *)&a1->field_8));
        v1 = &v28;
        v2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v3 = &v31;
        v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
        v5 = &v25;
        v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
        v7 = &v22;
        v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v13 = &g_612698.field_0;
        v14 = 4;
        v17 = 0;
        v15 = &v1;
        v16 = 4;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v19, &v13), &g_6127a0);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v22);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v9);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v28);
        if (a2->field_e2)
        {
            uu_ls::display_uname::hf0da37ae6ca87e0c(&v13, v36->field_3c, a2->field_e3);
            uu_ls::pad_right::h03bdecf4fae380b6(&v9, v14, v15, *((long long *)&a1->field_10));
            v22 = &v9;
            v23 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_6126d8.field_0;
            v2 = 1;
            v5 = 0;
            v3 = &v22;
            v4 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v19, &v1), &g_6127b8);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v9);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v13);
        }
        if (a2->field_e1)
        {
            uu_ls::display_group::hd4d6945b2a81cff8(&v13, v36->field_40, a2->field_e3);
            uu_ls::pad_right::h03bdecf4fae380b6(&v9, v14, v15, *((long long *)&a1->field_18));
            v22 = &v9;
            v23 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_6126d8.field_0;
            v2 = 1;
            v5 = 0;
            v3 = &v22;
            v4 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v19, &v1), &g_6127d0);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v9);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v13);
        }
        if (a2->field_eb)
        {
            uu_ls::pad_right::h03bdecf4fae380b6(&v13, *((long long *)&a0->field_38), *((long long *)&a0->field_40), *((long long *)&a1->field_20));
            v9 = &v13;
            v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_6126d8.field_0;
            v2 = 1;
            v5 = 0;
            v3 = &v9;
            v4 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v19, &v1), &g_6127e8);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v13);
        }
        if (a2->field_e0)
        {
            uu_ls::display_uname::hf0da37ae6ca87e0c(&v13, v36->field_3c, a2->field_e3);
            uu_ls::pad_right::h03bdecf4fae380b6(&v9, v14, v15, *((long long *)&a1->field_10));
            v22 = &v9;
            v23 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_6126d8.field_0;
            v2 = 1;
            v5 = 0;
            v3 = &v22;
            v4 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v19, &v1), &g_612800);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v9);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v13);
        }
        uu_ls::display_len_or_rdev::habe6b45626a6ff16(&v13, v36, a2->field_d0, a2->field_f1);
        if (v16 == 0x8000000000000000)
        {
            v24 = v15;
            *((int128_t *)&v22) = *((int128_t *)&v13);
            uu_ls::pad_left::h1d7ef6cb0cce13f7(&v9, v23, v15, *((long long *)&a1->field_28));
            v28 = &v9;
            v29 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_6126d8.field_0;
            v2 = 1;
            v5 = 0;
            v3 = &v28;
            v4 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v19, &v1), &g_612818);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v9);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v22);
        }
        else
        {
            v33 = v15;
            *((int128_t *)&v31) = *((int128_t *)&v13);
            v27 = *((long long *)&v18);
            *((int128_t *)&v25) = *((int128_t *)&v16);
            v50 = *((long long *)&a1->field_28);
            v52 = a1->field_38;
            v53 = v52 + 2;
            if (!((char)amd64g_calculate_condition(3, 4, v52, 2, v44)))
                v53 = -1;
            v54 = v50 - v53;
            if (v53 > v50)
                v54 = 0;
            uu_ls::pad_left::h1d7ef6cb0cce13f7(&v28, v32, v33, ::0x519cb0::core::cmp::max_by::h7ee1a79e2ed707c0(a1->field_30, v54));
            uu_ls::pad_left::h1d7ef6cb0cce13f7(&v22, v26, v27, v52);
            v9 = &v28;
            v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v11 = &v22;
            v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_6126e8.field_0;
            v2 = 2;
            v5 = 0;
            v3 = &v9;
            v4 = 2;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v19, &v1), &g_612830);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v22);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v28);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v25);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v31);
        }
        uu_ls::display_date::h5db6390c2e0df8d3(&v13, v36, a2);
        v9 = &v13;
        v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_612708.field_0;
        v2 = 2;
        v5 = 0;
        v3 = &v9;
        v4 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v19, &v1), &g_612848);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v13);
        v1 = 0;
        v2 = 1;
        v3 = 0;
        v55 = &v22;
        uu_ls::display_item_name::h2be516ffa591d327(&v22, a0, a2, 0, v56, &v1, a3, a5, ansi_width::ansi_width::h2f2b875c576f64e5(v20, v21));
        if (!(char)v35)
        {
LABEL_52b35b:
        }
        else
        {
            *((int *)&v1) = 0;
            if (!(!(core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h032fb0d9cebdd48e(v23, v24, ::0x51c230::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(39, &v1), v57) & 255 & 255 & 255)))
                goto LABEL_52b35b;
            v13 = &v22;
            v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_6126d8.field_0;
            v2 = 1;
            v5 = 0;
            v3 = &v13;
            v4 = 1;
            v55 = &v34;
            ::0x51ccf0::core::option::Option$LT$T$GT$::map_or_else::h7fca96e7ce97ddb7();
        }
        v11 = v55->field_10;
        *((int128_t *)&v9) = *((int128_t *)&v55->field_0);
        if (v0)
        {
            v58 = a4[2];
            uu_ls::dired::update_positions::h1dc8b030d29268c5(a4, (!v58 ? 0 : *((long long *)(v58 * 16 + a4[1] - 8)) + 1) + v21, v11 + (!v58 ? 0 : *((long long *)(v58 * 16 + a4[1] - 8)) + 1) + v21);
        }
        v13 = &v9;
        v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v15 = &a2[1].padding_0[8];
        v16 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
        v1 = &g_428c70.field_0;
        v2 = 2;
        v5 = 0;
        v3 = &v13;
        v4 = 2;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v19, &v1), &g_612860);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v9);
    }
    v13 = &v19;
    v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v1 = &g_423c10.field_0;
    v2 = 1;
    v5 = 0;
    v3 = &v13;
    v4 = 1;
    v60 = std::io::Write::write_fmt::h51abc44b465d2e67(a3, &v1);
    if (!v60)
    {
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v19);
        return 0;
    }
    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v19);
    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v60);
}
