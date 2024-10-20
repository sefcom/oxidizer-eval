fn uu_uniq::open_input_file(a0: &u64, a1: &u8, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x60], Other Possible Types: Enum, struct8
    let v1: u8;  // [bp-0x58]
    let v2: u64;  // [bp-0x50], Other Possible Types: struct8
    let v3: u32;  // [bp-0x48]
    let v4: u16;  // [sp-0x44]
    let v5: u128;  // [sp-0x40]
    let v6: void*;  // [sp-0x30]
    let v7: u32;  // [sp-0x28]
    let v9: u64;  // rax
    let v10: u8;  // dl
    let v11: &struct_0;  // rax
    let v12: u32;  // ebp
    let v13: u64;  // rdx
    let v14: u64;  // rcx
    let v15: u128;  // xmm0

    if !a1 || a2 == 1 && *(a1) == 45 {
        v0 = struct8 {
            field_0:             std::io::stdio::stdin()
        };
        v9 = std::io::stdio::Stdin::lock(&v0);
        v2 = v9;
        v3 = v10 & 1;
        v11 = __rust_alloc(16, 8);
        v11->field_0 = v9;
        v11->padding_8[0] = v10 & 1;
        v14 = &g_4f2db8;
        goto LABEL_48d6e9;
    } else {
        v2 = struct8 {
            field_0: 0x1b600000000
        };
        v3 = 0;
        v4 = 0;
        v3 = 1;
        v0 = std::fs::OpenOptions::_open(&v2, a1, a2);
        if v0 as i32 {
            v11 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(*(&v1 as &i64), a1, a2);
            v13 = 1;
            v14 = &anon.91813ef2801f4d1d4cad4af8ef82e3d6.9.llvm.14928124353916811356;
        } else {
            v12 = *((&v0 as &char + 4) as &i32);
            v2 = __rust_alloc(0x2000, 1);
            v3 = 0x2000;
            v5 = 0;
            v6 = 0;
            v7 = v12;
            v11 = __rust_alloc(48, 8);
            v15 = *(&v2 as &i128);
            v11->field_20 = *(&v6 as &i128);
            v11->field_10 = v5;
            v11->field_0 = v15;
            v14 = &g_4f2d30;
LABEL_48d6e9:
            v13 = 0;
        }
    }
    a0[1] = v11;
    a0[2] = v14;
    *(a0) = v13;
    return a0;
}
