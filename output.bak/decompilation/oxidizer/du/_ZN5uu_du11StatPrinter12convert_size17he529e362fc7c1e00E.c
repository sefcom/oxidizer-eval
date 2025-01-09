fn uu_du::StatPrinter::convert_size(a0: &struct24, a1: void*, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x10]
    let v1: u64;  // [sp-0x8]
    let v3: u64;  // rax
    let v4: &u8;  // rsi
    let v5: u64;  // rcx
    let v6: u64;  // rax
    let v7: u64;  // rax
    let v8: u64;  // rdx
    let v9: u32;  // eax

    v0 = a2;
    v3 = a1->field_20;
    if !v3 {
        return uucore::features::format::human::human_readable(a0, a2, 2);
    } else if v3 == 1 {
        return uucore::features::format::human::human_readable(a0, a2, 1);
    } else {
        if a1->field_49 {
            v4 = &v0;
        } else {
            v5 = a1->field_28;
            if !v5 {
                core::panicking::panic_const::panic_const_div_by_zero("src/uu/du/src/du.rs"); /* do not return */
            }
            if (a2 | v5) >> 32 {
                v6 = a2;
                v7 = (0 CONCAT v6) % v5 CONCAT (0 CONCAT v6) / v5;
                v8 = ((0 CONCAT v6) % v5 CONCAT (0 CONCAT v6) / v5) >> 64;
            } else {
                v9 = a2;
                v7 = ((0 CONCAT v9) % (v5 & 4294967295) CONCAT (0 CONCAT v9) / (v5 & 4294967295)) & 4294967295;
                v8 = ((0 CONCAT v9) % (v5 & 4294967295) CONCAT (0 CONCAT v9) / (v5 & 4294967295)) >> 32 & 4294967295;
            }
            v1 = v7 - -1 - (v8 < 1);
            v4 = &v1;
        }
        return <T as alloc::string::ToString>::to_string(a0, v4);
    }
}
