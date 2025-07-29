long long uu_tsort::Graph::dfs(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4[3])
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned int v4;  // ebp
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx
    unsigned long long v7[2];  // rax

    v0 = a1;
    v4 = vvar_53{reg 56} & 0xffffff00 | 1;
    if (v0.slice_contains(a4[1], a4[2]))
        return v4;
    if (a3.get_inner(&v0))
        return 0;
    a3.insert(v0, a2);
    a4.push(v0, a2, &g_576388);
    v5 = a0 + 24.get_inner(v0, a2);
    if (v5)
    {
        v1 = v5 + 16.into_iter();
        v2 = v6;
        while (true)
        {
            v7 = v1.next();
            if (!v7)
                break;
            if ((char)a0.dfs(v7[0], v7[1], a3, a4))
                return v4;
        }
    }
    if (a4[2])
        a4[2] = a4[2] - 1;
    return 0;
}
