fn backdoorautomater::sanitizer::sanitize_ex_stderr(a0: &struct24) -> u8 {
    let v0: i64;  // [bp-0x48]
    let v2: u64;  // rdx
    let v3: u64;  // rcx
    let v4: u8;  // al

    v0 = a0;
    v4 = <&str as core::str::pattern::Pattern>::is_contained_in(*((a0 + 8) as &i64), *((a0 + 16) as &i64), v2, v3);
    if v4 {
        panic!("Error!: {}", &v0);
    }
    return v4;
}
