fn uu_fmt::parasplit::WordSplit::new(a1: i64, a2: i64, a3: i64) -> : struct41 {
    let a0: u64;  // rsi
    let v1: u64;  // rax
    let v2: i64;  // rdi
    let v3: u64;  // rdx

    v1 = core::str::<impl str>::trim_start_matches(a1, a2);
    *(v2 as &u64) = a0;
    *((v2 + 8) as &u64) = v1;
    *((v2 + 16) as &u64) = v3;
    *((v2 + 24) as &u64) = a2;
    *((v2 + 32) as &i64) = 0;
    *((v2 + 40) as &i8) = 0;
    return;
}
