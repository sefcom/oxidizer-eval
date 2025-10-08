long long uu_sleep::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x828]
    unsigned long long v1;  // [bp-0x56c]
    unsigned int v2;  // [bp-0x564]
    char v3;  // [bp-0x560]
    unsigned long v4;  // [bp-0x2a4]
    unsigned int v5;  // [bp-0x29c]
    char v6;  // [bp-0x298]
    unsigned long long v9;  // rdx

    v3.new(uucore::util_name(), v9);
    v0.version(&v3);
    v3.about(&v0);
    v0.after_help(&v3);
    uucore::format_usage(&v6, "{} NUMBER[SUFFIX]...\n{} OPTIONNUMBERpause for NUMBER seconds: \n", 30);
    v3.override_usage(&v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | v4;
    v2 = v5;
    v3.new();
    v6.help(&v3);
    v3.value_name(&v6);
    v6.action(&v3);
    a0.arg(&v0, &v6);
    return a0;
}
