fn uu_paste::parse_delimiters::{{closure}}(a0: &u64, a1: void*, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // r15
    let v4: u32;  // eax
    let v5: u64;  // rax
    let v6: &u64;  // r14
    let v7: &u64;  // rax
    let v8: &u64;  // rcx

    v0 = v2;
    if a2 < 128 {
        *(a0) = a2;
        v3 = 1;
    } else {
        v4 = a2;
        if a2 < 0x800 {
            *(a0) = v4 >> 6 | 192;
            *((a0 as &char + 1) as &u8) = a2 & 63 | 128;
            v3 = 2;
        } else if a2 < 0x10000 {
            *(a0) = v4 >> 12 | 224;
            *((a0 as &char + 1) as &u8) = (a2 & 4294967295 & 4294967295) >> 6 & 4294967295 & 63 | 128;
            *((a0 as &char + 2) as &u8) = a2 & 63 | 128;
            v3 = 3;
        } else {
            *(a0) = v4 >> 18 & 7 | 240;
            *((a0 as &char + 1) as &u8) = (a2 & 4294967295 & 4294967295) >> 12 & 4294967295 & 63 | 128;
            *((a0 as &char + 2) as &u8) = (a2 & 4294967295 & 4294967295) >> 6 & 4294967295 & 63 | 128;
            *((a0 as &char + 3) as &u8) = a2 & 63 | 128;
            v3 = 4;
        }
    }
    v5 = __rust_alloc(v3, 1);
    memcpy(v5, a0, v3);
    v6 = a1[2];
    if v6 == *(a1) {
        alloc::raw_vec::RawVec<T,A>::grow_one(a1);
    }
    v7 = a1[1];
    v8 = v6 * 16;
    *((v7 + v8) as &u64) = v5;
    *((v7 + v8 + 8) as &u64) = v3;
    a1[2] = v6 as &char + 1;
    return v7;
}
