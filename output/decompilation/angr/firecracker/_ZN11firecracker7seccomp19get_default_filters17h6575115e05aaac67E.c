double firecracker::seccomp::get_default_filters(long long a0)
{
    int v0;  // [bp-0xa8]
    int v1;  // [bp-0x98], Other Possible Types: char
    char v2;  // [bp-0x88], Other Possible Types: unsigned long long
    int v3;  // [bp-0x80]
    char v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    int v7;  // [bp-0x50]
    int v8;  // [bp-0x40]
    unsigned long long v9;  // [bp-0x30]

    vmm::seccomp::deserialize_binary(&v2);
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
