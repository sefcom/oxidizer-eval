long long fish::signal::Signal::name(unsigned long long a0)
{
    unsigned long long v0[3];  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    struct_0 *v4;  // rax
    unsigned long long v5;  // rax

    v4 = a0.get_lookup_entry();
    if (!v4)
    {
        v1 = "U";
        v2 = 7;
        *(v0) = 0x8000000000000000;
        v5 = v0.localize();
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
        return v5;
    }
    return v4->field_18;
}
