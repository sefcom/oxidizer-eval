fn uu_tail::chunks::BytesChunkBuffer::print(a0: &u64, a1: u64) -> long long {
    let v0: struct32;  // [bp-0x50]
    let v1: Result<struct24, struct24>;  // [bp-0x50]
    let v2: core::result::Result<u64, std::io::error::Error>;  // [bp-0x48]
    let v6: u64;  // rcx
    let v7: i64;  // r12
    let v8: i64;  // r12
    let v9: i64;  // rdx
    let v10: u64;  // rcx
    let v11: u64;  // rbx
    let v12: i64;  // r12
    let v13: i64;  // rbp
    let v14: u64;  // rdx
    let v15: core::result::Result<(), std::io::error::Error>;  // rax

    v0 = alloc::collections::vec_deque::VecDeque<T,A>::iter(a0);
    loop {
        v6 = v11;
        v7 = v13;
        if v1 != v2 {
            v8 = v7;
            v9 = v1;
            v10 = v6;
        } else {
            v8 = v1;
            v9 = v7;
            v10 = v1;
            v2 = v6;
            if v9 == v2 {
                return 0;
            }
        }
        v11 = v10;
        v12 = v9;
        v13 = v8;
        v15 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, uu_tail::chunks::BytesChunk::get_buffer(*(v12 as &i64)), v14);
        v1 = v12 + 8;
        if let Err(_) = v15 {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
        }
    }
}
