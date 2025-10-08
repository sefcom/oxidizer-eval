fn starship::modules::dotnet::get_dotnet_file_type(a0: &u8, a1: u64) -> long long {
    let v0: Option<struct24>;  // [bp-0x58]
    let v1: u64;  // [bp-0x58]
    let v2: u64;  // [bp-0x50]
    let v3: u64;  // [bp-0x48]
    let v4: Option<struct24>;  // [bp-0x40]
    let v8: u64;  // rdx
    let v10: struct40;  // rbx

    v0 = starship::modules::dotnet::map_str_to_lower(std::path::Path::file_name(a0, a1), v8);
    if !((((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char) {
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, "global.json") {
            return v10 & 4294967295;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, "project.json") {
            return v10 & 4294967295;
        }
    }
    v4 = starship::modules::dotnet::map_str_to_lower(std::path::Path::extension(), v8);
    return v10 & 4294967295;
}
