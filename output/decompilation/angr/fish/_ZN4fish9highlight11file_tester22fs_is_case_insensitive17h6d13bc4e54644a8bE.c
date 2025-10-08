long long fish::highlight::file_tester::fs_is_case_insensitive(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    char v0;  // [bp-0x98], Other Possible Types: unsigned long long
    void* v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    char v3;  // [bp-0x80]
    unsigned long long v4;  // [bp-0x68]
    void* v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    int v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    char v9;  // [bp-0x40]
    unsigned long long v11;  // rcx
    unsigned long long v12;  // rax

    if (!*((int *)once_cell::sync::OnceCell<T>::get_or_try_init()))
        return 0;
    v9.to_vec(a0, a1);
    v0.rustc_entry(v11, &v9);
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        *((int128_t *)&v7) = *((int128_t *)&v3);
        v4 = v0;
        v5 = v1;
        v6 = v2;
        v12 = fpathconf(a2, *((int *)once_cell::sync::OnceCell<T>::get_or_try_init()));
        v2 = v6;
        memcpy(&v0, &v4, 16);
        v3 = !v12;
        (long long)v7.insert_no_grow(v8, &v0);
        return a2 & 0xffffff00 | !v12;
    }
    return (char)v5[8];
}
