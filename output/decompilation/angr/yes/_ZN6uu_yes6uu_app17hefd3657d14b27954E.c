long long uu_yes::uu_app(struct_0 *a0)
{
    char v0;  // [bp-0xac0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xab8]
    unsigned long long v2;  // [bp-0xab0]
    char v3;  // [bp-0xaa8]
    unsigned long v4;  // [bp-0x7ec]
    unsigned int v5;  // [bp-0x7e4]
    char v6;  // [bp-0x7e0]
    char v7;  // [bp-0x560]
    unsigned long long v8;  // [bp-0x298]
    unsigned long long v11;  // rdx

    v3.new(uucore::util_name(), v11);
    v7.version(&v3);
    uucore::mods::locale::get_message(&v6, "yes-aboutyes-usageSTRINGassertion failed: !buf.is_empty()src/uu/yes/src/yes.rs", 9);
    v3.about(&v7, &v6);
    uucore::mods::locale::get_message(&v0, "yes-usageSTRINGassertion failed: !buf.is_empty()src/uu/yes/src/yes.rs", 9);
    uucore::format_usage(&v6, v1, v2);
    v7.override_usage(&v3, &v6);
    v3.new();
    v8 = 2;
    v6.value_parser(&v3, &v8);
    v8.action(&v6);
    v3.arg(&v7, &v8);
    memcpy(a0, &v3, 700);
    *((unsigned long *)&(&a0->padding_0)[1]) = 549755814016 | v4;
    *((unsigned int *)((char *)&a0->field_2bc + 4)) = v5;
    core::ptr::drop_in_place<alloc::string::String>(v0, v1);
    return a0;
}
