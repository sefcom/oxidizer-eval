long long uu_dirname::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xaa8]
    unsigned int v1;  // [bp-0x830]
    char v2;  // [bp-0x82c]
    unsigned long long v3;  // [bp-0x7ec]
    unsigned int v4;  // [bp-0x7e4]
    char v5;  // [bp-0x7e0]
    unsigned int v6;  // [bp-0x568]
    unsigned int v7;  // [bp-0x564]
    char v8;  // [bp-0x560]
    unsigned long v9;  // [bp-0x2a4]
    unsigned int v10;  // [bp-0x29c]
    char v11;  // [bp-0x298]
    unsigned long long v14;  // rdx

    v0.new(uucore::util_name(), v14);
    v8.about(&v0);
    v0.version(&v8);
    uucore::format_usage(&v5, "{} [OPTION] NAME...separate output with NUL rather than newlinedir", 19);
    v8.override_usage(&v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 584115552392 | v9;
    v4 = v10;
    v8.new("zeroAnsi -- ", 4);
    v5.long(&v8);
    v8.short(&v5);
    v5.help(&v8);
    v11.action(&v5, 2);
    v8.arg(&v0, &v11);
    v0.new("dir", 3);
    memcpy(&v5, &v0, 632);
    v6 = v1 | 4;
    v7 = *((int *)&v2);
    v0.action(&v5, 1);
    v5.value_hint(&v0);
    a0.arg(&v8, &v5);
    return a0;
}
