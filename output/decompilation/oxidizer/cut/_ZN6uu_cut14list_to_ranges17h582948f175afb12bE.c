fn uu_cut::list_to_ranges(a1: i64, a2: i64, a3: i32) -> Option<struct24> {
    let a0: u64;  // rsi
    let v0: struct24;  // [bp-0x48]
    let v1: Option<struct24>;  // [bp-0x30]
    let v2: struct24;  // [bp-0x28], Other Possible Types: u128
    let v4: u64;  // rdi
    let v5: i64;  // rdi
    let v6: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // rax

    if !a2 {
        uucore::features::ranges::Range::from_list(v4, a0, a1);
        return;
    }
    v1 = uucore::features::ranges::Range::from_list(a0, a1);
    match v1 {
        Some(_) => {
            *((v5 + 24) as &i64) = *((&v1 as &char + 24) as &i64);
            *((v5 + 8) as &u128) = v2;
            v6 = 1;
        },
        None => {
            v0 = v2;
            uu_cut::list_to_ranges::{{closure}}(v5 + 8, &v0);
        },
    }
    *(v5 as &std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>) = v6;
    return;
}
