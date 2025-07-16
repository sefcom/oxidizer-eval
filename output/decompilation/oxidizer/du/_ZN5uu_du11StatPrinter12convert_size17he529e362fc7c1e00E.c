fn uu_du::StatPrinter::convert_size(a1: i64, a2: i64) -> : struct24 {
    let a0: i64;  // rsi
    let v0: u64;  // [bp-0x10]
    let v3: u64;  // rdi
    let v4: u64;  // rdi
    let v5: i64;  // rsi
    let v10: u64;  // rdi

    v0 = a1;
    if !*((a0 + 32) as &i64) {
        uucore::features::format::human::human_readable(v3, a1, 2);
        return;
    } else if *((a0 + 32) as &i64) == 1 {
        uucore::features::format::human::human_readable(v4, a1, 1);
        return;
    } else {
        <T as alloc::string::ToString>::to_string(v10, v5);
        return;
    }
}
