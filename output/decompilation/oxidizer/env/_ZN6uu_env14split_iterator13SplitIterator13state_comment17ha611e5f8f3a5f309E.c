fn uu_env::split_iterator::SplitIterator::state_comment(a1: i64) -> : struct40 {
    let a0: u64;  // rsi
    let v0: i8;  // [bp-0x48], Other Possible Types: u128
    let v1: u128;  // [bp-0x38]
    let v2: i8;  // [bp-0x28]
    let v5: i64;  // rdi
    let v6: i64;  // rdi
    let v7: i64;  // rdi

    match (uu_env::split_iterator::SplitIterator::get_current_char(a0) as i32) {
        10 => {
            uu_env::split_iterator::SplitIterator::skip_one(a0, a1);
            goto LABEL_4da334;
        }
        1114112 => {
            *(v5 as &i32) = 6;
            return;
        }
        _ => {
            uu_env::string_parser::StringParser::skip_until_char_or_end(0xa, a1);
            break;
        }
    }
LABEL_4da334:
    if *(&v0 as &i32) != 8 {
        *((v7 + 32) as &i64) = *(&v2 as &i64);
        *((v7 + 16) as &u128) = v1;
        *(v7 as &u128) = v0;
        return;
    }
    *(v6 as &i32) = 8;
    return;
}
