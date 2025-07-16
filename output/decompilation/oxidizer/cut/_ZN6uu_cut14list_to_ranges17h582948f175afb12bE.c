fn uu_cut::list_to_ranges(a1: i64, a2: i64, a3: i32) -> Option<struct24> {
    let a0: u64;  // rsi
    let v0: u8;  // [bp-0x48]
    let v1: u64;  // [bp-0x38]
    let v2: Option<struct24>;  // [bp-0x30]
    let v3: u128;  // [bp-0x28]
    let v5: u64;  // rdi
    let v6: i64;  // rdi
    let v7: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // rax

    if !a2 {
        uucore::features::ranges::Range::from_list(v5, a0, a1);
        return;
    }
    v2 = uucore::features::ranges::Range::from_list(a0, a1);
    match v2 {
        Some(_) => {
            *((v6 + 24) as &i64) = *((&v2 as &char + 24) as &i64);
            *((v6 + 8) as &u128) = v3;
            v7 = 1;
        },
        None => {
            v1 = *((&v2 as &char + 24) as &i64);
            memcpy(&v0, &v2 as u128, 16);
            uu_cut::list_to_ranges::{{closure}}(v6 + 8, &v0);
        },
    }
    *(v6 as &std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>) = v7;
    return;
}
