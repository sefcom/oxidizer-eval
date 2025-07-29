int uu_head::find_nth_line_from_end()
{
    unsigned long long v0;  // [bp-0x10080]
    unsigned long v1;  // [bp-0x10080]
    unsigned int v2;  // [bp-0x1006c]
    unsigned long long v3;  // [bp-0x10068]
    void* v4;  // [bp-0x10060], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x10058]
    unsigned long long v6;  // [bp-0x10050]
    int v7;  // [bp-0x10030]
    void* v8;  // [bp-0x2030]
    unsigned long long v10;  // rdi
    char *v11;  // rbx
    unsigned int v12;  // eax
    unsigned long long v13;  // rdx
    unsigned long long v14;  // r12
    unsigned long long v15;  // rax
    unsigned long long v16;  // rbp
    void* v17;  // rax
    unsigned long v18;  // rsi

    do
    {
        v8 = 0;
    } while (&v8 != &v7);
    if (v10.seek(1, 0))
        return;
    v11 = &v7;
    v0 = 0;
    v12 = (unsigned int)memset(&v7, 0, 0x10000) & 0xffffff00 | 1;
    v3 = v13;
LABEL_4ae509:
    v2 = v12;
    v15 = ::0x4abeb0::core::cmp::min_by(v14, 0x10000);
    v14 -= v15;
    v16 = v15.index_mut(v11);
    if (!(!v10.seek(0, v14) && !v10.read_exact(v16, v13)))
        return;
    if (((char)v2 & 1))
    {
        v17 = v13 + v16;
        if (!(!!v17 - 1 && !!v13 && (char)v17[1] != (char)v13))
            goto LABEL_4ae5b0;
        if (!v18)
        {
            if (v10.rewind())
                goto LABEL_4ae650;
LABEL_4ae651:
        }
        else if (!v0)
        {
            v0 = 1;
            goto LABEL_4ae5b0;
        }
        else
        {
            v4 = 0;
            core::panicking::assert_failed(0, &v0, &g_430410, &v4, &g_593428); /* do not return */
        }
    }
    else
    {
LABEL_4ae5b0:
        v4 = v16;
        v5 = v16;
        v6 = v16 + v13;
        v11 = &v7;
        do
        {
            if (!v4.next_back(&(char)v13))
            {
                v12 = 0;
                if (!v14)
                {
                    v10.rewind();
                    return;
                }
                goto LABEL_4ae509;
            }
            v1 = v0 + 1;
            v0 = v1;
        } while (v0 != v18);
        if (!(v10.rewind()))
            goto LABEL_4ae651;
LABEL_4ae650:
    }
    return;
}
