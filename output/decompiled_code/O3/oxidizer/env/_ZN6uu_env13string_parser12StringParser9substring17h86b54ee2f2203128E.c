fn uu_env::string_parser::StringParser::substring(a0: &u64, a1: &u64) -> u64 {
    let v0: struct40;  // [sp-0x30], Other Possible Types: i64
    let v1: i64;  // [sp-0x28]
    let v2: i64;  // [sp-0x20]
    let v3: i128;  // [sp-0x18]
    let v5: i64;  // rcx
    let v6: i64;  // rax

    v5 = *((a0 + 8) as &i64);
    v6 = *(a1 as &i64);
    if v5 < v6 {
        v0 = "mid > len";
        v1 = 1;
        v2 = 8;
        v3 = 0;
        v0 = core::panicking::panic_fmt();
    }
    if *((a1 + 8) as &i64) - v6 > v5 - v6 {
        v0 = "mid > len";
        v1 = 1;
        v2 = 8;
        v3 = 0;
        v0 = core::panicking::panic_fmt();
    }
    return v6 + *(a0 as &i64);
}
