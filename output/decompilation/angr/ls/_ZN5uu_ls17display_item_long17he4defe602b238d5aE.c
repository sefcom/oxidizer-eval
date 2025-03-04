long long uu_ls::display_item_long::he4defe602b238d5a(struct_4 *a0, struct_3 *a1, struct_0 *a2, unsigned long long a3, unsigned long long a4[3], struct_2 *a5)
{
    char v0;  // [sp-0x179]
    struct_1 *v1;  // [sp-0x178]
    struct_1 *v2;  // [sp-0x178]
    unsigned long long v3;  // [sp-0x170]
    struct struct_1 **v4;  // [sp-0x168], Other Possible Types: void*, struct_1 *
    unsigned long long v5;  // [sp-0x160]
    struct_1 *v6;  // [sp-0x158], Other Possible Types: void*
    unsigned long long v7;  // [sp-0x150]
    struct_1 *v8;  // [sp-0x148]
    unsigned long long v9;  // [sp-0x140]
    struct_1 *v10;  // [sp-0x138]
    struct_1 *v11;  // [sp-0x138]
    unsigned long v12;  // [sp-0x130], Other Possible Types: unsigned long long
    struct_1 *v13;  // [sp-0x128], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v14;  // [sp-0x120]
    struct_1 *v15;  // [sp-0x118]
    unsigned long long v16;  // [sp-0x110]
    struct_1 *v17;  // [sp-0x108], Other Possible Types: struct struct_1 **, unsigned long long
    unsigned long long v18;  // [sp-0x100]
    void* v19;  // [sp-0xf8]
    char v20;  // [bp-0xf0]
    void* v21;  // [sp-0xe0]
    unsigned long long v22;  // [sp-0xd8]
    void* v23;  // [sp-0xd0]
    struct_1 *v24;  // [sp-0xc8]
    struct_1 *v25;  // [sp-0xc8]
    unsigned long v26;  // [sp-0xc0], Other Possible Types: unsigned long long
    struct struct_1 **v27;  // [sp-0xb8]
    struct_1 *v28;  // [sp-0xa8]
    unsigned long long v29;  // [sp-0xa0]
    unsigned long long v30;  // [sp-0x98]
    struct_1 *v31;  // [bp-0x88]
    unsigned long long v32;  // [sp-0x80]
    char v33;  // [bp-0x78]
    struct_1 *v34;  // [sp-0x68]
    unsigned long v35;  // [sp-0x60]
    struct struct_1 **v36;  // [sp-0x58]
    struct_2 *v37;  // [sp-0x50]
    char v38;  // [bp-0x48]
    unsigned long v39;  // [bp+0x8]
    struct_2 *v40;  // r13
    struct_5 *v41;  // r15
    unsigned long long v42;  // r12
    struct_1 *v43;  // rax
    unsigned long v44;  // rax
    unsigned long v45;  // cc_ndep
    struct_1 *v48;  // rcx
    unsigned long long v49;  // cc_ndep
    unsigned long long v53;  // rax
    unsigned long v55;  // rcx
    unsigned long long v56;  // rdx
    unsigned long long v57;  // rsi
    struct_1 *v58;  // r15
    unsigned long long v59;  // rdx
    unsigned long long v60;  // rcx
    unsigned long long v62;  // rax

    v40 = a5;
    v21 = 0;
    v22 = 1;
    v23 = 0;
    if (a5->field_1d != 2)
    {
        uu_ls::colors::StyleManager::apply_normal::h404909a10cb94e2b(&v15, a5);
        v10 = &v15;
        v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_423c10.field_0;
        v3 = 1;
        v6 = 0;
        v4 = &v10;
        v5 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v21, &v1), &g_612788);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v15);
    }
    v0 = a2->field_ee;
    if (v0)
        ::0x51d270::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&v21, "  \t?????????+bd-cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs", 2);
    v41 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(a0, a3);
    if (!v41)
    {
        if (!(a0->field_f8 & 1))
        {
            v43 = "-cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs";
        }
        else
        {
            v44 = 0xf000 & a0->field_fc;
            switch (((unsigned int)v44 - 0x2000) * 0x80000 | (unsigned int)v44 - 0x2000 >> 13)
            {
            case 0:
                v43 = "cescapeinternal error: entered unreachable code: Should have been caught by Clap";
                break;
            case 1:
                v43 = "d-cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs";
                break;
            case 2:
                v43 = "bd-cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs";
                break;
            case 4:
                v43 = "lUse literal quoting style. Equivalent to `--quoting-style=literal`Use escape quoting style. Equivalent to `--quoting-style=escape`Use C quoting style. Equivalent to `--quoting-style=c`Replace control characters with '?' if they are not escaped.Show contro";
                break;
            default:
                v43 = "-cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs";
                break;
            }
        }
        v28 = v43;
        v29 = 1;
        *((int *)&v25) = (2 <= *((long long *)&a0->field_40) ? "...a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5d" : 1);
        v26 = amd64g_calculate_condition(3, 8, *((long long *)&a0->field_40), 2, amd64g_calculate_rflags_all(3, v44 & 4294967295, 0xffffe000, v45)) & 255;
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&v10, "? ,\n, ", 1, *((long long *)&a1->field_8));
        v1 = &v28;
        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
        v4 = &v25;
        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
        v6 = &v10;
        v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v15 = &g_612728.field_0;
        v16 = 3;
        v19 = 0;
        v17 = &v1;
        v18 = 3;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v21, &v15), &g_612878);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v10);
        if (a2->field_e2)
        {
            uu_ls::pad_right::h03bdecf4fae380b6(&v15, "? ,\n, ", 1, *((long long *)&a1->field_10));
            v10 = &v15;
            v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_6126d8.field_0;
            v3 = 1;
            v6 = 0;
            v4 = &v10;
            v5 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v21, &v1), &g_612890);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v15);
        }
        if (a2->field_e1)
        {
            uu_ls::pad_right::h03bdecf4fae380b6(&v15, "? ,\n, ", 1, *((long long *)&a1->field_18));
            v10 = &v15;
            v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_6126d8.field_0;
            v3 = 1;
            v6 = 0;
            v4 = &v10;
            v5 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v21, &v1), &g_6128a8);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v15);
        }
        if (a2->field_eb)
        {
            uu_ls::pad_right::h03bdecf4fae380b6(&v15, *((long long *)&a0->field_38), *((long long *)&a0->field_40), *((long long *)&a1->field_20));
            v10 = &v15;
            v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_6126d8.field_0;
            v3 = 1;
            v6 = 0;
            v4 = &v10;
            v5 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v21, &v1), &g_6128c0);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v15);
        }
        if (a2->field_e0)
        {
            uu_ls::pad_right::h03bdecf4fae380b6(&v15, "? ,\n, ", 1, *((long long *)&a1->field_10));
            v10 = &v15;
            v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_6126d8.field_0;
            v3 = 1;
            v6 = 0;
            v4 = &v10;
            v5 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v21, &v1), &g_6128d8);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v15);
        }
        v1 = 0;
        v3 = 1;
        v4 = 0;
        uu_ls::display_item_name::h2be516ffa591d327(&v31, a0, a2, 0, a4, &v1, a3, a5, ansi_width::ansi_width::h2f2b875c576f64e5(v22, v23));
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&v25, "? ,\n, ", 1, *((long long *)&a1->field_28));
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&v10, "? ,\n, ", 1, 12);
        v15 = &v25;
        v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v17 = &v10;
        v18 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_612758.field_0;
        v3 = 3;
        v6 = 0;
        v4 = &v15;
        v5 = 2;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v21, &v1), &g_6128f0);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v10);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v25);
        if (v0)
        {
            core::str::_$LT$impl$u20$str$GT$::trim_matches::hc93eafa728d7d508(v32, *((long long *)&v33));
            uu_ls::dired::calculate_and_update_positions::ha13b4b5d54cc4d09(a4, v23, a2);
        }
        v15 = &v31;
        v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v17 = &a2[1].padding_0[8];
        v18 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
        v1 = &g_428c70.field_0;
        v3 = 2;
        v6 = 0;
        v4 = &v15;
        v5 = 2;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v21, &v1), &g_612908);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v31);
    }
    else
    {
        v42 = (unsigned int)uucore::features::fsxattr::has_acl::h71ae0ae5f3d767a3(a0->field_8, a0->field_10);
        uucore::features::fs::display_permissions::h7f7460be11af54d3(&v31, v41, 1);
        if (*((long long *)&a0->field_40) < 2)
            v48 = 1;
        else
            v48 = "...a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5d";
        v34 = v48;
        v35 = 2 <= *((long long *)&a0->field_40);
        *((int *)&v28) = (!(v42 & 255 & 255) ? 1 : "+bd-cannot access a Thread Local Storage value during or after destruction/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/thread/local.rs");
        v29 = v42 & 4294967295;
        uu_ls::display_symlink_count::h0e09a9bc6ad70230(&v10, v41->field_30);
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&v25, v12, v13, *((long long *)&a1->field_8));
        v2 = &v31;
        v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v4 = &v34;
        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
        v6 = &v28;
        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
        v8 = &v25;
        v9 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v15 = &g_612698.field_0;
        v16 = 4;
        v19 = 0;
        v17 = &v1;
        v18 = 4;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v21, &v15), &g_6127a0);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v25);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v10);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v31);
        if (a2->field_e2)
        {
            uu_ls::display_uname::hf0da37ae6ca87e0c(&v15, v41->field_3c, a2->field_e3);
            uu_ls::pad_right::h03bdecf4fae380b6(&v10, v16, v17, *((long long *)&a1->field_10));
            v24 = &v10;
            v26 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v2 = &g_6126d8.field_0;
            v3 = 1;
            v6 = 0;
            v4 = &v25;
            v5 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v21, &v1), &g_6127b8);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v10);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v15);
        }
        if (a2->field_e1)
        {
            uu_ls::display_group::hd4d6945b2a81cff8(&v15, v41->field_40, a2->field_e3);
            uu_ls::pad_right::h03bdecf4fae380b6(&v10, v16, v17, *((long long *)&a1->field_18));
            v24 = &v10;
            v26 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v2 = &g_6126d8.field_0;
            v3 = 1;
            v6 = 0;
            v4 = &v25;
            v5 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v21, &v1), &g_6127d0);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v10);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v15);
        }
        if (a2->field_eb)
        {
            uu_ls::pad_right::h03bdecf4fae380b6(&v15, *((long long *)&a0->field_38), *((long long *)&a0->field_40), *((long long *)&a1->field_20));
            v10 = &v15;
            v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v2 = &g_6126d8.field_0;
            v3 = 1;
            v6 = 0;
            v4 = &v10;
            v5 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v21, &v1), &g_6127e8);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v15);
        }
        if (a2->field_e0)
        {
            uu_ls::display_uname::hf0da37ae6ca87e0c(&v15, v41->field_3c, a2->field_e3);
            uu_ls::pad_right::h03bdecf4fae380b6(&v10, v16, v17, *((long long *)&a1->field_10));
            v24 = &v10;
            v26 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v2 = &g_6126d8.field_0;
            v3 = 1;
            v6 = 0;
            v4 = &v25;
            v5 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v21, &v1), &g_612800);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v10);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v15);
        }
        uu_ls::display_len_or_rdev::habe6b45626a6ff16(&v15, v41, a2->field_d0, a2->field_f1);
        if (v18 == 0x8000000000000000)
        {
            v27 = v17;
            *((int128_t *)&v24) = *((int128_t *)&v15);
            uu_ls::pad_left::h1d7ef6cb0cce13f7(&v10, v26, v17, *((long long *)&a1->field_28));
            v31 = &v10;
            v32 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_6126d8.field_0;
            v3 = 1;
            v6 = 0;
            v4 = &v31;
            v5 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v21, &v1), &g_612818);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v10);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v25);
        }
        else
        {
            v37 = a5;
            v36 = v17;
            *((int128_t *)&v34) = *((int128_t *)&v15);
            v30 = *((long long *)&v20);
            *((int128_t *)&v28) = *((int128_t *)&v18);
            v53 = *((long long *)&a1->field_28);
            v55 = a1->field_38;
            if (!((char)amd64g_calculate_condition(3, 4, v55, 2, v49)))
                v56 = 18446744073709551615;
            else
                v56 = v55 + 2;
            v57 = (v56 <= v53 ? v53 - v56 : 0);
            uu_ls::pad_left::h1d7ef6cb0cce13f7(&v31, v35, v36, ::0x519cb0::core::cmp::max_by::h7ee1a79e2ed707c0(a1->field_30, v57));
            uu_ls::pad_left::h1d7ef6cb0cce13f7(&v25, v29, v30, v55);
            v11 = &v31;
            v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v13 = &v25;
            v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_6126e8.field_0;
            v3 = 2;
            v6 = 0;
            v4 = &v10;
            v5 = 2;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v21, &v1), &g_612830);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v25);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v31);
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v28);
            v40 = v37;
            ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v34);
        }
        uu_ls::display_date::h5db6390c2e0df8d3(&v15, v41, a2);
        v11 = &v15;
        v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_612708.field_0;
        v3 = 2;
        v6 = 0;
        v4 = &v10;
        v5 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v21, &v1), &g_612848);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v15);
        v1 = 0;
        v3 = 1;
        v4 = 0;
        v58 = &v25;
        uu_ls::display_item_name::h2be516ffa591d327(&v25, a0, a2, 0, a4, &v1, a3, v40, ansi_width::ansi_width::h2f2b875c576f64e5(v22, v23));
        if (!(char)v39)
        {
LABEL_52b35b:
        }
        else
        {
            *((unsigned int *)&v1) = 0;
            if (!(!(core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h032fb0d9cebdd48e(v26, v27, ::0x51c230::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(39, &v1), v59) & 255 & 255 & 255)))
                goto LABEL_52b35b;
            v15 = &v25;
            v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v1 = &g_6126d8.field_0;
            v3 = 1;
            v6 = 0;
            v4 = &v15;
            v5 = 1;
            v58 = &v38;
            ::0x51ccf0::core::option::Option$LT$T$GT$::map_or_else::h7fca96e7ce97ddb7(&v38, &v1);
        }
        v13 = v58->field_10;
        *((int128_t *)&v11) = *((int128_t *)&v58->field_0);
        if (v0)
        {
            v60 = a4[2];
            uu_ls::dired::update_positions::h1dc8b030d29268c5(a4, (!v60 ? 0 : *((long long *)(v60 * 16 + a4[1] - 8)) + 1) + v23, v13 + (!v60 ? 0 : *((long long *)(v60 * 16 + a4[1] - 8)) + 1) + v23);
        }
        v15 = &v10;
        v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v17 = &a2[1].padding_0[8];
        v18 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
        v1 = &g_428c70.field_0;
        v3 = 2;
        v6 = 0;
        v4 = &v15;
        v5 = 2;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v21, &v1), &g_612860);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v10);
    }
    v15 = &v21;
    v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v1 = &g_423c10.field_0;
    v3 = 1;
    v6 = 0;
    v4 = &v15;
    v5 = 1;
    v62 = std::io::Write::write_fmt::h51abc44b465d2e67(a3, &v1);
    if (!v62)
    {
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v21);
        return 0;
    }
    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v21);
    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v62);
}
