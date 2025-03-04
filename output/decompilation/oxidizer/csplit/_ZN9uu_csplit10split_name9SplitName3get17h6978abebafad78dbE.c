fn uu_csplit::split_name::SplitName::get(a0: &struct24, a1: u32, a2: u64) -> u64 {
    let v0: struct24;  // [sp-0x50]
    let v1: struct24;  // [sp-0x38]

    v0 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1);
    core::result::Result<T,E>::unwrap(uucore::features::format::Format<F>::fmt(a1 + 24, &v0, a2));
    v1 = alloc::string::String::from_utf8_lossy(v0.field_8, v0.field_16);
    <alloc::borrow::Cow<str> as alloc::string::ToString>::to_string(a0, v1.field_8, v1.field_16);
    return a0;
}
