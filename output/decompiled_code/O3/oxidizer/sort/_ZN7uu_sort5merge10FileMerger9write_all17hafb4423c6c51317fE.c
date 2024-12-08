fn uu_sort::merge::FileMerger::write_all(a0: &u64, a1: u32) -> u64 {
    let v0: i8;  // [bp-0xa8]
    let v1: struct96;  // [bp-0x78]
    let v3: i64;  // rdx

    uu_sort::Output::into_write(&v0, v3);
    v1 = struct96 {
        field_0: *(a0 as &i128)
        field_16: *((a0 + 16) as &i128)
        field_32: *((a0 + 32) as &i128)
        field_48: *((a0 + 48) as &i128)
        field_64: *((a0 + 64) as &i128)
        field_80: *((a0 + 80) as &i128)
    };
    return uu_sort::merge::FileMerger::write_all_to(&v1, a1);
}
