long long uu_hostid::uu_app(struct_0 *a0)
{
    char v0;  // [bp-0x5c0]
    char v1;  // [bp-0x5a8]
    unsigned long v2;  // [bp-0x2ec]
    unsigned int v3;  // [bp-0x2e4]
    char v4;  // [bp-0x2e0]
    unsigned long long v7;  // rdx

    v4.new(uucore::util_name(), v7);
    v1.version(&v4);
    v4.about(&v1);
    uucore::format_usage(&v0, "{} [options]\n", 12);
    v1.override_usage(&v4, &v0);
    memcpy(a0, &v1, 700);
    *((unsigned long *)&(&a0->padding_0)[1]) = 549755814016 | v2;
    *((unsigned int *)((char *)&a0->field_2bc + 4)) = v3;
    return a0;
}
