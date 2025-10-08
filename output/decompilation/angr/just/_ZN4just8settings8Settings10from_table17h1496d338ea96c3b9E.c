long long just::settings::Settings::from_table(void* a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x268]
    unsigned long long v1;  // [bp-0x250]
    unsigned long long v2;  // [bp-0x238]
    unsigned long long v3;  // [bp-0x1f0]
    unsigned long long v4;  // [bp-0x1a8]
    unsigned long long v5;  // [bp-0x190]
    unsigned long long v6;  // [bp-0x148]
    void* v7;  // [bp-0x130]
    unsigned int v8;  // [bp-0x129]
    unsigned short v9;  // [bp-0x125]
    char v10;  // [bp-0x120]
    char v11;  // [bp-0x110]
    char v12;  // [bp-0x78]
    unsigned long long v13;  // [bp-0x28]
    unsigned long long v14;  // [bp-0x10]
    unsigned long long v16;  // r15
    unsigned long long v17;  // r12

    v14 = v16;
    v13 = v17;
    v0 = 0x8000000000000000;
    v7 = 0;
    v1 = 0x8000000000000000;
    v8 = 0;
    v2 = 0x8000000000000000;
    v3 = 0x8000000000000000;
    v4 = 0x8000000000000000;
    v9 = 0;
    v5 = 0x8000000000000000;
    v6 = 0x8000000000000000;
    v12.into_iter(a1);
    v10.next(&v12);
    if (v11 == 20)
    {
        core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<&str,just::set::Set>>(&v12);
        return memcpy(a0, &v0, 328);
    }
    goto (long long)(g_46ac50[v11] + (char *)&g_46ac50[0]);
}
