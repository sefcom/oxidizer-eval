fn just::function::dir(a0: i64, a1: u64, a2: u64, a3: i64) -> int {
    let v0: struct24;  // [bp-0x80]
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x80]
    let v2: u64;  // [bp-0x78]
    let v3: u64;  // [bp-0x70], Other Possible Types: unsigned long
    let v4: struct16;  // [bp-0x50]
    let v5: u8;  // [bp-0x40]
    let v6: u64;  // [bp-0x38]
    let v7: u64;  // [bp-0x30]
    let v9: alloc::string::String;  // rax

    v4 = struct16 {
        field_0: a1
        field_8: a2
    };
    a3(&v5);
    if (((0 ^ v5) & (0 ^ -(v5))) >> 63) as char {
        v9 = format!("{} directory not found", &v4);
        return struct8 {
            field_0: 1
        };
    }
    v1 = core::str::converts::from_utf8(v6, v7);
    match v1 {
        Ok(_) => {
            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v2, v3);
            return struct32 {
                field_0: 0
                field_8: v0.field_0 as i64
                field_16: *((&v0.field_0 as &char + 8) as &i128)
            };
        },
        Err(_) => {
            v0 = just::function::dir::{{closure}}(v6, v7, &v4);
            return struct32 {
                field_0: 1
                field_8: v0.field_0
                field_24: v3
            };
        },
    }
}
