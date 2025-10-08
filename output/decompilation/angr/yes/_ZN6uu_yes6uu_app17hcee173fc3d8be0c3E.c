long long uu_yes::uu_app(struct_0 *a0)
{
    char v0;  // [bp-0xaa8]
    unsigned long v1;  // [bp-0x7ec]
    unsigned int v2;  // [bp-0x7e4]
    char v3;  // [bp-0x7e0]
    char v4;  // [bp-0x560]
    unsigned long long v5;  // [bp-0x298]
    unsigned long long v8;  // rdx

    v0.new(uucore::util_name(), v8);
    v4.version(&v0);
    v0.about(&v4);
    uucore::format_usage(&v3, "{} [STRING]...STRINGassertion failed: !buf.is_empty()src/uu/yes/src/yes.rs", 14);
    v4.override_usage(&v0, &v3);
    v0.new();
    v5 = 2;
    v3.value_parser(&v0, &v5);
    v5.action(&v3);
    v0.arg(&v4, &v5);
    memcpy(a0, &v0, 700);
    *((unsigned long *)&(&a0->padding_0)[1]) = 549755814016 | v1;
    *((unsigned int *)((char *)&a0->field_2bc + 4)) = v2;
    return a0;
}
