fn uu_tail::chunks::BytesChunkBuffer::print(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i128;  // [sp-0x58]
    let v1: i128;  // [sp-0x48]
    let v2: struct32;  // [sp-0x38], Other Possible Types: i256
    let v4: i128;  // xmm0
    let v5: i256;  // ymm0
    let v6: i256;  // ymm0
    let v7: i128;  // xmm1
    let v8: i256;  // ymm1
    let v9: i256;  // ymm1
    let v10: i64;  // rax
    let v11: i128;  // xmm0
    let v12: i128;  // xmm1
    let v13: i64;  // rdx
    let v14: i64;  // rax

    v2 = alloc::collections::vec_deque::VecDeque<T,A>::iter(a0);
    v4 = v2;
    v6 = v5 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v4;
    v7 = *((&v2 as &char + 16) as &i128);
    v9 = v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7;
    v1 = v7;
    v0 = v4;
    loop {
        v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        if !v10 {
            v11 = v0;
            v6 = v6 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v11;
            v12 = v1;
            v9 = v9 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v12;
            v0 = v12;
            v1 = v11;
            v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
            if !v10 {
                return 0;
            }
        }
        v14 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, uu_tail::chunks::BytesChunk::get_buffer(*(v10 as &i64)), v13);
        if v14 {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v14);
        }
    }
}
