long long fish::path::path_get_path(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    int v0;  // [bp-0x28], Other Possible Types: char
    unsigned long v1;  // [bp-0x18]
    char v2;  // [bp-0x10]

    fish::path::path_try_get_path(&v0, a1, a2, a3, a4);
    if (*((int *)&v2))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    }
    else
    {
        *((unsigned long *)&a0[16]) = v1;
        *(a0) = v0;
    }
    return a0;
}
