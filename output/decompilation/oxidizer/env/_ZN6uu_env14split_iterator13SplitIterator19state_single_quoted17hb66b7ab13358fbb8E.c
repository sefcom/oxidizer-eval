fn uu_env::split_iterator::SplitIterator::state_single_quoted(a1: i64) -> : struct40 {
    let a0: i64;  // rsi
    let v0: struct8;  // [bp-0x40]
    let v1: struct40;  // [bp-0x40]
    let v2: u128;  // [bp-0x30]
    let v5: u64;  // rax
    let v6: i64;  // rdi
    let v7: i64;  // rdi
    let v8: i64;  // rdi

    loop {
        match (uu_env::split_iterator::SplitIterator::get_current_char(a0 as u32) as i32) {
            92 => {
                uu_env::split_iterator::SplitIterator::skip_one(a0, a1);
                if v0.field_0 as i32 != 8 {
                    *((v8 + 32) as &u64) = v1.field_32;
                    *((v8 + 16) as &u128) = v2;
                    *(v8 as &struct8) = v0;
                    return;
                }
                v1 = uu_env::split_iterator::SplitIterator::split_single_quoted_backslash(a0);
            }
            39 => {
                uu_env::split_iterator::SplitIterator::skip_one(a0, a1);
                break;
            }
            1114112 => {
                v5 = *((a0 + 56) as &i64);
                *(v6 as &i64) = 0x2700000000;
                *((v6 + 8) as &u64) = v5;
                return;
            }
            _ => {
                uu_env::split_iterator::SplitIterator::take_one(a0, a1);
            }
        }
        if v0.field_0 as i32 != 8 {
            *((v8 + 32) as &u64) = v1.field_32;
            *((v8 + 16) as &u128) = v2;
            *(v8 as &struct8) = v0;
            return;
        }
    }
    if v0.field_0 as i32 != 8 {
        *((v8 + 32) as &u64) = v1.field_32;
        *((v8 + 16) as &u128) = v2;
        *(v8 as &struct8) = v0;
        return;
    }
    *(v7 as &i32) = 8;
    return;
}
