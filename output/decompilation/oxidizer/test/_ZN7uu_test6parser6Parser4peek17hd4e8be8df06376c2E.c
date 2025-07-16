fn uu_test::parser::Parser::peek(a0: i64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x38]
    let v2: u64;  // r14
    let v3: void*;  // rdx

    v2 = a1 + 24;
    core::option::Option<T>::get_or_insert_with(v2, a1 + 48);
    if *((a1 + 24) as &i64) != 0x8000000000000000 {
        v0 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v2);
    }
    return uu_test::parser::Symbol::new(v3);
}
