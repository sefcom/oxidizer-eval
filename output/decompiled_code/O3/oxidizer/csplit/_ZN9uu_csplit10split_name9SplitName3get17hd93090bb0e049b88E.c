fn uu_csplit::split_name::SplitName::get(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct24;  // [sp-0x50], Other Possible Types: i192
    let v1: i192;  // [sp-0x38], Other Possible Types: struct24

    v0 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1);
    core::result::Result<T,E>::unwrap(uucore::features::format::Format<F>::fmt(a1 + 24, &v0, a2));
    v1 = alloc::string::String::from_utf8_lossy(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64));
    <alloc::borrow::Cow<str> as alloc::string::ToString>::to_string(a0, *((&v1 as &char + 8) as &i64), *((&v1 as &char + 16) as &i64));
    return a0;
}
