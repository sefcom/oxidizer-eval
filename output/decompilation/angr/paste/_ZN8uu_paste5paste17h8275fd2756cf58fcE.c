long long uu_paste::paste(struct_0 *a0, unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    char v0;  // [bp-0x14d]
    unsigned int v1;  // [bp-0x14c]
    unsigned long long v2;  // [bp-0x148]
    unsigned long long v3;  // [bp-0x140]
    void* v4;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x130]
    void* v6;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x118]
    unsigned int v8;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned int v9;  // [bp-0x110]
    void* v10;  // [bp-0x108]
    char v11;  // [bp-0x100], Other Possible Types: unsigned long long
    char *v12;  // [bp-0xf8], Other Possible Types: unsigned long long
    int v13;  // [bp-0xf0]
    unsigned long long v14;  // [bp-0xe0]
    void* v15;  // [bp-0xd0]
    struct_0 *v16;  // [bp-0xc8]
    unsigned long long v18;  // [bp-0xc0]
    unsigned long long v20;  // [bp-0xb0]
    unsigned long long v21;  // [bp-0xa8]
    unsigned long long v22;  // [bp-0xa0]
    int v23;  // [bp-0x98], Other Possible Types: void*
    int v24;  // [bp-0x88], Other Possible Types: char, unsigned long long
    unsigned int v25;  // [bp-0x84]
    unsigned long long v26;  // [bp-0x80]
    char v27;  // [bp-0x78]
    int v28;  // [bp-0x68]
    unsigned long long v29;  // [bp-0x38]
    uint256_t v31;  // ymm0
    uint256_t v32;  // ymm0
    unsigned long long *v33;  // rax
    uint256_t v34;  // ymm0
    int v35;  // xmm0
    uint256_t v36;  // ymm0
    unsigned long long v37;  // rbp
    unsigned long v38;  // rbx
    unsigned long long v39;  // rdx
    char *v40;  // r14
    char v41;  // r13b
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax
    char *v46;  // r14
    unsigned long long v47;  // rdx
    void* v48;  // rbx
    char *v49;  // rax
    char *v50;  // r15
    unsigned long long v51;  // rsi
    char *v52;  // rax
    unsigned long long v53;  // rax
    unsigned long long v54;  // rax
    unsigned long long v56;  // rax
    unsigned long long v58;  // [bp-0xb8]

    uu_paste::parse_delimiters(&(char)v24, a2, a3);
    v2 = v26;
    if ((v24 & 1))
    {
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(a0);
        return v2;
    }
    v9 = a1;
    v1 = a4;
    v7 = *((long long *)&v27);
    v10 = 0;
    v16 = a0;
    v14 = a0->field_10.with_capacity_in(8, 48, &g_570088);
    v15 = 0;
    v11.into_iter(a0);
    (char)v18.next(&v11);
    if (!((char)(((0 ^ v18) & (0 ^ -(v18))) >> 63)))
    {
        do
        {
            v6 = v20;
            v32 = v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v18);
            memcpy(&v4, &(char)v18, 16);
            if ((char)v5.equal(v6, "-zero-terminatedpaste-help-zero-terminatedsrc/uu/paste/src/paste.rs", 1))
            {
                v33 = v10.get_or_try_init();
                *(v33).inc_strong();
                v34 = v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | *(v33);
                v35 = (unsigned long long)v34 CONCAT 0;
                v36 = v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35;
                continue;
            }
            else
            {
                (char)v24.open(v5, v6);
                if (!(v24 & 1))
                {
                    (char)v24.with_capacity(0x2000, v25);
                    v35 = *((int128_t *)&v24);
                    v36 = v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v24);
                    memcpy(&v21, &v27, 16);
                    v23 = v28;
                }
                else
                {
                    v37 = v26.from();
                    ::0x498580::core::ptr::drop_in_place<alloc::string::String>(&v4);
                    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v11);
                    goto LABEL_49a5fb;
                }
            }
            v24 = v35;
            v31 = v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v21);
            v28 = v23;
            memcpy(&v27, &v21, 16);
            v14.push(&(char)v24);
            ::0x498580::core::ptr::drop_in_place<alloc::string::String>(&v4);
            (char)v18.next(&v11);
        } while (v18 != 0x8000000000000000);
        goto LABEL_49a5fb;
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v11);
    v24 = std::io::stdio::stdout();
    v3 = (char)v24.lock();
    v38 = v1;
    v0 = v38;
    (char)v24.new(v2, v7);
    v4 = 0;
    v5 = 1;
    v6 = 0;
    if ((char)v8)
    {
        v11 = v14.into_iter();
        v12 = v39;
        v40 = &v11;
        v41 = v38;
        while (true)
        {
LABEL_49a2c5:
            if (!v40.next())
                break;
            v6 = 0;
            while (true)
            {
                v21.read_until(v42, v41, &v4);
                v37 = v21;
                if (v21)
                    break;
                if (v22)
                {
                    uu_paste::remove_trailing_line_ending_byte(v41, &v4);
                    (char)v24.write_delimiter(&v4);
                }
                else
                {
                    v24.remove_trailing_delimiter(*((long long *)&v27), &v4);
                    v40 = &v11;
                    v43 = v3.write_all(v5, 0);
                    if (!v43)
                    {
                        v44 = v3.write_all(&v0, 1);
                        if (v44)
                        {
                            v45 = v44.from();
                            goto LABEL_49a641;
                        }
                        goto LABEL_49a2c5;
                    }
                    else
                    {
                        v45 = v43.from();
LABEL_49a641:
                        v37 = v45;
                        break;
                    }
                }
            }
        }
        goto LABEL_49a586;
    }
    else
    {
        v11.from_elem(v15);
        v46 = &v4;
        v8 = &g_5700b8;
        v1 = v38;
        v29 = v15;
        while (true)
        {
            v6 = 0;
            v21 = v47;
            v22 = v15 * 48 + v47;
            v23 = 0;
            v48 = 0;
            while (true)
            {
                v49 = v21.next();
                if (!v47)
                    break;
                v50 = v49;
                v51 = (long long)v13;
                if (v49 >= (long long)v13)
                    core::panicking::panic_bounds_check(v50, v51, 0x5700b8); /* do not return */
                if (*((char *)(v12 + v50)))
                {
                    v48 += 1;
                }
                else
                {
                    (char)v18.read_until(v47, v1, v46);
                    v52 = v46;
                    v37 = v18;
                    if (!(!v18))
                        goto LABEL_49a5dd;
                    if (v58)
                    {
                        v46 = v52;
                        uu_paste::remove_trailing_line_ending_byte(v1, v52);
                    }
                    else if (v50 < (long long)v13)
                    {
                        v46 = v52;
                        *((char *)(v12 + v50)) = 1;
                        v48 += 1;
                    }
                    else
                    {
                        v8 = &g_5700d0;
                        v8 = &g_5700d0;
                        core::panicking::panic_bounds_check(v50, (long long)v13, &g_5700d0); /* do not return */
                    }
                }
                (char)v24.write_delimiter(v46);
            }
            if (v48 == v29)
            {
                core::ptr::drop_in_place<alloc::vec::Vec<bool>>(&v11);
LABEL_49a586:
                ::0x4985c0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v4);
                core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v3);
                v14.drop_in_place<alloc::vec::Vec<uu_paste::InputSource>>();
                core::ptr::drop_in_place<core::cell::once::OnceCell<alloc::rc::Rc<core::cell::RefCell<std::io::stdio::Stdin>>>>(&v10);
                core::ptr::drop_in_place<alloc::boxed::Box<[alloc::boxed::Box<[u8]>]>>(v2, v7);
                return 0;
            }
            v24.remove_trailing_delimiter(*((long long *)&v27), v46);
            v53 = v3.write_all(v5, 0);
            if (v53)
            {
                v56 = v53.from();
                goto LABEL_49a5d7;
            }
            if (v3.write_all(&v0, 1))
                break;
            (char)v24.reset_to_first_delimiter();
        }
        v56 = v54.from();
LABEL_49a5d7:
        v37 = v56;
LABEL_49a5dd:
        core::ptr::drop_in_place<alloc::vec::Vec<bool>>(&v11);
    }
    ::0x4985c0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v4);
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v3);
LABEL_49a5fb:
    v14.drop_in_place<alloc::vec::Vec<uu_paste::InputSource>>();
    core::ptr::drop_in_place<core::cell::once::OnceCell<alloc::rc::Rc<core::cell::RefCell<std::io::stdio::Stdin>>>>(&v10);
    core::ptr::drop_in_place<alloc::boxed::Box<[alloc::boxed::Box<[u8]>]>>(v2, v7);
    return v37;
}
