fn uu_tail::chunks::BytesChunkBuffer::print(a1: i64) -> : struct32 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0x38], Other Possible Types: struct32
    let v1: struct24;  // [bp-0x38]
    let v2: struct24;  // [bp-0x38]
    let v3: struct32;  // [bp-0x38]
    let v4: struct24;  // [bp-0x28]
    let v5: u128;  // [bp-0x28]
    let v7: u64;  // rdx
    let v8: struct56;  // rax
    let v9: u64;  // rax

    alloc::collections::vec_deque::VecDeque<T,A>::iter(a0, v7);
    loop {
        vvar_116{stack -56} = struct32 OrderedDict({0: 𝜙@128b [((5320968, None), None), ((5320995, None), vvar_94{stack -56})], 16: 𝜙@128b [((5320968, None), None), ((5320995, None), vvar_96{stack -40})]})
        v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        v2 = v1;
        v5 = v4;
        if !v8 {
            v3 = struct32 {
                field_0: v4
                field_16: v3.field_0
            };
            v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v3);
            v2 = v1;
            v5 = v4;
            if !v8 {
                return 0;
            }
        }
        v0 = v2;
        v9 = std::io::impls::<impl std::io::Write for &mut W>::write_all(a1, uu_tail::chunks::BytesChunk::get_buffer(*(v8 as &i64)), v7);
        if v9 {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
        }
    }
}
