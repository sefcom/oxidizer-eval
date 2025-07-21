fn uu_tail::chunks::LinesChunk::fill(a1: i64, a2: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x30]
    let v1: i8;  // [bp-0x28], Other Possible Types: u64
    let v2: i8;  // [bp-0x20]
    let v4: u32;  // rcx
    let v5: u64;  // rax
    let v6: u64;  // rax
    let v7: u64;  // r15

    uu_tail::chunks::BytesChunk::fill(a1, a2, v4);
    if v0 {
        v5 = 1;
        return struct24 {
            field_0: v6
            field_8: *(&v1 as &i128)
        };
    } else if v1 {
        v7 = *(&v2 as &i64);
        *((a1 + 8200) as &u64) = uu_tail::chunks::LinesChunk::count_lines(a1) as u64;
        *((a0 + 8) as &i64) = 1;
        *((a0 + 16) as &u64) = v7;
    } else {
        *((a1 + 8200) as &i64) = 0;
        *((a0 + 8) as &i64) = 0;
    }
}
