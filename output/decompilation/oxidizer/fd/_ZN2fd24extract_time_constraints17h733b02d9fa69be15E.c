fn fd::extract_time_constraints(a1: i64) -> Result<struct24, struct16> {
    let a0: i64;  // rdi
    let v0: &mut [u8];  // [bp-0xd8], Other Possible Types: struct16
    let v1: void*;  // [bp-0xd0]
    let v2: struct16;  // [bp-0xd0]
    let v3: struct16;  // [bp-0xd0]
    let v4: u64;  // [bp-0xc8]
    let v5: void*;  // [bp-0xc0]
    let v6: struct20;  // [bp-0x78]
    let v7: struct20;  // [bp-0x60]
    let v8: alloc::string::String;  // [bp-0x48]
    let v9: alloc::string::String;  // [bp-0x30]

    v1 = 0;
    v4 = 8;
    v5 = 0;
    if !((((0 ^ *((a1 + 280) as &i64)) & (0 ^ -(*((a1 + 280) as &i64)))) >> 63) as char) {
        v0 = a1 + 280;
        v6 = fd::filter::time::TimeFilter::after(*((a1 + 288) as &i64), *((a1 + 296) as &i64));
        if v6.field_0 as i32 == 2 {
            v8 = format!("'{}' is not a valid date or duration. See 'fd --help'.", &v0);
            return struct16 {
                field_0: 0x8000000000000000
                field_8: anyhow::error::<impl anyhow::Error>::msg(&v8)
            };
        }
        v3 = alloc::vec::Vec<T,A>::push(&v6, "src/main.rs");
    }
    if *((a1 + 304) as &i64) == 0x8000000000000000 {
        return Ok(struct24 {
            field_0: *(&v2.field_0 as &i128)
            field_16: 0
        });
    }
    v0 = a1 + 304;
    v7 = fd::filter::time::TimeFilter::before(*((a1 + 312) as &i64), *((a1 + 320) as &i64));
    if v7.field_0 as i32 != 2 {
        v2 = alloc::vec::Vec<T,A>::push(&v7, "src/main.rs");
        return Ok(struct24 {
            field_0: *(&v2.field_0 as &i128)
            field_16: 0
        });
    }
    v9 = format!("'{}' is not a valid date or duration. See 'fd --help'.", &v0);
    return struct16 {
        field_0: 0x8000000000000000
        field_8: anyhow::error::<impl anyhow::Error>::msg(&v9)
    };
}
