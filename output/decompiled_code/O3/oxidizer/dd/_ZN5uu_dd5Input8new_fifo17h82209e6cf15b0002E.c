fn uu_dd::Input::new_fifo(a0: void*, a1: u32, a2: u32, a3: void*) -> u64 {
    let v0: u32;  // [sp-0x48]
    let v1: u32;  // [sp-0x44]
    let v2: u64;  // [sp-0x40], Other Possible Types: Enum
    let v3: u8;  // [bp-0x38]
    let v4: i8;  // [bp-0x30]
    let v5: u64;  // [sp-0x28]
    let v6: u32;  // [sp-0x20]
    let v7: u64;  // [bp-0x1c]
    let v8: u8;  // [sp-0x18]
    let v9: u16;  // [sp-0x14]
    let v11: u32;  // eax
    let v12: u32;  // eax
    let v13: u32;  // eax
    let v14: u32;  // esi
    let v15: &u64;  // rax
    let v17: u128;  // xmm0
    let v18: u64;  // rdx
    let v19: &u64;  // rax
    let v20: u128;  // xmm0

    v7 = 438;
    v11 = a3->field_41 * 0x4000;
    v9 = 0;
    if vvar_216 {
        v11 |= 0x10000;
    }
    v12 = (!a3->field_43 ? v11 : v11 + 0x1000);
    if a3->field_47 {
        v12 |= 0x40000;
    }
    if a3->field_48 {
        v13 = v12 | 0x100;
    }
    if a3->field_49 {
        v13 |= 0x20000;
    }
    if a3->field_46 {
        v13 |= 0x800;
    }
    v8 = 1;
    if vvar_218 {
        v14 = v13 | 0x101000;
    }
    v6 = v14;
    v2 = std::fs::OpenOptions::_open(&v6, a1, a2);
    if v2 as i32 {
        v2 = 0x8000000000000000;
        v5 = *(&v3 as &i64);
        v15 = __rust_alloc(32, 8);
        v17 = *(&v2 as &i128);
        *(&v15[2] as &i8) = v4;
        *(v15) = v17;
        *(&a0->field_8 as &&u64) = v15;
        a0->field_10 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
        a0->field_0 = 1;
        return a0;
    }
    v1 = *((&v2 as &char + 4) as &i32);
    v0 = 2;
    if a3->field_80 && uu_dd::Source::skip(&v0, a3->field_80) {
        v2 = 0x8000000000000000;
        v5 = v18;
        v19 = __rust_alloc(32, 8);
        v20 = *(&v2 as &i128);
        *(&v19[2] as &i8) = v4;
        *(v19) = v20;
        *(&a0->field_8 as &&u64) = v19;
        a0->field_10 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
        a0->field_0 = 1;
        return a0;
    }
    a0->field_8 = 2;
    a0->padding_c[0] = v1;
    a0->field_10 = a3;
    a0->field_0 = 0;
    return a0;
}
