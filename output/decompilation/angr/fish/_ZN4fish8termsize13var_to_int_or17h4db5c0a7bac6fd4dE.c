long long fish::termsize::var_to_int_or(unsigned long long *a0)
{
    void* v0;  // [bp-0x38]
    int v1;  // [bp-0x30], Other Possible Types: unsigned long long
    void* v2;  // [bp-0x28], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x20], Other Possible Types: char
    char v4;  // [bp-0x18]
    unsigned long long v6;  // rax
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rbx

    if (*(a0))
    {
        fish::env_dispatch::init_locale::{{closure}}(&v3, a0);
        *((int128_t *)&v1) = *((int128_t *)&v4);
        v0 = v3;
        if (!v2)
            goto LABEL_1415c66;
        v6 = fish::wutil::wcstoi::fish_wcstoi(v1, v2);
        v7 = v6 >> 32;
        v8 = -(0 < ((char)v6 & 1)) | (4294901761 <= (unsigned int)(v7 - 0x10000) ? v7 : 18446744073709551615);
    }
    else
    {
        v1 = 4;
        v2 = 0;
        v0 = 0;
LABEL_1415c66:
        v8 = 18446744073709551615;
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    return v8;
}
