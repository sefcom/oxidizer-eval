fn uu_tail::chunks::LinesChunk::from_chunk(a1: i64, a2: i64) -> : struct9 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: void*;  // r15
    let v4: struct56;  // bpl
    let v6: u64;  // rcx

    v0 = v2;
    v3 = *((a1 + 8200) as &i64) - a2;
    if *((a1 + 8200) as &i64) < a2 {
        v4 = *((a1 + 8208) as &i8);
        v3 = 0;
        memset(a0, 0, 8200);
    } else {
        uu_tail::chunks::BytesChunk::from_chunk(a1, uu_tail::chunks::LinesChunk::calculate_bytes_offset_from(a1, a2), v6);
    }
    *((a0 + 8200) as &void*) = v3;
    *((a0 + 8208) as &struct56) = v4;
    return a0;
}
