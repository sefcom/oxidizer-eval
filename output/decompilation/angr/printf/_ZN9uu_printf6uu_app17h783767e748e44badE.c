long long uu_printf::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x878], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x870]
    unsigned long long v2;  // [bp-0x868]
    char v3;  // [bp-0x860]
    unsigned long long v4;  // [bp-0x848]
    char v5;  // [bp-0x830]
    char v6;  // [bp-0x574], Other Possible Types: unsigned long long
    char v7;  // [bp-0x570]
    unsigned int v8;  // [bp-0x56c]
    char v9;  // [bp-0x568]
    char v10;  // [bp-0x2e8]
    unsigned int v11;  // [bp-0x2c]
    unsigned long long v12;  // [bp-0x28]
    unsigned long long v15;  // rdx
    unsigned int v16;  // eax

    v5.new(uucore::util_name(), v15);
    memcpy(&v10, &v5, 700);
    v11 = *((int *)&v6) | 2;
    v12 = *((long long *)&v7);
    v5.version(&v10);
    uucore::mods::locale::get_message(&v9, "printf-aboutprintf-after-helpprintf-usageversionprintf-help-versionFORMAT", 12);
    v10.about(&v5, &v9);
    uucore::mods::locale::get_message(&v9, "printf-after-helpprintf-usageversionprintf-help-versionFORMAT", 17);
    v5.after_help(&v10, &v9);
    uucore::mods::locale::get_message(&v0, "printf-usageversionprintf-help-versionFORMAT", 12);
    uucore::format_usage(&v9, v1, v2);
    v10.override_usage(&v5, &v9);
    memcpy(&v5, &v10, 700);
    v16 = *((int *)((char *)&v12 + 4));
    v6 = 0x28000000280000 | *((long long *)&v11);
    v8 = v16;
    v10.new("helpNoneshimname", 4);
    v9.long(&v10, "helpNoneshimname", 4);
    uucore::mods::locale::get_message(&v3, "printf-help-help", 16);
    v10.help(&v9, &v3);
    v9.action(&v10, 5);
    v10.arg(&v5, &v9);
    v5.new("versionprintf-help-versionFORMAT", 7);
    v9.long(&v5, "versionprintf-help-versionFORMAT", 7);
    uucore::mods::locale::get_message(&v3, "printf-help-versionFORMAT", 19);
    v5.help(&v9, &v3);
    v9.action(&v5, 8);
    v5.arg(&v10, &v9);
    v10.new("FORMAT", 6);
    v4 = 2;
    v9.value_parser(&v10, &v4);
    v10.arg(&v5, &v9);
    v5.new("ARGUMENT", 8);
    v9.action(&v5, 1);
    v5.value_parser(&v9, &v4);
    a0.arg(&v10, &v5);
    core::ptr::drop_in_place<alloc::string::String>(v0, v1);
    return a0;
}
