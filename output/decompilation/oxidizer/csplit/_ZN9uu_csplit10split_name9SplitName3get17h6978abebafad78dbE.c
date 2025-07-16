fn uu_csplit::split_name::SplitName::get(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: struct24;  // [bp-0x50]
    let v1: u64;  // [bp-0x48]
    let v2: u64;  // [bp-0x40]
    let v3: alloc::borrow::Cow<str>;  // [bp-0x38]
    let v4: u32;  // [bp-0x30]

    v0 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1);
    core::result::Result<T,E>::unwrap(uucore::features::format::Format<F>::fmt(a1 + 3, &v0, a2));
    v3 = alloc::string::String::from_utf8_lossy(v1, v2);
    <alloc::borrow::Cow<str> as alloc::string::ToString>::to_string(a0, v4, *((&v3 as &char + 16) as &i64));
    return a0;
}
