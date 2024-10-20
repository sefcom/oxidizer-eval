fn uu_df::filesystem::Filesystem::new(a0: void*, a1: void*, a2: void*) -> u64 {
    let v0: i64;  // [sp-0x140]
    let v1: i128;  // [sp-0x138]
    let v2: i128;  // [sp-0x128]
    let v3: i192;  // [bp-0x118]
    let v4: i192;  // [sp-0xf8], Other Possible Types: struct24
    let v5: Enum;  // [sp-0xe0], Other Possible Types: i960
    let v6: i128;  // [sp-0x48]
    let v7: i64;  // [sp-0x38]
    let v11: i64;  // rax
    let v12: i64;  // r13
    let v13: i64;  // rbp

    v4 = <alloc::string::String as core::clone::Clone>::clone(v11);
    v3 = v4;
    v5 = uucore::features::fsext::statfs(&v3);
    if v5 {
        *(a0 as &i64) = 0x8000000000000000;
        return a0;
    }
    v12 = *((&v5 as &char + 32) as &i64);
    v0 = *((&v5 as &char + 56) as &i64);
    v1 = *((&v5 as &char + 16) as &i128);
    v2 = *((&v5 as &char + 40) as &i128);
    v13 = *((&v5 as &char + 40) as &i64);
    v7 = *((a2 + 16) as &i64);
    v6 = *(a2 as &i128);
    memcpy(&v5, a1, 152);
    memcpy(a0, &v5, 176);
    *((a0 + 176) as &i128) = v1;
    *((a0 + 192) as &i64) = v12;
    *((a0 + 200) as &i128) = v2;
    *((a0 + 216) as &i64) = v0;
    *((a0 + 224) as &i8) = v13 >> 63;
    return a0;
}
