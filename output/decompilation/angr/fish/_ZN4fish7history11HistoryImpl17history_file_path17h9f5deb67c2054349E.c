long long fish::history::HistoryImpl::history_file_path(void* a0, unsigned long long a1, unsigned long a2)
{
    int v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x98]
    char v3;  // [bp-0x90], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v4;  // [bp-0x88]
    char *v5;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x78]
    void* v7;  // [bp-0x70]
    char *v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    int v10;  // [bp-0x50], Other Possible Types: char
    unsigned long v11;  // [bp-0x40]
    char v12;  // [bp-0x38]
    unsigned long long v14;  // r15
    unsigned long long v15;  // rax

    v14 = 0x8000000000000000;
    if (a2)
    {
        fish::path::path_get_data(&v3);
        if (v3 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v3);
            v15 = 0.new("Error obtaining data directory. This is a manually constructed error which does not indicate why this happened.Loaded %lu old itemspopulate_from_file_contentsError writing to temporary history file:Saving %lu items via rewriteSaving %lu items via appending", 111);
            *((unsigned long long *)&a0[8]) = v15;
            v14 = 9223372036854775809;
        }
        else
        {
            v2 = v5;
            *((int128_t *)&v0) = *((int128_t *)&v3);
            (char)v0.push(47);
            (char)v0.spec_extend(a1, a1 + a2 * 4);
            (char)v0.spec_extend("_", "S");
            fish::wutil::wrealpath(&v10, v1, v2);
            if (*((long long *)&v10) == 0x8000000000000000)
            {
                v8 = &(char)v0;
                v9 = <widestring::utfstring::Utf32String as core::fmt::Display>::fmt;
                v3 = &g_14d9d10;
                v4 = 2;
                v7 = 0;
                v5 = &v8;
                v6 = 1;
                v12.map_or_else(&v3);
                *((long long *)&a0[8]) = 40.new(&v12);
                *((unsigned long long *)a0) = 9223372036854775809;
            }
            else
            {
                *((unsigned long *)&a0[16]) = v11;
                *(a0) = v10;
            }
            return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
        }
    }
    *((unsigned long long *)a0) = v14;
    return v15;
}
