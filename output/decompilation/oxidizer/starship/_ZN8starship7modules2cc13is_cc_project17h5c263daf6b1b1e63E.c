fn starship::modules::cc::is_cc_project(a0: i64, a1: u64) -> long long {
    let v0: Option<struct56>;  // [bp-0x40], Other Possible Types: struct72

    v0 = starship::context::Context::try_begin_scan(a1);
    match v0 {
        None => {
            return 2;
        },
        Some(_) => {
            v0 = struct72 {
                field_0: v0 as i64
                field_8: *((a0 + 32) as &i128)
                field_16: <UNKNOWN>
                field_24: *((a0 + 56) as &i128)
                field_40: *((a0 + 8) as &i128)
                field_56: <UNKNOWN>
                field_64: <UNKNOWN>
            };
            return starship::context::ScanDir::is_match(&v0);
        },
    }
}
