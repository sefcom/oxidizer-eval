fn backdoorautomater::sanitizer::sanitize_script(a1: &struct24) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct32;  // [bp-0x60]
    let v1: Result<struct32, struct32>;  // [bp-0x40]

    v1 = regex::regex::string::Regex::new("[^a-zA-Z0-9.\\-_]+");
    v0 = core::result::Result<T,E>::unwrap(&v1, "src/sanitizer.rs");
    if regex::regex::string::Regex::is_match_at(v0.field_0 as i64, *((&v0.field_0 as &char + 8) as &i64), *((a1 + 8) as &i64), *((a1 + 16) as &i64)) {
        panic!("Error ! Invalid charactere in the script name file !\n");
    }
    return struct24 {
        field_0: *(a1 as &i128)
        field_16: *((a1 + 16) as &i64)
    };
}
