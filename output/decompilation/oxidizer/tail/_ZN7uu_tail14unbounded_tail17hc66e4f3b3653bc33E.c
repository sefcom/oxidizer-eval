fn uu_tail::unbounded_tail(a0: u32, a1: u32) -> u64 {
    let v0: struct33;  // [sp-0x2090]
    let v1: i64;  // [sp-0x2050]
    let v2: i64;  // [sp-0x2030]
    let v3: i64;  // [sp-0x1030]
    let v4: i64;  // [sp-0x30]
    let v5: i64;  // [sp-0x28]
    let v6: i64;  // [sp-0x20]
    let v7: i64;  // [sp-0x18]
    let v8: i64;  // [sp-0x10]
    let v10: i64;  // r15
    let v11: i64;  // r14
    let v12: i64;  // r13
    let v13: i64;  // r12
    let v14: i64;  // rbx

    v8 = v10;
    v7 = v11;
    v6 = v12;
    v5 = v13;
    v4 = v14;
    v3 = 0;
    v2 = 0;
    v1 = std::io::stdio::stdout();
    v0 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::Stderr::lock(&v1));
    goto *((4362044 + *(vvar_1 as &i64) * 4) as &i32) + 4362044;
}
