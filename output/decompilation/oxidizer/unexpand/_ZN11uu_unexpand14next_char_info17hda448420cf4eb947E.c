fn uu_unexpand::next_char_info(a0: &struct17, a1: u32, a2: &u8, a3: u32, a4: &u8) -> u64 {
    let v0: i64;  // [sp-0x40]
    let v1: i64;  // [sp-0x38]
    let v2: i192;  // [sp-0x30], Other Possible Types: Result<struct16, struct10>
    let v4: i64;  // r14
    let v5: i32;  // ecx
    let v6: i64;  // rax
    let v7: i64;  // rdx

    if !a1 {
        if a4 < a3 {
            match (v5) {
                8 => {
                    break;
                }
                9 => {
                    break;
                }
                32 => {
                    break;
                }
                _ => {
                    goto LABEL_4b2aa1;
                }
            }
        }
LABEL_4b2aa1:
    } else {
        v4 = *((a2 + a4) as &i8) < 0;
        if v4 + a4 + 1 > a3 {
            goto LABEL_4b2aa1;
        } else {
            v2 = core::str::converts::from_utf8(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a4, v4 + a4 + 1, a2, a3, "src/uu/unexpand/src/unexpand.rs"), v7);
            if !v2 {
                v0 = *((&v2 as &char + 8) as &i64);
                v1 = *((&v2 as &char + 16) as &i64) + v0;
                if core::str::validations::next_code_point(&v0) as i32 {
                    match (v7 as u32) {
                        8 => {
                            break;
                        }
                        9 => {
                            break;
                        }
                        32 => {
                            break;
                        }
                        _ => {
                            v6 = (v7 as u32 < 127 ? 32 <= v7 as u32 : (v7 as u32 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v7 as u32)));
                            break;
                        }
                    }
                }
            }
        }
    }
    return struct17 {
        field_0: v6
        field_8: 3
        field_16: <UNKNOWN>
    };
}
