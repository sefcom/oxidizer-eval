fn uu_tac::try_mmap_path(a0: &Option<struct16>, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0x4c]
    let v1: i64;  // [sp-0x48]
    let v2: i64;  // [sp-0x38]
    let v3: i8;  // [sp-0x30]
    let v4: i16;  // [sp-0x2e]
    let v5: Result<struct16, struct8>;  // [sp-0x28]

    vvar_89{stack -76} = std::fs::File::open(a1, a2)?;
    v0 = *((&v1 as &char + 4) as &i32);
    v2 = 0;
    v1 = 0;
    v3 = 0;
    v4 = 0;
    v5 = memmap2::MmapOptions::map(&v1, &v0);
    match v5 {
        Err(_) => {
            return struct8 {
                field_0: 0
            };
        },
        Ok(_) => {
            return Some(struct16 {
                field_0: *((&v5 as &char + 8) as &i128)
            });
        },
    }
}
