long long uu_csplit::SplitWriter::do_to_match(unsigned long a0, struct_2 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned int a6, unsigned long long a7[7])
{
    struct_0 *v0;  // [bp-0x188]
    int v1;  // [bp-0x178], Other Possible Types: unsigned int, unsigned long long
    int v2;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned int v3;  // [bp-0x178]
    unsigned long long v4;  // [bp-0x178]
    unsigned long long v5;  // [bp-0x178]
    unsigned long long v6;  // [bp-0x170]
    int v7;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x168]
    int v9;  // [bp-0x160], Other Possible Types: void*
    unsigned long long v10;  // [bp-0x158]
    char v11;  // [sp-0x150]
    unsigned long long v12;  // [bp-0x148]
    int v13;  // [bp-0x148], Other Possible Types: unsigned long, unsigned long long
    int v14;  // [bp-0x148]
    unsigned long v15;  // [bp-0x140]
    int v16;  // [bp-0x140]
    unsigned long long v17;  // [bp-0x140]
    int v18;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x138]
    char v20;  // [bp-0x128]
    unsigned long long v21;  // [bp-0x118]
    int v22;  // [bp-0x118]
    unsigned long long v23;  // [bp-0x110]
    unsigned long long v24;  // [bp-0x108]
    unsigned long long v25;  // [bp-0xf8]
    unsigned long long v26;  // [bp-0xf8]
    unsigned long long v27;  // [bp-0xf0]
    unsigned long long v28;  // [sp-0xe8]
    unsigned long long v29;  // [sp-0xe0]
    unsigned long long v30;  // [bp-0xd8]
    unsigned long long v31;  // [bp-0xd0]
    unsigned long long v32;  // [bp-0xc8]
    unsigned long v33;  // [bp-0xb0]
    int v34;  // [bp-0x98], Other Possible Types: char
    int v35;  // [bp-0x80], Other Possible Types: char
    int v36;  // [bp-0x70]
    unsigned long long v37;  // [bp-0x60]
    int v38;  // [bp-0x58], Other Possible Types: char
    int v39;  // [bp-0x48]
    char v40;  // [bp-0x38]
    struct_1 *v41;  // rax
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rcx
    unsigned long long v46;  // rax
    unsigned long long v47;  // rdx
    unsigned long long v48;  // rax
    char v49;  // r12b
    char v50;  // bpl
    unsigned int v51;  // r13d
    unsigned long long v52;  // rax
    char *v53;  // rdi
    unsigned long long v54;  // rax
    uint256_t v55;  // ymm0
    unsigned long long v56;  // rax
    unsigned long long v57;  // rdx
    uint256_t v58;  // ymm0
    unsigned long long v59;  // rax
    struct_1 *v60;  // rax
    unsigned long long v61;  // rax
    unsigned long long v63;  // rax
    struct_1 *v65;  // rax
    unsigned long long v66;  // rax
    unsigned long v67;  // rbp
    unsigned long long v68;  // rax

    if (a6 >= 0)
    {
        v35.drain(a7);
        v10 = v37;
        v7 = v36;
        v2 = v35;
        if ((char)v2.next())
        {
            while (v41->field_8 != 9223372036854775809)
            {
                *((uint128_t *)&v18) = v41->field_10;
                v12 = v41->field_0;
                v15 = v41->field_8;
                v25.call_once(&v12);
                *((int128_t *)&v22) = *((int128_t *)&v27);
                if (v25 == 0x8000000000000000)
                    break;
                v12 = v25;
                *((int128_t *)&v16) = (int128_t)v22;
                v42 = a1.writeln(v15, v19);
                if (v42)
                {
                    v0->field_0 = 0;
                    *((unsigned long long *)&v0->field_8) = v42;
                    ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v12);
                    return core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>::drain_buffer::{{closure}}>>(&(char)v2);
                }
                ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v12);
                if (!(char)v2.next())
                    break;
            }
        }
        core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>::drain_buffer::{{closure}}>>(&(char)v2);
        a7[6] = 1;
        v25.next(a7);
        v43 = v27;
        if (v27 != 9223372036854775809)
        {
            do
            {
                v44 = v28;
                v45 = v29;
                if (v43 == 0x8000000000000000)
                {
                    v0->field_0 = 12;
                    *((unsigned long long *)&v0->field_8) = v44;
                    *((unsigned long long *)&v0->padding_9[7]) = v45;
                    return a0;
                }
                v21 = v43;
                v23 = v44;
                v24 = v45;
                v46 = "\r\nshould be big enough to hold every lines: \nTry ' --help' for more information.\n".strip_suffix_of(2, v44, v45);
                if (!v46)
                    v46 = uu_csplit::SplitWriter::do_to_match::{{closure}}(v23, v24);
                v1 = 0;
                v6 = v46;
                v7 = v47;
                v9 = 0;
                v10 = v47;
                v11 = 1;
                v1.set_span(v47);
                memcpy(&v20, &v10, 16);
                memcpy(&v16, &v7, 16);
                *((int128_t *)&v13) = *((int128_t *)&v1);
                v1.search_half(a4, a5, &(unsigned long long)v13);
                if (v2)
                {
                    v49 = *((char *)(a1->field_20 + 99));
                    if (v49)
                    {
                        v50 = 1;
                        if (!a6)
                            goto LABEL_591d67;
                        v48 = a1.writeln(v23, v24);
                    }
                    else if (a6)
                    {
                        v48 = a1.writeln(v23, v24);
                    }
                    else
                    {
                        v7 = v24;
                        *((int128_t *)&v2) = *((int128_t *)&v21);
                        (unsigned long long)v13.add_line_to_buffer(a7, v25, &v1);
                        if (v12 != 0x8000000000000000)
                        {
                            ::0x58f000::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&(unsigned long long)v13);
                            v1 = &g_72ed58;
                            v6 = 1;
                            v7 = 8;
                            *((uint128_t *)&v9) = 0;
                            core::panicking::panic_fmt(&v1, &g_72edc0); /* do not return */
                        }
                        ::0x58f000::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&(unsigned long long)v13);
LABEL_591d67:
                        v49 = 0;
LABEL_591d6a:
                        a1.finish_split();
                        if (v49)
                        {
                            v2.next(a7);
                            core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>>(&v2);
                        }
                        v0->field_0 = 13;
                        if (!v50)
                            return a0;
                        v53 = &v21;
                        return (unsigned long long)::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v21);
                    }
                    if (v48)
                    {
                        v0->field_0 = 0;
                        *((unsigned long long *)&v0->field_8) = v48;
                        v53 = &v21;
                        return (unsigned long long)::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v21);
                    }
                    v50 = 1;
                    if (a6 >= 2)
                    {
                        v51 = a6 + 1;
                        do
                        {
                            v1.next(a7);
                            if (v6 == 9223372036854775809)
                            {
                                a1.finish_split();
                                v12.to_vec(a2, a3);
                                v0->field_18 = v18;
                                *((int128_t *)&v0->field_8) = *((int128_t *)&v12);
                                v0->field_0 = 1;
                                v53 = &v21;
                                return (unsigned long long)::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v21);
                            }
                            if (v6 == 0x8000000000000000)
                            {
                                v0->field_0 = 12;
                                *((unsigned long long *)&v0->field_8) = v17;
                                *((unsigned long long *)&v0->padding_9[7]) = v19;
                                v53 = &v21;
                                return (unsigned long long)::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v21);
                            }
                            v12 = v6;
                            v17 = v7;
                            v19 = v9;
                            v52 = a1.writeln(v17, v19);
                            if (v52)
                            {
                                v0->field_0 = 0;
                                *((unsigned long long *)&v0->field_8) = v52;
                                ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v12);
                                v53 = &v21;
                                return (unsigned long long)::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v21);
                            }
                            ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v12);
                            v51 -= 1;
                        } while (v51 > 2);
                        goto LABEL_591d6a;
                    }
                    goto LABEL_591d6a;
                }
                v48 = a1.writeln(v23, v24);
                if (v48)
                {
                    v0->field_0 = 0;
                    *((unsigned long long *)&v0->field_8) = v48;
                    v53 = &v21;
                    return (unsigned long long)::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v21);
                }
                ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v21);
                v25.next(a7);
                v43 = v27;
            } while (v27 != 9223372036854775809);
        }
        core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>>(&v25);
        a1.finish_split();
        v63 = v0->field_8.to_vec(a2, a3);
        v0->field_0 = 3;
        return v63;
    }
    else
    {
        v33 = -(a6);
        a7[6] = v33;
        (char)v25.next(a7);
        v54 = v27;
        if (v27 != 9223372036854775809)
        {
            do
            {
                v44 = v28;
                v45 = v29;
                if (v54 == 0x8000000000000000)
                {
                    v0->field_0 = 12;
                    *((unsigned long long *)&v0->field_8) = v44;
                    *((unsigned long long *)&v0->padding_9[7]) = v45;
                    return a0;
                }
                v30 = v54;
                v31 = v44;
                v32 = v45;
                v56 = "\r\nshould be big enough to hold every lines: \nTry ' --help' for more information.\n".strip_suffix_of(2, v44, v45);
                if (!v56)
                    v56 = uu_csplit::SplitWriter::do_to_match::{{closure}}(v31, v32);
                v3 = 0;
                v6 = v56;
                v8 = v57;
                v9 = 0;
                v10 = v57;
                v11 = 1;
                v3.set_span(v57);
                v58 = v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v3);
                memcpy(&v20, &v10, 16);
                memcpy(&v16, &v7, 16);
                *((int128_t *)&v14) = *((int128_t *)&v3);
                v3.search_half(a4, a5, &(unsigned long long)v14);
                if (v1)
                {
                    v38.shrink_buffer_to_size(a7);
                    v10 = *((long long *)&v40);
                    v7 = v39;
                    v1 = v38;
                    if (v3.next())
                    {
                        while (v65->field_8 != 9223372036854775809)
                        {
                            *((uint128_t *)&v18) = v65->field_10;
                            v13 = v65->field_0;
                            v15 = v65->field_8;
                            v21.call_once(&v13);
                            memcpy(&v34, &v23, 16);
                            if (v21 == 0x8000000000000000)
                                break;
                            v13 = v21;
                            v16 = v34;
                            v66 = a1.writeln(v15, v19);
                            if (v66)
                            {
                                v0->field_0 = 0;
                                *((unsigned long long *)&v0->field_8) = v66;
                                ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v13);
                                core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>::drain_buffer::{{closure}}>>(&v3);
                                v53 = &v30;
                                return (unsigned long long)::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v30);
                            }
                            ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v13);
                            if (!v3.next())
                                break;
                        }
                    }
                    core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>::drain_buffer::{{closure}}>>(&v3);
                    if (*((char *)(a1->field_20 + 99)))
                    {
                        v7 = v32;
                        *((int128_t *)&v1) = *((int128_t *)&v30);
                        v13.add_line_to_buffer(a7, v26, &v3);
                        ::0x58f000::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v13);
                        v67 = v33;
                    }
                    else
                    {
                        v67 = v33;
                        a7[6] = v33 + 1;
                        v8 = v32;
                        *((int128_t *)&v1) = *((int128_t *)&v30);
                        v13.add_line_to_buffer(a7, v26, &v3);
                        ::0x58f000::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v13);
                        if (v13 != 0x8000000000000000)
                        {
                            v1 = &g_72ed98;
                            v6 = 1;
                            v8 = 8;
                            *((uint128_t *)&v9) = 0;
                            core::panicking::panic_fmt(&v1, &g_72eda8); /* do not return */
                        }
                    }
                    a1.finish_split();
                    if (a7[2] >= v67)
                    {
                        v0->field_0 = 13;
                        return a0;
                    }
                    v68 = v0->field_8.to_vec(a2, a3);
                    v0->field_0 = 1;
                    return v68;
                }
                v7 = v32;
                v55 = v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v30);
                *((int128_t *)&v1) = *((int128_t *)&v30);
                (unsigned long long)v14.add_line_to_buffer(a7, v26, &v3);
                if (v13 == 0x8000000000000000)
                {
                    ::0x58f000::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&(unsigned long long)v14);
                    v4 = v1;
                }
                else
                {
                    v55 = v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v14;
                    *((int128_t *)&v1) = (int128_t)v14;
                    v7 = v18;
                    v59 = a1.writeln(v6, v18);
                    if (v59)
                    {
                        v0->field_0 = 0;
                        *((unsigned long long *)&v0->field_8) = v59;
                        v53 = &v3;
                        return (unsigned long long)::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v3);
                    }
                    ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v3);
                    v4 = v1;
                }
                (char)v25.next(a7);
                v54 = v27;
            } while (v27 != 9223372036854775809);
        }
        core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>>(&(char)v25);
        v5.drain(a7);
        if (v5.next())
        {
            while (v60->field_8 != 9223372036854775809)
            {
                *((uint128_t *)&v18) = v60->field_10;
                v13 = v60->field_0;
                v15 = v60->field_8;
                (char)v25.call_once(&v13);
                *((int128_t *)&v22) = *((int128_t *)&v27);
                if (v26 == 0x8000000000000000)
                    break;
                v13 = v26;
                *((int128_t *)&v16) = (int128_t)v22;
                v61 = a1.writeln(v15, v19);
                if (v61)
                {
                    v0->field_0 = 0;
                    *((unsigned long long *)&v0->field_8) = v61;
                    ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v13);
                    return core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>::drain_buffer::{{closure}}>>(&(char)v2);
                }
                ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v13);
                if (!v5.next())
                    break;
            }
        }
        core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>::drain_buffer::{{closure}}>>(&v5);
        a1.finish_split();
        v63 = v0->field_8.to_vec(a2, a3);
        v0->field_0 = 3;
        return v63;
    }
}
