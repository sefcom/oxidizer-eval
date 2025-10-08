fn uu_ls::TimeStyler::format(a0: u64, a1: i64, a2: void*) -> void {
    let v0: struct16;  // [bp-0x58]
    let v1: struct36;  // [bp-0x58]
    let v3: i64;  // rcx
    let v4: i64;  // rax
    let v5: u8;  // al

    if !((((0 ^ *((a1 + 24) as &i64)) & (0 ^ -(*((a1 + 24) as &i64)))) >> 63) as char) {
        if *((a1 + 48) as &i32) {
            v0 = struct16 {
                field_0: *((a1 + 48) as &i32)
                field_4: *((a1 + 52) as &i64)
                field_12: *((a1 + 60) as &i32)
            };
            v5 = <chrono::naive::datetime::NaiveDateTime as core::cmp::PartialOrd>::partial_cmp(a2, &v0);
        } else {
            core::option::unwrap_failed(); /* do not return */
        }
    }
    chrono::datetime::DateTime<Tz>::format_with_items(&v1, a2, *((a1 + v4) as &i64), *((a1 + v4) as &i64) + *((a1 + v3) as &i64) * 24);
    <T as alloc::string::SpecToString>::spec_to_string(a0, &v1);
    return;
}
