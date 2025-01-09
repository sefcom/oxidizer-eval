fn uu_env::string_expander::StringExpander::take_one(a0: &struct8) -> u64 {
    let v0: struct32;  // [bp-0x70], Other Possible Types: i256
    let v4: i8;  // [bp-0x5c]
    let v5: struct21;  // [sp-0x50], Other Possible Types: i64
    let v6: i64;  // [sp-0x48]
    let v7: i32;  // [sp-0x3c]
    let v8: i192;  // [sp-0x38], Other Possible Types: Option<struct16>
    let v13: i64;  // rsi
    let v14: i64;  // rdx

    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii();
    if v5 == 0x8000000000000000 {
        return v6;
    }
    v7 = v4;
    v5 = struct21 {
        field_0: v10
        field_8: v11
        field_16: v12
        field_17: v3
    };
    v0 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
    v8 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v0);
    if !v8 {
        return v6;
    }
    do {
        v13 = *((&v8 as &char + 8) as &i64);
        v14 = *((&v8 as &char + 16) as &i64);
        if !v13 {
            alloc::vec::Vec<T,A>::push(a0, v14 >> 32 & 4294967295 & 4294967295);
        } else {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a0, v13, v14 + v13);
        }
    } while ((v8 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v0), v8));
}
