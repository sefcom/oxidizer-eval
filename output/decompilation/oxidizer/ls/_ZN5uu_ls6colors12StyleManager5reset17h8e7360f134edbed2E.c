fn uu_ls::colors::StyleManager::reset(a1: i64, a2: i8) -> : struct24 {
    let a0: i64;  // rsi
    let v0: u64;  // [bp-0x8]
    let v2: i64;  // rdi
    let v3: u64;  // rbx
    let v4: u64;  // rdi

    if *((a0 + 8) as &i8) == 2 && !a1 {
        *(v2 as &i64) = 0;
        *((v2 + 8) as &i64) = 1;
        *((v2 + 16) as &i64) = 0;
        return;
    }
    v0 = v3;
    *((a0 + 29) as &i8) = 1;
    *((a0 + 8) as &i8) = 2;
    <T as alloc::slice::hack::ConvertVec>::to_vec(v4);
    return;
}
