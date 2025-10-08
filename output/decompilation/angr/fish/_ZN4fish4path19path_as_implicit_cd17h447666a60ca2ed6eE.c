long long fish::path::path_as_implicit_cd(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, void* a6)
{
    unsigned long long v0[3];  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    char v2;  // [bp-0x38]

    v0.to_vec(a1, a2);
    fish::expand::expand_tilde(&v0, a5, a6);
    if (v1.starts_with(*((long long *)&v2), "/", 1) || v1.starts_with(*((long long *)&v2), ".", 2) || v1.starts_with(*((long long *)&v2), ".", 3) || v1.ends_with(*((long long *)&v2), "/", 1) || v1.eq(*((long long *)&v2), "..", 2))
        fish::path::path_get_cdpath(a0, v1, *((long long *)&v2), a3, a4, a5, a6);
    else
        *(a0) = 0x8000000000000000;
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    return a0;
}
