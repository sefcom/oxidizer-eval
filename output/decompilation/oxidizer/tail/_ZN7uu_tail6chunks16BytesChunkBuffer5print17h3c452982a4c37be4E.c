fn uu_tail::chunks::BytesChunkBuffer::print(a0: u32, a1: u32) -> u64 {
    let v0: struct32;  // [sp-0x58], Other Possible Types: u128
    let v1: u128;  // [sp-0x48]
    let v2: struct32;  // [sp-0x38]
    let v4: u128;  // xmm0
    let v5: u256;  // ymm0
    let v6: u256;  // ymm0
    let v7: u128;  // xmm1
    let v8: u256;  // ymm1
    let v9: u256;  // ymm1
    let v10: &void*;  // rax
    let v13: u64;  // rdx
    let v14: u64;  // rax
    let v15: u64;  // r14

    v2 = alloc::collections::vec_deque::VecDeque<T,A>::iter(a0);
    v4 = *(&v2.field_0 as &i128);
    v6 = v5 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v4;
    v7 = *(&v2.field_16 as &i128);
    v9 = v8 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7;
    v1 = v7;
    v0 = v4;
    loop {
        v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        if !v10 {
            v6 = v6 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0;
            v9 = v9 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v1;
            *(&v0.field_0 as &struct32) = struct32 {
                field_0: v12
                field_16: v11
            };
            v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
            if !v10 {
                return v15;
            }
        }
        v14 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, uu_tail::chunks::BytesChunk::get_buffer(*(v10)), v13);
        if v14 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v14);
            return v15;
        }
    }
}
