fn uu_tail::chunks::LinesChunk::fill(a0: void*, a1: i64, a2: u32) -> long long {
    let v0: struct24;  // [bp-0x40]
    let v1: u128;  // [bp-0x38]
    let v2: iNone;  // [bp-0x28]
    let v4: u64;  // rax
    let v5: u64;  // rax

    v0 = uu_tail::chunks::BytesChunk::fill(a1, a2);
    if v0.field_0 as i32 == 1 {
        v4 = 1;
        return struct24 {
            field_0: v5
            field_8: v1
        };
    } else if v0.field_8 as i32 == 1 {
        v2 = v1;
        *((a1 + 8200) as &u64) = uu_tail::chunks::LinesChunk::count_lines(a1) as u64;
        a0[8] = v2;
    } else {
        *((a1 + 8200) as &i64) = 0;
        *(&a0[8] as &i64) = 0;
    }
}
