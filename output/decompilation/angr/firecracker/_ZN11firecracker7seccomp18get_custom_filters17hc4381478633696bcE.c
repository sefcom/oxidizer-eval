double firecracker::seccomp::get_custom_filters(long long a0, long long a1)
{
    int v0;  // [bp-0xe8]
    int v1;  // [bp-0xd8], Other Possible Types: char
    char v2;  // [bp-0xc8], Other Possible Types: unsigned long long
    int v3;  // [bp-0xc0]
    char v4;  // [bp-0xb0]
    unsigned long long v5;  // [bp-0xa0]
    unsigned long long v6;  // [bp-0x98]
    int v7;  // [bp-0x90]
    int v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x70]
    char v10;  // [bp-0x40]

    v10.with_capacity(a1);
    vmm::seccomp::deserialize_binary(&v2, &v10);
    v0 = v3;
    memcpy(&v1, &v4, 16);
    if (v2)
    {
        v6 = v2;
        v7 = v0;
        v8 = v1;
        v9 = v5;
        firecracker::seccomp::filter_thread_categories(a0, &v6);
    }
    else
    {
        *((void*)((char *)&a0->field_8 + 8)) = v1;
        *((void*)&(&a0->field_0)[1]) = v0;
        a0->field_0 = 0;
    }
    return (unsigned long long)v0;
}
