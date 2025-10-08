long long fish::parse_execution::ExecutionContext::expand_arguments_from_nodes(unsigned int a0, unsigned int a1, void* a2, void* *a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x130]
    unsigned long long v2;  // [bp-0x128]
    uint128_t v3;  // [bp-0x120]
    unsigned long long v4[3];  // [bp-0xf8]
    unsigned long long v5;  // [bp-0xf0]
    void* v6;  // [bp-0xe8]
    void* v7;  // [bp-0xe0]
    unsigned long long v8;  // [bp-0xd8]
    void* v9;  // [bp-0xd0]
    unsigned long long v10;  // [bp-0x98]
    unsigned long v11;  // [bp-0x90]
    unsigned int v14;  // edx
    unsigned long long v15;  // rax

    a5.reserve(a4);
    if (!a4)
    {
        v15 = a1.check_end_execution(a2);
        return ((char)v15 == 4 ? 0 : (unsigned int)v15);
    }
    v10 = &a3[a4];
    if (*((int *)*(a3)) != 1)
    {
        v0 = &g_14dd058;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14dd0b0); /* do not return */
    }
    v11 = a3 + 1;
    *(v4) = 0;
    v5 = 8;
    v6 = 0;
    v7 = 0;
    v8 = 8;
    v9 = 0;
    v0.node_source_owned(a0, *(a3), 19903088);
    fish::expand::expand_string(&v0, &v7, 0, a2, &v4);
    if (!(*((char *)*(a3)) & 1))
        core::option::unwrap_failed(&g_14dd068); /* do not return */
    fish::parse_constants::parse_error_offset_source_start(&v4, (int)(*(a3))[4].start());
    goto (long long)(g_9f51e4[v14] + (char *)&g_9f51e4[0]);
}
