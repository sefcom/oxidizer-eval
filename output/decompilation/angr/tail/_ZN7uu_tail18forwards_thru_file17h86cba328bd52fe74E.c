int uu_tail::forwards_thru_file()
{
    void* v0;  // [bp-0x8068]
    unsigned long long v1;  // [bp-0x8050]
    unsigned long long v2;  // [bp-0x8048]
    unsigned long long v3;  // [bp-0x8040]
    int v4;  // [bp-0x8030]
    void* v5;  // [bp-0x2030]
    void* v7;  // r14
    unsigned long long v8;  // rdi
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rax
    unsigned long v11;  // rsi

    do
    {
        v5 = 0;
    } while (&v5 != &v4);
    v7 = 0;
    memset(&v4, 0, 0x8000);
    v0 = 0;
    while (true)
    {
        if (v8.read(&v4, 0x8000))
        {
            if ((char)v9.kind() == 35)
            {
                v1 = v9;
                ::0x4f28b0::core::ptr::drop_in_place<std::io::error::Error>(&v1);
            }
            else
            {
                return;
            }
        }
        else
        {
            if (v9)
            {
                v10 = v9.index(&v4);
                v1 = v10;
                v2 = v10;
                v3 = v9 + v10;
                while (v1.next(&vvar_60{reg 32}))
                {
                    if (v11 == v7 + 1)
                        return;
                }
                v0 += v9;
            }
            else
            {
                return;
            }
        }
    }
}
