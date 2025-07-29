long long uu_base32::base_common::base_app(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0xb00]
    int v1;  // [bp-0xaf8]
    unsigned long long v2;  // [bp-0xae8]
    char v3;  // [bp-0xae0]
    unsigned long long v4;  // [bp-0xad0]
    char v5;  // [bp-0xac8]
    char v6;  // [bp-0xab8]
    unsigned long v7;  // [bp-0x80c]
    unsigned int v8;  // [bp-0x804]
    char v9;  // [bp-0x800]
    char v10;  // [bp-0x580]
    unsigned long long v11;  // [bp-0x2c4]
    unsigned int v12;  // [bp-0x2bc]
    int v13;  // [bp-0x2b8], Other Possible Types: char
    unsigned long long v14;  // [bp-0x2a8]

    v10.new(uucore::util_name(), a2);
    v5.version(&v10, "(uutils coreutils) 0.1.0base-common-help-decodebase-common-help-ignore-garbagebase-common-help-wrapabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789+/=", 24);
    v10.about(&v5, a1, a2);
    uucore::format_usage(&v9, a3, a4);
    v5.override_usage(&v10, &v9);
    memcpy(&v10, &v5, 700);
    v11 = 549755814016 | v7;
    v12 = v8;
    v5.new(_ZN9uu_base3211base_common7options6DECODE17h9a8e163711363833E, g_5a2bd8);
    v9.short(&v5, 100);
    v5.visible_short_alias(&v9, 68);
    v9.long(&v5, _ZN9uu_base3211base_common7options6DECODE17h9a8e163711363833E, g_5a2bd8);
    uucore::mods::locale::get_message(&v13, "base-common-help-decodebase-common-help-ignore-garbagebase-common-help-wrapabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789+/=", 23);
    v5.help(&v9, &v13);
    v9.action(&v5, 2);
    v13.overrides_with(&v9, _ZN9uu_base3211base_common7options6DECODE17h9a8e163711363833E, g_5a2bd8);
    v5.arg(&v10, &v13);
    v10.new(_ZN9uu_base3211base_common7options14IGNORE_GARBAGE17hd80a9a40432d6fddE, g_5a2bf8);
    v9.short(&v10, 105);
    v10.long(&v9, _ZN9uu_base3211base_common7options14IGNORE_GARBAGE17hd80a9a40432d6fddE, g_5a2bf8);
    uucore::mods::locale::get_message(&v13, "base-common-help-ignore-garbagebase-common-help-wrapabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789+/=", 31);
    v9.help(&v10, &v13);
    v10.action(&v9, 2);
    v9.overrides_with(&v10, _ZN9uu_base3211base_common7options14IGNORE_GARBAGE17hd80a9a40432d6fddE, g_5a2bf8);
    v10.arg(&v5, &v9);
    v5.new(_ZN9uu_base3211base_common7options4WRAP17h12eb99400841a458E, g_5a2be8);
    v9.short(&v5, 119);
    v5.long(&v9, _ZN9uu_base3211base_common7options4WRAP17h12eb99400841a458E, g_5a2be8);
    v9.value_name(&v5);
    v5.to_vec("default(uutils coreutils) 0.1.0base-common-help-decodebase-common-help-ignore-garbagebase-common-help-wrapabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789+/=", 7);
    v14 = *((long long *)&v6);
    memcpy(&v13, &v5, 16);
    v5.spec_to_string();
    v2 = v14;
    v1 = v13;
    memcpy(&v3, &v5, 16);
    v4 = *((long long *)&v6);
    v5.from_iter(&v1);
    uucore::mods::locale::get_message_with_args(&v13, "base-common-help-wrapabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789+/=", 21, &v5);
    v5.help(&v9, &v13);
    v9.overrides_with(&v5, _ZN9uu_base3211base_common7options4WRAP17h12eb99400841a458E, g_5a2be8);
    v5.arg(&v10, &v9);
    v10.new(_ZN9uu_base3211base_common7options4FILE17h296142de6aadc755E, g_5a2c08);
    v9.index(&v10);
    v10.action(&v9, 1);
    v9.value_hint(&v10, 3);
    v0.arg(&v5, &v9);
    return a0;
}
