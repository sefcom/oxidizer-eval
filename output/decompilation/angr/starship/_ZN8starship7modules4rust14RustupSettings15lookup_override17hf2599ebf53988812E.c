void starship::modules::rust::RustupSettings::lookup_override(void* a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    char v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x70]
    char v4;  // [bp-0x68]
    char v5;  // [bp-0x50], Other Possible Types: unsigned long long
    char v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x38]
    char *v8;  // [bp-0x28]

    v4.to_path_buf(a2, a3);
    v5.iter(a1 + 72);
    v8 = &v4;
    v0.reduce(&v5);
    if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v7 = v3;
        memcpy(&v6, &v2, 16);
        v5 = v1;
        starship::modules::rust::RustupSettings::lookup_override::{{closure}}(&v0, &v5);
        *((long long *)&a0[16]) = *((long long *)&v2);
        *((int128_t *)a0) = *((int128_t *)&v0);
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v4);
    return;
}
