void fish::common::unescape_string_url(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    void* v2;  // [bp-0x58]
    struct_0 *v3;  // [bp-0x50]
    int v4;  // [bp-0x48], Other Possible Types: char
    char v5;  // [bp-0x38]
    unsigned long v7;  // r12
    unsigned long long v8;  // cc_ndep
    unsigned int v9;  // eax
    unsigned long long v10;  // cc_op
    unsigned long v11;  // cc_dep1
    unsigned long long v12;  // cc_dep2
    unsigned long v13;  // rbx
    unsigned int v14;  // eax
    unsigned long v15;  // r12
    unsigned int v16;  // edx
    unsigned int v17;  // ebx
    unsigned long v18;  // r12
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rdx

    v1 = a2.with_capacity_in(1, 1, &g_14c0a78);
    v2 = 0;
    if (a2)
    {
        v7 = 0;
        v0 = &g_14c0aa8;
        do
        {
            v9 = a1.char_at(a2, v7);
            if (v9 > 127)
            {
                *(a0) = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v16);
                return;
            }
            v10 = 7;
            v11 = v9;
            v12 = 37;
            if (v9 == 37)
            {
                v13 = v7 + 1;
                v14 = a1.char_at(a2, v13);
                v10 = 7;
                v11 = v14;
                v12 = 37;
                if (v14 == 37)
                {
                    v1.push(37, &g_14c0a90);
                    v18 = v13;
                }
                else if (!v14)
                {
                    *(a0) = 0x8000000000000000;
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v16);
                    return;
                }
                else if (((char)::0x128b6d0::core::char::methods::<impl char>::to_digit(v14, 16) & 1))
                {
                    v15 = v7 + 2;
                    if ((char)__CFADD__(v7, 2))
                    {
                        v0 = &g_14c0aa8;
                        core::panicking::panic_const::panic_const_add_overflow(&g_14c0aa8); /* do not return */
                    }
                    else if (!((char)::0x128b6d0::core::char::methods::<impl char>::to_digit((unsigned int)a1.char_at(a2, v15), 16) & 1))
                    {
                        *(a0) = 0x8000000000000000;
                        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v16);
                        return;
                    }
                    else if (v16 <= 268435455)
                    {
                        v17 = v16 * 16;
                        v10 = 3;
                        v11 = v17;
                        v12 = v16;
                        if ((char)__CFADD__(v17, v16))
                        {
                            v0 = &g_14c0ad8;
                            core::panicking::panic_const::panic_const_add_overflow(0x14c0ad8); /* do not return */
                        }
                        v1.push(v17 + v16 & 4294967295, &g_14c0af0);
                        v18 = v15;
                    }
                    else
                    {
                        core::panicking::panic_const::panic_const_mul_overflow(&g_14c0ac0); /* do not return */
                    }
                }
                else
                {
                    *(a0) = 0x8000000000000000;
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v16);
                    return;
                }
            }
            else
            {
                v1.push(v9, &g_14c0b08);
                v18 = v7;
            }
            v8 = _ccall(v10, v11, v12, v8);
            v7 = v18 + 1;
            if ((char)_ccall(4, 24, v18 + 1, 0, _ccall(v10, v11, v12, v8)))
            {
                v0 = &g_14c0b20;
                core::panicking::panic_const::panic_const_add_overflow(0x14c0ad8); /* do not return */
            }
        } while (v7 < a2);
        v20 = v16;
    }
    else
    {
        v20 = v19;
    }
    fish::common::str2wcstring(&v4, v20, 0);
    v3->field_10 = *((long long *)&v5);
    *((void*)&v3->field_0) = v4;
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v16);
    return;
}
