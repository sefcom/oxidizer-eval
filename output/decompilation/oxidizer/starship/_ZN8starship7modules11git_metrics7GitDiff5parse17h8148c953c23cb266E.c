fn starship::modules::git_metrics::GitDiff::parse(a1: i64, a2: i64) -> : struct48 {
    let a0: i64;  // rdi
    let v0: struct32;  // [bp-0xa8]
    let v1: struct24;  // [bp-0xa8]
    let v2: struct24;  // [bp-0xa8]
    let v3: struct80;  // [bp-0x88]
    let v4: struct32;  // [bp-0x78]
    let v5: struct32;  // [bp-0x68]
    let v6: struct32;  // [bp-0x48]

    v0 = regex::regex::string::Regex::new("(\\d+) \\w+\\(\\+\\)");
    v5 = core::result::Result<T,E>::unwrap(&v0, "src/modules/git_metrics.rs");
    v0 = regex::regex::string::Regex::new("(\\d+) \\w+\\(\\-\\)");
    v6 = core::result::Result<T,E>::unwrap(&v0, "src/modules/git_metrics.rs");
    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(starship::modules::git_metrics::GitDiff::get_matched_str(a1, a2, &v5), a2);
    v4 = v1.field_16;
    v3 = *(&v1.field_0 as &i128);
    v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(starship::modules::git_metrics::GitDiff::get_matched_str(a1, a2, &v6), a2);
    return struct48 {
        field_0: v3
        field_16: v4
        field_24: *(&v2.field_0 as &i128)
        field_40: v2.field_16
    };
}
