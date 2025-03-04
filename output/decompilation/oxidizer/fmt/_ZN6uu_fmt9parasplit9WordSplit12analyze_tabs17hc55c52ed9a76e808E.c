fn uu_fmt::parasplit::WordSplit::analyze_tabs(a0: &struct40, a1: void*, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x58]
    let v1: struct24;  // [bp-0x48]
    let v3: u64;  // rbp
    let v5: void*;  // r12
    let v7: u64;  // rdx
    let v8: u64;  // rcx
    let v9: u64;  // r12

    v1 = struct24 {
        field_0: a2
        field_8: a3 + a2
        field_16: 0
    };
    v3 = 0;
    loop {
        v5 = 0;
        loop {
            <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v1);
            if v7 == 32 {
LABEL_4ba665:
                v5 += 1;
            } else {
                if v7 == 0x110000 {
                    return struct40 {
                        field_0: v3
                        field_8: v0
                        field_16: v5
                        field_24: v4
                        field_32: v6
                    };
                }
                if v7 - 9 < 5 {
                    if !(v7 == 9) {
                        goto LABEL_4ba665;
                    }
                    if v3 {
                        v8 = a1->field_40;
                        v9 = (!(v5 | v8) >> 32 ? ((0 CONCAT v5 as u32) % (v8 & 4294967295) CONCAT (0 CONCAT v5 as u32) / (v8 & 4294967295)) & 4294967295 & 4294967295 : (0 CONCAT v5) % v8 CONCAT (0 CONCAT v5) / v8);
                        v5 = v8 * (v9 + 1);
                        v3 = 1;
                    } else {
                        v3 = 1;
                        v0 = v5;
                        break;
                    }
                } else {
                    if !(v7 >= 128) || !(core::unicode::unicode_data::white_space::lookup(v7 & 4294967295) as i32) {
                        return struct40 {
                            field_0: v3
                            field_8: v0
                            field_16: v5
                            field_24: v4
                            field_32: v6
                        };
                    }
                    goto LABEL_4ba665;
                }
            }
        }
    }
}
