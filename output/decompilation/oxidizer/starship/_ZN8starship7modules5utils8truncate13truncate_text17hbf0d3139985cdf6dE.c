fn starship::modules::utils::truncate::truncate_text(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: struct16;  // [bp-0x80]
    let v1: struct24;  // [bp-0x78], Other Possible Types: u8
    let v2: u192;  // [bp-0x78]
    let v3: struct24;  // [bp-0x68]
    let v4: struct24;  // [bp-0x60]
    let v5: struct24;  // [bp-0x58]
    let v6: struct24;  // [bp-0x48]

    if !a3 {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, a1, a2);
        return;
    }
    v0 = &v1;
    v1 = starship::modules::utils::truncate::get_graphemes(a1, a2, a3);
    if a3 >= starship::modules::utils::truncate::graphemes_len(a1, a2) {
        return struct24 {
            field_0: v1.field_0
            field_16: v3
        };
    }
    v4 = starship::modules::utils::truncate::get_graphemes(a4, a5, 1);
    v6 = v2;
    <alloc::string::String as core::ops::arith::Add<&str>>::add(a0, &v6, v5 as u32);
    return;
}
