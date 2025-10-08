fn uu_wc::Input::to_title(a0: u64, a1: void*) -> int {
    let v0: Result<struct24, struct24>;  // [bp-0x40]
    let v1: u64;  // [bp-0x38]
    let v3: u64;  // r15
    let v4: u64;  // r14
    let v5: u64;  // rdx

    if *(a1 as &i64) != 9223372036854775809 {
        v3 = a1[8] as i64;
        v4 = a1[16] as i64;
        v0 = alloc::string::String::from_utf8_lossy(v3, v4);
        if <char as core::str::pattern::Pattern>::is_contained_in(v1, *((&v0 as &char + 16) as &i64), v5) {
            uucore::features::quoting_style::escape_name(a0, v3, v4, &g_41a13f);
            return;
        }
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v3
            field_16: v4
        };
    } else if a1[8] as i8 {
        return struct8 {
            field_0: 9223372036854775809
        };
    } else {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: &g_41a13e
            field_16: 1
        };
    }
}
