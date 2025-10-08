fn starship::modules::golang::check_go_version(a0: u64, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: struct24;  // [bp-0x90], Other Possible Types: struct40
    let v1: u320;  // [bp-0x90]
    let v2: struct24;  // [bp-0x68]
    let v3: struct24;  // [bp-0x58]
    let v4: struct40;  // [bp-0x48]
    let v6: &mut [u8];  // rbp

    v6 = vvar_31{reg 56} & -0x100 | 1;
    if !!a2 && !!a0 {
        v0 = semver::VersionReq::parse(a2, a3);
        if !((((0 ^ v0.field_0 as i64) & (0 ^ -(v0.field_0 as i64))) >> 63) as char) {
            v3 = v0.field_16;
            v2 = v0.field_0;
            v0 = semver::Version::parse(a0, a1);
            if v0.field_0 {
                v4 = v1;
                v6 = semver::VersionReq::matches(&v2, &v4);
            }
        }
    }
    return v6 & 4294967295;
}
