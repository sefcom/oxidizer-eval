fn uu_env::string_expander::StringExpander::take_one(a0: &struct16) {
    let v0: struct21;  // [bp-0x68], Other Possible Types: struct32, u8
    let v1: struct21;  // [bp-0x48]
    let v3: Result<(), Error>;  // [bp-0x30]
    let v4: struct36;  // [bp-0x28]

    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(&v0, a0 + 24);
    if (((0 ^ v0) & (0 ^ -(v0))) >> 63) as char {
        return;
    }
    v1 = v0;
    v0 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v1);
    v3 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v0);
    if let Ok(_) = v3 {
        return;
    }
    do {
        if !v4 {
            alloc::vec::Vec<T,A>::push(a0, *((&v3 as &char + 16) as &i64) >> 32);
        } else {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a0, v4 as u32);
        }
        v3 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v0);
    } while ((v3 as i8 & 1));
    return;
}
