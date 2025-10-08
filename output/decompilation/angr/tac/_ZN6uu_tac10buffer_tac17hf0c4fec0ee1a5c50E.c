long long uu_tac::buffer_tac(unsigned long long a0, unsigned long a1, char a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x108]
    unsigned long long v2;  // [bp-0x100]
    unsigned long long v3;  // [bp-0xf8]
    unsigned long long v4;  // [bp-0xe0]
    int v5;  // [bp-0xd8]
    int v6;  // [bp-0xc8]
    int v7;  // [bp-0xb8]
    char v8;  // [bp-0xa8]
    unsigned long long v9;  // [bp-0x98]
    unsigned long v10;  // [bp-0x90]
    unsigned long long v11;  // [bp-0x88]
    unsigned long v12;  // [bp-0x80]
    int v13;  // [bp-0x70], Other Possible Types: char
    int v14;  // [bp-0x60]
    int v15;  // [bp-0x50]
    char v16;  // [bp-0x40]
    unsigned long v19;  // 4096
    unsigned long v20;  // r13
    void* v21;  // rax
    unsigned long long v22;  // rax
    unsigned long v23;  // 4096
    unsigned long v24;  // rbp
    void* v25;  // rax
    unsigned long v27;  // rdx
    void* v28;  // rax

    v4 = std::io::stdio::stdout();
    (char)v0.with_capacity(v4.lock());
    v13.build_reverse(a3, a4);
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
        for (v19 = a1; true; v19 = v27)
        {
            v20 = v19;
            if (!((char)v5.next() & 1))
                break;
            v21 = v27.index(v20, a0, a1, &g_633b28);
            if (v27 < v0 - v3)
            {
                memcpy(v2 + v3, v21, v27);
                v3 += v27;
                continue;
            }
            v22 = (char)v0.write_all_cold(v21, v27);
        }
    }
    else
    {
        v23 = a1;
        while (true)
        {
            v20 = v23;
            if (!((char)v5.next() & 1))
                break;
            v24 = v27 + a4;
            v25 = v24.index(v20, a0, a1, &g_633b10);
            if (v27 < v0 - v3)
            {
                memcpy(v2 + v3, v25, v27);
                v3 += v27;
                v23 = v24;
            }
            else
            {
                v22 = (char)v0.write_all_cold(v25, v27);
                v23 = v24;
            }
        }
    }
    core::ptr::drop_in_place<memchr::memmem::FindRevIter>(&v5);
    v28 = 0.index(v20, a0, a1, &g_633af8);
    if (v27 < v0 - v3)
    {
        memcpy(v2 + v3, v28, v27);
        v3 += v27;
    }
    else
    {
        v22 = (char)v0.write_all_cold(v28, v27);
        if (v22)
            goto LABEL_512936;
    }
    v22 = (char)v0.flush();
LABEL_512936:
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&(char)v0);
    return v22;
}
