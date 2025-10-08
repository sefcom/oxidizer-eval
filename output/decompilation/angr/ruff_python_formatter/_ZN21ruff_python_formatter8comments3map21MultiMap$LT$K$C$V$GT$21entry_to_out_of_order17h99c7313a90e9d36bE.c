long long ruff_python_formatter::comments::map::MultiMap<K,V>::entry_to_out_of_order(void* a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    unsigned long v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    unsigned long long v6;  // [bp-0x10]
    unsigned long long v8;  // r15
    unsigned long long v9;  // r14
    unsigned long long v10;  // r13
    unsigned long long v11;  // r12
    unsigned long long v12;  // rbx
    unsigned long v14;  // rsi
    unsigned long long v16;  // rdx

    if (!*((int *)a0))
        return a0 + 8;
    v6 = v8;
    v5 = v9;
    v4 = v10;
    v3 = v11;
    v2 = v12;
    v0 = a3->field_10;
    v1.to_vec(*((int *)a0) - 1.index((int)a0[4] - 1, a1, a2, &g_97ce50), a2);
    a3.push(&v1, &g_97ce68);
    v14 = (int)a0[8] - 1;
    if ((int)a0[8] < 1)
        v14 = (int)a0[4] - 1;
    v1.to_vec((int)a0[4] - 1.index(v14, a1, a2, &g_97ce80), a2);
    a3.push(&v1, &g_97ce98);
    v1.to_vec(a0.trailing_range().index(v16, a1, a2, &g_97ceb0), a2);
    a3.push(&v1, &g_97cec8);
    *((unsigned int *)a0) = 0;
    *((unsigned long *)&a0[8]) = v0;
    return a0 + 8;
}
