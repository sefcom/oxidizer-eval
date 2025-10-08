fn starship::config::ModuleConfig::try_load(a0: u64, a1: u64) -> long long {
    let v0: struct17;  // [bp-0xd0]
    let v1: struct168;  // [bp-0xb8], Other Possible Types: u8
    let v3: u64;  // rax

    if !a1 {
        return <starship::configs::hostname::HostnameConfig as core::default::Default>::default(a0);
    }
    <T as core::convert::Into<U>>::into(&v1, a1);
    v0 = v1;
    v1 = starship::config::ModuleConfig::load(&v0);
    v3 = memcpy(a0 + 8, &v1 as u8, 160);
    return struct8 {
        field_0: v1.field_0
    };
}
