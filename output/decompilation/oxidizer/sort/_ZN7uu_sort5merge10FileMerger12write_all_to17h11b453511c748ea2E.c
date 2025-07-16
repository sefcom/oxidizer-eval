fn uu_sort::merge::FileMerger::write_all_to(a0: &struct128, a1: i64, a2: i64) -> long long {
    let v0: u192;  // [bp-0x58]
    let v1: struct24;  // [bp-0x38]

    do { } while (uu_sort::merge::FileMerger::write_next(a0, a1, a2) as u8);
    v0 = struct24 {
        field_0: *((a0 + 48) as &i128)
        field_16: *((a0 + 64) as &i64)
    };
    v1 = std::thread::JoinInner<T>::join(&v0);
    return core::result::Result<T,E>::unwrap(&v1);
}
