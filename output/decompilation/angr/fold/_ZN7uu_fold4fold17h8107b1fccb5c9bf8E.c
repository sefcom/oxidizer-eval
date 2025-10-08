long long uu_fold::fold(unsigned long long a0, unsigned long a1, char a2, char a3, unsigned long long a4)
{
    unsigned int v0;  // [bp-0xac]
    unsigned int v1;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned int v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x90]
    int v6;  // [sp-0x78]
    char v7;  // [bp-0x68]
    unsigned long long v9;  // r14
    void* v10;  // rbx
    unsigned long v11;  // r12
    unsigned long v12;  // r13
    char v13;  // r15b
    unsigned long long v14;  // rdx
    char *v15;  // rsi
    unsigned long long v16;  // r14
    unsigned long long v17;  // rax
    unsigned long long v18;  // rbx
    void* v19;  // rbp
    unsigned long v20;  // r12
    unsigned long v21;  // r13
    unsigned long long v22;  // rdx
    char *v23;  // rsi

    if (!a1)
        return 0;
    v9 = a0;
    if (a2)
    {
        v1 = a1 * 24;
        v10 = 0;
        while (true)
        {
            v11 = *((long long *)(8 + v9 + (char *)v10));
            v12 = *((long long *)(16 + v9 + (char *)v10));
            v13 = v11.equal(v12, "-\nfailed to read line", 1);
            if (v13)
            {
                v3 = std::io::stdio::stdin();
                v14 = &g_4e6b38;
                v15 = &v3;
            }
            else
            {
                v6.open(v11, v12);
                v4.map_err_context(&v6, v11, v12);
                if (v4)
                    return v4;
                v0 = v5;
                v14 = &g_4e6ae0;
                v15 = &v0;
                v16 = a0;
            }
            v7.with_capacity(v15, v14);
            if (uu_fold::fold_file_bytewise(&v7, a3, a4))
                break;
            if (!v13)
                core::ptr::drop_in_place<std::fs::File>(&v0);
            v10 += 24;
            if (v1 == v10)
                return 0;
        }
    }
    else
    {
        v18 = a1 * 24;
        v2 = a3;
        v19 = 0;
        while (true)
        {
            v20 = *((long long *)(8 + v9 + (char *)v19));
            v21 = *((long long *)(16 + v9 + (char *)v19));
            v13 = v20.equal(v21, "-\nfailed to read line", 1);
            if (v13)
            {
                v3 = std::io::stdio::stdin();
                v22 = &g_4e6b38;
                v23 = &v3;
            }
            else
            {
                v6.open(v20, v21);
                v4.map_err_context(&v6, v20, v21);
                if (v4)
                {
                    return v4;
                }
                v0 = v5;
                v22 = &g_4e6ae0;
                v23 = &v0;
                v16 = a0;
            }
            v7.with_capacity(v23, v22);
            if (uu_fold::fold_file(&v7, v1, a4))
                break;
            if (!v13)
                core::ptr::drop_in_place<std::fs::File>(&v0);
            v19 += 24;
            if (v18 == v19)
                return 0;
        }
    }
    if (v13)
        return v17;
    core::ptr::drop_in_place<std::fs::File>(&v0);
    return v17;
}
