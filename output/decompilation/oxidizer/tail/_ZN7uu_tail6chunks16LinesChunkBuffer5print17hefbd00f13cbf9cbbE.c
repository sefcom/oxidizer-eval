fn uu_tail::chunks::LinesChunkBuffer::print(a0: i64, a1: i32) -> long long {
    let v0: struct32;  // [bp-0x38]
    let v1: struct16;  // [bp-0x38]
    let v2: struct16;  // [bp-0x38]
    let v3: struct32;  // [bp-0x38]
    let v4: core::fmt::rt::Argument;  // [bp-0x28]
    let v5: core::fmt::rt::Argument;  // [bp-0x28]
    let v7: struct56;  // rax
    let v8: u64;  // rax

    v0 = alloc::collections::vec_deque::VecDeque<T,A>::iter(a0);
    loop {
        vvar_109{stack -56} = struct32 OrderedDict({0: 𝜙@128b [((5323336, None), None), ((5323355, None), vvar_94{stack -56})], 16: 𝜙@128b [((5323336, None), None), ((5323355, None), vvar_96{stack -40})]})
        v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        v2 = v1;
        v5 = v4;
        if !v7 {
            v3 = struct32 {
                field_0: v4
                field_16: *(&v3.field_0 as &i128)
            };
            v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v3);
            v2 = v1;
            v5 = v4;
            if !v7 {
                return 0;
            }
        }
        v8 = uu_tail::chunks::LinesChunk::print_bytes(*(v7 as &i64), a1);
        if v8 {
            return v8;
        }
    }
}
