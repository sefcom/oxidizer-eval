fn uu_tac::try_mmap_path(a0: i64, a1: u64, a2: u64) -> int {
    let v0: struct4;  // [bp-0x4c]
    let v1: Result<struct4, struct8>;  // [bp-0x48]
    let v2: void*;  // [bp-0x48]
    let v3: void*;  // [bp-0x38]
    let v4: u8;  // [bp-0x30]
    let v5: u16;  // [bp-0x2e]
    let v6: struct24;  // [bp-0x28]

    v2 as u128 = std::fs::File::open(a1, a2);
    match v2 as u128 {
        Err(_) => {
            return struct8 {
                field_0: 0
            };
        },
        Ok(v0) => {
            v3 = 0;
            v2 = 0 as void*;
            v4 = 0;
            v5 = 0;
            v6 = memmap2::MmapOptions::map(&v2 as u128, &v0);
            if !(v6.field_0 as i8 & 1) {
                return struct24 {
                    field_0: 1
                    field_8: *(&v6.field_8 as &i128)
                };
            }
            return struct8 {
                field_0: 0
            };
        },
    }
}
