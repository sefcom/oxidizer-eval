void fish::builtins::set::list(char a0[14], unsigned long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x1c8]
    int v1;  // [bp-0x1c8]
    unsigned long long v2;  // [bp-0x1c0]
    unsigned long long v3;  // [bp-0x1b8]
    unsigned long long v4;  // [bp-0x1b8]
    int v5;  // [bp-0x1a8], Other Possible Types: char
    unsigned long v6;  // [bp-0x198], Other Possible Types: unsigned long long
    int v7;  // [bp-0x190]
    char v8;  // [bp-0x190]
    int v9;  // [bp-0x190]
    unsigned long long v10;  // [bp-0x180]
    unsigned long v11;  // [bp-0x170]
    unsigned long long v12;  // [bp-0x168]
    unsigned long long v13;  // [bp-0x160]
    unsigned long long v14;  // [bp-0x158]
    unsigned long long v15;  // [bp-0x150]
    int v16;  // [bp-0x148], Other Possible Types: char
    unsigned long long v17;  // [bp-0x140]
    unsigned long long v18;  // [bp-0x138]
    int v19;  // [bp-0x128]
    int v20;  // [bp-0x118]
    int v21;  // [bp-0x108]
    int v22;  // [bp-0xf8]
    unsigned long long v23;  // [bp-0xf0]
    unsigned long long v24;  // [bp-0xe8]
    int v25;  // [bp-0xd8]
    unsigned long long v26;  // [bp-0xd0]
    char v27;  // [bp-0xc8]
    int v28;  // [bp-0xb8]
    int v29;  // [bp-0xa8]
    int v30;  // [bp-0x98]
    char v31;  // [bp-0x80]
    unsigned long long v32;  // [bp-0x78]
    unsigned long long v33;  // [bp-0x70]
    int v34;  // [bp-0x68]
    char v35;  // [bp-0x50]
    char v38;  // r14b
    unsigned long v39;  // r15
    unsigned long long v40;  // r13
    unsigned long long v41;  // rax
    unsigned long v42;  // rdx
    unsigned long long v43;  // rbp
    unsigned long long v44;  // rax

    v11 = a1 + 472;
    v31.get_names(v11, (unsigned int)a0.scope());
    alloc::slice::stable_sort(v32, v33);
    v35.into_iter(&v31);
    (char)v9.next(&v35);
    if (!((char)(((0 ^ *((long long *)&v8)) & (0 ^ -(*((long long *)&v8)))) >> 63)))
    {
        if (a0[7])
        {
            do
            {
                v24 = v10;
                v22 = v9;
                fish::builtins::fish_indent::fish_indent::{{closure}}(&(char)v16, v23, v10);
                v6 = v18;
                memcpy(&v5, &v16, 16);
                v5.push(10);
                v18 = v6;
                v16 = v5;
                a2.append(&(char)v16);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v9);
                (char)v9.next(&v35);
            } while ((long long)v9 != 0x8000000000000000);
        }
        else
        {
            v38 = a0[13];
            do
            {
                v24 = v10;
                v22 = v7;
                fish::builtins::fish_indent::fish_indent::{{closure}}(&(char)v16, v23, v24);
                v6 = v18;
                memcpy(&v5, &v16, 16);
                v0 = 0;
                v2 = 4;
                v3 = 0;
                if ((v38 & 1) && v23.eq(v24, "historyifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP", 7))
                {
                    fish::history::history_session_id(&(char)v16, v11, &g_14c7518);
                    v12 = v17.with_name(v18);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v16);
                    v39 = v12 + 16;
                    v40 = v39.size();
                    if (v40 < 2 || v3 > 63)
                    {
LABEL_136a560:
                        core::ptr::drop_in_place<alloc::sync::Arc<fish::history::History>>(&v12);
                        continue;
                    }
                    (char)v16.item_at_index(v39, 1);
                    if ((long long)v16 != 0x8000000000000000)
                    {
                        v30 = v21;
                        v29 = v20;
                        v28 = v19;
                        memcpy(&v27, &v18, 16);
                        *((int128_t *)&v25) = (int128_t)v16;
                        fish::expand::expand_escape_string(&v13, v26, *((long long *)&v27));
                        v41 = v14.index(v15, &g_14ccaf8);
                        v0.spec_extend(v41, v41 + v42 * 4);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v13);
                        core::ptr::drop_in_place<fish::history::HistoryItem>(&(char)v25);
                        if (v40 == 2)
                            goto LABEL_136a560;
                        v43 = 2;
                        while (true)
                        {
                            if (v3 >= 64)
                                goto LABEL_136a560;
                            v0.push(32);
                            (char)v16.item_at_index(v39, v43);
                            if ((long long)v16 == 0x8000000000000000)
                                break;
                            v30 = v21;
                            v29 = v20;
                            v28 = v19;
                            memcpy(&v27, &v18, 16);
                            *((int128_t *)&v25) = (int128_t)v16;
                            fish::expand::expand_escape_string(&v13, v26, *((long long *)&v27));
                            v44 = v14.index(v15, &g_14ccaf8);
                            v0.spec_extend(v44, v44 + v42 * 4);
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v13);
                            core::ptr::drop_in_place<fish::history::HistoryItem>(&(char)v25);
                            v43 += 1;
                            goto LABEL_136a560;
                        }
                    }
                    core::option::unwrap_failed(&g_14ccae0); /* do not return */
                }
                else
                {
                    v34.getf_unless_empty(v11, v23, v24, (unsigned int)a0.scope());
                    if ((long long)v34)
                    {
                        fish::expand::expand_escape_variable(&(char)v16, &v34);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                        v3 = v18;
                        *((int128_t *)&v1) = (int128_t)v16;
                        core::ptr::drop_in_place<fish::env::var::EnvVar>(&v34);
                    }
                }
                if (v3)
                {
                    v4 = v3;
                    if ((65 <= v4 & v38))
                        v4 = 60;
                    v5.push(32);
                    v5.spec_extend(4, 4 + v4 * 4);
                    if ((65 <= v3 & v38))
                        v5.push((unsigned int)fish::common::get_ellipsis_char());
                }
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                v5.push(10);
                v18 = v6;
                v16 = v5;
                a2.append(&(char)v16);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v22);
                (char)v9.next(&v35);
            } while ((long long)v9 != 0x8000000000000000);
        }
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v35);
    return;
}
