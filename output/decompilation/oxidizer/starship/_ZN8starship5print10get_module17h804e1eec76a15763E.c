fn starship::print::get_module(a1: i64, a2: i64, a3: i64) -> Option<struct24> {
    let a0: u64;  // rdi
    let v0: u8;  // [bp-0x68]

    starship::modules::handle(&v0, a1, a2, a3);
    if !((((0 ^ *(&v0 as &i64)) & (0 ^ -(*(&v0 as &i64)))) >> 63) as char) {
        starship::print::get_module::{{closure}}(a0, &v0, a2);
        return;
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
