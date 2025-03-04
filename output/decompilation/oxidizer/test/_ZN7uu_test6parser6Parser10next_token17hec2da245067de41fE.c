fn uu_test::parser::Parser::next_token(a0: u32, a1: &struct8) -> u64 {
    let v0: iNone;  // [sp-0x20], Other Possible Types: Option<struct24>, unsigned long
    let v2: i64;  // rax

    v2 = *((a1 + 24) as &i64);
    *((a1 + 24) as &i64) = 9223372036854775809;
    if v0 != 9223372036854775809 {
        v0 = *((a1 + 32) as &i128);
        v0 = v2;
    } else {
        v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(a1 + 48);
    }
    return uu_test::parser::Symbol::new(a0, &v0);
}
