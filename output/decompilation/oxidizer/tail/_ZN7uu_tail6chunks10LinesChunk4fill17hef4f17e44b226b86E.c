fn uu_tail::chunks::LinesChunk::fill(a0: &Result<struct8, struct16>, a1: &struct8, a2: u32) -> u64 {
    let v0: struct24;  // [sp-0x30]
    let v3: i64;  // r15

    v0 = uu_tail::chunks::BytesChunk::fill(a1, a2);
    if v0.field_0 {
        *((a0 + 8) as &i128) = *(&v0.field_8 as &i128);
    } else if !v0.field_8 {
        *((a1 + 8200) as &i64) = 0;
        *((a0 + 8) as &i64) = 0;
    } else {
        v3 = v0.field_16;
        *((a1 + 8200) as &long long) = uu_tail::chunks::LinesChunk::count_lines(a1);
        *((a0 + 8) as &i64) = 1;
        *((a0 + 16) as &unsigned long) = v3;
    }
    return struct8 {
        field_0: v2
    };
}
