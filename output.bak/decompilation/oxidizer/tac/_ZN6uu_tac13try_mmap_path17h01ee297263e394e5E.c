fn uu_tac::try_mmap_path(a0: &Option<struct16>, a1: u32, a2: u32) -> u64 {
    let v0: struct4;  // [bp-0x4c]
    let v1: struct8;  // [sp-0x48], Other Possible Types: Result<struct4, struct8>
    let v2: i64;  // [sp-0x38]
    let v3: i8;  // [sp-0x30]
    let v4: i16;  // [sp-0x2e]
    let v5: Result<struct16, struct8>;  // [sp-0x28]

    v1 = std::fs::File::open(a1, a2) as u64;
    return struct8 {
        field_0: 0
    };
    v0 = struct4 {
        field_0: *((&v1 as &char + 4) as &i32)
    };
    v2 = 0;
    v1 = struct8 {
        field_0: 0
    };
    v3 = 0;
    v4 = 0;
    v5 = memmap2::MmapOptions::map(&v1, &v0);
    return Some(struct16 {
        field_0: v5
    });
}
