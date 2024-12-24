fn uu_truncate::truncate(a0: u8, a1: u32, a2: void*, a3: void*, a4: u32, a5: u32) -> u64 {
    let v0: u32;  // [sp-0x58]
    let v1: u128;  // [sp-0x48]
    let v2: u64;  // [sp-0x38]
    let v3: u128;  // [sp-0x28]
    let v4: u64;  // [sp-0x18]
    let v6: u8;  // dil
    let v7: u64;  // rsi
    let v8: u64;  // rax

    v6 = a0 ^ 1;
    v7 = *(a3);
    if *(a2) == 0x8000000000000000 {
        if v7 == 0x8000000000000000 {
            core::panicking::panic(); /* do not return */
        }
        v1 = *(&a3 as &i128);
        v2 = a3[2];
        v8 = uu_truncate::truncate_size_only(*((&v1 as &char + 8) as &i64), a3[2], a4, a5, v6);
    } else if v7 == 0x8000000000000000 {
        v1 = *(&a2 as &i128);
        v2 = a2[2];
        v8 = uu_truncate::truncate_reference_file_only(*((&v1 as &char + 8) as &i64), a2[2], a4, a5, v6);
    } else {
        v4 = a2[2];
        v3 = *(&a2 as &i128);
        v1 = *(&a3 as &i128);
        v2 = a3[2];
        v0 = v6;
        v8 = uu_truncate::truncate_reference_and_size(*((&v3 as &char + 8) as &i64), a2[2], *((&v1 as &char + 8) as &i64), a3[2], a4, a5);
        return v8;
    }
    return v8;
}
