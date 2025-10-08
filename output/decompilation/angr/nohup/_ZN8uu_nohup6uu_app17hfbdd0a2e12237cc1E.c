long long uu_nohup::uu_app(struct_0 *a0)
{
    char v0;  // [bp-0x828]
    unsigned int v1;  // [bp-0x5b0]
    char v2;  // [bp-0x5ac]
    unsigned long v3;  // [bp-0x56c]
    unsigned int v4;  // [bp-0x564]
    char v5;  // [bp-0x560]
    unsigned int v6;  // [bp-0x2e8]
    unsigned int v7;  // [bp-0x2e4]
    char v8;  // [bp-0x2e0]
    unsigned long long v11;  // rdx

    v8.new(uucore::util_name(), v11);
    v0.version(&v8);
    v8.about(&v0);
    v0.after_help(&v8);
    uucore::format_usage(&v5, "{} COMMAND [ARG]...\n{} OPTIONcmd/dev/nullSTDINSTDERRSTDOUT: ignoring input and appending output to \n", 29);
    v8.override_usage(&v0, &v5);
    v0.new();
    memcpy(&v5, &v0, 632);
    v6 = v1 | 5;
    v7 = *((int *)&v2);
    v0.action(&v5);
    v5.value_hint(&v0);
    v0.arg(&v8, &v5);
    memcpy(a0, &v0, 700);
    *((unsigned long *)&(&a0->padding_0)[1]) = 549755814048 | v3;
    *((unsigned int *)((char *)&a0->field_2bc + 4)) = v4;
    return a0;
}
