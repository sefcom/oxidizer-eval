long long uu_paste::paste(struct_0 *a0, unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    char v0;  // [bp-0x135]
    unsigned int v1;  // [bp-0x134]
    void* v2;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x130]
    unsigned long long v4;  // [bp-0x128]
    void* v5;  // [bp-0x120], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x118]
    void* v7;  // [bp-0x110], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v8;  // [bp-0x108]
    unsigned long long v9;  // [bp-0x100]
    unsigned long long v10;  // [bp-0xf8]
    char v11;  // [bp-0xf0], Other Possible Types: unsigned long long
    char *v12;  // [bp-0xe8]
    int v13;  // [bp-0xe0]
    unsigned long long v14;  // [bp-0xd0]
    void* v15;  // [bp-0xc0]
    unsigned long long v16;  // [bp-0xb8]
    struct_0 *v17;  // [bp-0xb0]
    unsigned long long v18;  // [bp-0xa8]
    unsigned long long v19;  // [bp-0xa0]
    int v20;  // [bp-0x98], Other Possible Types: void*
    int v21;  // [bp-0x88], Other Possible Types: char, unsigned long long
    unsigned int v22;  // [bp-0x84]
    unsigned long long v23;  // [bp-0x80]
    char v24;  // [bp-0x78]
    int v25;  // [bp-0x68]
    unsigned long long v26;  // [bp-0x40]
    char v27;  // [bp-0x38]
    uint256_t v29;  // ymm0
    unsigned long long v30;  // r14
    uint256_t v31;  // ymm0
    int v32;  // xmm0
    uint256_t v33;  // ymm0
    unsigned long long v34;  // rbx
    unsigned long v35;  // rbx
    void* v36;  // r15
    unsigned long v37;  // rdx
    unsigned long v38;  // r12
    unsigned long long v39;  // r15
    char v40;  // r13b
    unsigned long v41;  // r14
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax
    unsigned long long v44;  // rax
    unsigned long long v45;  // rdx
    void* v46;  // r14
    char *v47;  // rbx
    char *v48;  // rax
    char *v49;  // r12
    unsigned long long v50;  // rsi
    unsigned long long v51;  // rax
    unsigned long long v52;  // rax
    unsigned long long v54;  // rax

    uu_paste::parse_delimiters(&(char)v21, a2, a3);
    v8 = v23;
    if (*((int *)&v21) == 1)
    {
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(a0);
        return v8;
    }
    v7 = a1;
    v1 = a4;
    v10 = *((long long *)&v24);
    v6 = 0;
    v17 = a0;
    v14 = a0->field_10.with_capacity_in(8, 48, &g_4dec18);
    v15 = 0;
    v11.into_iter(a0);
    (char)v3.next(&v11);
    if (!((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63)))
    {
        v3 = v2;
        do
        {
            v30 = v3;
            if ((char)v4.equal(v5))
            {
                v6.get_or_try_init();
                v6.inc_strong();
                v31 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | (uint256_t)v6;
                v32 = (unsigned long long)v31 CONCAT 0;
                v33 = v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32;
                continue;
            }
            else
            {
                (char)v21.open(v4, v5);
                if (*((int *)&v21) != 1)
                {
                    (char)v21.with_capacity(v22);
                    v32 = *((int128_t *)&v21);
                    v33 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v21);
                    memcpy(&v18, &v24, 16);
                    v20 = v25;
                }
                else
                {
                    v34 = v23.from();
                    core::ptr::drop_in_place<alloc::string::String>(v30, v4);
                    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v11);
                    goto LABEL_456c02;
                }
            }
            v21 = v32;
            v29 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v18);
            v25 = v20;
            memcpy(&v24, &v18, 16);
            v14.push(&(char)v21);
            core::ptr::drop_in_place<alloc::string::String>(v30, v4);
            (char)v3.next(&v11);
            v3 = v2;
        } while (v3 != 0x8000000000000000);
        goto LABEL_456c02;
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v11);
    v21 = std::io::stdio::stdout();
    v9 = (char)v21.lock();
    v35 = v1;
    v0 = v35;
    v36 = v15;
    (char)v21.new(v8, v10);
    v2 = 0;
    v4 = 1;
    v5 = 0;
    if ((char)v7)
    {
        v39 = v36 * 48 + v37;
        v40 = v35;
        v7 = v39;
        while (true)
        {
LABEL_4568bd:
            v41 = v38 + 48;
            if (v38 == v39)
            {
                v41 = v38;
                if (v38 == v39)
                    break;
                goto LABEL_4568cf;
            }
            if (v38 == v39)
                break;
LABEL_4568cf:
            v5 = 0;
            while (true)
            {
                v18.read_until(v38, v40, &v2);
                v34 = v18;
                if (v18)
                    break;
                if (v19)
                {
                    uu_paste::remove_trailing_line_ending_byte(v40, &v2);
                    (char)v21.write_delimiter(&v2);
                }
                else
                {
                    v21.remove_trailing_delimiter(*((long long *)&v24), &v2);
                    v39 = v7;
                    v42 = v9.write_all(v4, 0);
                    if (!v42)
                    {
                        v43 = v9.write_all(&v0, 1);
                        v38 = v41;
                        if (v43)
                        {
                            v44 = v43.from();
                            goto LABEL_456c46;
                        }
                        goto LABEL_4568bd;
                    }
                    else
                    {
                        v44 = v42.from();
LABEL_456c46:
                        v34 = v44;
                        break;
                    }
                }
            }
        }
        goto LABEL_456b80;
    }
    else
    {
        v11.from_elem(v36);
        v16 = &g_4dec48;
        v1 = v35;
        v7 = v36;
        while (true)
        {
            v5 = 0;
            v18 = v37;
            v19 = v36 * 48 + v18;
            v20 = 0;
            v46 = 0;
            v47 = &v2;
            while (true)
            {
                v48 = v18.next();
                if (!v45)
                    break;
                v49 = v48;
                v50 = (long long)v13;
                if (v48 >= (long long)v13)
                    core::panicking::panic_bounds_check(v49, v50, 0x4dec48); /* do not return */
                if (*((char *)(v12 + v49)))
                {
                    v46 += 1;
                }
                else
                {
                    v26.read_until(v45, v1, v47);
                    v34 = v26;
                    if (v26)
                        goto LABEL_456bda;
                    if (*((long long *)&v27))
                    {
                        v47 = &v2;
                        uu_paste::remove_trailing_line_ending_byte(v1, &v2);
                    }
                    else
                    {
                        v47 = &v2;
                        if (v49 >= (long long)v13)
                        {
                            v16 = &g_4dec60;
                            v16 = &g_4dec60;
                            core::panicking::panic_bounds_check(v49, (long long)v13, &g_4dec60); /* do not return */
                        }
                        *((char *)(v12 + v49)) = 1;
                        v46 += 1;
                    }
                }
                (char)v21.write_delimiter(v47);
            }
            if (v46 == v7)
            {
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v11, v12);
LABEL_456b80:
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v2, v4);
                core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v9);
                v14.drop_in_place<alloc::vec::Vec<uu_paste::InputSource>>();
                core::ptr::drop_in_place<core::cell::once::OnceCell<alloc::rc::Rc<core::cell::RefCell<std::io::stdio::Stdin>>>>(&v6);
                core::ptr::drop_in_place<alloc::boxed::Box<[alloc::boxed::Box<[u8]>]>>(v8, v10);
                return 0;
            }
            v21.remove_trailing_delimiter(*((long long *)&v24), v47);
            v51 = v9.write_all(v4, 0);
            if (v51)
            {
                v54 = v51.from();
                goto LABEL_456bd4;
            }
            if (v9.write_all(&v0, 1))
                break;
            (char)v21.reset_to_first_delimiter();
            v36 = v15;
        }
        v54 = v52.from();
LABEL_456bd4:
        v34 = v54;
LABEL_456bda:
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v11, v12);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v2, v4);
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v9);
LABEL_456c02:
    v14.drop_in_place<alloc::vec::Vec<uu_paste::InputSource>>();
    core::ptr::drop_in_place<core::cell::once::OnceCell<alloc::rc::Rc<core::cell::RefCell<std::io::stdio::Stdin>>>>(&v6);
    core::ptr::drop_in_place<alloc::boxed::Box<[alloc::boxed::Box<[u8]>]>>(v8, v10);
    return v34;
}
