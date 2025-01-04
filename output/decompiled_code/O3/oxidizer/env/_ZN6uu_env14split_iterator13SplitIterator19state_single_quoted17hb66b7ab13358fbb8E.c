fn uu_env::split_iterator::SplitIterator::state_single_quoted(a0: &struct40, a1: void*, a2: u32) -> u64 {
    let v0: i320;  // [sp-0x40], Other Possible Types: struct21, Option<struct17>, struct40
    let v2: i32;  // eax
    let v3: i64;  // rdx
    let v4: struct21;  // rax

    loop {
        uu_env::split_iterator::SplitIterator::get_current_char(a1);
        switch (v2) {
        case 92:
            v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
            if v0 != 8 {
                vvar_130{reg 224} = v0;
                return struct40 {
                    field_0: v5
                    field_16: *((&v0 as &char + 16) as &i128)
                    field_32: *((&v0 as &char + 32) as &i64)
                };
            }
            v0 = uu_env::split_iterator::SplitIterator::split_single_quoted_backslash(a1, v3);
            break;
        case 39:
            v4 = uu_env::split_iterator::SplitIterator::skip_one(a1);
            if v0 != 8 {
                vvar_135{reg 224} = v0;
                return struct40 {
                    field_0: v5
                    field_16: *((&v0 as &char + 16) as &i128)
                    field_32: *((&v0 as &char + 32) as &i64)
                };
            }
            return struct4 {
                field_0: 8
            };
        case 1114112:
            v4 = *((a1 + 56) as &i64);
            return struct16 {
                field_0: 0x2700000000
                field_8: v4
            };
        default:
            v0 = uu_env::split_iterator::SplitIterator::take_one(a1, v3);
            break;
        }
        if v0 != 8 {
            vvar_140{reg 224} = v0;
            return struct40 {
                field_0: v5
                field_16: *((&v0 as &char + 16) as &i128)
                field_32: *((&v0 as &char + 32) as &i64)
            };
        }
    }
}
