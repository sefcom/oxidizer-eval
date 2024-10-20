fn uu_od::output_info::OutputInfo::new(a0: void*, a1: u32, a2: u32, a3: u32, a4: u8) -> u64 {
    let v0: u64;  // [sp-0x58]
    let v1: u64;  // [sp-0x50]
    let v2: struct32;  // [bp-0x48]
    let v4: u64;  // rax
    let v5: u64;  // rsi
    let v6: u64;  // r12
    let v7: u64;  // r12
    let v8: void*;  // rdx
    let v9: &struct_0;  // rdi
    let v10: u64;  // r9
    let v12: u64;  // r9
    let v14: u64;  // r9
    let v16: u64;  // r9
    let v17: &u64;  // rsi
    let v19: u64;  // rdi
    let v21: &struct_1;  // rdi
    let v22: u64;  // r9
    let v23: u64;  // r11
    let v24: u64;  // r10
    let v26: u64;  // rax

    if !a3 {
        v5 = 1;
        v6 = 1;
    } else {
        v4 = a3 & 3;
        if a3 < 4 {
            v7 = 1;
            v8 = 0;
        } else {
            v9 = a2 + 136;
            v7 = 1;
            v8 = 0;
            do {
                v10 = v9->field_0;
                v12 = v9->field_-28;
                v14 = v9->field_-50;
                v16 = v9->field_-78;
                v8 += 4;
                v9 = &v9[1].padding_-70[24];
            } while ((a3 & -4) != v8);
        }
        if v4 {
            v17 = 0;
            do {
                v19 = *((16 + a2 + 0x28 * v8 as u64 + v17) as &i64);
            } while ((v17 += 40, ((v4 & 4294967295) << 3 & 4294967295) + (((v4 & 4294967295) << 3 & 4294967295) << 2) != v17));
        }
        v21 = a2 + 24;
        v5 = 1;
        do {
            v22 = a3;
            v23 = v21->field_0;
            if !v23 {
                core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
            }
            v24 = v21->field_-8;
            v26 = v24 * (!(v6 | v23) >> 32 ? (0 CONCAT v6) /m v23 : (0 CONCAT v6) /m v23 & 4294967295);
            v21 = &v21[2].field_0;
        } while (v22 != 1);
    }
    v0 = v6;
    v1 = v5;
    v2 = struct32 {
        field_0: a2
        field_8: a2 + a3 * 40
        field_16: &v0
        field_24: &v1
    };
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, &v2);
    a0->field_18 = a1;
    a0->field_20 = v1 * (!(a1 | v0) >> 32 ? (0 CONCAT a1) /m v0 & 4294967295 & 4294967295 : (0 CONCAT a1) /m v0);
    a0->field_28 = v0;
    a0->field_30 = a4;
    return a0;
}
