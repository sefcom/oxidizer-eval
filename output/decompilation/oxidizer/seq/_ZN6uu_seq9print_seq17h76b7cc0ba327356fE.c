fn uu_seq::print_seq(a0: &struct120, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i8, a7: i64, a8: i64) -> long long {
    let v0: std::io::stdio::StderrLock;  // [bp-0x200]
    let v1: u128;  // [bp-0x1f8]
    let v2: u128;  // [bp-0x1e8]
    let v3: u64;  // [bp-0x1d8]
    let v5: u128;  // [bp-0x188]
    let v6: u128;  // [bp-0x178]
    let v7: u64;  // [bp-0x168]
    let v12: std::io::stdio::Stdout;  // [bp-0x118]
    let v13: u128;  // [bp-0xf8]
    let v14: u128;  // [bp-0xe8]
    let v15: u64;  // [bp-0xd8]
    let v16: u64;  // [bp-0xa8]
    let v17: u64;  // [bp-0xa0]
    let v18: u64;  // [bp-0x98]
    let v19: u64;  // [bp-0x90]
    let v20: u64;  // rax
    let v21: core::result::Result<(), std::io::error::Error>;  // rax

    v16 = a2;
    v17 = a3;
    v18 = a4;
    v19 = a5;
    v12 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v12);
    v3 = *((a0 + 32) as &i64);
    v2 = *((a0 + 16) as &i128);
    v1 = *(a0 as &i128);
    v7 = *((a0 + 72) as &i64);
    v6 = *((a0 + 56) as &i128);
    v5 = *((a0 + 40) as &i128);
    v15 = *((a0 + 112) as &i64);
    v14 = *((a0 + 96) as &i128);
    v13 = *((a0 + 80) as &i128);
    v20 = a1 + 1;
    if !uu_seq::done_printing(&v1, &v5, &v13) {
        v21 = uu_seq::write_value_float(&v0, &v1, (a6 ? v20 + a7 : 0), a1);
        return v21;
    }
    v21 = <std::io::stdio::StdoutLock as std::io::Write>::flush(&v0);
    return 0;
}
