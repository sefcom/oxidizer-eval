fn uu_cp::handle_preserve(a0: &Option<struct64>, a1: u8, a2: u8, a3: u32, a4: u32) -> u64 {
    let v0: i72;  // [sp-0x98], Other Possible Types: Option<struct8>
    let v1: i8;  // [bp-0x88]
    let v2: i8;  // [bp-0x80]
    let v3: i8;  // [bp-0x78]
    let v5: i8;  // [bp-0x68]
    let v7: i128;  // [sp-0x58]
    let v8: i128;  // [sp-0x48]
    let v9: i128;  // [sp-0x38]
    let v10: i128;  // [sp-0x28]
    let v12: i64;  // rax
    let v13: i128;  // xmm0
    let v14: i128;  // xmm1
    let v15: i64;  // rax

    return struct8 {
        field_0: 13
    };
    v0 = uu_cp::copy_attributes::{{closure}}(a3, a4);
    v12 = v0;
    if a2 {
        v12 = v12;
        v13 = v0;
        v14 = v2;
        return Some(struct64 {
            field_0: v12
            field_8: v13
            field_24: v14
            field_40: v4
            field_56: v6
        });
    }
    v12 = v12;
    v10 = v5;
    v9 = v3;
    v8 = v1;
    v7 = v0;
    uu_cp::show_error_if_needed(&v7);
    v12 = v15;
}
