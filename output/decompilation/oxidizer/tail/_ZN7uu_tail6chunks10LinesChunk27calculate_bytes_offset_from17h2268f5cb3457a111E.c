fn uu_tail::chunks::LinesChunk::calculate_bytes_offset_from(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: i64;  // rax
    let v4: u64;  // rdx
    let v5: i64;  // rcx
    let v6: i64;  // rcx
    let v7: u64;  // rbx
    let v8: u64;  // rcx
    let v9: u64;  // rdi

    v0 = v2;
    v3 = uu_tail::chunks::LinesChunk::get_buffer(a0);
    if !a1 || !v4 {
        return 0;
    }
    loop {
        v6 = v5;
        v7 = a1;
        v8 = v6 + 1;
        if v4 - 1 == v6 {
            break;
        }
        v9 = *((v3 + v6) as &i8) == *((a0 + 8208) as &i8);
        a1 = v7 - v9;
        v5 = v8;
        if v7 == v9 {
            break;
        }
    }
    return v6 + 1;
}
