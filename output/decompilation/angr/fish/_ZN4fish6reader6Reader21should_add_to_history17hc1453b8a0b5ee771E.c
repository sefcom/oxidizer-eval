long long fish::reader::Reader::should_add_to_history(unsigned long long a0, unsigned int *a1, unsigned long long a2)
{
    char v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    char v3;  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]
    char v5;  // [bp-0x30]
    unsigned int v7;  // eax

    if (!(char)fish::function::exists("f", 26, a0))
        return (unsigned int)a0 & 0xffffff00 | *(a1) != 32;
    v0.to_vec("f", 27);
    fish::common::escape(&v3, a1, a2);
    v0.spec_extend(v4, v4 + *((long long *)&v5) * 4);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
    v3.scoped_mod(a0 + 64);
    v7 = fish::exec::exec_subshell(v1, v2, a0, 0, 0);
    core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedCell<fish::parser::ScopedData>,fish::common::ScopedCell<fish::parser::ScopedData>::scoped_mod<fish::reader::reader_read::{{closure}}>::{{closure}}>>(&v3);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    return v7 & 0xffffff00 | !v7;
}
