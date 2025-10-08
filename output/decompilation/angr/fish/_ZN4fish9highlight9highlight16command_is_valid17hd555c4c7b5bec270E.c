long long fish::highlight::highlight::command_is_valid(unsigned long long a0, unsigned long long a1, char a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    int v0;  // [bp-0x48], Other Possible Types: char
    char v1;  // r15b
    unsigned long long v2;  // rbp
    char v3;  // bl
    unsigned long long v4;  // rax
    char v5;  // bpl

    if ((a2 | 2) == 3)
    {
        v1 = 1;
        v2 = 0;
        v3 = 1;
    }
    else
    {
        v1 = a2 != 2;
        v3 = a2 == 2;
        v4 = fish::builtins::shared::builtin_exists(a0, a1);
        v2 = v4 & 4294967295;
        if (((char)v4 | v3) != 1)
            v2 = (unsigned int)fish::function::exists_no_autoload(a0, a1);
        if (!(char)v2 && !v3)
            v2 = (unsigned int)fish::abbrs::with_abbrs(a0, a1);
    }
    if (v1 == 1 && !(char)v2)
    {
        fish::path::path_get_path(&v0, a0, a1, a5, a6);
        v5 = *((long long *)&v0) != 0x8000000000000000;
        v2 = v2 & 0xffffffffffffff00 | v5;
        core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v0);
    }
    if (!v3 && !v5)
    {
        fish::path::path_as_implicit_cd(&v0, a0, a1, a3, a4, a5, a6);
        v2 = v2 & 0xffffffffffffff00 | (long long)v0 != 0x8000000000000000;
        core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v0);
    }
    return v2 & 4294967295;
}
