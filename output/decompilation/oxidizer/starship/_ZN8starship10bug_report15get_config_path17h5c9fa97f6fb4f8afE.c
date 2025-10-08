fn starship::bug_report::get_config_path(a1: i64, a2: i64) -> Option<struct24> {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0x50]
    let v1: u8;  // [bp-0x38]

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "nu") {
        v0 = dirs::config_dir();
        if v0.field_0 as i64 != 0x8000000000000000 {
            starship::bug_report::get_config_path::{{closure}}(a0, &v0);
            return;
        }
    } else {
        starship::utils::home_dir(&v1);
        if *(&v1 as &i64) != 0x8000000000000000 {
            starship::bug_report::get_config_path::{{closure}}(a0, a1, a2, &v1);
            return;
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
