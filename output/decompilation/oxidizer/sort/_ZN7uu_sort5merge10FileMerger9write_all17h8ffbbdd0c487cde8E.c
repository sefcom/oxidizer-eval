fn uu_sort::merge::FileMerger::write_all(a0: &struct96, a1: i64, a2: &struct32) -> long long {
    let v0: u8;  // [bp-0xa8]
    let v1: struct96;  // [bp-0x78]

    uu_sort::Output::into_write(&v0, a2);
    v1 = struct96 {
        field_0: *(a0 as &i128)
        field_16: *((a0 + 16) as &i128)
        field_32: *((a0 + 32) as &i128)
        field_48: *((a0 + 48) as &i128)
        field_64: *((a0 + 64) as &i128)
        field_80: *((a0 + 80) as &i128)
    };
    return uu_sort::merge::FileMerger::write_all_to(&v1, a1, &v0);
}
