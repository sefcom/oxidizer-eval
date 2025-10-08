long long fish::env_universal_common::default_vars_path(void* a0)
{
    int v0;  // [bp-0x38], Other Possible Types: char
    unsigned long long v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    char v3;  // [bp-0x10]

    fish::env_universal_common::default_vars_path_directory(&v2);
    if ((char)(((0 ^ *((long long *)&v2)) & (0 ^ -(*((long long *)&v2)))) >> 63))
    {
        core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v2);
        *((unsigned long long *)a0) = 0;
        *((unsigned long long *)&a0[8]) = 4;
        *((unsigned long long *)&a0[16]) = 0;
    }
    else
    {
        v1 = *((long long *)&v3);
        memcpy(&v0, &v2, 16);
        v0.extend("/fish_variables", &g_a16db5);
        *((unsigned long long *)&a0[16]) = v1;
        *(a0) = v0;
    }
    return a0;
}
