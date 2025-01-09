fn uu_tail::chunks::LinesChunk::fill(a0: &Result<struct8, struct16>, a1: &struct8, a2: u32) -> u64 {
    let v0: struct24;  // [sp-0x30], Other Possible Types: i192
    let v3: i64;  // r15

    v0 = uu_tail::chunks::BytesChunk::fill(a1, a2);
    if v0 {
        *((a0 + 8) as &i128) = *((&v0 as &char + 8) as &i128);
    } else if !*((&v0 as &char + 8) as &i64) {
        *((a1 + 8200) as &i64) = 0;
        *((a0 + 8) as &i64) = 0;
    } else {
        v3 = *((&v0 as &char + 16) as &i64);
        *((a1 + 8200) as &long long) = uu_tail::chunks::LinesChunk::count_lines(a1);
        *((a0 + 8) as &i64) = 1;
        *((a0 + 16) as &i64) = v3;
    }
    return struct8 {
        field_0: v2
    };
}
