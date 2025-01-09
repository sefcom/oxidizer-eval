fn uu_join::parse_field_number(a0: &struct16, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0xa0]
    let v1: &u8;  // [sp-0x98]
    let v2: u64;  // [sp-0x90]
    let v3: void*;  // [sp-0x88]
    let v4: u64;  // [sp-0x80]
    let v5: u64;  // [sp-0x78]
    let v6: u8;  // [sp-0x70]
    let v7: u64;  // [sp-0x68]
    let v8: u64;  // [sp-0x60]
    let v9: &&struct_0;  // [sp-0x58]
    let v10: u64;  // [sp-0x50]
    let v11: void*;  // [sp-0x48]
    let v12: u8;  // [bp-0x38]
    let v13: u32;  // [sp-0x20]
    let v15: Result<struct8, struct1>;  // rax
    let v16: u64;  // rax

    v15 = core::num::<impl core::str::traits::FromStr for usize>::from_str(a1, a2) as u64;
    return struct16 {
        field_0: 0
        field_8: -1
    };
    v16 = v0;
    if v16 {
        v15 = v16 - 1;
        return struct16 {
            field_0: 0
            field_8: v15
        };
    }
    v3 = 0;
    v4 = a1;
    v5 = a2;
    v6 = 1;
    v1 = &v3;
    v2 = <os_display::Quoted as core::fmt::Display>::fmt;
    v7 = "invalid field number: ";
    v8 = 1;
    v11 = 0;
    v9 = &v1;
    v10 = 1;
    core::option::Option<T>::map_or_else();
    v13 = 1;
    *(a0 as &double) = alloc::boxed::Box<T>::new(&v12);
    v15 = &g_5352b8;
    a0[1] = &g_5352b8;
}
