fn uu_uniq::handle_extract_obs_skip_chars(a0: &Option<struct24>, a1: u32, a2: u32, a3: &Option<struct24>) -> u64 {
    let v0: struct16;  // [sp-0x98], Other Possible Types: unsigned long
    let v1: i64;  // [sp-0x90]
    let v2: i64;  // [sp-0x88]
    let v3: struct24;  // [sp-0x80]
    let v4: iNone;  // [sp-0x68]
    let v5: i64;  // [sp-0x58]
    let v6: i64;  // [sp-0x48]
    let v7: i64;  // [sp-0x40]
    let v9: i32;  // edx
    let v10: i64;  // rax

    v0 = 0;
    v1 = 4;
    v2 = 0;
    v6 = a1;
    v7 = a1 + a2;
    core::str::validations::next_code_point(&v6);
    for (v4 = *(&v6 as &i128); core::str::validations::next_code_point(&v4) as i32; v0 = alloc::vec::Vec<T,A>::push(v9 as u64)) {
        if v9 - 48 >= 10 {
            *(a3 as &i64) = 0x8000000000000000;
            v3 = std::sys::os_str::bytes::Slice::to_owned(a1, a2);
            return v3;
        }
    }
    v10 = v2;
    if v10 {
        v3 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v1, v1 + v10 * 4);
        *((a3 + 16) as &unsigned long) = v5;
        *(a3 as void*) = v4;
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v3 = std::sys::os_str::bytes::Slice::to_owned(a1, a2);
    return v3;
}
