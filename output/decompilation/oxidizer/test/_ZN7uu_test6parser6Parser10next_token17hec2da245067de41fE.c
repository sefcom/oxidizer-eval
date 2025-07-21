fn uu_test::parser::Parser::next_token(a0: i64, a1: i64) -> long long {
    let v0: Option<struct24>;  // [bp-0x20]
    let v2: u64;  // rax
    let v3: void*;  // rdx

    v2 = *((a1 + 24) as &i64);
    *((a1 + 24) as &i64) = 9223372036854775809;
    if v2 == 9223372036854775809 {
        v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(a1 + 48);
    }
    return uu_test::parser::Symbol::new(v3);
}
