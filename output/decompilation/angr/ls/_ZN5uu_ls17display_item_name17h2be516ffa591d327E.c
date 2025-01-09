long long uu_ls::display_item_name::h2be516ffa591d327(struct_1 *a0, struct_3 *a1, char a2[249], unsigned long a3, unsigned int a4, struct_1 *a5)
{
    char v0;  // [bp-0x310]
    unsigned int v1;  // [sp-0x2fc]
    int v2;  // [bp-0x2f8], Other Possible Types: char
    char v3;  // [bp-0x2f0]
    unsigned long long v4;  // [sp-0x2e8]
    char *v5;  // [sp-0x2e0], Other Possible Types: unsigned long long
    unsigned long v6;  // [sp-0x2d8], Other Possible Types: unsigned long long
    char *v7;  // [sp-0x2d0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v8;  // [sp-0x2c8]
    int v9;  // [sp-0x2b8]
    unsigned long long v10;  // [sp-0x2a8]
    int v11;  // [sp-0x298]
    unsigned long long v12;  // [sp-0x288]
    unsigned long long v13[3];  // [sp-0x278], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x270]
    unsigned long long v15;  // [sp-0x268]
    void* v16;  // [bp-0x248], Other Possible Types: struct struct_0 **
    unsigned long v17;  // [sp-0x240], Other Possible Types: unsigned long long
    char *v18;  // [sp-0x238], Other Possible Types: struct struct_0 **, unsigned long long, unsigned long
    unsigned long long v19;  // [sp-0x230]
    void* v20;  // [sp-0x228]
    char v21;  // [bp-0x198]
    char v22;  // [bp-0x188]
    char v23;  // [bp-0x180]
    char v24;  // [bp-0x170]
    int v25;  // [bp-0x168], Other Possible Types: char, unsigned long, unsigned short
    unsigned long long v26;  // [sp-0x160]
    int v27;  // [sp-0x158], Other Possible Types: struct struct_2 **, unsigned long, unsigned long long
    unsigned long long v28;  // [sp-0x150]
    void* v29;  // [sp-0x148], Other Possible Types: unsigned long long
    char v30;  // [bp-0x140]
    char v31;  // [bp-0x40]
    unsigned long long v32;  // [bp+0x8]
    char v33;  // [bp+0x10]
    unsigned long long v34;  // r12
    unsigned long long v36;  // rcx
    char v37;  // r15b
    struct_1 *v38;  // rcx
    unsigned int v39;  // ecx
    char v40;  // bl
    struct_1 *v41;  // rcx
    unsigned int v42;  // r14d
    unsigned int v43;  // eax
    unsigned int *v44;  // rax
    unsigned long v45;  // rdx
    unsigned long long v46;  // rdx
    unsigned long long v47;  // rax
    unsigned long long v48;  // rdx
    unsigned long long v49;  // rax

    v34 = &a2[245];
    if (a2[239])
    {
        v1 = uucore::features::quoting_style::escape_name::ha9b5831150e16363(&v2, a1->field_8, a1->field_10, v34) & 0xffffffffffffff00 | 1;
        uu_ls::create_hyperlink::h72b30fed8b305b42(&v25, *((long long *)&v3), v4, a1);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v2);
        v4 = v27;
        *((int128_t *)&v2) = *((int128_t *)&v25);
    }
    if (*((char *)(*((long long *)&v33) + 29)) != 2)
    {
        v1 = v36 & 0xffffffffffffff00 | 1;
        uu_ls::colors::color_name::hd87a58ac50dac0ef(&v25, (long long)(&v2)[8], v4, a1, *((long long *)&v33), v32, 0, v0);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v2);
        v4 = v27;
        *((int128_t *)&v2) = *((int128_t *)&v25);
    }
    v37 = a2[248];
    v38 = a5;
    v39 = v38 & 0xffffffffffffff00 | 1;
    v40 = v38->field_10 & v37 != 1;
    if ((v38->field_10 & v37 != 1))
    {
        v41 = a5;
        v27 = v41->field_10;
        *((uint128_t *)&v25) = v41->field_0;
        v1 = 0;
        _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h177306e76d9aa6a7(&v16, &v25, (long long)(&v2)[8], v4);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v2);
        v4 = v18;
        *((int128_t *)&v2) = *((int128_t *)&v16);
        v39 = 0;
    }
    v1 = v39;
    v42 = a2[244];
    if (v42)
    {
        v43 = uu_ls::classify_file::h531def787e741feb(a1, v32);
        if (v42 == 3)
        {
LABEL_52c2e7:
            if (!(v43 == 0x110000))
                goto LABEL_52c2f5;
        }
        else if (v42 == 2)
        {
            if (v43 == 42)
                goto LABEL_52c301;
            goto LABEL_52c2e7;
        }
        else if (v43 == 47)
        {
LABEL_52c2f5:
            ::0x51d6a0::alloc::string::String::push::h859ae11851fd8b8e(&v2, v43);
        }
    }
