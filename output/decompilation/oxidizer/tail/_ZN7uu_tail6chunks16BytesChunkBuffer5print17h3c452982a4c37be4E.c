fn uu_tail::chunks::BytesChunkBuffer::print(a0: i64, a1: i64) -> long long {
    let v0: struct16;  // [bp-0x58]
    let v1: struct32;  // [bp-0x58]
    let v2: struct16;  // [bp-0x58]
    let v3: struct48;  // [bp-0x58]
    let v4: struct32;  // [bp-0x58]
    let v5: struct16;  // [bp-0x48]
    let v6: u128;  // [bp-0x48]
    let v7: core::option::Option<&std::path::Path>;  // [bp-0x48], Other Possible Types: struct16
    let v8: struct32;  // [bp-0x38]
    let v10: i64;  // rax
    let v11: u64;  // rdx
    let v12: core::result::Result<(), std::io::error::Error>;  // rax
    let v13: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // r14

    v8 = alloc::collections::vec_deque::VecDeque<T,A>::iter(a0);
    v6 = *(&v8.field_16 as &i128);
    v3 = *(&v8.field_0 as &i128);
    loop {
        vvar_140{stack -88} = struct32 OrderedDict({0: 𝜙@128b [((5320862, None), vvar_118{stack -88}), ((5320761, None), vvar_130{stack -88})], 16: 𝜙@128b [((5320862, None), vvar_117{stack -72}), ((5320761, None), vvar_129{stack -72})]})
        v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
        v7 = v5;
        v0 = v2;
        if !v10 && !((v1 = struct32 {
    field_0: v5
    field_16: *(&v1.field_0 as &i128)
}, v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1), v7 = v5, v0 = v2, v10)) {
            break;
        }
        v0 = v0;
        v7 = v7;
        v12 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, uu_tail::chunks::BytesChunk::get_buffer(*(v10 as &i64)), v11);
        if let Err(_) = v12 {
            v13 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
        }
    }
    return v13;
}
