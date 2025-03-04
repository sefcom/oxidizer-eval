long long uu_ls::display_item_name::h2be516ffa591d327(struct_0 *a0, struct_1 *a1, char a2[249], unsigned long a3, unsigned int a4, struct_0 *a5, unsigned long long a6, struct_4 *a7, unsigned long a8)
{
    char v0;  // [bp-0x318]
    char v1;  // [bp-0x310]
    unsigned int v2;  // [sp-0x2fc]
    char v3;  // [bp-0x2f8]
    int v4;  // [sp-0x2f8]
    char v5;  // [bp-0x2f0]
    unsigned long long v6;  // [sp-0x2e8]
    unsigned long long v7;  // [sp-0x2e8]
    unsigned long long v8;  // [sp-0x2e0]
    char *v9;  // [sp-0x2e0]
    unsigned long v10;  // [sp-0x2d8], Other Possible Types: unsigned long long
    char *v11;  // [sp-0x2d0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v12;  // [sp-0x2c8]
    int v13;  // [sp-0x2b8]
    unsigned long long v14;  // [sp-0x2a8]
    int v15;  // [sp-0x298]
    unsigned long long v16;  // [sp-0x288]
    unsigned long long v17[3];  // [sp-0x278]
    unsigned long long v18;  // [sp-0x270]
    unsigned long long v19;  // [sp-0x268]
    struct struct_2 **v20;  // [bp-0x248]
    unsigned long v21;  // [sp-0x240], Other Possible Types: unsigned long long
    char *v22;  // [sp-0x238], Other Possible Types: struct struct_2 **, unsigned long long, unsigned long
    unsigned long long v23;  // [sp-0x230]
    void* v24;  // [sp-0x228]
    char v25;  // [bp-0x198]
    char v26;  // [bp-0x188]
    char v27;  // [bp-0x180]
    char v28;  // [bp-0x170]
    int v29;  // [bp-0x168], Other Possible Types: char
    unsigned long v30;  // [bp-0x168], Other Possible Types: unsigned short
    unsigned long long v31;  // [sp-0x160]
    int v32;  // [sp-0x158], Other Possible Types: struct struct_3 **, unsigned long long, unsigned long
    unsigned long long v33;  // [sp-0x150]
    void* v34;  // [sp-0x148], Other Possible Types: unsigned long long
    char v35;  // [bp-0x140]
    char v36;  // [bp-0x40]
    unsigned long long v37;  // r12
    unsigned long long v39;  // rcx
    char v40;  // r15b
    struct_0 *v41;  // rcx
    unsigned int v42;  // ecx
    char v43;  // bl
    struct_0 *v44;  // rcx
    unsigned int v45;  // r14d
    unsigned int v46;  // eax
    unsigned int *v47;  // rax
    unsigned long v48;  // rdx
    unsigned long long v49;  // rax
    unsigned long long v50;  // rax

    v37 = &a2[245];
    if (a2[239])
    {
        v2 = uucore::features::quoting_style::escape_name::ha9b5831150e16363(&v3, a1->field_8, a1->field_10, v37) & 0xffffffffffffff00 | 1;
        uu_ls::create_hyperlink::h72b30fed8b305b42(&v29, *((long long *)&v5), v6, a1);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v3);
        v7 = v32;
        *((int128_t *)&v4) = *((int128_t *)&v29);
    }
    if (a7->field_1d != 2)
    {
        v2 = v39 & 0xffffffffffffff00 | 1;
        uu_ls::colors::color_name::hd87a58ac50dac0ef(&v29, (long long)(&v4)[8], v7, a1, a7, a6, 0, v1);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v3);
        v7 = v32;
        *((int128_t *)&v4) = *((int128_t *)&v29);
    }
    v40 = a2[248];
    v41 = a5;
    v42 = v41 & 0xffffffffffffff00 | 1;
    v43 = v41->field_10 & v40 != 1;
    if ((v41->field_10 & v40 != 1))
    {
        v44 = a5;
        v32 = v44->field_10;
        *((uint128_t *)&v29) = v44->field_0;
        v2 = 0;
        _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h177306e76d9aa6a7(&v20, &v29, (long long)(&v4)[8], v7);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v3);
        v7 = v22;
        *((int128_t *)&v4) = *((int128_t *)&v20);
        v42 = 0;
    }
    v2 = v42;
    v45 = a2[244];
    if (v45)
    {
        v46 = uu_ls::classify_file::h531def787e741feb(a1, a6);
        if (v45 == 3)
        {
LABEL_52c2e7:
            if (!(v46 == 0x110000))
                goto LABEL_52c2f5;
        }
        else if (v45 == 2)
        {
            if (v46 == 42)
                goto LABEL_52c301;
            goto LABEL_52c2e7;
        }
        else if (v46 == 47)
        {
LABEL_52c2f5:
            ::0x51d6a0::alloc::string::String::push::h859ae11851fd8b8e(&v3, v46);
        }
    }
