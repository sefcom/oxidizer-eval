long long uu_wc::Input::to_title(unsigned long long a0[3], struct_0 *a1)
{
    char v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    unsigned long v4;  // r15
    unsigned long long v5;  // r14
    char v6;  // al
    unsigned long long v7;  // rax

    if (a1->field_0 != 9223372036854775809)
    {
        v4 = *((long long *)&a1->field_8);
        v5 = a1->field_10;
        v0.to_string_lossy(v4, v5);
        v6 = v1.is_contained_in(*((long long *)&v2));
        v7 = (unsigned long long)::0x4acc50::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v0);
        if (!v6)
        {
            a0[0] = 0x8000000000000000;
            a0[1] = v4;
            a0[2] = v5;
            return v7;
        }
        return uucore::features::quoting_style::locale_aware_escape_name(a0, v4, v5, 1);
    }
    else if (a1->field_8)
    {
        a0[0] = 9223372036854775809;
        return 9223372036854775809;
    }
    else
    {
        a0[0] = 0x8000000000000000;
        a0[1] = "-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/wc/src/wc.rs";
        a0[2] = 1;
        return "-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/wc/src/wc.rs";
    }
}
