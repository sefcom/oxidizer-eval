fn uu_tail::chunks::LinesChunk::fill(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct24;  // [sp-0x30], Other Possible Types: i192
    let v2: i64;  // rax
    let v3: i64;  // r15
    let v4: i64;  // rsi
    let v5: i64;  // rdx

    v0 = uu_tail::chunks::BytesChunk::fill(a1, a2);
    if v0 {
        *((a0 + 8) as &i128) = *((&v0 as &char + 8) as &i128);
        v2 = 1;
    } else {
        if !*((&v0 as &char + 8) as &i64) {
            *((a1 + 8200) as &i64) = 0;
            *((a0 + 8) as &i64) = 0;
        } else {
            v3 = *((&v0 as &char + 16) as &i64);
            *((a1 + 8200) as &long long) = uu_tail::chunks::LinesChunk::count_lines(a1, v4, v5);
            *((a0 + 8) as &i64) = 1;
            *((a0 + 16) as &i64) = v3;
        }
        v2 = 0;
    }
    return struct8 {
        field_0: v2
    };
}
