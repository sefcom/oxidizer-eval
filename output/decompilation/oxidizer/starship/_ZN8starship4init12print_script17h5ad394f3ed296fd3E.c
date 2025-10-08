fn starship::init::print_script(a0: &str, a1: i64, a2: i64) -> int {
    let v0: struct24;  // [bp-0x50]
    let v2: u64;  // rsi

    v0 = alloc::str::<impl str>::replace(a0, v2, "::STARSHIP::", a1);
    print!("{}", &v0);
    return;
}
