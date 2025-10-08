void fish::Asset::get(void* a0)
{
    char v0;  // [bp-0x78]
    int v1;  // [bp-0x70]
    int v2;  // [bp-0x60]
    int v3;  // [bp-0x50]
    int v4;  // [bp-0x40]
    int v5;  // [bp-0x30]
    int v6;  // [bp-0x20]
    char v7;  // [bp-0x10]
    unsigned long long v9;  // rdx

    alloc::str::<impl str>::replace(&v0);
    v2 = v1;
    if (((char)core::slice::<impl [T]>::binary_search_by_key(&v2) & 1))
    {
        *((unsigned long long *)a0) = 2;
    }
    else
    {
        fish::Asset::get::{{closure}}(&v2, v9);
        *((long long *)&a0[80]) = *((long long *)&v7);
        a0[64] = v6;
        a0[48] = v5;
        a0[32] = v4;
        a0[16] = v3;
        *(a0) = v2;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return;
}
