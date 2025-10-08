fn uu_csplit::split_name::SplitName::get(a0: u64, a1: i64, a2: u64) -> void {
    let v0: struct24;  // [bp-0x50]
    let v1: u64;  // [bp-0x48]
    let v2: u32;  // [bp-0x40]
    let v3: Result<struct24, struct24>;  // [bp-0x38]
    let v4: void*;  // [bp-0x30]

    v0 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    core::result::Result<T,E>::unwrap(uucore::features::format::Format<F,T>::fmt(a1 + 24, &v0, a2));
    v3 = alloc::string::String::from_utf8_lossy(v1, v2);
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a0, v4, *((&v3 as &char + 16) as &i64));
    return;
}
