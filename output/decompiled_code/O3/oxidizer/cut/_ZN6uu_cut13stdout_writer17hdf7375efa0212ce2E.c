fn uu_cut::stdout_writer() -> u64 {
    let v0: u64;  // [sp-0x38]
    let v1: u64;  // [sp-0x30]
    let v2: void*;  // [sp-0x28]
    let v3: u8;  // [sp-0x20]
    let v4: u64;  // [sp-0x18]
    let v6: &struct_0;  // rax
    let v7: u128;  // xmm0

    std::io::stdio::stdout();
    if isatty(1) {
        v6 = __rust_alloc(8, 8);
        *(&v6->field_0 as &long long) = std::io::stdio::stdout();
        return v6;
    }
    v0 = 0x2000;
    v1 = __rust_alloc(0x2000, 1);
    v2 = 0;
    v3 = 0;
    v4 = std::io::stdio::stdout();
    v6 = __rust_alloc(40, 8);
    v6->field_20 = v4;
    v7 = *(&v0 as &i128);
    v6->field_10 = *(&v2 as &i128);
    v6->field_0 = v7;
    return v6;
}
