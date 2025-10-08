long long starship::formatter::version::VersionFormatter::format(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0xf0]
    char v1;  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xe8]
    char *v3;  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    char v6;  // [bp-0xc8]
    int v7;  // [bp-0xc0]
    unsigned long v8;  // [bp-0xb0]
    int v9;  // [bp-0xa8], Other Possible Types: char
    char v10;  // [bp-0x98]
    char *v11;  // [bp-0x60]
    unsigned int v12;  // [bp-0x10]

    v4 = a2;
    v5 = a3;
    v12 = 0;
    v11 = &v4;
    v0 = a2;
    v2 = a3;
    v3 = &v11;
    v9.map(a1, &v0);
    v1 = 2;
    v6.parse(&v9, &v1, 0);
    if (*((int *)&v6) == 1)
    {
        *((unsigned long *)((char *)&a0->field_8 + 8)) = v8;
        *((void*)&(&a0->field_0)[1]) = v7;
        a0->field_0 = 1;
    }
    else
    {
        starship::formatter::version::VersionFormatter::format::{{closure}}(&v9, &(char)v7);
        *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v10);
        *((void*)&(&a0->field_0)[1]) = v9;
        a0->field_0 = 0;
    }
    core::ptr::drop_in_place<std::sync::lazy_lock::LazyLock<core::option::Option<versions::versioning::Versioning>,starship::formatter::version::VersionFormatter::format::{{closure}}>>(&v11);
    return a0;
}
