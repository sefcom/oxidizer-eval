fn uu_fmt::parasplit::WordSplit::analyze_tabs(a0: &struct40, a1: void*, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x58]
    let v1: u64;  // [sp-0x48]
    let v2: u64;  // [sp-0x40]
    let v3: void*;  // [sp-0x38]
    let v5: u64;  // rbp
    let v7: void*;  // r12
    let v9: u64;  // rdx
    let v10: u64;  // rcx
    let v11: u64;  // r12

    v1 = a2;
    v2 = a3 + a2;
    v3 = 0;
    v5 = 0;
    loop {
        v7 = 0;
        loop {
            <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next();
            if v9 == 32 {
LABEL_4ba665:
                v7 += 1;
            } else {
                if v9 == 0x110000 {
                    return struct40 {
                        field_0: v5
                        field_8: v0
                        field_16: v7
                        field_24: v6
                        field_32: v8
                    };
                }
                if v9 - 9 < 5 {
                    if !(v9 == 9) {
                        goto LABEL_4ba665;
                    }
                    if v5 {
                        v10 = a1->field_40;
                        v11 = (!(v7 | v10) >> 32 ? ((0 CONCAT v7 as u32) % (v10 & 4294967295) CONCAT (0 CONCAT v7 as u32) / (v10 & 4294967295)) & 4294967295 & 4294967295 : (0 CONCAT v7) % v10 CONCAT (0 CONCAT v7) / v10);
                        v7 = v10 * (v11 + 1);
                        v5 = 1;
                    } else {
                        v5 = 1;
                        v0 = v7;
                        break;
                    }
                } else {
                    if !(v9 >= 128) || !(core::unicode::unicode_data::white_space::lookup(v9 & 4294967295) as i32) {
                        return struct40 {
                            field_0: v5
                            field_8: v0
                            field_16: v7
                            field_24: v6
                            field_32: v8
                        };
                    }
                    goto LABEL_4ba665;
                }
            }
        }
    }
}
