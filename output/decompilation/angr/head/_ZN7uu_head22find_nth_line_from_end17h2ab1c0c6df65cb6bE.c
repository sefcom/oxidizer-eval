int uu_head::find_nth_line_from_end()
{
    unsigned long v0;  // [bp-0x10048]
    unsigned long long v1;  // [bp-0x10040]
    unsigned long long v2;  // [bp-0x10038]
    int v3;  // [bp-0x10030]
    void* v4;  // [bp-0x2030]
    unsigned long long v6;  // rdi
    void* v7;  // r13
    void* v8;  // rbp
    unsigned long v9;  // rsi
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rax
    unsigned long long v14;  // r12
    char *v15;  // rax

    do
    {
        v4 = 0;
    } while (&v4 != &v3);
    if (((char)v6.seek(1, 0) & 1))
        return;
    v7 = 0;
    memset(&v3, 0, 0x10000);
    v8 = 0;
    v0 = v9 + 1;
    v11 = v10;
    while (true)
    {
        v12 = v11 - v8;
        v13 = v12.min(0x10000);
        v14 = v13.index_mut(&v3, 0x10000, &g_4f7ce8);
        if (((char)v6.seek(0, v12 - v13) & 1))
        {
            return;
        }
        else if (!v6.read_exact(v14, v10))
        {
            v1 = v14;
            v2 = v14 + v10;
            if (v1.next_back())
            {
                do
                {
                    v7 += *(v15) == (char)v10;
                    if (v7 == v0)
                    {
                        if (v6.rewind())
                            return;
                        return;
                    }
                    v8 += 1;
                    v15 = v1.next_back();
                } while (v15);
            }
            v11 = v10;
            if (v8 == v11)
            {
                v6.rewind();
                return;
            }
        }
        else
        {
            return;
        }
    }
}
