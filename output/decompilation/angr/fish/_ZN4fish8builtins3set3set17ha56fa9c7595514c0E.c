long long fish::builtins::set::set(unsigned long a0, void* a1, void* a2, unsigned long long a3)
{
    char v0;  // [bp-0x55]
    unsigned short v1;  // [bp-0x54]
    char v2;  // [bp-0x52]
    char v3;  // [bp-0x50]
    char v4;  // [bp-0x4f]
    char v5;  // [bp-0x4c]
    char v6;  // [bp-0x44]
    unsigned short v7;  // [bp-0x43]
    char v8;  // [bp-0x41]
    char v9;  // [bp-0x40]
    char v10;  // [bp-0x38]
    unsigned long v12;  // r12
    unsigned long v13;  // r15
    unsigned long long v14;  // rax
    char v18;  // r11b
    unsigned long long v19;  // rdi
    unsigned long v20;  // rdx
    void* v21;  // rbx
    void* v22;  // rcx

    if (!a3)
        core::panicking::panic_bounds_check(0, 0, &g_14cce40); /* do not return */
    v12 = *((long long *)a2);
    v13 = (long long)a2[8];
    v3.parse(v12, v13, a2, a3, a0, a1);
    if (v3 == 3)
        return *((int *)&v5) * 0x100000000 | 1;
    v1 = v7;
    v2 = v8;
    if (v3 == 2)
        return v4 * 0x100000000;
    v18 = v9;
    v19 = *((long long *)&v10);
    v8 = v2;
    v7 = v1;
    v0 = v18;
    v9 = v18;
    v20 = a3 - v19;
    if (a3 < v19)
        core::slice::index::slice_start_index_len_fail(v19, a3, &g_14cce58); /* do not return */
    v21 = a2 + v19 * 16;
    if ((v6 & 1))
    {
        v22 = fish::builtins::set::query(v12, v13, &v3, a0, (long long)a1[16], v21, v20);
        v14 = v22 >> 32;
        if (!((char)v22 & 1))
            goto LABEL_136cf05;
    }
    else if ((*((int *)&v5) & 0x10000))
    {
        v22 = fish::builtins::set::erase(v12, v13, &v3, a0, (long long)a1[16], v21, v20);
        v14 = v22 >> 32;
        if (!((char)v22 & 1))
            goto LABEL_136cf05;
    }
    else if ((*((int *)&v5) & 0x1000000))
    {
LABEL_136cf13:
        fish::builtins::set::list(&v3, a0, (long long)a1[8]);
        v22 = 0;
        v14 = 0;
        if ((v0 & 1))
            return 0x100;
    }
    else if ((v4 & 1))
    {
        v22 = fish::builtins::set::show(v12, v13, a0, (long long)a1[8], (long long)a1[16], v21, v20);
        v14 = v22 >> 32;
        if (!((char)v22 & 1))
            goto LABEL_136cf05;
    }
    else
    {
        if (a3 == v19)
            goto LABEL_136cf13;
        v22 = fish::builtins::set::set_internal(v12, v13, &v3, a0, (long long)a1[16], v21, v20);
        v14 = v22 >> 32;
        if (!((char)v22 & 1))
        {
LABEL_136cf05:
            if ((v0 & 1))
                return 0x100;
        }
    }
    return v14 * 0x100000000 | (unsigned int)v22 & 0xffff0000 | (unsigned int)v22 & 0xff00 | v22 & 4294967295;
}
