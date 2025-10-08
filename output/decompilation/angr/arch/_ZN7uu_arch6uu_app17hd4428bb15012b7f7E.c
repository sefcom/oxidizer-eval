long long uu_arch::uu_app(struct_0 *a0)
{
    char v0;  // [bp-0x5a8]
    unsigned long v1;  // [bp-0x2ec]
    unsigned int v2;  // [bp-0x2e4]
    char v3;  // [bp-0x2e0]
    unsigned long long v6;  // rdx

    v3.new(uucore::util_name(), v6);
    v0.version(&v3);
    v3.about(&v0);
    v0.after_help(&v3);
    memcpy(a0, &v0, 700);
    *((unsigned long *)&(&a0->padding_0)[1]) = 549755814016 | v1;
    *((unsigned int *)((char *)&a0->field_2bc + 4)) = v2;
    return a0;
}
