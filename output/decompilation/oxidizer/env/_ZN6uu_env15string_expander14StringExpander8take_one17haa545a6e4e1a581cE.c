fn uu_env::string_expander::StringExpander::take_one() -> : struct8 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x70], Other Possible Types: struct32
    let v1: u64;  // [bp-0x68]
    let v2: u168;  // [bp-0x50]
    let v3: Result<(), Error>;  // [sp-0x38], Other Possible Types: u256
    let v5: u64;  // [bp-0x30]

    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(&v0, a0 + 24);
    if v0 == 0x8000000000000000 {
        return v1;
    }
    v2 = v0;
    v0 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v2);
    v3 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v0);
    if let Ok(_) = v3 {
        return v1;
    }
    do {
        if !v5 {
            alloc::vec::Vec<T,A>::push(a0, *((&v3 as &char + 16) as &i64) >> 32);
        } else {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a0, v5, *((&v3 as &char + 16) as &i64) + v5);
        }
    } while ((v3 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v0), v3 as i64));
    return v1;
}
