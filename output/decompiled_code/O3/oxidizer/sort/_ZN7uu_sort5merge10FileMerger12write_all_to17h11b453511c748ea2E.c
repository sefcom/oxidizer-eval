fn uu_sort::merge::FileMerger::write_all_to(a0: &struct96, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x58], Other Possible Types: i128
    let v1: i192;  // [sp-0x38], Other Possible Types: struct24
    let v3: i64;  // rdx

    do { } while (uu_sort::merge::FileMerger::write_next(a0, a1, v3) as i8);
    v0 = *(a0 as &i128);
    v0 = struct24 {
        field_0: *((a0 + 48) as &i128)
        field_16: *((a0 + 64) as &i64)
    };
    v1 = std::thread::JoinInner<T>::join(&v0);
    return core::result::Result<T,E>::unwrap(&v1);
}
