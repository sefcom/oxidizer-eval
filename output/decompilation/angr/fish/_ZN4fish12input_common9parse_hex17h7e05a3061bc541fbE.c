long long fish::input_common::parse_hex(unsigned long long *a0, char *a1, unsigned long long a2)
{
    char *v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    void* v3;  // [bp-0x50]
    char v4;  // [bp-0x48], Other Possible Types: unsigned long long
    char *v5;  // [bp-0x40]
    char v6;  // [bp-0x38]
    unsigned long long v8;  // r15
    unsigned long long v9;  // rbx
    char *v10;  // r13
    char *v11;  // r14
    unsigned long v13;  // rbp
    unsigned long v14;  // rdx
    unsigned long long v15;  // rbp
    unsigned long v16;  // rax

    v8 = a2;
    if (((char)a2 & 1))
    {
        *(a0) = 0x8000000000000000;
        return a0;
    }
    v4.from_elem(a2 >> 1, &g_14db5c0);
    if (a2)
    {
        v0 = v5;
        v9 = *((long long *)&v6);
        v10 = 1;
        v11 = 0;
        v2 = &g_14db5d8;
        v1 = &g_14db5f0;
        do
        {
            if (!((char)::0x128b6d0::core::char::methods::<impl char>::to_digit(*((char *)(a1 + v10 - 1)), 16) & 1))
            {
                *((unsigned long long *)v3) = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v4, v0);
                return v3;
            }
            if (v10 >= a2)
                core::panicking::panic_bounds_check(v10, v8, 0x14db5d8); /* do not return */
            if (!((char)::0x128b6d0::core::char::methods::<impl char>::to_digit(*((char *)(a1 + v10)), 16) & 1))
            {
                *((unsigned long long *)v3) = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v4, v0);
                return v3;
            }
            if ((unsigned int)v14 > 268435455)
                core::panicking::panic_const::panic_const_mul_overflow(&g_14db5f0); /* do not return */
            v13 = (unsigned int)v14 * 16;
            v15 = v13 + v14;
            if ((char)__CFADD__(v13, v14))
                core::panicking::panic_const::panic_const_add_overflow(0x14db5f0); /* do not return */
            0x100 <= (unsigned int)v15.unwrap(&g_14db608);
            if (v11 >= v9)
            {
                v2 = &g_14db620;
                v2 = &g_14db620;
                core::panicking::panic_bounds_check(v9, v9, &g_14db620); /* do not return */
            }
            v16 = v10 + 1;
            *((char *)(v0 + v11)) = v15;
            if ((char)__CFADD__(v16, 2))
            {
                v1 = &g_14db638;
                v1 = &g_14db638;
                core::panicking::panic_const::panic_const_add_overflow(&g_14db638); /* do not return */
            }
            v10 += 2;
            v11 += 1;
        } while (v16 + 2 < a2);
    }
    *((long long *)&v3[16]) = *((long long *)&v6);
    *((int128_t *)v3) = *((int128_t *)&v4);
    return a0;
}
