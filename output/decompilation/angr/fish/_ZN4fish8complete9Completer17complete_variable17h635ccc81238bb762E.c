long long fish::complete::Completer::complete_variable(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x1ed]
    unsigned int v1;  // [bp-0x1ec]
    char v2;  // [bp-0x1e8]
    int v3;  // [bp-0x1e8]
    char v4;  // [bp-0x1e8]
    int v5;  // [bp-0x1e0]
    unsigned long long v6;  // [bp-0x1d8]
    int v7;  // [bp-0x1c8]
    int v8;  // [bp-0x1b8]
    int v9;  // [bp-0x1a8]
    int v10;  // [bp-0x198], Other Possible Types: void*
    unsigned long long v11;  // [bp-0x190]
    void* v12;  // [bp-0x188], Other Possible Types: unsigned long long
    char v13;  // [bp-0x178]
    int v14;  // [bp-0x178]
    unsigned long long v15;  // [bp-0x168]
    unsigned long long v16;  // [bp-0x160]
    int v17;  // [bp-0x158]
    int v18;  // [bp-0x148]
    int v19;  // [bp-0x148]
    unsigned long long v20;  // [bp-0x138]
    struct_0 *v21;  // [bp-0x128]
    unsigned long long v22;  // [bp-0x120]
    unsigned long long v23;  // [bp-0x118]
    unsigned long long v24;  // [bp-0xf0]
    void* v25;  // [bp-0xe8]
    int v26;  // [bp-0xe8]
    unsigned long long v27;  // [bp-0xe0]
    void* v28;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v29;  // [bp-0xd8]
    int v30;  // [bp-0xc8]
    int v31;  // [bp-0xb8]
    int v32;  // [bp-0xa8]
    char v33;  // [bp-0x98]
    unsigned long long v34;  // [bp-0x88]
    int v35;  // [bp-0x78]
    unsigned long long v36;  // [bp-0x70]
    unsigned long long v37;  // [bp-0x68]
    char v38;  // [bp-0x60]
    char v39;  // [bp-0x40]
    unsigned long long v42[4];  // rax
    unsigned long long v43;  // r12
    struct_0 *v44;  // r15
    char v45;  // al
    unsigned long long v46[4];  // r14
    unsigned long long v47;  // rbp
    unsigned long long v48;  // rbx
    unsigned long long v49;  // rdx
    unsigned long long v50;  // rax
    unsigned long long v51;  // r12
    unsigned int v53;  // eax
    unsigned long long v55[2];  // rax
    unsigned long long v56;  // rdx
    unsigned long long v57;  // rcx
    unsigned long long v58;  // rsi
    unsigned long v59;  // rdx
    unsigned long v60;  // rbx
    unsigned long long v61;  // rax
    unsigned long long v62;  // rbp
    char v63;  // r12b

    v24 = a1.slice_from(a2, a3);
    v23 = a2 - a3;
    if (a2 < a3)
        core::panicking::panic_const::panic_const_sub_overflow(&g_14d6000); /* do not return */
    v42 = a0->field_38;
    *((long long *)((!v42[0] ? &g_14c7518 : ((unsigned int)v42[0] == 1 ? v42[2] : v42[3])) + 40))(&v2);
    v38.into_iter(&v2);
    (char)v14.next(&v38);
    if ((char)(((0 ^ *((long long *)&v13)) & (0 ^ -(*((long long *)&v13)))) >> 63))
    {
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v38);
        return v63 & 1;
    }
    v43 = 0;
    v21 = a0;
    v44 = a0;
    do
    {
        v22 = v43;
        v45 = v44->field_72;
        v46 = v44->field_38;
        v0 = v44->field_71 ^ 1 | v44->field_70;
        while (true)
        {
            v35 = v14;
            v47 = v15;
            v37 = v47;
            v48 = v36;
            v50 = fish::wcstringutil::string_fuzzy_match_string(v24, v49, v48, v47, v45 ^ 1);
            v51 = v50 & 4294967295;
            if ((char)v50 != 3)
            {
                if (((char)v49 & 254) == 2 || (char)v51)
                {
                    v4.to_vec(a1.slice_to(a2, a3), a2);
                    v28 = v6;
                    *((int128_t *)&v26) = *((int128_t *)&v4);
                    v53 = (int)v18.add(&(unsigned long long)v26, v48, v47) & 0xffff0000 | 522;
                }
                else
                {
                    v4.to_vec(v48.slice_from(v47, v23), a2);
                    v20 = v6;
                    memcpy(&v18, &v4, 16);
                    v53 = (unsigned int)v20 & 0xffff0000 | 0x200;
                    v18 = v19;
                }
                v1 = v53;
                v10 = 0;
                v11 = 4;
                v12 = 0;
                if ((v0 & 1))
                    break;
                if (!v48.eq(v47, "historyifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP", 7))
                {
                    *((long long *)((!v46[0] ? &g_14c7518 : ((unsigned int)v46[0] == 1 ? v46[2] : v46[3])) + 24))(&v4);
                    if (!*((long long *)&v4))
                    {
                        core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v4);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v10);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v18);
                    }
                    else
                    {
                        v34 = v6;
                        memcpy(&v33, &v4, 16);
                        fish::expand::expand_escape_variable(&v16, &v33);
                        v25 = 0;
                        v27 = 4;
                        v28 = 0;
                        v55 = _ZN4fish8complete21COMPLETE_VAR_DESC_VAL17haa8770e5e25db43bE.get_or_try_init(&_ZN4fish8complete21COMPLETE_VAR_DESC_VAL17haa8770e5e25db43bE);
                        v56 = v55[0];
                        v57 = v55[1];
                        v4 = 1;
                        v5 = v17;
                        fish_printf::printf_impl::sprintf_locale(&v39, &v25, v56, v57, ".", &v4, 1);
                        v39.unwrap(&g_14d6018);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v4);
                        *((int128_t *)&v3) = *((int128_t *)&v25);
                        v6 = v29;
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v10);
                        v12 = v6;
                        *((int128_t *)&v10) = *((int128_t *)&v4);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v16);
                        core::ptr::drop_in_place<fish::env::var::EnvVar>(&v33);
                        break;
                    }
                }
                else
                {
                    if (!v46[0])
                    {
                        v58 = v46[1] + 472;
                        v59 = &g_14c7518;
                    }
                    else if ((unsigned int)v46[0] == 1)
                    {
                        v58 = v46[1];
                        v59 = v46[2];
                    }
                    else
                    {
                        v58 = v46[2];
                        v59 = v46[3];
                    }
                    fish::history::history_session_id(&v4, v58, v59);
                    v16 = *((long long *)&(&v2)[8]).with_name(v6);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
                    v60 = v16 + 16;
                    v61 = v60.size().min(64);
                    if (v61 >= 2)
                    {
                        v62 = 1;
                        do
                        {
                            if (v62 > 1)
                                v10.push(32);
                            v4.item_at_index(v60, v62);
                            if (*((long long *)&v4) == 0x8000000000000000)
                                core::option::unwrap_failed(&g_14d6030); /* do not return */
                            v32 = v9;
                            v31 = v8;
                            v30 = v7;
                            memcpy(&v28, &v6, 16);
                            *((int128_t *)&v26) = *((int128_t *)&v4);
                            fish::expand::expand_escape_string(&v4, v27, v29);
                            v10.spec_extend(*((long long *)&(&v2)[8]), *((long long *)&(&v2)[8]) + v6 * 4);
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
                            core::ptr::drop_in_place<fish::history::HistoryItem>(&(unsigned long long)v26);
                            v62 += 1;
                        } while (v61 != v62);
                    }
                    core::ptr::drop_in_place<alloc::sync::Arc<fish::history::History>>(&v16);
                    break;
                }
            }
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v14);
            (char)v14.next(&v38);
            if ((long long)v14 == 0x8000000000000000)
            {
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v38);
                return (unsigned int)v22 & 0xffffff00 | v63 & 1;
            }
        }
        v4.new(&v18, &v10, v51, v49, v1);
        v21.add(&v4);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v14);
        (char)v14.next(&v38);
        v43 = v51 & 0xffffffffffffff00 | 1;
        v44 = v21;
    } while ((long long)v14 != 0x8000000000000000);
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v38);
    return ((unsigned int)v51 & 0xffffff00 | 1) & 0xffffff00 | 1;
}
