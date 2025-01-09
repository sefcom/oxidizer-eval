fn uu_test::parser::Parser::peek(a0: u32, a1: void*) -> u64 {
    let v0: i64;  // [sp-0x38], Other Possible Types: struct24
    let v2: i64;  // rsi
    let v3: i64;  // r14

    v2 = a1;
    v3 = a1 + 24;
    core::option::Option<T>::get_or_insert_with(v3, a1 + 48);
    if *((a1 + 24) as &i64) == 0x8000000000000000 {
        v0 = 0x8000000000000000;
    } else {
        v0 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v3);
    }
    return uu_test::parser::Symbol::new();
}
