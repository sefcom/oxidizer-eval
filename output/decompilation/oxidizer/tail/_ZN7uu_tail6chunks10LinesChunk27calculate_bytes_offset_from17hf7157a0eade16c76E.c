fn uu_tail::chunks::LinesChunk::calculate_bytes_offset_from(a0: i64, a1: i64) -> long long {
    let v0: struct32;  // [bp-0x40], Other Possible Types: struct16
    let v2: u64;  // rdx
    let v3: struct24;  // rax
    let v4: struct24;  // r14
    let v5: i64;  // rax
    let v6: u64;  // rbx
    let v7: struct24;  // r14
    let v8: struct16;  // r14
    let v9: u64;  // rax
    let v10: u64;  // r12

    v0 = struct16 {
        field_0: uu_tail::chunks::LinesChunk::get_buffer(a0)
        field_8: v2 + v0
    };
    v0 = struct16 {
        field_0: uu_tail::chunks::LinesChunk::get_buffer(a0)
        field_8: v2 + v0.field_0
    };
    v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if !a1 {
        return 0;
    } else if v3 {
        loop {
            v5 = v9;
            v6 = a1;
            v7 = v4;
            v8 = v7 + 1;
            v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
            if !v9 {
                return v7 + 1;
            }
            v10 = *(v5 as &i8) == *((a0 + 8208) as &i8);
            v4 = v8;
            a1 = v6 - v10;
            if v6 == v10 {
                return v7 + 1;
            }
        }
    } else {
        return 0;
    }
}
