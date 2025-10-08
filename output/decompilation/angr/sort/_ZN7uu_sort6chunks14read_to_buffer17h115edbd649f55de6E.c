long long uu_sort::chunks::read_to_buffer(unsigned long a0, unsigned long long a1[2], unsigned long long a2[3], unsigned long long a3, char a4)
{
    void* v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    char v4;  // [bp-0x70], Other Possible Types: unsigned int
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    char v8;  // [bp-0x48]
    char v9;  // [bp-0x38]
    unsigned long long v11;  // r14
    unsigned long long v12;  // rbx
    unsigned long v13;  // r14
    unsigned long long v14;  // rax
    unsigned long long v16;  // rax
    char v17;  // al
    unsigned long long v18;  // rbx
    unsigned long v20;  // rdx
    unsigned long long v21;  // rsi
    unsigned long long v22;  // rdi
    unsigned long long v23;  // rax

    v11 = a2[2] - a3;
    if (a2[2] < a3)
        core::slice::index::slice_start_index_len_fail(a3, a2[2], &g_58c6e8); /* do not return */
    v12 = a3 + a2[1];
    v6 = &g_58c600;
    while (true)
    {
        v13 = v11;
        while (true)
        {
            while (true)
            {
                while (true)
                {
                    v7 = (unsigned long long)a1[0].read(a1[1], v12, v13);
                    if (!((char)v7 & 1))
                        break;
                    if ((char)v20.kind() != 35)
                    {
                        v5 = v20;
                        v8.spec_to_string(&v5);
                        v4 = 2;
                        memcpy(&v1, &v8, 16);
                        v3 = *((long long *)&v9);
                        *((double *)&v0[8]) = v1.new();
                        *((unsigned long long **)&v0[16]) = &g_58c680;
                        *((unsigned long long *)v0) = 1;
                        return (unsigned long long)core::ptr::drop_in_place<std::io::error::Error>(&v5);
                    }
                    v1 = v20;
                    core::ptr::drop_in_place<std::io::error::Error>(&v1);
                }
                if (!v20)
                    break;
                v14 = v13;
                if (v14 < v20)
                    core::slice::index::slice_start_index_len_fail(v20, v13, &g_58c648); /* do not return */
                v12 += v20;
                v13 = v14 - v20;
            }
            if (v13)
                break;
            v16 = a2[1];
            v1 = v16;
            v2 = v16;
            v3 = a2[2] + v16;
            v4 = a4;
            v17 = v1.next_back(&v4);
            if (v1.next_back(&v4) != 1)
            {
                v18 = a2[2];
                a2.resize(v18 + 0x2800);
                if (a2[2] < v18)
                    core::slice::index::slice_start_index_len_fail(v18, a2[2], &g_58c5e8); /* do not return */
                v12 = v18 + a2[1];
                v13 = a2[2] - v18;
            }
            else if ((v17 & 1))
            {
                *((unsigned long *)&v0[8]) = v20 + 1;
                *((char *)&v0[16]) = 1;
                *((unsigned long long *)v0) = 0;
                return a0;
            }
            else
            {
                core::option::unwrap_failed(&g_58c5d0); /* do not return */
            }
        }
        if (v11 != v13)
        {
            v21 = a2[2];
            v18 = v21 - v13;
            v22 = v18 - 1;
            if (v22 >= v21)
                core::panicking::panic_bounds_check(v22, v21, 0x58c600); /* do not return */
            if (*((char *)(a2[1] + v22)) != a4)
            {
                if (v21 >= v13)
                {
                    *((char *)(a2[1] + v18)) = a4;
                    v13 -= 1;
                    v21 = a2[2];
                    v18 = v21 - v13;
                }
                else
                {
                    v6 = &g_58c618;
                    v6 = &g_58c618;
                    core::panicking::panic_bounds_check(v18, v21, &g_58c618); /* do not return */
                }
            }
            v11 = v13;
            if (v13 > v21)
                core::slice::index::slice_start_index_len_fail(v18, v21, &g_58c630); /* do not return */
            v12 = v18 + a2[1];
        }
        v1.next();
        if (v1 == 2)
        {
            core::ptr::drop_in_place<core::option::Option<core::result::Result<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v1);
            v23 = a2[2] - v11;
            *((unsigned long long *)&v0[8]) = v23;
            *((char *)&v0[16]) = 0;
            *((unsigned long long *)v0) = 0;
            return v23;
        }
        else if (!((char)v1 & 1))
        {
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(a1[0], a1[1]);
            a1[0] = v2;
            a1[1] = v3;
        }
        else
        {
            *((unsigned long long *)&v0[8]) = v2;
            *((unsigned long long *)&v0[16]) = v3;
            *((unsigned long long *)v0) = 1;
            return a0;
        }
    }
}
