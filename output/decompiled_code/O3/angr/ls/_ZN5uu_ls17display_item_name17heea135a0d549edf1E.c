long long uu_ls::display_item_name::heea135a0d549edf1(struct_0 *a0, struct_1 *a1, char a2[249], unsigned long a3, unsigned int a4, struct_0 *a5)
{
    char v0;  // [bp-0x310]
    unsigned int v1;  // [sp-0x2fc]
    int v2;  // [bp-0x2f8], Other Possible Types: char
    char v3;  // [bp-0x2f0]
    unsigned long long v4;  // [sp-0x2e8]
    unsigned long v5;  // [sp-0x2e0], Other Possible Types: unsigned long long
    unsigned long v6;  // [sp-0x2d8], Other Possible Types: unsigned long long
    unsigned long v7;  // [sp-0x2d0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x2c8]
    int v9;  // [sp-0x2b8]
    unsigned long long v10;  // [sp-0x2a8]
    int v11;  // [sp-0x298]
    unsigned long long v12;  // [sp-0x288]
    unsigned long long v13[3];  // [sp-0x278], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v14;  // [sp-0x270]
    unsigned long long v15;  // [sp-0x268]
    void* v16;  // [bp-0x248], Other Possible Types: char, unsigned long long
    unsigned long v17;  // [sp-0x240], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x238], Other Possible Types: unsigned long
    unsigned long long v19;  // [sp-0x230]
    void* v20;  // [sp-0x228]
    char v21;  // [bp-0x198]
    char v22;  // [bp-0x188]
    char v23;  // [bp-0x180]
    char v24;  // [bp-0x170]
    int v25;  // [bp-0x168], Other Possible Types: char, unsigned long, unsigned short
    unsigned long long v26;  // [sp-0x160]
    int v27;  // [sp-0x158], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v28;  // [sp-0x150]
    void* v29;  // [sp-0x148], Other Possible Types: unsigned long long
    char v30;  // [bp-0x140]
    char v31;  // [bp-0x40]
    unsigned long v32;  // [bp+0x8]
    char v33;  // [bp+0x10]
    unsigned long long v34;  // r12
    unsigned long long v36;  // rcx
    char v37;  // r15b
    struct_0 *v38;  // rcx
    unsigned int v39;  // ecx
    char v40;  // bl
    struct_0 *v41;  // rcx
    unsigned int v42;  // r14d
    unsigned int v43;  // eax
    unsigned long long v44;  // rdx
    unsigned int *v45;  // rax
    unsigned long long v46;  // rsi
    unsigned long long v47;  // rcx
    unsigned long long v48;  // rax
    unsigned long long v49;  // rax

    v34 = &a2[245];
    if (a2[239])
    {
        v1 = uucore::features::quoting_style::escape_name::h060bd1f56d9653f3(&v2, a1->field_8, a1->field_10, v34) | -0x100 | 1;
        uu_ls::create_hyperlink::hf30c045666fb4898(&v25, *((long long *)&v3), v4, a1);
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v2);
        v4 = v27;
        *((int128_t *)&v2) = *((int128_t *)&v25);
    }
    if (*((char *)(*((long long *)&v33) + 29)) != 2)
    {
        v1 = v36 | -0x100 | 1;
        uu_ls::colors::color_name::h5d15f5b85d1bed24(&v25, (long long)(&v2)[8], v4, a1, *((long long *)&v33), v32, 0, v0);
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v2);
        v4 = v27;
        *((int128_t *)&v2) = *((int128_t *)&v25);
    }
    v37 = a2[248];
    v38 = a5;
    v39 = v38 | -0x100 | 1;
    v40 = v38->field_10 & v37 != 1;
    if ((v38->field_10 & v37 != 1))
    {
        v41 = a5;
        v27 = v41->field_10;
        *((uint128_t *)&v25) = v41->field_0;
        v1 = 0;
        _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h177306e76d9aa6a7(&v16, &v25, (long long)(&v2)[8], v4);
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v2);
        v4 = v18;
        *((int128_t *)&v2) = *((int128_t *)&v16);
        v39 = 0;
    }
    v1 = v39;
    v42 = a2[244];
    if (v42)
    {
        v43 = uu_ls::classify_file::h9b12b3ace49cae86(a1, v32);
        if (v42 == 3)
        {
LABEL_52c287:
            if (!(v43 == 0x110000))
                goto LABEL_52c295;
        }
        else if (v42 == 2)
        {
            if (v43 == 42)
                goto LABEL_52c2a1;
            goto LABEL_52c287;
        }
        else if (v43 == 47)
        {
LABEL_52c295:
            ::0x51d680::alloc::string::String::push::h859ae11851fd8b8e(&v2, v43, v44);
        }
    }
