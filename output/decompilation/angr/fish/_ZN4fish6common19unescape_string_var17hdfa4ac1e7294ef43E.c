void fish::common::unescape_string_var(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    void* v2;  // [bp-0x58]
    struct_0 *v3;  // [bp-0x50]
    int v4;  // [bp-0x48], Other Possible Types: char
    char v5;  // [bp-0x38]
    void* v7;  // r13
    unsigned long long v8;  // cc_ndep
    char v9;  // r12b
    unsigned int v10;  // eax
    unsigned long long v11;  // cc_op
    unsigned long v12;  // cc_dep1
    unsigned long long v13;  // cc_dep2
    void* v14;  // rbx
    unsigned int v15;  // eax
    unsigned int v16;  // ecx
    unsigned int v17;  // edx
    void* v18;  // r13
    void* v19;  // r13
    unsigned int v20;  // edx
    unsigned int v21;  // ebx
    unsigned long long v23;  // rdx

    v1 = a2.with_capacity_in(1, 1, &g_14c0b38);
    v2 = 0;
    if (a2)
    {
        v0 = &g_14c0b68;
        v7 = 0;
        do
        {
            v10 = a1.char_at(a2, v7);
            if (v10 > 127)
            {
                *(a0) = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v23);
                return;
            }
            v11 = 7;
            v12 = v10;
            v13 = 95;
            if (v10 == 95)
            {
                v14 = v7 + 1;
                v15 = a1.char_at(a2, v14);
                v11 = 7;
                v12 = v15;
                v13 = 95;
                if (v15 == 95)
                {
                    v1.push(95, &g_14c0b50);
                    v18 = v14;
                    continue;
                }
                else if (v15)
                {
                    v16 = v15 - 48;
                    v17 = v15 - 65;
                    v11 = 5;
                    v12 = v17 < 6 | v16 < 10;
                    v13 = 1;
                    v18 = v7;
                    if ((v17 < 6 | v16 < 10) == 1)
                    {
                        if (((char)::0x128b6d0::core::char::methods::<impl char>::to_digit(v15, 16) & 1))
                        {
                            v19 = v7 + 2;
                            if ((char)__CFADD__(v7, 2))
                            {
                                v0 = &g_14c0b68;
                                core::panicking::panic_const::panic_const_add_overflow(&g_14c0b68); /* do not return */
                            }
                            else if (!((char)::0x128b6d0::core::char::methods::<impl char>::to_digit((unsigned int)a1.char_at(a2, v19), 16) & 1))
                            {
                                *(a0) = 0x8000000000000000;
                                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v23);
                                return;
                            }
                            else if (v20 <= 268435455)
                            {
                                v21 = v20 * 16;
                                v11 = 3;
                                v12 = v21;
                                v13 = v20;
                                if ((char)__CFADD__(v21, v20))
                                {
                                    v0 = &g_14c0b98;
                                    core::panicking::panic_const::panic_const_add_overflow(0x14c0b98); /* do not return */
                                }
                                v9 = 1;
                                v1.push(v21 + v20 & 4294967295, &g_14c0bb0);
                                v18 = v19;
                            }
                            else
                            {
                                core::panicking::panic_const::panic_const_mul_overflow(&g_14c0b80); /* do not return */
                            }
                        }
                        else
                        {
                            *(a0) = 0x8000000000000000;
                            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v23);
                            return;
                        }
                    }
                }
                else
                {
                    if (!(v9 & 1))
                    {
                        *(a0) = 0x8000000000000000;
                        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v23);
                        return;
                    }
                    break;
                }
            }
            else
            {
                v1.push(v10, &g_14c0bc8);
                v18 = v7;
            }
            v8 = _ccall(v11, v12, v13, v8);
            v7 = v18 + 1;
            if ((char)_ccall(4, 24, v18 + 1, 0, _ccall(v11, v12, v13, v8)))
            {
                v0 = &g_14c0be0;
                core::panicking::panic_const::panic_const_add_overflow(0x14c0b98); /* do not return */
            }
        } while (v7 < a2);
    }
    fish::common::str2wcstring(&v4, v23, 0);
    v3->field_10 = *((long long *)&v5);
    *((void*)&v3->field_0) = v4;
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v23);
    return;
}
