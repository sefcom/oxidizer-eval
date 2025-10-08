long long uu_tsort::Graph::dfs(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4[3])
{
    unsigned long long v0;  // [bp-0x40]
    unsigned int v2;  // ebp
    struct_0 *v3;  // rax
    unsigned long long v4[2];  // r13

    v0 = a1;
    v2 = vvar_57{reg 56} & 0xffffff00 | 1;
    if (v0.slice_contains(a4[1], a4[2]))
        return v2;
    if (a3.get_inner(&v0))
        return 0;
    a3.insert(v0, a2);
    a4.push(v0, a2, &g_4eb450);
    v3 = a0 + 24.get_inner(v0, a2);
    if (v3 && v3->field_20)
    {
        v4 = v3->field_18;
        do
        {
            if ((char)a0.dfs(v4[0], v4[1], a3, a4))
                return v2;
            v4 += 1;
        } while (v4 != &v3->field_18[v3->field_20]);
    }
    if (a4[2])
        a4[2] = a4[2] - 1;
    return 0;
}
