long long uu_users::uu_app(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x840]
    char v1;  // [bp-0x828]
    unsigned long long v2;  // [bp-0x56c]
    unsigned int v3;  // [bp-0x564]
    char v4;  // [bp-0x560]
    unsigned long v5;  // [bp-0x2a4]
    unsigned int v6;  // [bp-0x29c]
    char v7;  // [bp-0x298]
    unsigned long long v10;  // rdx

    v1.new(uucore::util_name(), v10);
    v4.version(&v1);
    v1.about(&v4);
    uucore::format_usage(&v7, "{} [FILE]", 9);
    v4.override_usage(&v1, &v7);
    memcpy(&v1, &v4, 700);
    v2 = 549755814016 | v5;
    v3 = v6;
    v4.new();
    v7.num_args(&v4);
    v4.value_hint(&v7);
    v0 = 2;
    v7.value_parser(&v4, &v0);
    a0.arg(&v1, &v7);
    return a0;
}
