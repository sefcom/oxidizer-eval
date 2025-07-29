long long uu_fmt::<impl core::convert::From<uu_fmt::FmtError> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(unsigned long long a0)
{
    char v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0x30]
    char v3;  // [bp-0x28]
    char v4;  // [bp-0x18]
    unsigned long long v6;  // rax

    v3.spec_to_string(a0);
    v2 = 1;
    memcpy(&v0, &v3, 16);
    v1 = *((long long *)&v4);
    v6 = v0.new();
    core::ptr::drop_in_place<uu_fmt::FmtError>(a0);
    return v6;
}
