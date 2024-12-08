fn uu_test::path() -> u32 {
    let v0: i1408;  // [sp-0x188], Other Possible Types: Result<struct176, struct16>
    let v1: i128;  // [sp-0xd8]
    let v2: i128;  // [sp-0xc8]
    let v3: i128;  // [sp-0xb8]
    let v4: i64;  // [sp-0xa8]
    let v5: i32;  // [sp-0xa0]
    let v6: i32;  // [sp-0x9c]
    let v7: i32;  // [sp-0x98]
    let v8: i64;  // [sp-0x94]
    let v9: i32;  // [sp-0x8c]
    let v10: i64;  // [sp-0x88]
    let v11: i128;  // [sp-0x80]
    let v12: i128;  // [sp-0x70]
    let v13: i128;  // [sp-0x60]
    let v14: i128;  // [sp-0x50]
    let v15: i128;  // [sp-0x40]
    let v16: i64;  // [sp-0x30]
    let v18: i32;  // edx
    let v19: i64;  // rdi
    let v20: i64;  // rsi
    let v21: i64;  // rdi
    let v22: i64;  // rsi

    if v18 != 8 {
        v0 = std::fs::metadata(v21, v22);
        if v0 != 2 {
            v1 = v0;
            v2 = *((&v0 as &char + 16) as &i128);
            v3 = *((&v0 as &char + 32) as &i128);
            v4 = *((&v0 as &char + 48) as &i64);
            v5 = *((&v0 as &char + 56) as &i32);
            v6 = *((&v0 as &char + 60) as &i32);
            v7 = *((&v0 as &char + 64) as &i32);
            v8 = *((&v0 as &char + 68) as &i64);
            v9 = *((&v0 as &char + 76) as &i32);
            v10 = *((&v0 as &char + 80) as &i64);
            v16 = *((&v0 as &char + 168) as &i64);
            v15 = *((&v0 as &char + 152) as &i128);
            v14 = *((&v0 as &char + 136) as &i128);
            v13 = *((&v0 as &char + 120) as &i128);
            v12 = *((&v0 as &char + 104) as &i128);
            v11 = *((&v0 as &char + 88) as &i128);
            goto *((4309976 + v18 * 4) as &i32) + 4309976;
        }
    } else {
        v0 = std::fs::symlink_metadata(v19, v20);
        if v0 != 2 {
            vvar_123{stack -216} = v0;
            vvar_124{stack -200} = *((&v0 as &char + 16) as &i128);
            vvar_125{stack -184} = *((&v0 as &char + 32) as &i128);
            vvar_126{stack -168} = *((&v0 as &char + 48) as &i64);
            vvar_127{stack -160} = *((&v0 as &char + 56) as &i32);
            vvar_128{stack -156} = *((&v0 as &char + 60) as &i32);
            vvar_129{stack -152} = *((&v0 as &char + 64) as &i32);
            vvar_130{stack -148} = *((&v0 as &char + 68) as &i64);
            vvar_131{stack -140} = *((&v0 as &char + 76) as &i32);
            vvar_132{stack -136} = *((&v0 as &char + 80) as &i64);
            vvar_133{stack -48} = *((&v0 as &char + 168) as &i64);
            vvar_134{stack -64} = *((&v0 as &char + 152) as &i128);
            vvar_135{stack -80} = *((&v0 as &char + 136) as &i128);
            vvar_136{stack -96} = *((&v0 as &char + 120) as &i128);
            vvar_137{stack -112} = *((&v0 as &char + 104) as &i128);
            vvar_138{stack -128} = *((&v0 as &char + 88) as &i128);
            goto *((4309976 + v18 * 4) as &i32) + 4309976;
        }
    }
    return;
}
