fn uu_sort::merge::FileMerger::write_all_to(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [bp-0x58]
    let v1: u64;  // [bp-0x38]

    do { } while (uu_sort::merge::FileMerger::write_next(a0, a1, a2) as i8);
    *(&v0 as &struct24) = struct24 {
        field_0: a0->field_30
        field_16: a0->field_40
    };
    std::thread::JoinInner<T>::join(&v1, &v0);
    return core::result::Result<T,E>::unwrap(&v1);
}
