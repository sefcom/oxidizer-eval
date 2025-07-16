fn uu_join::parse_field_number(a1: i64, a2: i64) -> Result<struct16, struct16> {
    let a0: u64;  // rsi
    let v0: core::result::Result<usize, core::num::error::ParseIntError>;  // [bp-0xa8]
    let v1: u64;  // [bp-0xa0]
    let v2: core::result::Result<(), std::io::error::Error>;  // [bp-0x98]
    let v3: u64;  // [bp-0x90]
    let v4: core::option::Option<u32>;  // [bp-0x88]
    let v5: struct8;  // [bp-0x80]
    let v6: u64;  // [bp-0x78]
    let v7: u8;  // [bp-0x70]
    let v8: struct24;  // [bp-0x68], Other Possible Types: struct8
    let v9: u64;  // [bp-0x60]
    let v10: i64;  // [bp-0x58]
    let v11: u64;  // [bp-0x50]
    let v12: void*;  // [bp-0x48]
    let v13: u8;  // [bp-0x38]
    let v16: i64;  // rdi
    let v17: i64;  // rdi
    let v18: i64;  // rdi

    v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(a0, a1);
    match v0 {
        Err(_) => {
            if *((&v0 as &char + 1) as &i8) == 2 {
                *((v16 + 8) as &i64) = -1;
                *(v16 as &i64) = 0;
                return;
            }
        },
        Ok(_) => {
            if v1 {
                *((v17 + 8) as &u64) = v1 - 1;
                *(v17 as &i64) = 0;
                return;
            }
        },
    }
    v4 = 0;
    v5 = a0;
    v6 = a1;
    v7 = 1;
    v2 = &v4;
    v3 = <os_display::Quoted as core::fmt::Display>::fmt;
    v8 = "invalid field number: ";
    v9 = 1;
    v12 = 0;
    v10 = &v2;
    v11 = 1;
    v8 = core::option::Option<T>::map_or_else(a1);
    *(v18 as &double) = alloc::boxed::Box<T>::new(&v13);
    *((v18 + 8) as &&u8) = &g_5352b8;
    return;
}
