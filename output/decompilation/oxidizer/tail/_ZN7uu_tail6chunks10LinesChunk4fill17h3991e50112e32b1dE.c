fn uu_tail::chunks::LinesChunk::fill(a1: i64, a2: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x30]
    let v1: i8;  // [bp-0x28], Other Possible Types: u64
    let v2: i8;  // [bp-0x20]
    let v4: u32;  // rcx
    let v5: u64;  // rax
    let v6: u64;  // r15
    let v7: u64;  // rax

    uu_tail::chunks::BytesChunk::fill(a1, a2, v4);
    if v0 {
        *((a0 + 8) as &i128) = *(&v1 as &i128);
        v5 = 1;
    } else if v1 {
        v6 = *(&v2 as &i64);
        *((a1 + 8200) as &u64) = uu_tail::chunks::LinesChunk::count_lines(a1) as u64;
        return struct24 {
            field_0: v7
            field_8: 1
            field_16: v6
        };
    } else {
        *((a1 + 8200) as &i64) = 0;
        *((a0 + 8) as &i64) = 0;
    }
}
