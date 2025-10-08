long long fish::highlight::highlight::statement_get_expanded_command(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, void* a4)
{
    void* v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    void* v2;  // [bp-0x18]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx

    v4 = a3.try_source(a1, a2);
    if (!v4)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v0 = 0;
    v1 = 4;
    v2 = 0;
    fish::expand::expand_to_command_and_args(v4, v5, a4, &v0, 0, 0, 0);
    if ((char)v5 != 2)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    }
    *((unsigned long long *)&a0[16]) = 0;
    *((int128_t *)a0) = *((int128_t *)&v0);
    return 0;
}
