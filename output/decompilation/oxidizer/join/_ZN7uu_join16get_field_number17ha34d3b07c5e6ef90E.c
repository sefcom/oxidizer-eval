fn uu_join::get_field_number(a1: i8, a2: i64, a3: i8, a4: i64) -> Result<struct16, struct16> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x90]
    let v1: u64;  // [bp-0x88]
    let v2: i64;  // [bp-0x80]
    let v3: u64;  // [bp-0x78]
    let v4: i64;  // [bp-0x70]
    let v5: struct48;  // [bp-0x68]
    let v6: struct40;  // [bp-0x60]
    let v7: struct24;  // [bp-0x30]
    let v9: core::option::Option<u32>;  // [bp-0x10]
    let v10: u64;  // [bp-0x8]
    let v12: u64;  // r14
    let v13: i64;  // rbx

    if !(a1 & 1) {
        return struct16 {
            field_0: 0
            field_8: a4
        };
    } else if (a2 != a4 & a3) {
        v10 = v12;
        v9 = v13;
        v0 = a2 + 1;
        v1 = a4 + 1;
        v2 = &v0;
        v3 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v4 = &v1;
        v5 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v6 = struct40 {
            field_0: "incompatible join fields "
            field_8: 2
            field_16: &v2
            field_24: ""
        };
        v7 = core::option::Option<T>::map_or_else(&v6);
        return Ok(struct16 {
            field_0: alloc::boxed::Box<T>::new(&v7) as u64
            field_8: &g_4fe360
        });
    } else {
        return struct16 {
            field_0: 0
            field_8: a2
        };
    }
}
