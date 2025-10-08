long long fish::highlight::highlight::autosuggest_validate_from_history(unsigned long long a0[6], unsigned long long a1, unsigned long long a2, unsigned long long a3[4])
{
    char v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    unsigned long long v2;  // [bp-0xa8]
    int v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    unsigned long long v5;  // [bp-0x88]
    int v6;  // [bp-0x78], Other Possible Types: char
    unsigned long long v7;  // [bp-0x68]
    char v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x50]
    char v10;  // [bp-0x48]
    unsigned int v12;  // ebp
    unsigned long long v13;  // r9
    unsigned long v14;  // rax
    unsigned long long v15;  // rcx
    unsigned long v16;  // r8

    fish::threads::assert_is_background_thread();
    fish::highlight::highlight::autosuggest_parse_command(&v6, a0[1], a0[2], a3);
    if ((char)(((0 ^ *((long long *)&v6)) & (0 ^ -(*((long long *)&v6)))) >> 63))
    {
        core::ptr::drop_in_place<core::option::Option<(widestring::utfstring::Utf32String,widestring::utfstring::Utf32String)>>(&v6);
        return vvar_86{reg 56} & 0xffffff00 | 1;
    }
    v5 = v7;
    v3 = v6;
    memcpy(&v0, &v8, 16);
    v2 = v9;
    if ((char)fish::highlight::highlight::is_veritable_cd(v4, v7) && v2 && (char)fish::expand::expand_one(&v0, 1, a3, 0))
    {
        v12 = (unsigned int)v4 & 0xffffff00 | 1;
        if (!(char)fish::wcstringutil::string_prefixes_string(v1, v2, "-", 6) && !(char)fish::wcstringutil::string_prefixes_string(v1, v2, "-", 2))
        {
            if (a3[0] == 2)
            {
                v13 = a3[2];
                v14 = a3[3];
            }
            else if ((unsigned int)a3[0] == 1)
            {
                v13 = a3[1];
                v14 = a3[2];
            }
            else
            {
                v13 = 472 + a3[1];
                v14 = &g_14c7518;
            }
            fish::path::path_get_cdpath(&v10, v1, v2, a1, a2, v13, v14);
            if (*((long long *)&v10) == 0x8000000000000000)
                goto LABEL_13bae72;
            v12 = fish::highlight::highlight::autosuggest_validate_from_history::{{closure}}(a1, a2, &v10);
        }
    }
    else
    {
        if (!fish::builtins::shared::builtin_exists(v4, v7) && !(char)fish::function::exists_no_autoload(v4, v7))
        {
            if (!a3[0])
            {
                v15 = 472 + a3[1];
                v16 = &g_14c7518;
            }
            else if ((unsigned int)a3[0] == 1)
            {
                v15 = a3[1];
                v16 = a3[2];
            }
            else
            {
                v15 = a3[2];
                v16 = a3[3];
            }
            fish::path::path_get_path(&v6, v4, v7, v15, v16);
            core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v6);
            if (*((long long *)&v6) != 0x8000000000000000)
                goto LABEL_13badee;
        }
        else
        {
LABEL_13badee:
            if ((char)fish::history::all_paths_are_valid(a0[4], a0[4] + a0[5] * 24, a3))
            {
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v3);
                return (unsigned int)v4 & 0xffffff00 | 1;
            }
        }
LABEL_13bae72:
        v12 = 0;
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v3);
    return v12;
}
