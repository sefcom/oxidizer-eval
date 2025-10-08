void fish::reader::Reader::paint_layout(void* a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    unsigned long long v0;  // [bp-0x120]
    int v1;  // [bp-0x118], Other Possible Types: char, unsigned int
    void* v2;  // [bp-0x118]
    void* v3;  // [bp-0x118]
    unsigned long long v4;  // [bp-0x110]
    void* v5;  // [bp-0x108], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x100]
    unsigned long long v7;  // [bp-0xf8]
    void* v8;  // [bp-0xf0]
    int v9;  // [bp-0xe8]
    unsigned long long v10;  // [bp-0xe0]
    void* v11;  // [bp-0xd8]
    unsigned int v12;  // [bp-0xcc]
    char v13;  // [bp-0xc8]
    unsigned long long v14;  // [bp-0xc0]
    unsigned long long v15;  // [bp-0xb8]
    char v16;  // [bp-0xa8]
    char v17;  // [sp-0xa8]
    unsigned long long v18;  // [bp-0xa0]
    void* v19;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x60]
    unsigned long long v21;  // [bp-0x58]
    unsigned long long v22;  // [bp-0x50]
    char v23;  // [bp-0x48]
    unsigned long long v25;  // rcx
    unsigned long long v26;  // rax
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rbp
    unsigned long long v29;  // r15
    unsigned long long v30;  // rax
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rbp
    unsigned long long v33;  // r13
    unsigned long long v34;  // r14
    char v35;  // r12b
    struct_0 *v36;  // rax
    unsigned long long v37;  // rcx
    struct_0 *v38;  // rdx
    unsigned long long v39;  // r13
    unsigned long long v40;  // rax
    unsigned int *v41;  // rax
    unsigned int *v42;  // rcx
    unsigned long long v43;  // rax
    unsigned long long v46;  // rcx
    unsigned long long v47;  // r8

    v12 = a4;
    if ((char)core::sync::atomic::atomic_load(&g_15a99e0, 0))
    {
        v6 = 0;
        v7 = 1;
        v8 = 0;
        v1.to_flog_str(&g_15a99d0);
        v17.into_iter(&v1);
        v6.spec_extend(&v17);
        v6.push(58, &g_14dfef8);
        v6.push(32, &g_14dfef8);
        v3 = 0;
        v4 = 4;
        v5 = 0;
        v16 = 1;
        v18 = a2;
        v19 = a3;
        fish_printf::printf_impl::sprintf_locale(&(char)v9, &v3, "Repainting from %lsassertion failed: string_prefixes_string_maybe_case_insensitive(autosuggestion.icase,\n    &self.command_line.text()[autosuggestion.search_string_range.clone()],\n    &autosuggestion.text)assertion failed: self.history_search.active()bind scripts", 19, &v16, 1);
        (char)v9.unwrap(&g_14dfef8);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v16);
        *((int128_t *)&v9) = *((int128_t *)&v3);
        v11 = 0;
        v3.to_flog_str(&(char)v9);
        v16.into_iter(&v3);
        v6.spec_extend(&v16);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v9);
        v6.push(10, &g_14dfef8);
        fish::flog::flog_impl(v7, v8);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v6, v7);
    }
    if ((char)a0[1275])
    {
        v1 = fish::common::get_obfuscation_read_char();
        alloc::slice::<impl [T]>::repeat(&v16, &v1, (long long)a0[48]);
        v25 = *((long long *)&v17);
        v26 = v18;
        v27 = v19;
        v3 = v2;
        goto LABEL_13fb573;
    }
    else
    {
        if ((char)a0.is_at_line_with_autosuggestion())
        {
            v28 = (long long)a0[1296];
            v29 = (long long)a0[1304] + v28;
            if ((char)__CFADD__((long long)a0[1304], v28))
                core::panicking::panic_const::panic_const_add_overflow(&g_14dff10); /* do not return */
            v0 = (long long)a0[1312];
            v30 = (long long)a0[1304].clone((long long)a0[1312]);
            fish::reader::combine_command_and_autosuggestion(&v16, (long long)a0[40], (long long)a0[48], v30, v31, (long long)a0[1288], v28);
            v25 = *((long long *)&v17);
            v26 = v18;
            v27 = v19;
        }
        else
        {
            v26 = (long long)a0[40];
            v27 = (long long)a0[48];
            v25 = 0x8000000000000000;
LABEL_13fb573:
            v29 = v27;
            v0 = v27;
        }
        v20 = v25;
        v21 = v26;
        v22 = v27;
        v13.clone((long long)a0[216], (long long)a0[224]);
        if (!(char)a0[1275] && ((char)a0[336] & 1))
        {
            v32 = (int)a0[340].as_usize((int)a0[344]);
            v33 = v15;
            if (v31 > v33)
            {
                v32 = v32.min(v33);
                v34 = v33;
            }
            v23.get_unless_empty(a1 + 472, "f", 23);
            v35 = (!*((long long *)&v23) ? 0 : (char)fish::reader::Reader::paint_layout::{{closure}}(&v23));
            v36 = v32.index_mut(v34, v14, v33, &g_14dff28);
            if (!!v36 && !!v31)
            {
                v37 = &(&v36->padding_0)[2 * v31];
                v38 = &v36->field_3;
                if (v35)
                {
                    while (true)
                    {
                        v36->field_2 = 2056;
                        v36 = v38;
                        if (v36 == v37)
                            break;
                        v38 = &(&v36->padding_0)[2 * (v36 != v37)];
                        if (!v36)
                            break;
                    }
                }
                else
                {
                    while (true)
                    {
                        *((char *)&v36->field_2 + 1) = 8;
                        v36 = v38;
                        if (v36 == v37)
                            break;
                        v38 = &(&v36->padding_0)[2 * (v36 != v37)];
                        if (!v36)
                            break;
                    }
                }
            }
        }
        if (((char)a0[152] & 1))
        {
            v39 = v15;
            v40 = (long long)a0[176].min(v39);
            if (!!(long long)a0[168].min(v40).index_mut(v40, v14, v39, &g_14dff40) && !!v31)
            {
                v42 = 0;
                do
                {
                    *((unsigned int *)(v41 + v42)) = 0xe0e0000;
                    v42 += 1;
                } while (v31 * 4 != v42);
            }
        }
        v43 = v0.len(v29);
        v3.from_elem(((char)a0[2119] ? 0x8080000 : 0xd0000), v43);
        v16.splice(&v13, v0, v0, &v3);
        core::ptr::drop_in_place<alloc::vec::splice::Splice<alloc::vec::into_iter::IntoIter<fish::highlight::highlight::HighlightSpec>>>(&v16);
        fish::parse_util::parse_util_compute_indents(&v6, (long long)a0[40], (long long)a0[48]);
        v3.from_elem(v0.len(v29), &g_14dff70);
        v16.splice(&v6, v0, v0, &v3);
        core::ptr::drop_in_place<alloc::vec::splice::Splice<alloc::vec::into_iter::IntoIter<i32>>>(&v16);
        fish::builtins::fish_indent::fish_indent::{{closure}}(&v16, (long long)a0[1840], (long long)a0[1848]);
        v5 = v19;
        memcpy(&v3, &v16, 16);
        (char)v9.add(&v3, (long long)a0[1816].index((long long)a0[1824], &g_14dff88), v31);
        v46 = (long long)a0[1864];
        v47 = (long long)a0[1872];
        v5 = v15;
        *((int128_t *)&v1) = *((int128_t *)&v13);
        v19 = v8;
        memcpy(&v16, &v6, 16);
        a0 + 920.write(v10, v11, v46, v47, v21, v22, v0, v29, &v3, &v16, (long long)a0[328], (long long)a0[136], (long long)a0[144], a1 + 472, &g_14c7518, a0 + 352, a0 + 632, (char)v12);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v9);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v20);
        return;
    }
}
