long long uu_arch::uu_app(struct_0 *a0)
{
    char v0;  // [bp-0x5b8]
    char v1;  // [bp-0x5a0]
    unsigned long v2;  // [bp-0x2e4]
    unsigned int v3;  // [bp-0x2dc]
    char v4;  // [bp-0x2d8]
    unsigned long long v7;  // rdx

    v4.new(uucore::util_name(), v7);
    v1.version(&v4);
    uucore::mods::locale::get_message(&v0, "arch-aboutarch-after-help", 10);
    v4.about(&v1, &v0);
    uucore::mods::locale::get_message(&v0, "arch-after-help", 15);
    v1.after_help(&v4, &v0);
    memcpy(a0, &v1, 700);
    *((unsigned long *)&(&a0->padding_0)[1]) = 549755814016 | v2;
    *((unsigned int *)((char *)&a0->field_2bc + 4)) = v3;
    return a0;
}
