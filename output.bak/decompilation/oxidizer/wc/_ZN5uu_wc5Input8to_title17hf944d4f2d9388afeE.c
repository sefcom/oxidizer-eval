fn uu_wc::Input::to_title(a0: &Option<struct24>, a1: void*) -> u64 {
    let v0: i136;  // [sp-0x48], Other Possible Types: Result<struct16, struct10>
    let v4: i64;  // r15
    let v5: i64;  // r14

    if *(a1 as &i64) == 9223372036854775809 {
        return struct8 {
            field_0: 9223372036854775809
        };
    }
    v4 = *((a1 + 8) as &i64);
    v5 = *((a1 + 16) as &i64);
    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v4, v5);
    match v0 {
        Ok(_) => {
            <char as core::str::pattern::Pattern>::is_contained_in(*((&v0 as &char + 8) as &i64), v0);
            return Some(struct24 {
                field_0: v2
                field_8: v6
                field_16: v7
            });
        },
        Err(_) => {
            uucore::features::quoting_style::escape_name(v4, v5, &anon.7c7385208ddd1e4e4d864dc74576bdf1.19.llvm.3329604763963259673);
        },
    }
}
