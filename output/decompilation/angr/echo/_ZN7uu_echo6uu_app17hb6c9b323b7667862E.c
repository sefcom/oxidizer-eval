long long uu_echo::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac0]
    unsigned long long v1;  // [bp-0xab8]
    unsigned long long v2;  // [bp-0xab0]
    char v3;  // [bp-0xaa8]
    unsigned int v4;  // [bp-0x7ec]
    unsigned long long v5;  // [bp-0x7e8]
    char v6;  // [bp-0x7e0]
    char v7;  // [bp-0x560]
    unsigned int v8;  // [bp-0x2a4]
    unsigned long long v9;  // [bp-0x2a0]
    char v10;  // [bp-0x298], Other Possible Types: unsigned long long
    unsigned long long v13;  // rdx

    v3.new(uucore::util_name(), v13);
    memcpy(&v7, &v3, 700);
    v8 = v4 | 34;
    v9 = v5;
    v3.version(&v7, "(uutils coreutils) 0.1.0echo-aboutecho-after-helpecho-usageno_newlineecho-help-no-newlineenable_backslash_escapeecho-help-enable-escapesdisable_backslash_escapeecho-help-disable-escapesSTRING\n ", 24);
    uucore::mods::locale::get_message(&v6, "echo-aboutecho-after-helpecho-usageno_newlineecho-help-no-newlineenable_backslash_escapeecho-help-enable-escapesdisable_backslash_escapeecho-help-disable-escapesSTRING\n ", 10);
    v7.about(&v3, &v6);
    uucore::mods::locale::get_message(&v6, "echo-after-helpecho-usageno_newlineecho-help-no-newlineenable_backslash_escapeecho-help-enable-escapesdisable_backslash_escapeecho-help-disable-escapesSTRING\n ", 15);
    v3.after_help(&v7, &v6);
    uucore::mods::locale::get_message(&v0, "echo-usageno_newlineecho-help-no-newlineenable_backslash_escapeecho-help-enable-escapesdisable_backslash_escapeecho-help-disable-escapesSTRING\n ", 10);
    uucore::format_usage(&v6, v1, v2);
    v7.override_usage(&v3, &v6);
    v3.new("no_newlineecho-help-no-newlineenable_backslash_escapeecho-help-enable-escapesdisable_backslash_escapeecho-help-disable-escapesSTRING\n ", 10);
    v6.short(&v3, 110);
    uucore::mods::locale::get_message(&v10, "echo-help-no-newlineenable_backslash_escapeecho-help-enable-escapesdisable_backslash_escapeecho-help-disable-escapesSTRING\n ", 20);
    v3.help(&v6, &v10);
    v6.action(&v3, 2);
    v3.arg(&v7, &v6);
    v7.new("enable_backslash_escapeecho-help-enable-escapesdisable_backslash_escapeecho-help-disable-escapesSTRING\n ", 23);
    v6.short(&v7, 101);
    uucore::mods::locale::get_message(&v10, "echo-help-enable-escapesdisable_backslash_escapeecho-help-disable-escapesSTRING\n ", 24);
    v7.help(&v6, &v10);
    v6.action(&v7, 2);
    v10.overrides_with(&v6, "disable_backslash_escapeecho-help-disable-escapesSTRING\n ", 24);
    v7.arg(&v3, &v10);
    v3.new("disable_backslash_escapeecho-help-disable-escapesSTRING\n ", 24);
    v6.short(&v3, 69);
    uucore::mods::locale::get_message(&v10, "echo-help-disable-escapesSTRING\n ", 25);
    v3.help(&v6, &v10);
    v6.action(&v3, 2);
    v10.overrides_with(&v6, "enable_backslash_escapeecho-help-enable-escapesdisable_backslash_escapeecho-help-disable-escapesSTRING\n ", 23);
    v3.arg(&v7, &v10);
    v7.new("STRING\n ", 6);
    v6.action(&v7, 1);
    v10 = 2;
    v7.value_parser(&v6, &v10);
    a0.arg(&v3, &v7);
    ::0x47c850::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
