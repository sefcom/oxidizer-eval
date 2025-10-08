long long uu_csplit::SplitWriter::do_to_match(unsigned long a0, struct_1 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned int a6, unsigned long long a7[7])
{
    void* v0;  // [bp-0x1a8]
    int v1;  // [bp-0x198], Other Possible Types: char, unsigned int, unsigned long long
    unsigned long v2;  // [bp-0x198]
    struct_0 *v3;  // [bp-0x198]
    struct_0 *v4;  // [bp-0x198]
    unsigned long v5;  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x188]
    int v7;  // [bp-0x188]
    int v8;  // [bp-0x180], Other Possible Types: void*
    unsigned long long v9;  // [bp-0x178]
    char v10;  // [bp-0x170]
    char *v11;  // [bp-0x160], Other Possible Types: unsigned long long
    int v12;  // [bp-0x158]
    unsigned long long v13;  // [bp-0x158]
    int v14;  // [bp-0x150], Other Possible Types: unsigned long long
    int v15;  // [bp-0x150], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x150]
    unsigned long long v17;  // [bp-0x148]
    void* v18;  // [bp-0x148]
    char v19;  // [bp-0x138]
    int v20;  // [bp-0x128]
    unsigned long long v21;  // [bp-0x120]
    unsigned long long v22;  // [bp-0x118]
    void* v23;  // [bp-0x110]
    unsigned long v24;  // [bp-0xf8]
    unsigned long long v25;  // [bp-0xe8]
    unsigned long long v26;  // [bp-0xe0]
    void* v27;  // [bp-0xd8]
    unsigned long long v28;  // [bp-0xd0]
    unsigned long long v29;  // [bp-0xc8]
    void* v30;  // [bp-0xc0]
    int v31;  // [bp-0xb8], Other Possible Types: char
    unsigned long v32;  // [bp-0xa0]
    int v33;  // [bp-0x98]
    unsigned long v34;  // [bp-0x88]
    int v35;  // [bp-0x80]
    unsigned long v36;  // [bp-0x70]
    int v37;  // [bp-0x68]
    int v38;  // [bp-0x58], Other Possible Types: char
    int v39;  // [bp-0x48]
    char v40;  // [bp-0x38]
    struct_0 *v41;  // rax
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax
    unsigned long long v44;  // r13
    void* v45;  // rbx
    unsigned long long v46;  // r14
    unsigned long long v47;  // rax
    unsigned long long v48;  // rdx
    unsigned long long v49;  // rax
    char v50;  // r12b
    char v51;  // bpl
    unsigned int v52;  // r13d
    unsigned long long v53;  // rax
    char *v54;  // rdi
    unsigned long long v55;  // rax
    unsigned long long v56;  // r13
    void* v57;  // r14
    unsigned long long v58;  // rbx
    unsigned long long v59;  // rax
    unsigned long long v60;  // rdx
    unsigned long long v61;  // rax
    struct_0 *v62;  // rax
    unsigned long long v64;  // rax
    struct_0 *v65;  // rax
    unsigned long long v66;  // rax
    unsigned long v67;  // r13
    unsigned long long v68;  // rax
    unsigned long long v69;  // rax

    v11 = a5;
    if (a6 >= 0)
    {
        v1.drain(a7);
        if (v3 != v5)
        {
            while (true)
            {
                v41 = v3;
                v4 = &v41->padding_20;
                if (v41->field_8 == 9223372036854775809)
                    break;
                v32 = v41->field_8;
                *((uint128_t *)&v33) = v41->field_10;
                v13.unwrap(&v32, &g_641c70);
                *((int128_t *)&v20) = *((int128_t *)&v16);
                if (v13 == 0x8000000000000000)
                    break;
                *((int128_t *)&v14) = (int128_t)v20;
                v42 = a1.writeln(v16, v17);
                if (v42)
                {
                    *((unsigned long long *)v0) = 0;
                    *((unsigned long long *)&v0[8]) = v42;
                    core::ptr::drop_in_place<alloc::string::String>(&v13);
                    return core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>::drain_buffer::{{closure}}>>(&v4);
                }
                core::ptr::drop_in_place<alloc::string::String>(&v13);
                v3 = v4;
                if (v3 == v5)
                    break;
            }
        }
        core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>::drain_buffer::{{closure}}>>(&v1);
        a7[6] = 1;
        (char)v20.next(a7);
        v43 = v21;
        if (v21 != 9223372036854775809)
        {
            do
            {
                v44 = v22;
                v45 = v23;
                if (v43 == 0x8000000000000000)
                {
                    *((unsigned long long *)v0) = 12;
                    *((unsigned long long *)&v0[8]) = v44;
                    *((void* *)&v0[16]) = v45;
                    return a0;
                }
                v46 = (long long)v20;
                v28 = v43;
                v29 = v44;
                v30 = v45;
                v47 = "\r\nshould be big enough to hold every lines".strip_suffix_of(2, v44, v45);
                if (!v47)
                    v47 = uu_csplit::SplitWriter::do_to_match::{{closure}}(v44, v45);
                v1 = 0;
                v5 = v47;
                v6 = v48;
                v8 = 0;
                v9 = v48;
                v10 = 1;
                v1.set_span(v48);
                memcpy(&v19, &v9, 16);
                memcpy(&v14, &v6, 16);
                *((int128_t *)&v12) = *((int128_t *)&v4);
                v1.search_half(a4, v11, &(unsigned long long)v12);
                if (v2)
                {
                    v11 = &v28;
                    v50 = *((char *)(a1->field_20 + 99));
                    if (v50)
                    {
                        v51 = 1;
                        if (a6)
                        {
                            v49 = a1.writeln(v44, v45);
                        }
                        else
                        {
                            v50 = 0;
                            goto LABEL_51777a;
                        }
                    }
                    else if (a6)
                    {
                        v49 = a1.writeln(v44, v45);
                    }
                    else
                    {
                        v1.add_line_to_buffer(a7, v46, &v28);
                        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v1);
                        v50 = 0;
                        if (v2 != 0x8000000000000000)
                        {
                            v1 = &g_641bf0;
                            v5 = 1;
                            v6 = 8;
                            *((uint128_t *)&v8) = 0;
                            core::panicking::panic_fmt(&v1, &g_641c88); /* do not return */
                        }
LABEL_51777a:
                        a1.finish_split();
                        if (v50)
                        {
                            v1.next(a7);
                            core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>>(&v1);
                        }
                        *((unsigned long long *)v0) = 13;
                        if (!v51)
                            return a0;
                        v54 = &v28;
                        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v28);
                    }
                    if (v49)
                    {
                        *((unsigned long long *)v0) = 0;
                        *((unsigned long long *)&v0[8]) = v49;
                        v54 = &v28;
                        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v28);
                    }
                    v51 = 1;
                    if (a6 >= 2)
                    {
                        v52 = a6 + 1;
                        do
                        {
                            v1.next(a7);
                            if (v5 == 9223372036854775809)
                            {
                                a1.finish_split();
                                v13.to_vec(a2, a3);
                                *((unsigned long long *)&v0[24]) = v17;
                                *((int128_t *)&v0[8]) = *((int128_t *)&v13);
                                *((unsigned long long *)v0) = 1;
                                v54 = &v28;
                                return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v28);
                            }
                            if (v5 == 0x8000000000000000)
                            {
                                *((unsigned long long *)v0) = 12;
                                *((unsigned long long *)&v0[8]) = v15;
                                *((void* *)&v0[16]) = v18;
                                v54 = &v28;
                                return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v28);
                            }
                            v13 = v5;
                            v15 = v6;
                            v18 = v8;
                            v53 = a1.writeln(v15, v18);
                            if (v53)
                            {
                                *((unsigned long long *)v0) = 0;
                                *((unsigned long long *)&v0[8]) = v53;
                                core::ptr::drop_in_place<alloc::string::String>(&v13);
                                v54 = &v28;
                                return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v28);
                            }
                            core::ptr::drop_in_place<alloc::string::String>(&v13);
                            v52 -= 1;
                        } while (v52 > 2);
                    }
                    goto LABEL_51777a;
                }
                v49 = a1.writeln(v44, v45);
                if (v49)
                {
                    *((unsigned long long *)v0) = 0;
                    *((unsigned long long *)&v0[8]) = v49;
                    v54 = &v28;
                    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v28);
                }
                core::ptr::drop_in_place<alloc::string::String>(&v28);
                (char)v20.next(a7);
                v43 = v21;
            } while (v21 != 9223372036854775809);
        }
        core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>>(&(char)v20);
        a1.finish_split();
        v64 = v0 + 8.to_vec(a2, a3);
        *((unsigned long long *)v0) = 3;
        return v64;
    }
    else
    {
        v24 = -(a6);
        a7[6] = v24;
        (char)v20.next(a7);
        v55 = v21;
        if (v21 != 9223372036854775809)
        {
            do
            {
                v56 = v22;
                v57 = v23;
                if (v55 == 0x8000000000000000)
                {
                    *((unsigned long long *)v0) = 12;
                    *((unsigned long long *)&v0[8]) = v56;
                    *((void* *)&v0[16]) = v57;
                    return v55;
                }
                v58 = (long long)v20;
                v25 = v55;
                v26 = v56;
                v27 = v57;
                v59 = "\r\nshould be big enough to hold every lines".strip_suffix_of(2, v56, v57);
                if (!v59)
                    v59 = uu_csplit::SplitWriter::do_to_match::{{closure}}(v56, v57);
                v1 = 0;
                v5 = v59;
                v6 = v60;
                v8 = 0;
                v9 = v60;
                v10 = 1;
                v1.set_span(v60);
                memcpy(&v19, &v9, 16);
                memcpy(&v14, &v6, 16);
                *((int128_t *)&v12) = *((int128_t *)&v1);
                v1.search_half(a4, v11, &(unsigned long long)v12);
                if (v4)
                {
                    v11 = &v25;
                    v38.shrink_buffer_to_size(a7);
                    v9 = *((long long *)&v40);
                    v7 = v39;
                    v1 = v38;
                    v65 = v4;
                    if (v4 != v5)
                    {
                        while (true)
                        {
                            v4 = &v65->padding_20;
                            if (v65->field_8 == 9223372036854775809)
                                break;
                            v34 = v65->field_8;
                            *((uint128_t *)&v35) = v65->field_10;
                            v13.unwrap(&v34, &g_641c40);
                            memcpy(&v31, &v14, 16);
                            if (v13 == 0x8000000000000000)
                                break;
                            v15 = v31;
                            v66 = a1.writeln(v14, v17);
                            if (v66)
                            {
                                *((unsigned long long *)v0) = 0;
                                *((unsigned long long *)&v0[8]) = v66;
                                core::ptr::drop_in_place<alloc::string::String>(&v13);
                                core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>::drain_buffer::{{closure}}>>(&v4);
                                v54 = &v25;
                                return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v25);
                            }
                            core::ptr::drop_in_place<alloc::string::String>(&v13);
                            v65 = v4;
                            if (v4 == v5)
                                break;
                        }
                    }
                    core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>::drain_buffer::{{closure}}>>(&v4);
                    if (*((char *)(a1->field_20 + 99)))
                    {
                        v4.add_line_to_buffer(a7, v58, &v25);
                        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v4);
                        v67 = v24;
                    }
                    else
                    {
                        v67 = v24;
                        a7[6] = v24 + 1;
                        v4.add_line_to_buffer(a7, v58, &v25);
                        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v4);
                        if (v4 != 0x8000000000000000)
                        {
                            v1 = &g_641c30;
                            v5 = 1;
                            v6 = 8;
                            *((uint128_t *)&v8) = 0;
                            core::panicking::panic_fmt(&v1, &g_641c58); /* do not return */
                        }
                    }
                    v68 = a1.finish_split();
                    if (a7[2] >= v67)
                    {
                        *((unsigned long long *)v0) = 13;
                        return v68;
                    }
                    v69 = v0 + 8.to_vec(a2, a3);
                    *((unsigned long long *)v0) = 1;
                    return v69;
                }
                v1.add_line_to_buffer(a7, v58, &v25);
                if (v4 == 0x8000000000000000)
                {
                    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v1);
                }
                else
                {
                    v61 = a1.writeln(v5, v6);
                    if (v61)
                    {
                        *((unsigned long long *)v0) = 0;
                        *((unsigned long long *)&v0[8]) = v61;
                        v54 = &v1;
                        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v1);
                    }
                    core::ptr::drop_in_place<alloc::string::String>(&v1);
                }
                (char)v20.next(a7);
                v55 = v21;
            } while (v21 != 9223372036854775809);
        }
        core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>>(&(char)v20);
        v1.drain(a7);
        v62 = v4;
        if (v4 != v5)
        {
            while (true)
            {
                v4 = &v62->padding_20;
                if (v62->field_8 == 9223372036854775809)
                    break;
                v36 = v62->field_8;
                *((uint128_t *)&v37) = v62->field_10;
                v13.unwrap(&v36, &g_641c70);
                *((int128_t *)&v20) = *((int128_t *)&v14);
                if (v13 == 0x8000000000000000)
                    break;
                *((int128_t *)&v15) = (int128_t)v20;
                v42 = a1.writeln(v14, v17);
                if (v42)
                {
                    *((unsigned long long *)v0) = 0;
                    *((unsigned long long *)&v0[8]) = v42;
                    core::ptr::drop_in_place<alloc::string::String>(&v13);
                    return core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>::drain_buffer::{{closure}}>>(&v4);
                }
                core::ptr::drop_in_place<alloc::string::String>(&v13);
                v62 = v4;
                if (v4 == v5)
                    break;
            }
        }
        core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>::drain_buffer::{{closure}}>>(&v4);
        a1.finish_split();
        v64 = v0 + 8.to_vec(a2, a3);
        *((unsigned long long *)v0) = 3;
        return v64;
    }
}
