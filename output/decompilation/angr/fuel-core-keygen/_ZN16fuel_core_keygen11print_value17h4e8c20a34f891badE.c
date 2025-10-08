long long fuel_core_keygen::print_value(unsigned long long a0, unsigned int a1)
{
    char v0;  // [bp-0x30], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v5;  // rdi
    unsigned long long v6;  // rax

    if (a1)
        serde_json::ser::to_vec_pretty(&v0, a0);
    else
        serde_json::ser::to_vec(&v0, a0);
    v5 = v1;
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        v6 = v5.msg();
        core::ptr::drop_in_place<serde_json::value::Value>(a0);
        return v6;
    }
    v1 = v5;
    v3 = fuel_core_keygen::display_string_discreetly(v5, v2);
    v3.drop_in_place<core::result::Result<(),anyhow::Error>>();
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    core::ptr::drop_in_place<serde_json::value::Value>(a0);
    return 0;
}
