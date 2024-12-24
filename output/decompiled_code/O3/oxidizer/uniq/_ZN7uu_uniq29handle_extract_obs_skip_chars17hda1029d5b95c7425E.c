fn uu_uniq::handle_extract_obs_skip_chars(a0: &u64, a1: u32, a2: u32, a3: &u64) -> u64 {
    let v0: i64;  // [sp-0x98], Other Possible Types: struct16
    let v1: i64;  // [sp-0x90]
    let v2: i64;  // [sp-0x88]
    let v3: struct24;  // [sp-0x80], Other Possible Types: i192
    let v4: i128;  // [sp-0x68]
    let v5: i64;  // [sp-0x58]
    let v6: i64;  // [sp-0x48]
    let v7: i64;  // [sp-0x40]
    let v9: i64;  // r12
    let v10: i32;  // edx
    let v11: i64;  // rax

    v9 = a1;
    v0 = 0;
    v1 = 4;
    v2 = 0;
    v6 = a1;
    v7 = a1 + a2;
    core::str::validations::next_code_point(&v6);
    v4 = v6;
    loop {
        if !core::str::validations::next_code_point(&v4) as i32 {
            v11 = v2;
            if !v11 {
                v3 = std::sys::os_str::bytes::Slice::to_owned(v9, a2);
            } else {
                v3 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v0.field_8, v0.field_8 + v11 * 4);
                v5 = *((&v3 as &char + 16) as &i64);
                v4 = v3;
                *((a3 + 16) as &i64) = v5;
                *(a3 as &i128) = v4;
                *(a0 as &i64) = 0x8000000000000000;
                break;
            }
            goto LABEL_4bdc13;
        } else if v10 - 48 < 10 {
            v0 = alloc::vec::Vec<T,A>::push(v10);
        } else {
            *(a3 as &i64) = 0x8000000000000000;
            v3 = std::sys::os_str::bytes::Slice::to_owned(v9, a2);
LABEL_4bdc13:
            *((a0 + 16) as &i64) = *((&v3 as &char + 16) as &i64);
            *(a0 as &i192) = v3;
            break;
        }
    }
    return;
}
