fn uu_uniq::open_output_file(a0: &u64, a1: &u8, a2: u32) -> u64 {
    let v0: u64;  // [bp-0x50], Other Possible Types: struct8
    let v1: u64;  // [bp-0x48]
    let v2: u8;  // [sp-0x47]
    let v3: u8;  // [sp-0x45]
    let v4: u8;  // [bp-0x44]
    let v5: void*;  // [sp-0x40]
    let v6: u8;  // [sp-0x38]
    let v7: u32;  // [sp-0x34]
    let v8: Enum;  // [sp-0x30], Other Possible Types: struct8, u64
    let v9: u8;  // [bp-0x28]
    let v11: u64;  // rsi
    let v12: u64;  // rdx
    let v13: u64;  // rax
    let v14: &struct_0;  // rax
    let v15: u32;  // ebp
    let v16: u64;  // rdx
    let v17: u64;  // rcx
    let v18: u128;  // xmm0

    if !a1 || a2 == 1 && *(a1) == 45 {
        v8 = struct8 {
            field_0:             std::io::stdio::stdout()
        };
        v13 = std::io::stdio::Stderr::lock(&v8, v11, v12);
        v0 = v13;
        v14 = __rust_alloc(8, 8);
        v14->field_0 = v13;
        v17 = &g_4f2e90;
        goto LABEL_48d8d1;
    } else {
        v0 = struct8 {
            field_0: 0x1b600000000
        };
        v1 = 0;
        v4 = 0;
        v2 = 1;
        v4 = 1;
        v3 = 1;
        v8 = std::fs::OpenOptions::_open(&v0, a1, a2);
        if v8 as i32 {
            v14 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(*(&v9 as &i64), a1, a2);
            v16 = 1;
            v17 = &anon.91813ef2801f4d1d4cad4af8ef82e3d6.9.llvm.14928124353916811356;
        } else {
            v15 = *((&v8 as &char + 4) as &i32);
            v0 = 0x2000;
            *(&v1 as &long long) = __rust_alloc(0x2000, 1);
            v5 = 0;
            v6 = 0;
            v7 = v15;
            v14 = __rust_alloc(32, 8);
            v18 = *(&v0 as &i128);
            v14->field_10 = *(&v5 as &i128);
            v14->field_0 = v18;
            v17 = &g_4f2e40;
LABEL_48d8d1:
            v16 = 0;
        }
    }
    a0[1] = v14;
    a0[2] = v17;
    *(a0) = v16;
    return a0;
}
