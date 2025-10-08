long long fish::builtins::read::read_one_char_at_a_time(unsigned int a0, unsigned long long a1[3], unsigned long a2, unsigned int a3)
{
    char v0;  // [bp-0xed]
    unsigned int v1;  // [bp-0xec]
    void* v2;  // [bp-0xe8]
    unsigned long long v3;  // [bp-0xe0]
    void* v4;  // [bp-0xd8]
    unsigned long v5;  // [bp-0xd0]
    void* v6;  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xc0]
    uint128_t v8;  // [bp-0xb8]
    uint128_t v9;  // [bp-0xa8]
    uint128_t v10;  // [bp-0x98]
    uint128_t v11;  // [bp-0x88]
    uint128_t v12;  // [bp-0x78]
    uint128_t v13;  // [bp-0x68]
    uint128_t v14;  // [bp-0x58]
    uint128_t v15;  // [bp-0x48]
    void* v17;  // r13
    void* v18;  // r13
    unsigned long long v19;  // rax
    unsigned long v20;  // r12

    v2 = 0;
    v3 = 1;
    v4 = 0;
    v17 = 0;
    v1 = (a3 ? 0 : 10);
    while (true)
    {
        v15 = 0;
        v14 = 0;
        v13 = 0;
        v12 = 0;
        v11 = 0;
        v10 = 0;
        v9 = 0;
        v8 = 0;
        v5 = a1[2];
        while (true)
        {
            v0 = 0;
            fish::common::read_blocked(&v6, a0, &v0, 1);
            if (((char)v6 & 1) || !v7)
            {
                if (v17 <= core::sync::atomic::atomic_load(&_ZN4fish3env15READ_BYTE_LIMIT17h28be1d6ca7bf6cd0E, 0))
                {
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v2, v3);
                    return 0;
                }
LABEL_136466f:
                if (v5 <= a1[2])
                    a1[2] = v5;
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v2, v3);
                return 0;
            }
            v2.push(v0, &g_14cbf58);
            v18 = v17;
            v17 = v18 + 1;
            if ((char)_ccall(4, 24, v18 + 1, 0, (unsigned long long)(char)(v7 < 0)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14cbf70); /* do not return */
            v6 = 0;
            if ((char)fish::input_common::decode_input_byte(a1, 1, &v8, v3, 0, &v6))
                break;
            v17 += 1;
        }
        if ((unsigned int)v19 != 1)
            core::panicking::panic("internal error: entered unreachable codeINFinfNANnan", 40, &g_14cbfa0); /* do not return */
        v4 = 0;
        if (!a1[2])
            core::option::unwrap_failed(&g_14cbf88); /* do not return */
        v20 = a1[1] + a1[2] * 4 - 4;
        if (!v20)
            core::option::unwrap_failed(&g_14cbf88); /* do not return */
        if (v17 > core::sync::atomic::atomic_load(&_ZN4fish3env15READ_BYTE_LIMIT17h28be1d6ca7bf6cd0E, 0))
            goto LABEL_136466f;
        if (*((int *)v20) == v1)
        {
            a1.pop();
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v2, v3);
            return 0;
        }
        else if (a2 && a2 <= a1[2])
        {
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v2, v3);
            return 0;
        }
    }
}
