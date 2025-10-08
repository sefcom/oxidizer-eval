long long uu_link::uu_app(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x848]
    char v1;  // [bp-0x830]
    unsigned int v2;  // [bp-0x5b8]
    char v3;  // [bp-0x5b4]
    unsigned long v4;  // [bp-0x574]
    unsigned int v5;  // [bp-0x56c]
    char v6;  // [bp-0x568]
    unsigned long long v7;  // [bp-0x2ac]
    unsigned int v8;  // [bp-0x2a4]
    char v9;  // [bp-0x2a0]
    unsigned int v10;  // [bp-0x28]
    unsigned int v11;  // [bp-0x24]
    unsigned long long v14;  // rdx

    v6.new(uucore::util_name(), v14);
    v1.version(&v6);
    v6.about(&v1);
    uucore::format_usage(&v9, "{} FILE1 FILE2", 14);
    v1.override_usage(&v6, &v9);
    memcpy(&v6, &v1, 700);
    v7 = 549755814016 | v4;
    v8 = v5;
    v1.new();
    memcpy(&v9, &v1, 632);
    v10 = v2 | 5;
    v11 = *((int *)&v3);
    v1.num_args(&v9);
    v9.value_hint(&v1);
    v0 = 2;
    v1.value_parser(&v9, &v0);
    a0.arg(&v6, &v1);
    return a0;
}
