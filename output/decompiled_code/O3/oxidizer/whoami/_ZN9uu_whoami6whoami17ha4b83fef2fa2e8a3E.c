fn uu_whoami::whoami(a0: i64) -> u64 {
    let v0: i64;  // [sp-0xd0]
    let v1: i64;  // [sp-0xc8]
    let v2: i64;  // [sp-0xc0]
    let v3: i64;  // [sp-0xb8]
    let v4: i64;  // [sp-0xb0], Other Possible Types: Enum
    let v5: i64;  // [sp-0xa8]
    let v6: i64;  // [sp-0xa0]
    let v7: i64;  // [sp-0x98]
    let v9: i64;  // rbp
    let v10: i64;  // r14
    let v11: i64;  // rax
    let v13: i64;  // rax
    let v14: i128;  // xmm0

    v4 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(geteuid() as u64);
    v9 = v4;
    v10 = v5;
    if v9 == 0x8000000000000000 {
        v11 = __rust_alloc(22, 1);
        *(v11 as &i128) = 153469376506670727247652608416930160998;
        *((v11 + 14) as &i64) = 7308604897285731189;
        v4 = 22;
        v5 = v11;
        v6 = 22;
        v7 = v10;
        v13 = __rust_alloc(32, 8);
        v14 = v4;
        *((v13 + 16) as &i64) = v6;
        *(v13 as &i128) = v14;
        *((a0 + 8) as &i64) = v13;
        *((a0 + 16) as &&i64) = &g_4d71d8;
        *(a0 as &i64) = 0x8000000000000000;
        return a0;
    }
    v3 = v6;
    v1 = *((&v4 as &char + 80) as &i64);
    v2 = *((&v4 as &char + 104) as &i64);
    if v7 << 1 {
        v0 = *((&v4 as &char + 56) as &i64);
    }
    *(a0 as &i64) = v9;
    *((a0 + 8) as &i64) = v10;
    *((a0 + 16) as &i64) = v3;
    return a0;
}
