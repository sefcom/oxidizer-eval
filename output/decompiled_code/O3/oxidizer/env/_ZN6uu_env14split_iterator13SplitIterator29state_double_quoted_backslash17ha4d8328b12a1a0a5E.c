fn uu_env::split_iterator::SplitIterator::state_double_quoted_backslash(a0: void*, a1: void*, a2: u32) -> u64 {
    let v0: i320;  // [bp-0x40], Other Possible Types: Result<struct40, struct5>
    let v2: i8;  // [bp-0x20]
    let v4: i32;  // eax
    let v5: Option<struct17>;  // rax
    let v6: i64;  // rdx
    let v7: i32;  // ecx
    let v8: i128;  // xmm0
    let v9: i128;  // xmm0

    v4 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
    if v4 > 91 {
        if v4 == 92 {
            goto LABEL_4da2d4;
        }
        if v4 == 99 {
            v5 = *((a1 + 56) as &i64);
            *(a0 as &i32) = 2;
        } else {
            if !(v4 == 0x110000) {
                goto LABEL_4da31a;
            }
            v5 = *((a1 + 56) as &i64);
            *(a0 as &i64) = 0x2200000000;
        }
        *((a0 + 8) as &Option<struct17>) = v5;
        return v5;
    } else {
        if v4 == 10 {
            v5 = uu_env::split_iterator::SplitIterator::skip_one(a1);
            if v0 != 8 {
                v5 = v2;
                v8 = v0;
                return struct40 {
                    field_0: v8
                    field_16: v1
                    field_32: v5
                };
            }
        } else if !(v4 != 34) || !(v4 != 36) {
LABEL_4da2d4:
            v5 = uu_env::split_iterator::SplitIterator::take_one(a1, v6);
            if v0 != 8 {
                vvar_170{reg 224} = v0;
                return struct40 {
                    field_0: v8
                    field_16: v1
                    field_32: v2
                };
            }
        } else {
LABEL_4da31a:
            v0 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1, v4);
            v7 = v0;
            v5 = *((&v0 as &char + 4) as &i8);
            if v7 != 8 {
                v9 = *((&v0 as &char + 5) as &i128);
                return struct41 {
                    field_0: v7
                    field_4: v5 as u8
                    field_5: v9
                    field_21: *((&v0 as &char + 21) as &i128)
                    field_36: <UNKNOWN>
                };
            } else if !v5 as u8 {
                v5 = *((a1 + 56) as &i64);
                return struct16 {
                    field_0: 3
                    field_4: v4
                    field_8: v5
                };
            }
        }
        return struct4 {
            field_0: 8
        };
    }
}
