fn uu_join::State::new(a0: &struct_0, a1: u8, a2: &u8, a3: u64, a4: u64, a5: u64) -> u64 {
    let v0: u64;  // [sp-0x88]
    let v1: u64;  // [bp-0x80], Other Possible Types: struct8
    let v2: u8;  // [bp-0x78]
    let v3: u16;  // [sp-0x74]
    let v4: u128;  // [sp-0x70]
    let v5: void*;  // [sp-0x60]
    let v6: u32;  // [sp-0x58]
    let v7: u128;  // [sp-0x50], Other Possible Types: Enum
    let v8: u64;  // [sp-0x40], Other Possible Types: Enum
    let v9: i64;  // [bp+0x8]
    let v10: u8;  // [bp+0x10]
    let v11: u64;  // rax
    let v12: u8;  // dl
    let v13: &struct_1;  // rax
    let v14: u64;  // rax
    let v15: u64;  // rcx
    let v16: u64;  // rcx
    let v17: u32;  // r13d
    let v18: u128;  // xmm0
    let v19: u8;  // dl
    let v20: u8;  // sil

    if a3 != 1 || *(a2) != 45 {
        v1 = struct8 {
            field_0: 0x1b600000000
        };
        v2 = 0;
        v3 = 0;
        v2 = 1;
        v8 = std::fs::OpenOptions::_open(&v1, a2, a3);
        v7 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v8, a2, a3);
        v14 = v7;
        if v14 {
            v16 = *((&v7 as &char + 8) as &i64);
            a0->field_8 = v14;
            a0->field_10 = v16;
            a0->field_0 = 0x8000000000000000;
            return a0;
        }
        v0 = a5;
        v17 = *((&v7 as &char + 8) as &i32);
        v1 = __rust_alloc(0x2000, 1);
        v2 = 0x2000;
        v4 = 0;
        v5 = 0;
        v6 = v17;
        v13 = __rust_alloc(48, 8);
        v18 = *(&v1 as &i128);
        v13->field_20 = *(&v5 as &i128);
        v13->field_10 = v4;
        v13->field_0 = v18;
        v15 = &g_4fdc20;
    } else {
        v0 = a5;
        v11 = std::io::stdio::Stdin::lock(a4);
        v1 = v11;
        v2 = v12 & 1;
        v13 = __rust_alloc(16, 8);
        v13->field_0 = v11;
        v13->padding_8[0] = v12 & 1;
        v15 = &g_4fdca8;
    }
    v19 = v10;
    v20 = v9;
    a0->field_0 = 0;
    a0->field_8 = 8;
    a0->field_10 = 0;
    a0->field_18 = a2;
    a0->field_20 = a3;
    a0->field_28 = v13;
    a0->field_30 = v15;
    a0->field_38 = v20;
    a0->field_40 = v0;
    a0->field_48 = 1;
    a0->field_50 = 0;
    a0->field_58 = a1;
    a0->field_59 = v19;
    a0->field_5a = 0;
    return a0;
}
