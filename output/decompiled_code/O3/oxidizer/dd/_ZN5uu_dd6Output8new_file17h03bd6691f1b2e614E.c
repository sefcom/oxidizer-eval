fn uu_dd::Output::new_file(a0: void*, a1: u32, a2: u32, a3: void*) -> u64 {
    let v0: u32;  // [sp-0x4c]
    let v1: u64;  // [bp-0x48]
    let v2: u32;  // [bp-0x40]
    let v3: u8;  // [sp-0x3e]
    let v4: u8;  // [sp-0x3c]
    let v5: u8;  // [sp-0x3b]
    let v6: u64;  // [sp-0x38], Other Possible Types: Enum
    let v7: u8;  // [bp-0x30]
    let v9: u8;  // al
    let v10: u8;  // cl
    let v11: u32;  // eax

    v9 = a3->field_91;
    v10 = a3->field_92;
    v1 = 0x1b600000000;
    v2 = 0x100;
    v4 = v10 ^ 1;
    v5 = v9;
    v3 = a3->field_96;
    v11 = v3 * 0x400;
    if a3->field_98 {
        v11 |= 0x4000;
    }
    if a3->field_99 {
        v11 |= 0x10000;
    }
    if a3->field_9a {
        v11 |= 0x1000;
    }
    if a3->field_9e {
        v11 |= 0x40000;
    }
    if a3->field_9f {
        v11 |= 0x100;
    }
    if a3->field_a0 {
        v11 |= 0x20000;
    }
    if a3->field_9d {
        v11 |= 0x800;
    }
    if a3->field_9b {
        v11 |= 0x101000;
    }
    if v11 {
        v1 = v11;
    }
    v6 = std::fs::OpenOptions::_open(&v1, a1, a2);
    if v6 as i32 {
        *(&a0->field_16 as &double) = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(*(&v7 as &i64), a1, a2);
        a0[1].field_0 = &anon.47fcc33835ba2501a8fd1dfb926be52d.4.llvm.7315772993864627227;
        a0->field_0 = 4;
        return a0;
    }
    v0 = *((&v6 as &char + 4) as &i32);
    if !a3->field_93 {
        *(&v1 as &long long) = std::fs::File::set_len(&v0, a3->field_88);
    }
    uu_dd::Output::prepare_file(a0, v0, a3);
    return a0;
}
