fn uu_tail::chunks::LinesChunkBuffer::print(a0: &u64, a1: u64) -> long long {
    let v0: struct32;  // [bp-0x50]
    let v1: i64;  // [bp-0x50]
    let v2: struct48;  // [bp-0x48]
    let v6: i64;  // rcx
    let v7: struct48;  // rsi
    let v8: struct32;  // rsi
    let v9: i64;  // rcx
    let v10: i64;  // r15
    let v11: i64;  // r13
    let v12: core::result::Result<(), std::io::error::Error>;  // rbp
    let v13: u64;  // rax

    v0 = alloc::collections::vec_deque::VecDeque<T,A>::iter(a0);
    loop {
        v6 = v11;
        v7 = v12;
        if v1 != v2 {
            v8 = v7;
            v9 = v6;
            v10 = v1;
        } else {
            v8 = v1;
            v9 = v1;
            v2 = v7;
            v10 = v6;
            if v10 == v2 {
                return 0;
            }
        }
        v11 = v9;
        v12 = v8;
        v1 = v10 + 8;
        v13 = uu_tail::chunks::LinesChunk::print_bytes(*(v10 as &i64), a1);
        if v13 {
            return v13;
        }
    }
}
