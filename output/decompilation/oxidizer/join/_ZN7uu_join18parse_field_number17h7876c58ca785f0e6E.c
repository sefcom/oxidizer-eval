fn uu_join::parse_field_number(a1: i64, a2: i64) -> Result<struct16, struct16> {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0xa8]
    let v1: u8;  // [bp-0xa7]
    let v2: u64;  // [bp-0xa0]
    let v3: i64;  // [bp-0x98]
    let v4: u64;  // [bp-0x90]
    let v5: void*;  // [bp-0x88]
    let v6: u64;  // [bp-0x80]
    let v7: u64;  // [bp-0x78]
    let v8: core::result::Result<(), std::io::error::Error>;  // [bp-0x70]
    let v9: struct40;  // [bp-0x68]
    let v10: struct24;  // [bp-0x38]
    let v13: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx

    v13 = core::num::<impl usize>::from_ascii_radix(&v0, a1, a2);
    if v0 == 1 {
        if v1 == 2 {
            return struct16 {
                field_0: 0
                field_8: -1
            };
        }
    } else {
        if v2 {
            *((a0 + 8) as &u64) = v2 - 1;
        }
    }
    v5 = 0;
    v6 = a1;
    v7 = a2;
    v8 = 1;
    v3 = &v5;
    v4 = <os_display::Quoted as core::fmt::Display>::fmt;
    v9 = struct40 {
        field_0: "invalid field number: "
        field_8: 1
        field_16: &v3
        field_24: ""
    };
    v10 = core::option::Option<T>::map_or_else(&v9);
    return Ok(struct16 {
        field_0: alloc::boxed::Box<T>::new(&v10) as u64
        field_8: &g_4fe360
    });
}
