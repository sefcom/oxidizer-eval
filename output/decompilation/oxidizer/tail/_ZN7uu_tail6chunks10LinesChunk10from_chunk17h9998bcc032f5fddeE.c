fn uu_tail::chunks::LinesChunk::from_chunk(a0: i64, a1: i64, a2: u64) -> long long {
    let v0: &str;  // [bp-0x28]
    let v2: &str;  // rax
    let v3: void*;  // r15
    let v4: u8;  // bpl

    v0 = v2;
    v3 = *((a1 + 8200) as &i64) - a2;
    if *((a1 + 8200) as &i64) < a2 {
        v4 = *((a1 + 8208) as &i8);
        v3 = 0;
        memset(a0, 0, 0x2000);
        *((a0 + 0x2000) as &i64) = 0;
    } else {
        uu_tail::chunks::BytesChunk::from_chunk(a0, a1, uu_tail::chunks::LinesChunk::calculate_bytes_offset_from(a1, a2));
    }
    *((a0 + 8200) as &void*) = v3;
    *((a0 + 8208) as &u8) = v4;
    return a0;
}
