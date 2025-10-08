fn uu_dd::parseargs::Parser::parse_status_level(a1: i64, a2: i64) -> : struct9 {
    let a0: i64;  // rdi
    let v1: u64;  // rax

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "none") {
        *((a0 + 8) as &i8) = 2;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "noxfer") {
        *((a0 + 8) as &i8) = 1;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "progress") {
        return struct16 {
            field_0: v1
            field_8: 0
        };
    } else {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 8, a1, a2);
    }
}
