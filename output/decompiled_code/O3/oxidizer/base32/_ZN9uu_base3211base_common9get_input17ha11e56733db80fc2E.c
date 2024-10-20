fn uu_base32::base_common::get_input(a0: &u64, a1: void*, a2: u32) -> u64 {
    let v0: struct8;  // [bp-0x38], Other Possible Types: u64
    let v1: u8;  // [bp-0x30]
    let v2: u16;  // [sp-0x2c]
    let v3: Enum;  // [sp-0x28], Other Possible Types: u64
    let v4: u8;  // [bp-0x20]
    let v6: u64;  // rax
    let v7: u8;  // dl
    let v8: &struct_0;  // rax
    let v10: u64;  // rdx
    let v11: u64;  // rcx

    if a1->field_10 == 0x8000000000000000 {
        v0 = struct8 {
            field_0:             std::io::stdio::stdin()
        };
        v6 = std::io::stdio::Stdin::lock(&v0);
        v0 = v6;
        v1 = v7 & 1;
        v8 = __rust_alloc(16, 8);
        v8->field_0 = v6;
        v8->field_8 = v7 & 1;
        v11 = &g_501b50;
        goto LABEL_48d2c3;
    } else {
        v0 = struct8 {
            field_0: 0x1b600000000
        };
        v1 = 0;
        v2 = 0;
        v1 = 1;
        v3 = std::fs::OpenOptions::_open(&v0, a1->field_18, a1->field_20);
        if v3 as i32 {
            v8 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(*(&v4 as &i64), &a1->field_10 as &struct_1);
            v10 = 1;
            v11 = &anon.aee8d0926622a1c6e97588a73d77e694.9.llvm.9973493521462227259;
        } else {
            v8 = __rust_alloc(4, 4);
            v8->field_0 = *((&v3 as &char + 4) as &i32);
            v11 = &g_501ba8;
LABEL_48d2c3:
            v10 = 0;
        }
    }
    a0[1] = v8;
    a0[2] = v11;
    *(a0) = v10;
    return a0;
}