LABEL_52c301:
    if (v40 == 1 && uu_ls::PathData::file_type::h128ed7d98b354477(a1, a6))
    {
        v47 = uu_ls::PathData::file_type::h128ed7d98b354477(a1, a6);
        if (!v47)
        {
            core::option::unwrap_failed::h0e11329e76906eaa(&g_6129b8); /* do not return */
        }
        else if ((0xf000 & *(v47)) == 0xa000 && !a1->field_128)
        {
            std::fs::read_link::hbe5657d82156963a(&v25, a1->field_20, a1->field_28);
            if (*((long long *)&v25) == 0x8000000000000000)
            {
                v8 = v31;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&v20, &a1->padding_18);
                v34 = v22;
                *((int128_t *)&v32) = *((int128_t *)&v20);
                v31 = v8;
                v30 = 2;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                *((long long *)v17) = uucore::util_name::h60d842bf27b05e82();
                v18 = v48;
                *((unsigned long long [3])&v9) = v17;
                v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
                v11 = &v29;
                v12 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
                v20 = &g_612588;
                v21 = 3;
                v24 = 0;
                v22 = &v9;
                v23 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v20);
                ::0x51a4b0::core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(&v29);
            }
            else
            {
                v14 = *((long long *)&v26);
                *((int128_t *)&v13) = *((int128_t *)&v25);
                ::0x51d270::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&v3, " -> ", 4);
                if (a7->field_1d == 2)
                {
                    uucore::features::quoting_style::escape_name::ha9b5831150e16363(&v29, (long long)(&v13)[8], v14, v37);
                    ::0x51d270::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&v3, ::0x51cc90::core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(v31, v32 + v31), a2);
                    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v29);
                }
                else
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&v29, &v13);
                    v16 = v32;
                    *((int128_t *)&v15) = (int128_t)v29;
                    if (!(char)std::path::Path::is_absolute::h3431a23d91045560((long long)(&v13)[8], v14))
                    {
                        v49 = std::path::Path::parent::h65c9a340a6266f2d(a1->field_20, a1->field_28);
                        if (v49)
                        {
                            v32 = v16;
                            v29 = v15;
                            std::path::Path::join::hd038e45245e60e36(&v20, v49, a2, &v29);
                            *((int128_t *)&v15) = *((int128_t *)&v20);
                            v16 = v22;
                        }
                    }
                    v19 = v16;
                    *((void*)v17) = v15;
                    v20 = 0;
                    v9 = 0x8000000000000000;
                    uu_ls::PathData::new::ha3e1f49dfc1f89b1(&v29, v17, &v20, &v9, a2[235], a2[242], v0);
                    if (uu_ls::PathData::get_metadata::hc7a96a0547653f90(a1, a6))
                    {
LABEL_52c719:
                        uucore::features::quoting_style::escape_name::ha9b5831150e16363(&v20, (long long)(&v13)[8], v14, v37);
                        uu_ls::colors::color_name::hd87a58ac50dac0ef(&v9, v21, v22, a1, a7, a6, &v29, v1);
                        ::0x51d270::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&v3, ::0x51cc90::core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(v10, v11 + v10), a2);
                        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v9);
                        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v20);
                    }
                    else
                    {
                        uu_ls::get_metadata_with_deref_opt::h471baa3ff4b7ae17(&v20, v34, *((long long *)&v35), v36);
                        if ((int)v20 == 2)
                        {
                            ::0x51b5c0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(&v20);
                            std::fs::read_link::hbe5657d82156963a(&v20, a1->field_20, a1->field_28);
                            core::result::Result$LT$T$C$E$GT$::unwrap::h25f855f03e13c7a6(&v9, &v20);
                            std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v20, v10, v11);
                            ::0x51d270::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&v3, ::0x51cc90::core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(v21, v22 + v21), a2);
                            ::0x51a890::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h950c753f5d689b41(&v20);
                            ::0x51a690::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h585d8b757a674aea(&v9);
                        }
                        else
                        {
                            ::0x51b5c0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(&v20);
                            goto LABEL_52c719;
                        }
                    }
                    ::0x51a570::core::ptr::drop_in_place$LT$uu_ls..PathData$GT$::h882b87545de6c6bd(&v29);
                }
                ::0x51a690::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h585d8b757a674aea(&v13);
            }
        }
    }
    if (a3 == 1 && a2[235])
    {
        if (v40 != 4)
            uu_ls::pad_left::h1d7ef6cb0cce13f7(&v9, *((long long *)&a1->field_38), *((long long *)&a1->field_40), a4);
        else
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v9, &a1->padding_30);
        v20 = &v9;
        v21 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v22 = &v3;
        v23 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v30 = &g_6125e8;
        v31 = 2;
        v34 = 0;
        v32 = &v20;
        v33 = 2;
        ::0x51ccf0::core::option::Option$LT$T$GT$::map_or_else::h7fca96e7ce97ddb7(&v27, &v29);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v3);
        v7 = *((long long *)&v28);
        *((int128_t *)&v4) = *((int128_t *)&v27);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v9);
    }
    a0->field_10 = v7;
    *((void*)&a0->field_0) = v4;
    if (!v43)
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(a5);
    return v50;
}
