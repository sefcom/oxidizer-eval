fn uu_pr::header_content(a0: &struct24, a1: void*, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x88]
    let v1: i8;  // [bp-0x80]
    let v2: i8;  // [bp-0x70]
    let v3: u64;  // [sp-0x68]
    let v4: u64;  // [sp-0x60]
    let v5: u64;  // [sp-0x58]
    let v6: u64;  // [sp-0x50]
    let v7: &u8;  // [sp-0x48]
    let v8: u64;  // [sp-0x40]
    let v9: u64;  // [sp-0x38]
    let v10: u64;  // [sp-0x30]
    let v11: &u8;  // [sp-0x28]
    let v12: u64;  // [sp-0x20]
    let v13: void*;  // [sp-0x18]
    let v15: &struct_1;  // rax
    let v16: u64;  // rax

    v0 = a2;
    if !a1->field_141 {
        return struct24 {
            field_0: 0
            field_8: 8
            field_16: 0
        };
    }
    v3 = &a1->padding_0[120];
    v4 = <alloc::string::String as core::fmt::Display>::fmt;
    v5 = &a1->padding_0[48];
    v6 = <alloc::string::String as core::fmt::Display>::fmt;
    v7 = &v0;
    v8 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v9 = &g_709590;
    v10 = 3;
    v13 = 0;
    v11 = &v3;
    v12 = 3;
    core::option::Option<T>::map_or_else();
    v15 = alloc::alloc::Global::alloc_impl(8, 120);
    v15->field_0 = 0;
    v15->field_8 = 1;
    v15->field_10 = 0;
    v15->field_20 = 1;
    v15->field_28 = 0;
    *(&v15->field_30 as &i8) = v1;
    *(&v15->field_40 as &i8) = v2;
    v15->field_48 = 0;
    v15->field_50 = 1;
    *(&(&v15->field_50)[1] as &i128) = 0;
    *((&v15->field_58 as &char + 8) as &i64) = 1;
    v15->field_68 = 0;
    v16 = alloc::slice::hack::into_vec(a0, v15, 5);
}
