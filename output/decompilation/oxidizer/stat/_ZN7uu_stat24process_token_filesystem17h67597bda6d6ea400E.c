fn uu_stat::process_token_filesystem(a0: void*, a1: i64, a2: void*, a3: u32) -> int {
    let v1: alloc::string::String;  // [bp-0x78], Other Possible Types: u192
    let v4: &str;  // [bp-0x58], Other Possible Types: Result<struct24, struct24>
    let v9: u64;  // rcx
    let v10: u64;  // r9
    let v11: u64;  // rsi
    let v12: u64;  // r8
    let v13: core::option::Option<&str>;  // rdx

    v10 = *(a0 as &i64) - 3;
    if !v10 {
        std::io::stdio::_print(&v4 as u64);
        return;
    } else if v10 != 1 {
        v11 = a0[32] as i32 * 0x100000000 | a0[28] as i32;
        v12 = a0[8] as i64;
        v13 = a0[16] as i64;
        match (a0[24] as i32) {
            84 => {
                v4 = uucore::features::fsext::pretty_fstype(*(a1 as &i64));
                v1 = <alloc::string::String as core::convert::From<alloc::borrow::Cow<str>>>::from(&v4);
                break;
            }
            110 => {
                v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a2, a3);
                break;
            }
        }
        uu_stat::print_it(&v1, v11, v13, v9, v12);
        return;
    } else {
        uu_stat::write_raw_byte(a0[8] as i32);
        return;
    }
}
