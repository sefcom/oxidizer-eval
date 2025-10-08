double zoxide::util::Fzf::spawn(long long a0, long long a1)
{
    unsigned int v0;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x48]
    char v2;  // [bp-0x30], Other Possible Types: unsigned int
    char v3;  // [bp-0x2c]
    unsigned long long v4;  // [bp-0x28]
    int v5;  // [bp-0x20]
    unsigned long long v7;  // r14
    unsigned long v8;  // xmm0lq
    unsigned long v9;  // xmm0lq
    int v10;  // xmm0

    v2.spawn(a1);
    if (v2 != 1)
    {
        v10 = *((int128_t *)&v3);
        *((int128_t *)&a0->field_4[12]) = (int128_t)v5;
        *((void*)&a0->field_4[0]) = v10;
        a0->field_0 = 0;
        return (unsigned long long)v10;
    }
    v7 = v4;
    if (!(char)v7.kind())
    {
        v0 = v7;
        *((long long *)&a0->field_4[4]) = anyhow::kind::Adhoc::new();
        a0->field_0 = 1;
        core::ptr::drop_in_place<std::io::error::Error>(&v0);
        return v9;
    }
    v1 = v7;
    v0 = 1;
    a0.context(&v0);
    return v8;
}
