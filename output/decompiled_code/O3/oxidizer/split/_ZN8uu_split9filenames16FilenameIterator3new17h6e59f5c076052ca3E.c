fn uu_split::filenames::FilenameIterator::new(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: Enum;  // [sp-0x48], Other Possible Types: i200
    let v2: i64;  // rcx
    let v3: i64;  // rcx
    let v4: i64;  // rax
    let v5: i64;  // r14
    let v6: i64;  // r9
    let v7: i64;  // rax
    let v8: i64;  // r8
    let v9: i128;  // xmm0
    let v10: i64;  // rax

    v2 = *((a3 + 41) as &i8);
    v3 = v2 | -0x100 | (v2 & 255) * 8 & 255;
    v4 = 1051162 >> ((v2 & 255) * 8 & 31);
    v5 = 0x8000000000000000;
    if *((a3 + 40) as &i8) {
        v6 = *((a3 + 32) as &i64);
    } else {
        v0 = uu_split::number::FixedWidthNumber::new(v4 & 4294967295, *((a3 + 24) as &i64), *((a3 + 32) as &i64));
        v5 = v0;
        if v5 == 0x8000000000000000 {
            v7 = __rust_alloc(63, 1);
            *((v7 + 47) as &i128) = 138844115831897046795442116742162179432;
            *((v7 + 32) as &i128) = 138842676100815433776566249347259264884;
            *((v7 + 16) as &i128) = 43134542223558339118333170418116227872;
            *(v7 as &i128) = 160054627587737136308144662278914798958;
            v10 = __rust_alloc(32, 8);
            *(v10 as &i64) = 63;
            *((v10 + 8) as &i64) = v7;
            *((v10 + 16) as &i64) = 63;
            *((v10 + 24) as &i32) = 1;
            *((a0 + 8) as &i64) = v10;
            *((a0 + 16) as &&i64) = &g_50c6c8;
            *(a0 as &i64) = 9223372036854775809;
            return a0;
        }
        v6 = *((&v0 as &char + 8) as &i64);
        v4 = *((&v0 as &char + 16) as &i64);
        v3 = v0;
        v8 = v4 >> 8;
    }
    v9 = *((a3 + 8) as &i128);
    *(a0 as &i64) = v5;
    *((a0 + 8) as &i64) = v6;
    *((a0 + 16) as &i8) = v4;
    *((a0 + 17) as &i32) = v8;
    *((a0 + 23) as &i8) = v8 >> 48;
    *((a0 + 21) as &i16) = v8 >> 32;
    *((a0 + 24) as &i64) = v3;
    *((a0 + 32) as &i64) = a1;
    *((a0 + 40) as &i64) = a2;
    *((a0 + 48) as &i128) = v9;
    *((a0 + 64) as &i8) = 1;
    return a0;
}
