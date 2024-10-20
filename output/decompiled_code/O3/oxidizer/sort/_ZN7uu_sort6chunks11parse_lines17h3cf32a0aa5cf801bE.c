fn uu_sort::chunks::parse_lines(a0: u64, a1: u32, a2: void*, a3: &u64, a4: u32, a5: u32) -> u64 {
    let v0: u8;  // [bp-0xb8], Other Possible Types: void*
    let v1: u8;  // [sp-0xb7]
    let v2: u64;  // [sp-0xb0]
    let v3: void*;  // [sp-0xa8]
    let v4: struct89;  // [bp-0x98]
    let v5: u16;  // [sp-0x38]
    let v7: u64;  // rbp
    let v8: u64;  // r14
    let v9: u8;  // al

    v7 = a4;
    v0 = 0;
    v8 = 1;
    v9 = v7 & 4294967295;
    if v7 < 0 {
        v9 = v7 & 4294967295 | -0x100 | (v7 & 4294967295 & 255) >> 6 | 192;
        v1 = v7 & 4294967295 & 191;
        v8 = 2;
    }
    v0 = v9;
    if a2[2] {
        core::panicking::panic(); /* do not return */
    } else if a3[2] {
        core::panicking::panic(); /* do not return */
    } else if a3[5] {
        core::panicking::panic(); /* do not return */
    } else if a3[8] {
        core::panicking::panic(); /* do not return */
    } else {
        v0 = 0;
        v2 = 8;
        v3 = 0;
        v5 = 1;
        *(&v4 as &struct89) = struct89 {
            field_0: a3
            field_8: &v0
            field_16: a5
            field_24: 0
            field_40: v10
            field_48: v11
            field_56: v10
            field_64: 0
            field_72: v10
            field_80: v12
            field_84: v13
            field_88: 2 - ((v7 & 255) >> 7 & 1 ^ 1) as u8
        };
        return <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(a2, &v4);
    }
}
