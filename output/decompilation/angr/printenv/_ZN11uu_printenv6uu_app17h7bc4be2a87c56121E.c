long long uu_printenv::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned long long v1;  // [bp-0x7f4]
    unsigned int v2;  // [bp-0x7ec]
    char v3;  // [bp-0x7e8]
    unsigned long v4;  // [bp-0x52c]
    unsigned int v5;  // [bp-0x524]
    char v6;  // [bp-0x520]
    char v7;  // [bp-0x2a0]
    unsigned long long v10;  // rdx

    v0.new(uucore::util_name(), v10);
    v3.version(&v0);
    v0.about(&v3);
    uucore::format_usage(&v6, "{} [OPTION]... [VARIABLE]...end each output line with 0 byte rather than newline", 28);
    v3.override_usage(&v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | v4;
    v2 = v5;
    v3.new("null", 4);
    v6.short(&v3);
    v3.long(&v6);
    v6.help(&v3);
    v7.action(&v6, 2);
    v3.arg(&v0, &v7);
    v0.new("variables(uutils coreutils) 0.0.30Display the values of the specified environment VARIABLE(s), or (with no VARIABLE) display name and value pairs for them all.{} [OPTION]... [VARIABLE]...end each output line with 0 byte rather than newline", 9);
    v6.action(&v0, 1);
    v0.num_args(&v6);
    a0.arg(&v3, &v0);
    return a0;
}
