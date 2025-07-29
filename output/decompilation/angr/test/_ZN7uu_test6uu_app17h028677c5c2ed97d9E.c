long long uu_test::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x5d0]
    unsigned long long v1;  // [bp-0x5c8]
    unsigned long long v2;  // [bp-0x5c0]
    char v3;  // [bp-0x5b8]
    char v4;  // [bp-0x5a0]
    char v5;  // [bp-0x2d8]
    unsigned long long v8;  // rdx

    v4.new(uucore::util_name(), v8);
    v5.version(&v4, "(uutils coreutils) 0.1.0test-abouttest-usagetest-after-help!=<>-c-d-e-f-g-G-h-k-L-N-O-p-r-S-s-t-u-w-x-b-a-osrc/uu/test/src/test.rs", 24);
    uucore::mods::locale::get_message(&v0, "test-abouttest-usagetest-after-help!=<>-c-d-e-f-g-G-h-k-L-N-O-p-r-S-s-t-u-w-x-b-a-osrc/uu/test/src/test.rs", 10);
    v4.about(&v5, &v0);
    uucore::mods::locale::get_message(&v0, "test-usagetest-after-help!=<>-c-d-e-f-g-G-h-k-L-N-O-p-r-S-s-t-u-w-x-b-a-osrc/uu/test/src/test.rs", 10);
    uucore::format_usage(&v3, v1, v2);
    v5.override_usage(&v4, &v3);
    uucore::mods::locale::get_message(&v4, "test-after-help!=<>-c-d-e-f-g-G-h-k-L-N-O-p-r-S-s-t-u-w-x-b-a-osrc/uu/test/src/test.rs", 15);
    a0.after_help(&v5, &v4);
    ::0x4983f0::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
