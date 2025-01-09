fn uu_env::split_iterator::SplitIterator::state_double_quoted(a0: &struct40, a1: void*) -> u64 {
    let v0: Option<struct17>;  // [sp-0x40], Other Possible Types: struct21, struct41
    let v2: i32;  // eax
    let v5: struct21;  // rax

    loop {
        v2 = uu_env::split_iterator::SplitIterator::get_current_char(a1) as i32;
        if v2 > 91 {
            if v2 != 92 {
                return struct16 {
                    field_0: 0x2200000000
                    field_8: v3
                };
            }
            v0 = uu_env::split_iterator::SplitIterator::skip_one(a1);
            return struct40 {
                field_0: v4
                field_16: *((&v0 as &char + 16) as &i128)
                field_32: v3
            };
            v0 = uu_env::split_iterator::SplitIterator::state_double_quoted_backslash(a1);
        } else {
            switch (v2) {
            case 36:
                v0 = uu_env::split_iterator::SplitIterator::substitute_variable(a1);
            case 34:
                v5 = uu_env::split_iterator::SplitIterator::skip_one(a1);
                return struct40 {
                    field_0: v4
                    field_16: *((&v0 as &char + 16) as &i128)
                    field_32: v3
                };
            default:
                v0 = uu_env::split_iterator::SplitIterator::take_one(a1) as u136;
                break;
            }
        }
        return struct40 {
            field_0: v4
            field_16: *((&v0 as &char + 16) as &i128)
            field_32: v3
        };
    }
}
