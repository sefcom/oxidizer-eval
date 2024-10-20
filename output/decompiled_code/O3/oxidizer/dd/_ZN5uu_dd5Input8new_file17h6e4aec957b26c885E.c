fn uu_dd::Input::new_file(a0: void*, a1: u32, a2: u32, a3: void*) -> u64 {
    let v0: u64;  // [bp-0x50]
    let v1: u32;  // [sp-0x4c]
    let v2: u8;  // [bp-0x48]
    let v3: u16;  // [sp-0x44]
    let v4: u64;  // [sp-0x40], Other Possible Types: Enum
    let v5: u8;  // [bp-0x38]
    let v6: i8;  // [bp-0x30]
    let v7: u64;  // [sp-0x28]
    let v9: u32;  // eax
    let v10: u32;  // eax
    let v11: u32;  // eax
    let v12: u32;  // eax
    let v14: u64;  // rdx
    let v15: &u64;  // rax
    let v16: u128;  // xmm0

    v0 = 0x1b600000000;
    v2 = 0;
    v9 = a3->field_41 * 0x4000;
    v3 = 0;
    if vvar_221 {
        v9 |= 0x10000;
    }
    v10 = (!a3->field_43 ? v9 : v9 + 0x1000);
    if a3->field_47 {
        v10 |= 0x40000;
    }
    if a3->field_48 {
        v11 = v10 | 0x100;
    }
    if a3->field_49 {
        v11 |= 0x20000;
    }
    if a3->field_46 {
        v11 |= 0x800;
    }
    v2 = 1;
    if vvar_223 {
        v12 = v11 | 0x101000;
    }
    if v0 {
        v0 = v12;
    }
    v4 = std::fs::OpenOptions::_open(&v0, a1, a2);
    if v4 as i32 {
        *(&a0->field_8 as &double) = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(*(&v5 as &i64), a1, a2);
        a0->field_10 = &anon.47fcc33835ba2501a8fd1dfb926be52d.4.llvm.7315772993864627227;
        a0->field_0 = 1;
        return a0;
    }
    v1 = *((&v4 as &char + 4) as &i32);
    v0 = 0;
    if a3->field_80 && uu_dd::Source::skip(&v0, a3->field_80) {
        v4 = 0x8000000000000000;
        v7 = v14;
        v15 = __rust_alloc(32, 8);
        v16 = *(&v4 as &i128);
        *(&v15[2] as &i8) = v6;
        *(v15) = v16;
        *(&a0->field_8 as &&u64) = v15;
        a0->field_10 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
        a0->field_0 = 1;
        return a0;
    }
    a0->field_8 = 0;
    a0->padding_c[0] = v1;
    a0->field_10 = a3;
    a0->field_0 = 0;
    return a0;
}
