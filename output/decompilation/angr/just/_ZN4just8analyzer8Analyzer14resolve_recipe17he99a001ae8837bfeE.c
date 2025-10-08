long long just::analyzer::Analyzer::resolve_recipe(unsigned long long a0, unsigned long long a1, unsigned long long a2[2], unsigned long a3)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned long long v4;  // r13
    unsigned long long v5;  // r13
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx
    unsigned long long v8[89];  // rax
    unsigned long v9;  // r13
    unsigned long long v10;  // rax
    unsigned long long *v11;  // rax
    unsigned long v12;  // cc_ndep

    v0.split_last(a0, a1);
    if (*((long long *)&v2))
    {
        v4 = *((long long *)&v2) * 72;
        do
        {
            v5 = v4;
            v6 = v1.lexeme();
            v8 = a2[0].get(a2[1], v6, v7);
            if (!v8)
                return 0;
            v1 += 72;
            a2 = &v8[84];
            v9 = v5 - 72;
            v4 = v9;
        } while (v5 != 72);
        a3 = &v8[87];
    }
    v10 = v0.lexeme();
    v11 = *((long long *)a3).get(*((long long *)(a3 + 8)), v10, v7);
    if (!v11)
        return 0;
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(*(v11)) + 1, 0, _ccall(20, v11, 0, v12))))
        return *(v11);
    [D] Unsupported jumpkind Ijk_NoDecode at address 6643961()
}
