long long uu_pwd::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned long long v1;  // [bp-0x7f4]
    unsigned int v2;  // [bp-0x7ec]
    char v3;  // [bp-0x7e8]
    char v4;  // [bp-0x568]
    unsigned long v5;  // [bp-0x2ac]
    unsigned int v6;  // [bp-0x2a4]
    char v7;  // [bp-0x2a0]
    unsigned long long v10;  // rdx

    v0.new(uucore::util_name(), v10);
    v4.version(&v0);
    v0.about(&v4);
    uucore::format_usage(&v3, "{} [OPTION]... [FILE]...logicaluse PWD from environment, even if it contains symlinksavoid all symlinks", 24);
    v4.override_usage(&v0, &v3);
    memcpy(&v0, &v4, 700);
    v1 = 549755814016 | v5;
    v2 = v6;
    v4.new("logicaluse PWD from environment, even if it contains symlinksavoid all symlinks", 7);
    v3.short(&v4, 76);
    v4.long(&v3, "logicaluse PWD from environment, even if it contains symlinksavoid all symlinks", 7);
    v3.help(&v4, "use PWD from environment, even if it contains symlinksavoid all symlinks", 54);
    v7.action(&v3);
    v4.arg(&v0, &v7);
    v0.new("physicalNotFoundTimedOutENETDOWN\n       ", 8);
    v3.short(&v0, 80);
    v0.long(&v3, "physicalNotFoundTimedOutENETDOWN\n       ", 8);
    v3.overrides_with(&v0);
    v0.help(&v3, "avoid all symlinks", 18);
    v3.action(&v0);
    a0.arg(&v4, &v3);
    return a0;
}
