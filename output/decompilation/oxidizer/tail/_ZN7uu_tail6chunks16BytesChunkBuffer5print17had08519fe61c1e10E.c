fn uu_tail::chunks::BytesChunkBuffer::print(a0: u32, a1: u32) -> u64 {
    let v0: struct32;  // [sp-0x38], Other Possible Types: u128
    let v1: u128;  // [sp-0x28]
    let v3: u256;  // ymm0
    let v4: u256;  // ymm1
    let v5: &void*;  // rax
    let v8: u64;  // rdx
    let v9: u64;  // rax

    v0 = alloc::collections::vec_deque::VecDeque<T,A>::iter(a0);
    loop {
        v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        if !v5 {
            v3 = v3 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0;
            v4 = v4 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v1;
            *(&v0.field_0 as &struct32) = struct32 {
                field_0: v7
                field_16: v6
            };
            v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
            if !v5 {
                return 0;
            }
        }
        v9 = std::io::impls::<impl std::io::Write for &mut W>::write_all(a1, uu_tail::chunks::BytesChunk::get_buffer(*(v5)), v8);
        if v9 {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
        }
    }
}
