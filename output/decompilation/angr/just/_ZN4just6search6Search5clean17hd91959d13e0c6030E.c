char just::search::Search::clean(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    void* v0;  // [bp-0x118]
    unsigned long long v1;  // [bp-0x110]
    void* v2;  // [bp-0x108]
    char v3;  // [bp-0x100]
    unsigned long long v4;  // [bp-0xf8]
    unsigned long long v5;  // [bp-0xf0]
    int v6;  // [bp-0xe8]
    int v7;  // [bp-0xd8]
    int v8;  // [bp-0xc8]
    char v9;  // [bp-0xb8]
    int v10;  // [bp-0xa8], Other Possible Types: char
    int v11;  // [bp-0x98]
    int v12;  // [bp-0x88]
    char v13;  // [bp-0x78]
    char v14;  // [bp-0x68]
    void* v16;  // rax

    v3.join(a1, a2, a3, a4);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v10.components(v4, v5);
    memcpy(&v9, &v13, 16);
    v8 = v12;
    v7 = v11;
    v6 = v10;
    while (true)
    {
        do
        {
            while (true)
            {
                v14.next(&v6);
                if (v14 == 10)
                {
                    v6.into_iter(&v0);
                    a0.collect(&v6);
                    return core::ptr::drop_in_place<std::path::PathBuf>(&v3);
                }
                if (!(char)v14.eq(&g_471728))
                {
                    v0.push(&v14);
                }
                else if (v2)
                {
                    break;
                }
            }
            v16 = v2 - 1;
        } while (*((char *)(8 + v16 * 56)) != 9);
        v2 = v16;
    }
}
