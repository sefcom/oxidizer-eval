long long uu_tail::follow::watch::WatcherRx::unwatch(unsigned long long a0, struct_1 *a1)
{
    int v0;  // [bp-0x70], Other Possible Types: char
    int v1;  // [bp-0x60]
    char v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x40]
    int v4;  // [bp-0x38]
    int v5;  // [bp-0x28]
    char v6;  // [bp-0x18]
    unsigned long long v7;  // [bp-0x8]

    a1->field_20(&v0, a0);
    if (*((int *)&v0) != 6)
    {
        v7 = v3;
        memcpy(&v6, &v2, 16);
        v5 = v1;
        v4 = v0;
        return uu_tail::follow::watch::WatcherRx::watch::{{closure}}(&v4);
    }
    return 0;
}