LABEL_52c2a1:
    if (v37 == 1 && uu_ls::PathData::file_type::hb547643d6142fc80(a1, v32))
    {
        v45 = uu_ls::PathData::file_type::hb547643d6142fc80(a1, v32);
        if (!v45)
        {
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        }
        else if ((0xf000 & *(v45)) == 0xa000 && !a1->field_128)
        {
            std::fs::read_link::hc292205422742f0d(&v21, a1->field_20, a1->field_28);
            if (*((long long *)&v21) == 0x8000000000000000)
            {
                v5 = v26;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hb44f624c3be0f6cf(&v16, &a1->padding_18);
                v29 = v18;
                *((int128_t *)&v27) = *((int128_t *)&v16);
                v26 = v5;
                v25 = 2;
                uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                v13 = uucore::util_name::h412db5e565a079f3();
                v14 = v44;
                v5 = &v13;
                v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9e0c9cf7625be423;
                v7 = &v25;
                v8 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h00273f496a2f8f40;
                v16 = &g_612798;
                v17 = 3;
                v20 = 0;
                v18 = &v5;
                v19 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v16, v46, v44);
                ::0x51a490::core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::h70d82c0d2efe4f8e(&v25);
            }
            else
            {
                v10 = *((long long *)&v22);
                *((int128_t *)&v9) = *((int128_t *)&v21);
                ::0x51d250::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h2baecbd2ddd181b5(&v2, " -> ", 4);
                if (*((char *)(*((long long *)&v33) + 29)) == 2)
                {
                    uucore::features::quoting_style::escape_name::h060bd1f56d9653f3(&v25, (long long)(&v9)[8], v10, v34);
                    ::0x51d250::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h2baecbd2ddd181b5(&v2, ::0x51cc70::core::slice::iter::Iter$LT$T$GT$::make_slice::h22edc543dc0ffceb(v26, v27 + v26), v44);
                    ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v25);
                }
                else
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hb44f624c3be0f6cf(&v25, &v9);
                    v12 = v27;
                    *((int128_t *)&v11) = (int128_t)v25;
                    if (!(char)std::path::Path::is_absolute::h3431a23d91045560((long long)(&v9)[8], v10))
                    {
                        v48 = std::path::Path::parent::h65c9a340a6266f2d(a1->field_20, a1->field_28, v44, v47);
                        if (v48)
                        {
                            v27 = v12;
                            v25 = v11;
                            std::path::Path::join::hcfa62bcda38d33e5(&v16, v48, v44, &v25);
                            *((int128_t *)&v11) = *((int128_t *)&v16);
                            v12 = v18;
                        }
                    }
                    v15 = v12;
                    *((void*)v13) = v11;
                    v16 = 0;
                    v5 = 0x8000000000000000;
                    uu_ls::PathData::new::hb117b29d3c1599fc(&v25, &v13, &v16, &v5, a2[235], a2[242]);
                    if (uu_ls::PathData::get_metadata::h8d9c1f19e7e4c4d2(a1, v32))
                    {
LABEL_52c6b9:
                        uucore::features::quoting_style::escape_name::h060bd1f56d9653f3(&v16, (long long)(&v9)[8], v10, v34);
                        uu_ls::colors::color_name::h5d15f5b85d1bed24(&v5, v17, v18, a1, *((long long *)&v33), v32, &v25, v0);
                        ::0x51d250::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h2baecbd2ddd181b5(&v2, ::0x51cc70::core::slice::iter::Iter$LT$T$GT$::make_slice::h22edc543dc0ffceb(v6, v7 + v6), v44);
                        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v5);
                        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v16);
                    }
                    else
                    {
                        uu_ls::get_metadata_with_deref_opt::h0f2d8ddad62dff8c(&v16, v29, *((long long *)&v30), v31);
                        if ((int)v16 == 2)
                        {
                            ::0x51b5a0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h58f02cc439e5852f(&v16);
                            std::fs::read_link::hc292205422742f0d(&v16, a1->field_20, a1->field_28);
                            core::result::Result$LT$T$C$E$GT$::unwrap::he24157973a8c2acf(&v5, &v16);
                            std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v16, v6, v7);
                            ::0x51d250::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h2baecbd2ddd181b5(&v2, ::0x51cc70::core::slice::iter::Iter$LT$T$GT$::make_slice::h22edc543dc0ffceb(v17, v18 + v17), v44);
                            ::0x51a870::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h631d03c135faa1e8(&v16);
                            ::0x51a670::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h59266c5fcebcf02f(&v5);
                        }
                        else
                        {
                            ::0x51b5a0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h58f02cc439e5852f(&v16);
                            goto LABEL_52c6b9;
                        }
                    }
                    ::0x51a550::core::ptr::drop_in_place$LT$uu_ls..PathData$GT$::h7962cab90a6bc8a4(&v25);
                }
                ::0x51a670::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h59266c5fcebcf02f(&v9);
            }
        }
    }
    if (a3 == 1 && a2[235])
    {
        if (v37 != 4)
            uu_ls::pad_left::hd5432ad299f24fa7(&v5, *((long long *)&a1->field_38), *((long long *)&a1->field_40), a4);
        else
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v5, &a1->padding_30);
        v16 = &v5;
        v17 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v18 = &v2;
        v19 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v25 = &g_6127e8;
        v26 = 2;
        v29 = 0;
        v27 = &v16;
        v28 = 2;
        ::0x51ccd0::core::option::Option$LT$T$GT$::map_or_else::h4ac335b83d8d44c4(&v23, &v25);
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v2);
        v4 = *((long long *)&v24);
        *((int128_t *)&v2) = *((int128_t *)&v23);
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v5);
    }
    a0->field_10 = v4;
    *((void*)&a0->field_0) = v2;
    if (!v40)
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(a5);
    return v49;
}
