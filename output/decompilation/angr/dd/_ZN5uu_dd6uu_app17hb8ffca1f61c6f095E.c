long long uu_dd::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x830]
    unsigned long v1;  // [bp-0x574]
    unsigned int v2;  // [bp-0x56c]
    char v3;  // [bp-0x568]
    unsigned long long v4;  // [bp-0x2ac]
    unsigned int v5;  // [bp-0x2a4]
    char v6;  // [bp-0x2a0]
    unsigned long long v9;  // rdx

    v0.new(uucore::util_name(), v9);
    v3.version(&v0);
    v0.about(&v3);
    uucore::format_usage(&v6, "{} [OPERAND]...\n{} OPTION### Operands\n\n- bs=BYTES : read and write up to BYTES bytes at a time (default: 512);\n   overwrites ibs and obs.\n- cbs=BYTES : the 'conversion block size' in bytes. Applies to the\n   conv=block, and conv=unblock operations.\n- conv=", 25);
    v3.override_usage(&v0, &v6);
    v0.after_help(&v3);
    memcpy(&v3, &v0, 700);
    v4 = 549755814016 | v1;
    v5 = v2;
    v0.new();
    v6.num_args(&v0);
    a0.arg(&v3, &v6);
    return a0;
}
