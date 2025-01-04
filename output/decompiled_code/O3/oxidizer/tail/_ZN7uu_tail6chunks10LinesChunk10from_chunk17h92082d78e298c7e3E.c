fn uu_tail::chunks::LinesChunk::from_chunk(a0: &struct8200, a1: &struct_0, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // r15
    let v4: void*;  // r15
    let v5: u8;  // bpl

    v0 = v2;
    v3 = a1->field_2008;
    v4 = v3 - a2;
    if v3 < a2 {
        v5 = a1->field_2010;
        v4 = 0;
        memset(a0, 0, 8200);
    } else {
        uu_tail::chunks::BytesChunk::from_chunk(a0, a1, uu_tail::chunks::LinesChunk::calculate_bytes_offset_from(a1, a2, a2));
        v5 = a1->field_2010;
    }
    a0[0x200].field_8192 = v4;
    *(&a0[513].field_0 as &u8) = v5;
    return a0;
}
