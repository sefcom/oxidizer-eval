void fish::env_universal_common::append_utf8(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char v2;  // [bp-0x10]

    v0.to_string(a0, a1);
    a2.spec_extend(v1, *((long long *)&v2) + v1);
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return;
}
