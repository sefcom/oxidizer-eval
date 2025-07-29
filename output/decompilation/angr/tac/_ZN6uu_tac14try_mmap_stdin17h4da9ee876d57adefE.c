double uu_tac::try_mmap_stdin(long long a0)
{
    unsigned long long v0;  // [bp-0x48]
    char v1;  // [bp-0x40]
    int v2;  // [bp-0x38]
    void* v3;  // [bp-0x28]
    void* v4;  // [bp-0x18]
    char v5;  // [bp-0x10]
    unsigned short v6;  // [bp-0xe]
    unsigned long v8;  // xmm0lq

    v0 = std::io::stdio::stdin();
    v4 = 0;
    v3 = 0;
    v5 = 0;
    v6 = 0;
    v1.map(&v3);
    if (!(v1 & 1))
    {
        *((void*)&(&a0->field_0)[1]) = v2;
        a0->field_0 = 1;
        return (unsigned long long)v2;
    }
    a0->field_0 = 0;
    core::ptr::drop_in_place<core::result::Result<memmap2::Mmap,std::io::error::Error>>(&v1);
    return v8;
}
