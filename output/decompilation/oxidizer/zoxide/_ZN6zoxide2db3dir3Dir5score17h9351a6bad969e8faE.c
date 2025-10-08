fn zoxide::db::dir::Dir::score(a0: i64, a1: i64) -> double {
    let v1: void*;  // rsi
    let v2: u64;  // xmm0lq
    let v3: u64;  // xmm0lq
    let v4: u64;  // xmm0lq

    v1 = a1 - a0;
    if v1 < 3600 {
        return BinaryOp MulV;
    } else if v1 < 86400 {
        return BinaryOp MulV;
    } else {
        return BinaryOp MulV;
    }
}
