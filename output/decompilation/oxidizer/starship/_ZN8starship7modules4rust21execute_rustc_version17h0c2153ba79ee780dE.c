fn starship::modules::rust::execute_rustc_version(a0: u64, a1: void*) -> long long {
    let v1: Option<struct48>;  // [bp-0x88]
    let v2: struct16;  // [bp-0x78]
    let v3: Option<struct48>;  // [bp-0x68]
    let v4: &str;  // [bp-0x58]
    let v5: u128;  // [bp-0x48]
    let v6: &str;  // [bp-0x38]
    let v7: &str;  // [bp-0x28]
    let v8: &str;  // [bp-0x18]
    let v10: &str;  // xmm0

    v3 = starship::context::Context::exec_cmd(a1, "rustc", "--version", 1);
    if !((((0 ^ v3 as i64) & (0 ^ -(v3 as i64))) >> 63) as char) {
        v10 = v3 as i128;
        v8 = v5;
        v7 = v4;
        v6 = v3 as i128;
        v1 = v6;
        v2 = *((&v3 as &char + 16) as &i64);
    }
    return core::option::Option<T>::filter(a0, &v1);
}
