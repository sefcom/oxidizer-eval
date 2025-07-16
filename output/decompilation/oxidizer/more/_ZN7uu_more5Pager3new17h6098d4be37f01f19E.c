fn uu_more::Pager::new(a1: i16, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct68 {
    let a0: u64;  // rsi
    let v0: u64;  // rax
    let v1: u16;  // r9w
    let v2: i64;  // rdi
    let v3: u64;  // cc_ndep

    v0 = *((a1 + 16) as &i64);
    v1 = *((a4 + 38) as &i16);
    *((v2 + 24) as &i64) = *((a4 + 24) as &i64);
    *((v2 + 64) as &i32) = (amd64g_calculate_condition(2, 6, a0 & 65535, 1, v3) as char ? 0 : a0 - 1);
    *(v2 as &i128) = *(a1 as &i128);
    *((v2 + 16) as &i64) = *((a1 + 16) as &i64);
    *((v2 + 32) as &u64) = a2;
    *((v2 + 40) as &u64) = a3;
    *((v2 + 48) as &u64) = v0;
    *((v2 + 66) as &u16) = v1;
    *((v2 + 56) as &i64) = 0;
    return;
}
