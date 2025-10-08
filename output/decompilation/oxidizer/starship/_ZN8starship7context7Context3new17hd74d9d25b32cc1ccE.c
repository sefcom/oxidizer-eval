fn starship::context::Context::new(a0: u64, a1: i64, a2: u32) -> long long {
    let v0: Option<struct24>;  // [bp-0x158]
    let v1: iNone;  // [bp-0x158]
    let v2: struct16;  // [bp-0x158]
    let v3: struct40;  // [bp-0x138], Other Possible Types: u128
    let v4: struct24;  // [bp-0x130]
    let v5: struct24;  // [bp-0x128]
    let v6: iNone;  // [bp-0x118]
    let v8: Option<struct24>;  // [bp-0xf8]
    let v10: struct24;  // [bp-0xe0]
    let v11: struct24;  // [bp-0xe0]
    let v12: struct24;  // [bp-0xe0]
    let v13: struct24;  // [bp-0xe0]
    let v14: Option<struct24>;  // [bp-0xe0]
    let v16: struct168;  // eax
    let v17: u64;  // r12
    let v18: iNone;  // xmm0

    v16 = starship::context::Context::get_shell();
    if !((((0 ^ *((a1 + 88) as &i64)) & (0 ^ -(*((a1 + 88) as &i64)))) >> 63) as char) {
        v12 = <&str as alloc::string::SpecToString>::spec_to_string(*((a1 + 96) as &i64), *((a1 + 104) as &i64));
    }
    core::option::Option<T>::or_else(&v13, &v2);
    v0 = core::option::Option<T>::or_else(&v13);
    v17 = a1 + 112;
    v14 = core::option::Option<T>::or_else(&v0, v17);
    match v14 {
        None => {
            v3 = 0;
            v4 = 1;
            v5 = 0;
            if *(v17 as &i64) != 0x8000000000000000 {
                goto LABEL_b6d007;
            }
        },
        Some(_) => {
            v5 = *((&v14 as &char + 16) as &i64);
            v3 = v14 as i128 as u128;
            if *(v17 as &i64) != 0x8000000000000000 {
LABEL_b6d007:
                v10 = <&str as alloc::string::SpecToString>::spec_to_string(*((a1 + 120) as &i64), *((a1 + 128) as &i64));
            }
        },
    }
    v8 = core::option::Option<T>::or_else(&v1);
    if let None = v8 {
        v11 = <&str as alloc::string::SpecToString>::spec_to_string(v4, v5);
    }
    v6 = v18;
    memcpy(&v11, a1, 176);
    starship::context::Context::new_with_shell_and_path(a0, &v11, v16 as u64, a2, &v3, &v6);
    return a0;
}
