fn uu_join::parse_field_number(a0: &struct16, a1: u32, a2: u32) -> u64 {
    let v0: u8;  // [bp-0xa8]
    let v1: u8;  // [bp-0xa7]
    let v2: i8;  // [bp-0xa0]
    let v3: &u8;  // [sp-0x98]
    let v4: u64;  // [sp-0x90]
    let v5: void*;  // [sp-0x88]
    let v6: u64;  // [sp-0x80]
    let v7: u64;  // [sp-0x78]
    let v8: u8;  // [sp-0x70]
    let v9: u64;  // [sp-0x68]
    let v10: u64;  // [sp-0x60]
    let v11: &&struct_0;  // [sp-0x58]
    let v12: u64;  // [sp-0x50]
    let v13: void*;  // [sp-0x48]
    let v14: u8;  // [bp-0x38]
    let v15: u32;  // [sp-0x20]

    core::num::<impl core::str::traits::FromStr for usize>::from_str(a1, a2);
    if !v0 {
        if v2 {
            return struct16 {
                field_0: 0
                field_8: v17
            };
        }
    } else {
        if v1 == 2 {
            return struct16 {
                field_0: 0
                field_8: -1
            };
        }
    }
    v5 = 0;
    v6 = a1;
    v7 = a2;
    v8 = 1;
    v3 = &v5;
    v4 = <os_display::Quoted as core::fmt::Display>::fmt;
    v9 = "invalid field number: ";
    v10 = 1;
    v13 = 0;
    v11 = &v3;
    v12 = 1;
    core::option::Option<T>::map_or_else();
    v15 = 1;
    *(a0 as &double) = alloc::boxed::Box<T>::new(&v14);
    a0[1] = &g_5352b8;
}
