long long uu_tac::buffer_tac(unsigned long long a0, unsigned long long a1, char a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x108]
    unsigned long long v2;  // [bp-0x100]
    unsigned long long v3;  // [bp-0xf8]
    unsigned long long v4;  // [bp-0xe0]
    int v5;  // [bp-0xd8], Other Possible Types: char
    int v6;  // [bp-0xc8]
    int v7;  // [bp-0xb8]
    char v8;  // [bp-0xa8]
    unsigned long long v9;  // [bp-0x98]
    unsigned long long v10;  // [bp-0x90]
    unsigned long long v11;  // [bp-0x88]
    unsigned long long v12;  // [bp-0x80]
    int v13;  // [bp-0x70], Other Possible Types: char
    int v14;  // [bp-0x60]
    int v15;  // [bp-0x50]
    char v16;  // [bp-0x40]
    unsigned long long v19;  // 4096
    unsigned long long v20;  // r13
    void* v21;  // rax
    unsigned long long v22;  // 4096
    unsigned long long v23;  // rbp
    void* v24;  // rax
    unsigned long v26;  // rdx
    void* v27;  // rax
    unsigned long long v28;  // rax

    v4 = std::io::stdio::stdout();
    (char)v0.with_capacity(0x2000, v4.lock());
    v5 = 1;
    v13.build_reverse(&v5, a3, a4);
    memcpy(&v8, &v16, 16);
    v7 = v15;
    v6 = v14;
    v5 = v13;
    v9 = 1;
    v10 = a1;
    v11 = a0;
    v12 = a1;
    if (a2)
    {
        for (v19 = a1; true; v19 = v26)
        {
            v20 = v19;
            if (!v5.next())
                break;
            v21 = v26.index(v20, a0, a1, &g_7141c8);
            if (v26 < v0 - v3)
            {
                memcpy(v2 + v3, v21, v26);
                v3 += v26;
            }
            else
            {
                v28 = (char)v0.write_all_cold(v21, v26);
            }
        }
    }
    else
    {
        v22 = a1;
        while (true)
        {
            v20 = v22;
            if (!v5.next())
                break;
            v23 = v26 + a4;
            v24 = v23.index(v20, a0, a1, &g_7141b0);
            if (v26 < v0 - v3)
            {
                memcpy(v2 + v3, v24, v26);
                v3 += v26;
                v22 = v23;
            }
            else
            {
                v28 = (char)v0.write_all_cold(v24, v26);
                v22 = v23;
            }
        }
    }
    core::ptr::drop_in_place<memchr::memmem::FindRevIter>(&v5);
    v27 = 0.index(v20, a0, a1, &g_714198);
    if (v26 < v0 - v3)
    {
        memcpy(v2 + v3, v27, v26);
        v3 += v26;
    }
    else
    {
        v28 = (char)v0.write_all_cold(v27, v26);
        if (!(!v28))
            goto LABEL_589829;
    }
    v28 = (char)v0.flush();
    if (!v28)
    {
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&(char)v0);
        return 0;
    }
LABEL_589829:
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&(char)v0);
    return v28;
}
