long long fish::builtins::complete::builtin_complete_remove_cmd(unsigned long long a0, unsigned long long a1, unsigned int a2, unsigned long long a3, unsigned long a4, unsigned long long a5[2], unsigned long long a6, unsigned long long a7[2], unsigned long a8)
{
    unsigned int v0;  // [bp-0x60]
    unsigned int v1;  // [bp-0x60]
    unsigned int v2;  // [bp-0x5c]
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    int v5;  // [bp-0x48]
    unsigned long long v6[2];  // r15
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r14
    unsigned int v10;  // r13d
    unsigned int v11;  // r13d
    unsigned long long v13;  // rax
    unsigned long long v15[2];  // r15
    unsigned long long v16[2];  // r15
    unsigned long long v17;  // rax

    v6 = a5;
    v7 = a1;
    v8 = a0;
    v3 = a3;
    v4 = a3 + a4 * 4;
    v0 = v3.next();
    if (v0 != 2)
    {
        v1 = v0;
        do
        {
            v11 = v10;
            v1.unwrap(v11, &g_14bd1b0);
            fish::builtins::fish_indent::fish_indent::{{closure}}(&v5, a0, a1);
            v2 = v11;
            fish::complete::complete_remove(&v5, a2, &v2, 1, 1);
            v1 = v3.next();
        } while (v1 != 2);
    }
    if (a8)
    {
        v13 = &a7[a8];
        do
        {
            fish::builtins::fish_indent::fish_indent::{{closure}}(&v5, v8, v7);
            fish::complete::complete_remove(&v5, a2, a7[0], a7[1], 2);
            a7 += 1;
        } while (a7 != v13);
        if (!a6)
            return v13;
    }
    else if (!a6)
    {
        if (v0 != 2)
            return a8;
        fish::builtins::fish_indent::fish_indent::{{closure}}(&v5, a0, a1);
        return fish::complete::complete_remove_all(&v5, a2, 1);
    }
    v15 = v6;
    do
    {
        v16 = v15;
        fish::builtins::fish_indent::fish_indent::{{closure}}(&v5, v8, v7);
        v17 = fish::complete::complete_remove(&v5, a2, v16[0], v16[1], 3);
        v15 = v16 + 1;
    } while (v15 != &v6[a6]);
    return v17;
}
