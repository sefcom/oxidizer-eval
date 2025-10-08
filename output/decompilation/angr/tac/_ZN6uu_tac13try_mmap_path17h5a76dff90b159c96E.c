int uu_tac::try_mmap_path(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x4c]
    void* v1;  // [bp-0x48], Other Possible Types: char
    char v2;  // [bp-0x44]
    void* v3;  // [bp-0x38]
    char v4;  // [bp-0x30]
    unsigned short v5;  // [bp-0x2e]
    char v6;  // [bp-0x28]
    char v7;  // [bp-0x20]
    unsigned int v9;  // eax
    unsigned int v10;  // edi

    (char)v1.open(a1, a2);
    if ((v1 & 1))
    {
        v9 = core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&(char)v1);
        a0->field_0 = 0;
        return v9;
    }
    v0 = *((int *)&v2);
    v3 = 0;
    v1 = 0;
    v4 = 0;
    v5 = 0;
    v6.map(&(char)v1, &v0);
    if ((v6 & 1))
    {
        core::ptr::drop_in_place<core::result::Result<memmap2::Mmap,std::io::error::Error>>(&v6);
        a0->field_0 = 0;
        v10 = v0;
    }
    else
    {
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v7);
        a0->field_0 = 1;
        v10 = v0;
    }
    return core::ptr::drop_in_place<std::fs::File>(v10);
}
