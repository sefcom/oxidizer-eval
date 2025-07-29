long long uu_truncate::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac8]
    unsigned long long v1;  // [bp-0xac0]
    unsigned long long v2;  // [bp-0xab8]
    char v3;  // [bp-0xab0]
    unsigned int v4;  // [bp-0x838]
    char v5;  // [bp-0x834]
    unsigned long v6;  // [bp-0x7f4]
    unsigned int v7;  // [bp-0x7ec]
    char v8;  // [bp-0x7e8]
    unsigned int v9;  // [bp-0x570]
    unsigned int v10;  // [bp-0x56c]
    char v11;  // [bp-0x568]
    unsigned long long v12;  // [bp-0x2ac]
    unsigned int v13;  // [bp-0x2a4]
    char v14;  // [bp-0x2a0]
    unsigned long long v17;  // rdx

    v11.new(uucore::util_name(), v17);
    v3.version(&v11, "(uutils coreutils) 0.1.0truncate-abouttruncate-usagetruncate-help-io-blockstruncate-help-no-createtruncate-help-referenceRFILEtruncate-help-sizetruncate-error-cannot-open-no-deviceerrortruncate-error-must-specify-relative-sizetruncate-error-division-by-zer", 24);
    uucore::mods::locale::get_message(&v8, "truncate-abouttruncate-usagetruncate-help-io-blockstruncate-help-no-createtruncate-help-referenceRFILEtruncate-help-sizetruncate-error-cannot-open-no-deviceerrortruncate-error-must-specify-relative-sizetruncate-error-division-by-zerotruncate-error-invalid-", 14);
    v11.about(&v3, &v8);
    uucore::mods::locale::get_message(&v0, "truncate-usagetruncate-help-io-blockstruncate-help-no-createtruncate-help-referenceRFILEtruncate-help-sizetruncate-error-cannot-open-no-deviceerrortruncate-error-must-specify-relative-sizetruncate-error-division-by-zerotruncate-error-invalid-numbertruncate", 14);
    uucore::format_usage(&v8, v1, v2);
    v3.override_usage(&v11, &v8);
    memcpy(&v11, &v3, 700);
    v12 = 549755814016 | v6;
    v13 = v7;
    v3.new(_ZN11uu_truncate7options9IO_BLOCKS17h40f68d0c8a0e4fd5E, g_5781f8);
    v8.short(&v3, 111);
    v3.long(&v8, _ZN11uu_truncate7options9IO_BLOCKS17h40f68d0c8a0e4fd5E, g_5781f8);
    uucore::mods::locale::get_message(&v14, "truncate-help-io-blockstruncate-help-no-createtruncate-help-referenceRFILEtruncate-help-sizetruncate-error-cannot-open-no-deviceerrortruncate-error-must-specify-relative-sizetruncate-error-division-by-zerotruncate-error-invalid-numbertruncate-error-cannot-", 23);
    v8.help(&v3, &v14);
    v14.action(&v8, 2);
    v3.arg(&v11, &v14);
    v11.new(_ZN11uu_truncate7options9NO_CREATE17ha4a27809c1b61a44E, g_578208);
    v8.short(&v11, 99);
    v11.long(&v8, _ZN11uu_truncate7options9NO_CREATE17ha4a27809c1b61a44E, g_578208);
    uucore::mods::locale::get_message(&v14, "truncate-help-no-createtruncate-help-referenceRFILEtruncate-help-sizetruncate-error-cannot-open-no-deviceerrortruncate-error-must-specify-relative-sizetruncate-error-division-by-zerotruncate-error-invalid-numbertruncate-error-cannot-stat-no-such-file", 23);
    v8.help(&v11, &v14);
    v14.action(&v8, 2);
    v11.arg(&v3, &v14);
    v3.new(_ZN11uu_truncate7options9REFERENCE17h8acc3f884e5eab84E, g_578218);
    v8.short(&v3, 114);
    v3.long(&v8, _ZN11uu_truncate7options9REFERENCE17h8acc3f884e5eab84E, g_578218);
    v8.required_unless_present(&v3, _ZN11uu_truncate7options4SIZE17h300ede78d30061d9E, g_578228);
    uucore::mods::locale::get_message(&v14, "truncate-help-referenceRFILEtruncate-help-sizetruncate-error-cannot-open-no-deviceerrortruncate-error-must-specify-relative-sizetruncate-error-division-by-zerotruncate-error-invalid-numbertruncate-error-cannot-stat-no-such-file", 23);
    v3.help(&v8, &v14);
    v8.value_name(&v3, "RFILEtruncate-help-sizetruncate-error-cannot-open-no-deviceerrortruncate-error-must-specify-relative-sizetruncate-error-division-by-zerotruncate-error-invalid-numbertruncate-error-cannot-stat-no-such-file", 5);
    v14.value_hint(&v8, 3);
    v3.arg(&v11, &v14);
    v11.new(_ZN11uu_truncate7options4SIZE17h300ede78d30061d9E, g_578228);
    v8.short(&v11, 115);
    v11.long(&v8, _ZN11uu_truncate7options4SIZE17h300ede78d30061d9E, g_578228);
    v8.required_unless_present(&v11, _ZN11uu_truncate7options9REFERENCE17h8acc3f884e5eab84E, g_578218);
    uucore::mods::locale::get_message(&v14, "truncate-help-sizetruncate-error-cannot-open-no-deviceerrortruncate-error-must-specify-relative-sizetruncate-error-division-by-zerotruncate-error-invalid-numbertruncate-error-cannot-stat-no-such-file", 18);
    v11.help(&v8, &v14);
    v8.value_name(&v11, "SIZETerm) = manyZero", 4);
    v11.arg(&v3, &v8);
    v3.new(_ZN11uu_truncate7options9ARG_FILES17hd03b4d49df036de3E, g_578238);
    v8.value_name(&v3, "FILEchar", 4);
    v3.action(&v8, 1);
    memcpy(&v8, &v3, 632);
    v9 = v4 | 1;
    v10 = *((int *)&v5);
    v3.value_hint(&v8, 3);
    a0.arg(&v11, &v3);
    ::0x49d1a0::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
