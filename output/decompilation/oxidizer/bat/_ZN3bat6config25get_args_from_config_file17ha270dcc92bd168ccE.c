fn bat::config::get_args_from_config_file() -> Option<struct24> {
    let a0: u64;  // rdi
    let v0: Result<struct24, struct16>;  // [bp-0x50]
    let v1: Result<struct24, struct16>;  // [bp-0x50]
    let v2: u64;  // [bp-0x50]
    let v3: u64;  // [bp-0x48]
    let v4: u64;  // [bp-0x40]
    let v6: u64;  // [bp-0x30]
    let v7: void*;  // [bp-0x28]
    let v8: struct24;  // [bp-0x20]

    v1 as u64 = 0;
    v6 = 1;
    v7 = 0;
    v8 = bat::config::system_config_file();
    v1 = std::fs::read_to_string(&v8);
    if !((((0 ^ v1 as i64) & (0 ^ -(v2))) >> 63) as char) {
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v1 as u64, v3, v4 + v3);
        alloc::string::String::push(&v1 as u64, 10);
    }
    v8 = bat::config::config_file();
    v0 = std::fs::read_to_string(&v8);
    if let Ok(_) = v0 {
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v1 as u64, v3, v4 + v3);
    }
    bat::config::get_args_from_str(a0, 1, 0);
    return;
}
