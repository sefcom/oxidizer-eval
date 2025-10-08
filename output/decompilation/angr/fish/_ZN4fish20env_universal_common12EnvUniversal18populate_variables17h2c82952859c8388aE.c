long long fish::env_universal_common::EnvUniversal::populate_variables(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x98]
    int v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    void* v3;  // [bp-0x88], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    void* v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    unsigned long long v11;  // [bp-0x40]
    void* v12;  // [bp-0x38]
    unsigned int v14;  // eax
    char *v15;  // rax
    unsigned long v16;  // rdx
    unsigned long long v17;  // rsi

    v14 = a0.format_for_contents(a1);
    v0 = 0;
    v2 = 4;
    v3 = 0;
    v4 = 0;
    v5 = 4;
    v6 = 0;
    v10 = a0;
    v11 = a1;
    v12 = 0;
    while (true)
    {
        do
        {
            do
            {
                do
                {
                    if (!v10.next())
                    {
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                        return v14;
                    }
                } while (!v16);
            } while (*(v15) == 35);
            v3 = 0;
            core::str::converts::from_utf8(&v7, v15, a2);
        } while ((int)v7 == 1);
        v7.from_str(v8, v9);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
        v17 = v9;
        v3 = v9;
        *((int128_t *)&v1) = *((int128_t *)&v7);
        if (!(char)v14)
            4.parse_message_2x_internal(v17, a2, &v4);
        else
            4.parse_message_30_internal(v17, a2, &v4);
    }
}
