long long uu_expand::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac0]
    unsigned long long v1;  // [bp-0xab8]
    unsigned long long v2;  // [bp-0xab0]
    char v3;  // [bp-0xaa8]
    unsigned int v4;  // [bp-0x830]
    unsigned int v5;  // [bp-0x82c]
    unsigned long long v6;  // [bp-0x7ec]
    unsigned int v7;  // [bp-0x7e4]
    char v8;  // [bp-0x7e0]
    unsigned int v9;  // [bp-0x568]
    unsigned int v10;  // [bp-0x564]
    char v11;  // [bp-0x560]
    unsigned long v12;  // [bp-0x2a4]
    unsigned int v13;  // [bp-0x29c]
    char v14;  // [bp-0x298]
    unsigned long long v17;  // rdx

    v11.new(uucore::util_name(), v17);
    v3.version(&v11, "(uutils coreutils) 0.1.0expand-aboutexpand-usageexpand-help-initialN, LISTexpand-help-no-utf8: \nexpand-error-is-directoryspecifiernumberexpand-error-invalid-characterexpand-error-specifier-not-at-startexpand-error-specifier-only-allowed-with-lastexpand-err", 24);
    uucore::mods::locale::get_message(&v8, "expand-aboutexpand-usageexpand-help-initialN, LISTexpand-help-no-utf8: \nexpand-error-is-directoryspecifiernumberexpand-error-invalid-characterexpand-error-specifier-not-at-startexpand-error-specifier-only-allowed-with-lastexpand-error-tab-size-cannot-be-ze", 12);
    v11.about(&v3, &v8);
    v3.after_help(&v11, 1, 0);
    uucore::mods::locale::get_message(&v0, "expand-usageexpand-help-initialN, LISTexpand-help-no-utf8: \nexpand-error-is-directoryspecifiernumberexpand-error-invalid-characterexpand-error-specifier-not-at-startexpand-error-specifier-only-allowed-with-lastexpand-error-tab-size-cannot-be-zeroexpand-err", 12);
    uucore::format_usage(&v8, v1, v2);
    v11.override_usage(&v3, &v8);
    memcpy(&v3, &v11, 700);
    v6 = 584115552392 | v12;
    v7 = v13;
    v11.new(_ZN9uu_expand7options7INITIAL17hcadd7da68475aed2E, g_57b9e8);
    v8.long(&v11, _ZN9uu_expand7options7INITIAL17hcadd7da68475aed2E, g_57b9e8);
    v11.short(&v8, 105);
    uucore::mods::locale::get_message(&v14, "expand-help-initialN, LISTexpand-help-no-utf8: \nexpand-error-is-directoryspecifiernumberexpand-error-invalid-characterexpand-error-specifier-not-at-startexpand-error-specifier-only-allowed-with-lastexpand-error-tab-size-cannot-be-zeroexpand-error-tab-size-", 19);
    v8.help(&v11, &v14);
    v14.action(&v8, 2);
    v11.arg(&v3, &v14);
    v3.new(_ZN9uu_expand7options4TABS17he4f92886d41ef3e1E, g_57b9d8);
    v8.long(&v3, _ZN9uu_expand7options4TABS17he4f92886d41ef3e1E, g_57b9d8);
    v3.short(&v8, 116);
    v8.value_name(&v3);
    v3.action(&v8, 1);
    uucore::mods::locale::get_message(&v14, "expand-help-tabs", 16);
    v8.help(&v3, &v14);
    v3.arg(&v11, &v8);
    v11.new(_ZN9uu_expand7options7NO_UTF817hac2db96005fc52ceE, g_57b9f8);
    v8.long(&v11, _ZN9uu_expand7options7NO_UTF817hac2db96005fc52ceE, g_57b9f8);
    v11.short(&v8, 85);
    uucore::mods::locale::get_message(&v14, "expand-help-no-utf8: \nexpand-error-is-directoryspecifiernumberexpand-error-invalid-characterexpand-error-specifier-not-at-startexpand-error-specifier-only-allowed-with-lastexpand-error-tab-size-cannot-be-zeroexpand-error-tab-size-too-largeexpand-error-tab-", 19);
    v8.help(&v11, &v14);
    v14.action(&v8, 2);
    v11.arg(&v3, &v14);
    v3.new(_ZN9uu_expand7options5FILES17h7df57fd68273d6a6E, g_57ba08);
    v8.action(&v3, 1);
    memcpy(&v3, &v8, 632);
    v4 = v9 | 4;
    v5 = v10;
    v8.value_hint(&v3, 3);
    a0.arg(&v11, &v8);
    ::0x49d1a0::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
