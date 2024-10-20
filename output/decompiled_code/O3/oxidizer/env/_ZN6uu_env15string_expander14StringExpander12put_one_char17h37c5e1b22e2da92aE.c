fn uu_env::string_expander::StringExpander::put_one_char(a0: &u64, a1: u64) -> u64 {
    let v0: u64;  // [bp-0x28]
    let v1: u8;  // [bp-0x24], Other Possible Types: i8
    let v2: i8;  // [sp-0x23], Other Possible Types: u8
    let v3: u8;  // [sp-0x22], Other Possible Types: i8
    let v4: u8;  // [sp-0x21]
    let v6: u64;  // rax
    let v7: u64;  // r14
    let v8: u32;  // eax
    let v9: u64;  // rax
    let v10: u64;  // r12

    v0 = v6;
    v1 = 0;
    if a1 < 128 {
        v1 = a1;
        v7 = 1;
    } else {
        v8 = a1;
        if a1 < 0x800 {
            v1 = v8 >> 6 | 192;
            v2 = a1 & 63 | 128;
            v7 = 2;
        } else if a1 < 0x10000 {
            v1 = v8 >> 12 | 224;
            v2 = (a1 & 4294967295 & 4294967295) >> 6 & 4294967295 & 63 | 128;
            v3 = a1 & 63 | 128;
            v7 = 3;
        } else {
            v1 = v8 >> 18 & 7 | 240;
            v2 = (a1 & 4294967295 & 4294967295) >> 12 & 4294967295 & 63 | 128;
            v3 = (a1 & 4294967295 & 4294967295) >> 6 & 4294967295 & 63 | 128;
            v4 = a1 & 63 | 128;
            v7 = 4;
        }
    }
    v9 = __rust_alloc(v7, 1);
    memcpy(v9, &v1, v7);
    v10 = a0[2];
    if *(a0) - v10 < v7 {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a0, v10, v7);
        v10 = a0[2];
    }
    memcpy(a0[1] + v10, v9, v7);
    a0[2] = v10 + v7;
}