LABEL_52c301:
    if (v37 == 1 && uu_ls::PathData::file_type::h128ed7d98b354477(a1, v32))
    {
        v44 = uu_ls::PathData::file_type::h128ed7d98b354477(a1, v32);
        if (!v44)
        {
            core::option::unwrap_failed::h0e11329e76906eaa(&g_6129b8); /* do not return */
        }
        else if ((0xf000 & *(v44)) == 0xa000 && !a1->field_128)
        {
            std::fs::read_link::hbe5657d82156963a(&v21, a1->field_20, a1->field_28);
            if (*((long long *)&v21) == 0x8000000000000000)
            {
                v5 = v26;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&v16, &a1->padding_18);
                v29 = v18;
                *((int128_t *)&v27) = *((int128_t *)&v16);
                v26 = v5;
                v25 = 2;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                v13 = uucore::util_name::h60d842bf27b05e82();
                v14 = v45;
                *((unsigned long long [3])&v5) = v13;
                v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
                v7 = &v25;
                v8 = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d2fdcae43ce792d;
                v16 = &g_612588;
                v17 = 3;
                v20 = 0;
                v18 = &v5;
                v19 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v16);
                ::0x51a4b0::core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::he771fbcc7e9ba207(&v25);
            }
            else
            {
                v10 = *((long long *)&v22);
                *((int128_t *)&v9) = *((int128_t *)&v21);
                ::0x51d270::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&v2, " -> ", 4);
                if (*((char *)(*((long long *)&v33) + 29)) == 2)
                {
                    uucore::features::quoting_style::escape_name::ha9b5831150e16363(&v25, (long long)(&v9)[8], v10, v34);
                    ::0x51d270::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&v2, ::0x51cc90::core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(v26, v27 + v26), v46);
                    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v25);
                }
                else
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&v25, &v9);
                    v12 = v27;
                    *((int128_t *)&v11) = (int128_t)v25;
                    if (!(char)std::path::Path::is_absolute::h3431a23d91045560((long long)(&v9)[8], v10))
                    {
                        v47 = std::path::Path::parent::h65c9a340a6266f2d(a1->field_20, a1->field_28);
                        if (v47)
                        {
                            v27 = v12;
                            v25 = v11;
                            std::path::Path::join::hd038e45245e60e36(&v16, v47, v48, &v25);
                            *((int128_t *)&v11) = *((int128_t *)&v16);
                            v12 = v18;
                        }
                    }
                    v15 = v12;
                    *((void*)v13) = v11;
                    v16 = 0;
                    v5 = 0x8000000000000000;
                    uu_ls::PathData::new::ha3e1f49dfc1f89b1(&v25, v13, &v16, &v5, a2[235], a2[242]);
                    if (uu_ls::PathData::get_metadata::hc7a96a0547653f90(a1, v32))
                    {
LABEL_52c719:
                        uucore::features::quoting_style::escape_name::ha9b5831150e16363(&v16, (long long)(&v9)[8], v10, v34);
                        uu_ls::colors::color_name::hd87a58ac50dac0ef(&v5, v17, v18, a1, *((long long *)&v33), v32, &v25, v0);
                        ::0x51d270::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&v2, ::0x51cc90::core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(v6, v7 + v6), v48);
                        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v5);
                        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v16);
                    }
                    else
                    {
                        uu_ls::get_metadata_with_deref_opt::h471baa3ff4b7ae17(&v16, v29, *((long long *)&v30), v31);
                        if ((int)v16 == 2)
                        {
                            ::0x51b5c0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(&v16);
                            std::fs::read_link::hbe5657d82156963a(&v16, a1->field_20, a1->field_28);
                            core::result::Result$LT$T$C$E$GT$::unwrap::h25f855f03e13c7a6(&v5, &v16);
                            std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v16, v6, v7);
                            ::0x51d270::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&v2, ::0x51cc90::core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(v17, v18 + v17), v48);
                            ::0x51a890::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h950c753f5d689b41(&v16);
                            ::0x51a690::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h585d8b757a674aea();
                        }
                        else
                        {
                            ::0x51b5c0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(&v16);
                            goto LABEL_52c719;
                        }
                    }
                    ::0x51a570::core::ptr::drop_in_place$LT$uu_ls..PathData$GT$::h882b87545de6c6bd(&v25);
                }
                ::0x51a690::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h585d8b757a674aea();
            }
        }
    }
    if (a3 == 1 && a2[235])
    {
        if (v37 != 4)
            uu_ls::pad_left::h1d7ef6cb0cce13f7(&v5, *((long long *)&a1->field_38), *((long long *)&a1->field_40), a4);
        else
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v5, &a1->padding_30);
        v16 = &v5;
        v17 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v18 = &v2;
        v19 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v25 = &g_6125e8;
        v26 = 2;
        v29 = 0;
        v27 = &v16;
        v28 = 2;
        ::0x51ccf0::core::option::Option$LT$T$GT$::map_or_else::h7fca96e7ce97ddb7();
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v2);
        v4 = *((long long *)&v24);
        *((int128_t *)&v2) = *((int128_t *)&v23);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v5);
    }
    a0->field_10 = v4;
    *((void*)&a0->field_0) = v2;
    if (!v40)
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(a5);
    return v49;
}
