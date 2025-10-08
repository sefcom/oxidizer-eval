fn uu_logname::get_userlogin(a0: &struct56) -> u64 {
    let v0: struct24;  // [bp-0x40]
    let v1: u64;  // [bp-0x38]
    let v2: u64;  // [bp-0x30]
    let v3: struct24;  // [bp-0x28]
    let v5: u64;  // rax

    v5 = getlogin();
    if !v5 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v0 = alloc::string::String::from_utf8_lossy(v5, strlen(v5));
    v3 = <alloc::borrow::Cow<str> as alloc::string::SpecToString>::spec_to_string(v1, v2);
    return struct24 {
        field_0: v3.field_0
        field_16: v3.field_16
    };
}
