long long fd::dir_entry::DirEntry::into_path(struct_0 *a0, void* a1)
{
    int v0;  // [bp-0x78]
    int v1;  // [bp-0x68]
    int v2;  // [bp-0x58]
    int v3;  // [bp-0x48]
    int v4;  // [bp-0x38]
    int v5;  // [bp-0x28]
    int v6;  // [bp-0x18]
    unsigned long long v8;  // rax

    if (*((int *)a1) != 3)
    {
        *((int128_t *)&v6) = (int128_t)a1[96];
        *((int128_t *)&v5) = (int128_t)a1[80];
        *((int128_t *)&v4) = (int128_t)a1[64];
        *((int128_t *)&v3) = (int128_t)a1[48];
        *((int128_t *)&v2) = (int128_t)a1[32];
        *((int128_t *)&v1) = (int128_t)a1[16];
        *((int128_t *)&v0) = *((int128_t *)a1);
        return a0.into_path(&v0);
    }
    v8 = (long long)a1[24];
    a0->field_10 = v8;
    a0->field_0 = (int128_t)a1[8];
    return v8;
}
