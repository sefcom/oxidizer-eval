fn check_docs::report_errors(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: u64;  // [bp-0x78]
    let v1: struct16;  // [bp-0x40]
    let v3: u64;  // rbx
    let v4: u64;  // rbx
    let v5: u64;  // rax
    let v6: u64;  // rbx
    let v7: u64;  // rax

    v1 = struct16 {
        field_0: a0
        field_8: a1
    };
    if !a3 {
        return v7;
    }
    eprintln!("\nInvalid {} detected!\n", &v1);
    do {
        v4 = v3;
        v0 = a2;
        a2 += 8;
        v5 = eprintln!("{}\n", &v0);
        v6 = v4 - 8;
        v3 = v6;
    } while (v4 != 8);
    return v5;
}
