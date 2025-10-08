void fish::trace::trace_argv(unsigned long long a0[8], unsigned long long *a1)
{
    char v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    char v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    char v5;  // [bp-0x18]
    unsigned long long v7;  // rax
    unsigned long long v9;  // rdx

    v7 = a0.blocks_size();
    if (!v7)
        core::panicking::panic_const::panic_const_sub_overflow(&g_14e41a8); /* do not return */
    alloc::slice::<impl [T]>::repeat(&v0, "-", v7 - 1);
    v0.push(62);
    v0.push(32);
    v0.spec_extend("s", "u");
    v0.push(32);
    fish::common::escape(&v3, *(a1).as_ref(), v9);
    v0.spec_extend(v4, v4 + *((long long *)&v5) * 4);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
    v0.push(10);
    fish::flog::log_extra_to_flog_file(v1, v2);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    return;
}
