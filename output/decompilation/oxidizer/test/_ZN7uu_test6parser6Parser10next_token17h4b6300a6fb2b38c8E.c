fn uu_test::parser::Parser::next_token(a0: u64, a1: i64) -> long long {
    let v0: Option<struct24>;  // [bp-0x20]
    let v4: u64;  // rax

    v4 = *((a1 + 24) as &i64);
    *((a1 + 24) as &i64) = 9223372036854775809;
    if v4 == 9223372036854775809 {
        v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(a1 + 48);
    }
    return uu_test::parser::Symbol::new(a0, &v0);
}
