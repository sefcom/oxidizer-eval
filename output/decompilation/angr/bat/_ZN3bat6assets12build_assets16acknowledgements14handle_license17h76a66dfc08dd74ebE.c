long long bat::assets::build_assets::acknowledgements::handle_license(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x98], Other Possible Types: unsigned long long
    char v1;  // [bp-0x90], Other Possible Types: unsigned long long
    char *v2;  // [bp-0x88], Other Possible Types: char
    unsigned long long v3;  // [bp-0x81]
    unsigned long long v4;  // [bp-0x80]
    void* v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    char *v11;  // [bp-0x40]
    unsigned long long v12;  // [bp-0x38]
    char v13;  // [bp-0x30]
    char v14;  // [bp-0x20]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rcx

    v9 = a1;
    v10 = a2;
    std::fs::read_to_string(&v0, a1, a2);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        *((char *)a0) = 0;
        *((unsigned long long *)&a0[8]) = v7;
        return v0;
    }
    v6 = v0;
    v7 = *((long long *)&v1);
    v8 = *((long long *)&v2);
    if ((char)bat::assets::build_assets::acknowledgements::include_license_in_acknowledgments(v7, v8))
    {
        *((unsigned long long *)&a0[24]) = v8;
        *((int128_t *)&a0[8]) = *((int128_t *)&v6);
        *((char *)a0) = 13;
        return v8;
    }
    if ((char)bat::assets::build_assets::acknowledgements::license_not_needed_in_acknowledgements(v7, v8))
    {
        *((unsigned long long *)&a0[8]) = 0x8000000000000000;
        *((char *)a0) = 13;
    }
    else
    {
        v11 = &v9;
        v12 = <&T as core::fmt::Debug>::fmt;
        v0 = &g_acdfa8;
        v1 = 1;
        v5 = 0;
        v2 = &v11;
        v4 = 1;
        v13.map_or_else(0, a2, &v0);
        memcpy(&(char)v0, &v13, 16);
        v3 = *((long long *)&v14);
        *((char *)a0) = 11;
        v16 = *((long long *)((char *)&v1 + 7));
        v17 = v3;
        *((int128_t *)&a0[1]) = *((int128_t *)&v0);
        *((unsigned long long *)&a0[16]) = v16;
        *((unsigned long long *)&a0[24]) = v17;
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v6);
}
