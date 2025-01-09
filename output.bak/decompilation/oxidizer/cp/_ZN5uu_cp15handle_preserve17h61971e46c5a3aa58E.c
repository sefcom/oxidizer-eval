fn uu_cp::handle_preserve(a0: &Option<struct64>, a1: u8, a2: u8, a3: u32) -> u64 {
    let v0: i264;  // [sp-0x98], Other Possible Types: Option<struct32>
    let v2: i8;  // [bp-0x68]
    let v4: i128;  // [sp-0x58]
    let v5: i256;  // [bp-0x48]
    let v6: i128;  // [sp-0x28]
    let v8: i64;  // rax
    let v9: i128;  // xmm0
    let v10: i128;  // xmm1
    let v11: i64;  // rax

    return struct8 {
        field_0: 13
    };
    v0 = uu_cp::copy_attributes::{{closure}}(a3);
    v8 = v0;
    if a2 {
        v8 = v8;
        v9 = *((&v0 as &char + 8) as &i128);
        v10 = v0;
        return Some(struct64 {
            field_0: v8
            field_8: v9
            field_24: v10
            field_40: v1
            field_56: v3
        });
    }
    v8 = v8;
    v6 = v2;
    v5 = v0;
    v4 = v0;
    uu_cp::show_error_if_needed(&v4);
    v8 = v11;
}
