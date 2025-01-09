fn uu_join::get_field_number(a0: &struct16, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: u64;  // [sp-0x90]
    let v1: u64;  // [sp-0x88]
    let v2: &u8;  // [sp-0x80]
    let v3: u64;  // [sp-0x78]
    let v4: &u8;  // [sp-0x70]
    let v5: u64;  // [sp-0x68]
    let v6: u64;  // [sp-0x60]
    let v7: u64;  // [sp-0x58]
    let v8: &&struct_0;  // [sp-0x50]
    let v9: u64;  // [sp-0x48]
    let v10: void*;  // [sp-0x40]
    let v12: u32;  // [sp-0x18]
    let v13: u64;  // [sp-0x10]
    let v14: u64;  // [sp-0x8]
    let v17: u64;  // r14
    let v18: u64;  // rbx

    if a1 != 1 {
        return struct16 {
            field_0: 0
            field_8: v16
        };
    }
    if !(a3 == 1 && a2 != a4) {
        return struct16 {
            field_0: 0
            field_8: a2
        };
    }
    v14 = v17;
    v13 = v18;
    v0 = a2 + 1;
    v1 = a4 + 1;
    v2 = &v0;
    v3 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v4 = &v1;
    v5 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v6 = "incompatible join fields ";
    v7 = 2;
    v10 = 0;
    v8 = &v2;
    v9 = 2;
    core::option::Option<T>::map_or_else();
    v12 = 1;
    return struct16 {
        field_0:         alloc::boxed::Box<T>::new(&v11)
        field_8: &g_5352b8
    };
}
