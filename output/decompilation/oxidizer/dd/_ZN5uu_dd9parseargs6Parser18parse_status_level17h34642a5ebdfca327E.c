fn uu_dd::parseargs::Parser::parse_status_level(a1: i64, a2: i64) -> : struct9 {
    let a0: u64;  // rsi
    let v1: i64;  // rdi
    let v2: u64;  // rax

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1 as u32, "none") as i8 {
        *((v1 + 8) as &i8) = 2;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1 as u32, "noxfer") as i8 {
        *((v1 + 8) as &i8) = 1;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1 as u32, "progress") as i8 {
        *((v1 + 8) as &i8) = 0;
    } else {
        <T as alloc::slice::hack::ConvertVec>::to_vec(a0, a1, a2);
    }
    *(v1 as &u64) = v2;
    return;
}
