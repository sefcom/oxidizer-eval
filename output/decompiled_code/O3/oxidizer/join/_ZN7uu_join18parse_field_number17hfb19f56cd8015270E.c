fn uu_join::parse_field_number(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: u8;  // [bp-0xa8]
    let v1: u8;  // [bp-0xa7]
    let v2: i8;  // [bp-0xa0]
    let v3: void*;  // [sp-0x88]
    let v4: u64;  // [sp-0x80]
    let v5: u64;  // [sp-0x78]
    let v6: u8;  // [sp-0x70]
    let v7: u8;  // [bp-0x38]
    let v8: u32;  // [sp-0x20]
    let v10: Result<struct8, struct1>;  // rax
    let v11: u64;  // rax

    v10 = core::num::<impl core::str::traits::FromStr for usize>::from_str(a1, a2);
    if !v0 {
        v11 = v2;
        if v11 {
            v10 = v11 - 1;
            return struct16 {
                field_0: 0
                field_8: v10
            };
        }
    } else if v1 == 2 {
        return struct16 {
            field_0: 0
            field_8: -1
        };
    }
    v3 = 0;
    v4 = a1;
    v5 = a2;
    v6 = 1;
    format!("invalid field number: {:?}", &v3);
    v8 = 1;
    *(a0 as &double) = alloc::boxed::Box<T>::new(&v7);
    a0[1] = &g_535e48;
    return &g_535e48;
}
