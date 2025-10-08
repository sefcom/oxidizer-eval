long long fish::input_common::InputEventQueuer::parse_dcs(void* a0, unsigned long long a1, unsigned long long a2[3])
{
    void* v0;  // [bp-0x130]
    unsigned long long v1;  // [bp-0x128]
    void* v2;  // [bp-0x120]
    int v3;  // [bp-0x118], Other Possible Types: char
    unsigned long long v5;  // [bp-0x108]
    int v6;  // [bp-0xf8], Other Possible Types: char, unsigned long long
    int v7;  // [bp-0xf8]
    char *v8;  // [bp-0xf0], Other Possible Types: unsigned long long
    char *v9;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0xe0]
    char v11;  // [bp-0xd8], Other Possible Types: unsigned long long
    void* v12;  // [bp-0xd8]
    unsigned long long v13;  // [bp-0xd0]
    unsigned long long v14;  // [bp-0xd0]
    char *v15;  // [bp-0xc8], Other Possible Types: unsigned long long
    char *v16;  // [bp-0xc8]
    unsigned long long v17;  // [bp-0xc0]
    void* v18;  // [bp-0xb8]
    int v19;  // [bp-0xa8], Other Possible Types: char
    char *v20;  // [bp-0x98], Other Possible Types: unsigned long long
    void* v21;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long v22;  // [bp-0x80]
    unsigned long v23;  // [bp-0x78]
    char v24;  // [sp-0x70]
    char v25;  // [bp-0x68]
    char *v27;  // [bp-0x58], Other Possible Types: unsigned long long
    void* v28;  // [bp-0x50]
    unsigned long long v29;  // [bp-0x48]
    char *v30;  // [bp-0x40]
    unsigned long long v31;  // [bp-0x38]
    unsigned long v33;  // rdx
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax
    char v36;  // bpl
    unsigned long long v37;  // r14
    unsigned long long v38;  // rax
    unsigned long long v39;  // r13
    void* v40;  // rdi
    unsigned long long v41;  // rsi

    if (a2[2] != 2)
    {
        core::panicking::panic("assertion failed: buffer.len() == 2Received interrupt, giving up on waiting for terminal responseIllegal input encodingIllegal codepointclose %d\nfile %d -> %d\npipe {%d} (input: %s) -> %d\nnoyesInvalid target fd", 35, &g_14db3e8); /* do not return */
    }
    else if (((char)a1.try_readb(a2) & 1))
    {
        if ((char)v33 != 48)
        {
            v34 = v33 & 4294967295;
            if ((unsigned int)v34 == 49)
            {
                v36 = 1;
LABEL_13cf211:
                v34 = a1.try_readb(a2);
                if (((char)v34 & 1) && (char)v33 == 43)
                {
                    v34 = a1.try_readb(a2);
                    if (((char)v34 & 1) && (char)v33 == 114)
                    {
                        v34 = a1.read_until_sequence_terminator(a2);
                        if ((char)v34)
                        {
                            v37 = a2[2];
                            if (v37 < 5)
                                core::slice::index::slice_start_index_len_fail(5, v37, &g_14db3d0); /* do not return */
                            if (v36)
                            {
                                v22 = a2[1] + 5;
                                v23 = v37 - 5;
                                v24 = 0;
                                v21 = 1;
                                v38 = v22.next();
                                if (!v38)
                                    core::option::unwrap_failed(&g_14db388); /* do not return */
                                fish::input_common::parse_hex(&v11, v38, a2);
                                v34 = -(v12);
                                if (!((char)(((0 ^ v12) & (0 ^ -(v12))) >> 63)))
                                {
                                    v21 = 0;
                                    v24 = 1;
                                    fish::input_common::parse_hex(&v11, v22, v23);
                                    if (v12 != 0x8000000000000000)
                                    {
                                        v28 = v12;
                                        v39 = v13;
                                        v29 = v15;
                                        if ((char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
                                        {
                                            v0 = 0;
                                            v1 = 1;
                                            v2 = 0;
                                            v6.to_flog_str(&g_15a99a0);
                                            v11.into_iter(&v6);
                                            v0.spec_extend(&v11);
                                            v0.push(58, &g_14db3a0);
                                            v0.push(32, &g_14db3a0);
                                            fish::common::str2wcstring(&v3, v13, v15);
                                            fish::common::str2wcstring(&v19, v39, v29);
                                            *((char **)&v7) = &v3;
                                            v8 = <widestring::utfstring::Utf32String as core::fmt::Display>::fmt;
                                            v9 = &v19;
                                            v10 = <widestring::utfstring::Utf32String as core::fmt::Debug>::fmt;
                                            v11 = &g_14db340;
                                            v14 = 2;
                                            v18 = 0;
                                            v16 = &(unsigned long long)v7;
                                            v17 = 2;
                                            v25.map_or_else(&v11);
                                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v19);
                                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
                                            *((int128_t *)&v7) = *((int128_t *)&v25);
                                            v9 = v27;
                                            v11.clone(&(unsigned long long)v7);
                                            v20 = v16;
                                            memcpy(&v19, &v11, 16);
                                            v11.into_iter(&v19);
                                            v0.spec_extend(&v11);
                                            core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v7);
                                            v0.push(10, &g_14db3a0);
                                            fish::flog::flog_impl(v1, 0);
                                            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
                                        }
                                        v40 = v28;
                                        v41 = v39;
                                        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v40, v41);
                                        if ((char)v13.equal(v15, "indn", 4))
                                            fish::tty_handoff::maybe_set_scroll_content_up_capability();
                                    }
                                    *((unsigned int *)a0) = 0x110000;
                                    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v12, v13);
                                }
                            }
                            else
                            {
                                v34 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a99b0, 0);
                                if ((char)v34)
                                {
                                    v0 = 0;
                                    v1 = 1;
                                    v2 = 0;
                                    (char)v6.to_flog_str(&g_15a99a0);
                                    (char)v12.into_iter(&(char)v6);
                                    v0.spec_extend(&(char)v12);
                                    v0.push(58, &g_14db370);
                                    v0.push(32, &g_14db370);
                                    fish::input_common::parse_hex(&(char)v6, v22, v23);
                                    if ((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63))
                                    {
                                        *((unsigned int *)a0) = 0x110000;
                                        return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
                                    }
                                    fish::common::str2wcstring(&(char)v21, v8, v9);
                                    v30 = &(char)v21;
                                    v31 = <widestring::utfstring::Utf32String as core::fmt::Display>::fmt;
                                    v11 = &g_14db330;
                                    v13 = 1;
                                    v18 = 0;
                                    v15 = &v30;
                                    v17 = 1;
                                    (char)v19.map_or_else(&v11);
                                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v21);
                                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v6, v8);
                                    v3 = v19;
                                    v5 = v20;
                                    v11.clone(&(char)v3);
                                    v27 = v15;
                                    memcpy(&v25, &v11, 16);
                                    v11.into_iter(&v25);
                                    v0.spec_extend(&v11);
                                    core::ptr::drop_in_place<alloc::string::String>(&(char)v3);
                                    v0.push(10, &g_14db370);
                                    fish::flog::flog_impl(v1, 0);
                                    v34 = (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
                                }
                            }
                        }
                    }
                }
            }
            else if ((unsigned int)v34 == 62)
            {
                v35 = a1.parse_xtversion(a2);
                *((unsigned int *)a0) = 0x110000;
                return v35;
            }
            *((unsigned int *)a0) = 0x110000;
            return v34;
        }
        goto LABEL_13cf211;
    }
    else
    {
        *((unsigned long long *)a0) = 1099511627856;
        *((unsigned long long *)&a0[8]) = 0;
        return 1099511627856;
    }
}
