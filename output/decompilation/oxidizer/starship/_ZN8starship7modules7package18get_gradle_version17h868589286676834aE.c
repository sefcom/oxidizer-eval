fn starship::modules::package::get_gradle_version(a0: u64, a1: void*, a2: i64) -> long long {
    let v0: struct24;  // [bp-0x68]
    let v1: core::str::pattern::CharSearcher;  // [bp-0x50]
    let v2: Option<struct24>;  // [bp-0x38]

    v2 = starship::context::Context::read_file_from_pwd(a1, "gradle.properties");
    if !((((0 ^ v2 as i64) & (0 ^ -(v2 as i64))) >> 63) as char) {
        starship::modules::package::get_gradle_version::{{closure}}(&v1 as u8, *((a2 + 48) as &i64), *((a2 + 56) as &i64), &v2);
    }
    v0 = struct24 {
        field_0: a1
        field_8: *((a2 + 48) as &i64)
        field_16: *((a2 + 56) as &i64)
    };
    core::option::Option<T>::or_else(a0, &v1, &v0);
    return a0;
}
