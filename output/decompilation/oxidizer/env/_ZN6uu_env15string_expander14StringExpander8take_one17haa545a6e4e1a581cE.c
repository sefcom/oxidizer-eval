fn uu_env::string_expander::StringExpander::take_one(a0: &struct8) -> u64 {
    let v0: struct32;  // [sp-0x70], Other Possible Types: struct24
    let v1: i64;  // [sp-0x50], Other Possible Types: struct21
    let v2: i64;  // [sp-0x48]
    let v3: i32;  // [sp-0x3c]
    let v4: Option<struct16>;  // [sp-0x38], Other Possible Types: int
    let v9: i64;  // rsi
    let v10: i64;  // rdx

    v0 = uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(a0 + 24);
    if v1 == 0x8000000000000000 {
        return v2;
    }
    v3 = *((&v0.field_16 as &char + 4) as &i32);
    v1 = struct21 {
        field_0: v6
        field_8: v7
        field_16: v8
        field_17: *((&v0.field_16 as &char + 1) as &i32)
    };
    v0 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v1);
    v4 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v0);
    if !v4 as i64 {
        return v2;
    }
    do {
        v9 = (&v4)[8] as i64;
        v10 = (&v4)[16] as i64;
        if !v9 {
            alloc::vec::Vec<T,A>::push(a0, v10 >> 32 & 4294967295 & 4294967295);
        } else {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a0, v9, v10 + v9);
        }
    } while ((v4 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v0), v4 as i64));
}
