fn fd::walk::WorkerState::build_overrides(a0: i64, a1: u32, a2: u64, a3: &u64) -> int {
    let v0: void*;  // [bp-0x130]
    let v1: struct56;  // [bp-0x128]
    let v2: struct40;  // [bp-0x118]
    let v3: u128;  // [bp-0x108]
    let v4: u64;  // [bp-0xf8]
    let v5: struct104;  // [bp-0xe8], Other Possible Types: struct56
    let v6: struct56;  // [bp-0xe0]
    let v7: struct40;  // [bp-0xd8]
    let v8: u128;  // [bp-0xc8]
    let v9: struct24;  // [bp-0xb8]
    let v10: u128;  // [bp-0xa8]
    let v11: u128;  // [bp-0x98]
    let v12: u64;  // [bp-0x88]
    let v13: struct73;  // [bp-0x80]
    let v15: core::fmt::Arguments;  // rbp
    let v16: struct9;  // xmm0
    let v17: core::option::Option<&str>;  // xmm1
    let v18: core::result::Result<(), std::io::error::Error>;  // xmm2

    v13 = ignore::gitignore::GitignoreBuilder::new(a3);
    if a2 {
        do {
            ignore::overrides::OverrideBuilder::add(&v1, &v13, *((a1 + v15 + 8) as &i64), *((a1 + v15 + 16) as &i64));
            if v1.field_0 as i32 != 9 {
                v9 = v4;
                v8 = v3;
                v7 = v2;
                v5 = v1;
                *(&v0[8] as &u64) = fd::walk::WorkerState::build_overrides::{{closure}}(&v5 as u8, a1, a2);
                *(v0 as &i64) = 0x8000000000000000;
                return;
            }
        } while (a2 * 24 != v15);
    }
    v5 = ignore::overrides::OverrideBuilder::build(&v13);
    if !((((0 ^ v5.field_0) & (0 ^ -(v5.field_0))) >> 63) as char) {
        *(&v0[96] as &u64) = v12;
        *(&v0[80] as &u128) = v11;
        *(&v0[64] as &u128) = v10;
        v16 = *(&v5.field_0 as &i128);
        v17 = *((&v5.field_8 as &char + 8) as &i128);
        v18 = *((&v5.field_24 as &char + 8) as &i128);
        *(&v0[48] as &i128) = *((&v5.field_40 as &char + 8) as &i128);
        *(&v0[32] as &core::result::Result<(), std::io::error::Error>) = v18;
        *(&v0[16] as &core::option::Option<&str>) = v17;
        *(v0 as &struct9) = v16;
        return;
    }
    v1 = v6;
    *(&v0[8] as &u64) = fd::walk::WorkerState::build_overrides::{{closure}}(&v1);
    *(v0 as &i64) = 0x8000000000000000;
    return;
}
