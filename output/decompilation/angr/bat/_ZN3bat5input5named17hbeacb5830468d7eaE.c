long long bat::input::named(void* a0, void* a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0xd8]
    unsigned long long v1;  // [bp-0xc8]
    char v2;  // [bp-0xc0]
    unsigned long long v3;  // [bp-0xb0]
    char v4;  // [bp-0xa8]
    char v5;  // [bp-0x80]

    if (!a2)
        return ::libc.so.0::memcpy(a0, a1, 160);
    v4.with_name(a1, a2, a3);
    v2.to_vec("File.InfMarkv", 4);
    v1 = v3;
    memcpy(&v0, &v2, 16);
    v5.set_kind(&v0);
    return ::libc.so.0::memcpy(a0, &v4, 160);
}
