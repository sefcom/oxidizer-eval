fn uu_cp::platform::linux::check_sparse_detection(a0: &struct9, a1: u32, a2: u32) -> u64 {
    let v0: struct4;  // [bp-0xc4]
    let v1: struct16;  // [sp-0xc0], Other Possible Types: Result<struct4, struct8>

    v1 = std::fs::File::open(a1, a2) as u64;
    return struct9 {
        field_0: 1
        field_8: <UNKNOWN>
    };
    v0 = struct4 {
        field_0: *((&v1 as &char + 4) as &i32)
    };
    v1 = std::fs::File::metadata(&v0);
    return struct9 {
        field_0: 1
        field_8: <UNKNOWN>
    };
}
