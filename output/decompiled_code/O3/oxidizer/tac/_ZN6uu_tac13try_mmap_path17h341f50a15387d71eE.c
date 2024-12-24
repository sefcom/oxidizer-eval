fn uu_tac::try_mmap_path(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: struct4;  // [bp-0x4c]
    let v1: Result<struct4, struct8>;  // [sp-0x48], Other Possible Types: u64, struct8
    let v2: void*;  // [sp-0x38]
    let v3: u8;  // [sp-0x30]
    let v4: u16;  // [sp-0x2e]
    let v5: Result<struct16, struct8>;  // [sp-0x28], Other Possible Types: u128
    let v7: u64;  // rax

    v1 = std::fs::File::open(a1, a2);
    if v1 as i32 {
        return struct8 {
            field_0: 0
        };
    }
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
    if !v5 as i64 {
        (&a0->field_0)[1] = v5;
        a0->field_0 = 1;
    } else {
        a0->field_0 = 0;
    }
    return v7;
}
