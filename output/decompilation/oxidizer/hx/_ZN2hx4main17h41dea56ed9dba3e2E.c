fn hx::main() -> long long {
    let v0: u8;  // [bp-0x10]
    let v1: u32;  // [bp-0xc]
    let v2: i8;  // [bp-0x8]

    hx::main_impl(&v0);
    if v0 != 1 {
        std::process::exit(v1); /* do not return */
    }
    return *(&v2 as &i64);
}
