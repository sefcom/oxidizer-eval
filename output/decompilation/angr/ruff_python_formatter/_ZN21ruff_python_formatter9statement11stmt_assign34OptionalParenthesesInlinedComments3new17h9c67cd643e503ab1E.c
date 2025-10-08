long long ruff_python_formatter::statement::stmt_assign::OptionalParenthesesInlinedComments::new(void* a0, unsigned long long a1[6], unsigned long long a2, unsigned long long a3, unsigned long a4)
{
    unsigned long v0;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    uint128_t v3;  // [bp-0x88]
    char v4;  // [bp-0x70], Other Possible Types: unsigned long
    char v5;  // [bp-0x68]
    char v6;  // [bp-0x50]
    unsigned long v8;  // r14
    unsigned long long v9;  // r15
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rax
    unsigned long long v14;  // r13
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax

    if (!a1[1])
    {
        v8 = a1[4];
        v9 = a1[5];
        v0 = v8;
        v1 = v8 + v9 * 12;
        v10 = v0.any();
        if (!(char)v10)
        {
            v0 = a2;
            v1 = a3;
            v11 = a4 + 16.trailing(&v0);
            v13 = core::slice::<impl [T]>::partition_point(v11, v12);
            if (v13 > v12)
            {
                v0 = &g_97adf0;
                v1 = 1;
                v2 = 8;
                v3 = 0;
                core::panicking::panic_fmt(&v0, &g_97ec08); /* do not return */
            }
            core::slice::<impl [T]>::split_at_unchecked(&v4, v11, v12, v13);
            v14 = *((long long *)&v5);
            v15 = core::slice::<impl [T]>::partition_point(v8, v9);
            if (v15 > v9)
            {
                v0 = &g_97adf0;
                v1 = 1;
                v2 = 8;
                v3 = 0;
                core::panicking::panic_fmt(&v0, &g_97ec20); /* do not return */
            }
            v16 = core::slice::<impl [T]>::split_at_unchecked(&v6, v8, v9, v15);
            *((int128_t *)a0) = *((int128_t *)&v6);
            *((unsigned long *)&a0[16]) = v4;
            *((unsigned long long *)&a0[24]) = v14;
            return v16;
        }
    }
    *((unsigned long long *)a0) = 0;
    return v10;
}
