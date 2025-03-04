fn uu_tail::chunks::LinesChunk::calculate_bytes_offset_from(a0: void*, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: u64;  // [sp-0x38]
    let v3: u64;  // rbx
    let v4: u64;  // rdx
    let v5: struct8;  // rax
    let v6: void*;  // r14
    let v8: u64;  // rbx
    let v9: u64;  // r13
    let v10: u8;  // r13b
    let v11: u64;  // r12

    v3 = a1;
    v0 = uu_tail::chunks::LinesChunk::get_buffer(a0);
    v1 = v4 + v0;
    v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !a1 {
        return 0;
    } else if !v5 {
        return 0;
    } else {
        v6 = 0;
        loop {
            v8 = v3;
            v10 = *(v5 as &i8) == a0->field_2010;
            v9 = v9 & -0x100 | v10;
            v6 += 1;
            v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if !v5 {
                return v6;
            }
            v11 = v10;
            v3 = v8 - v11;
            if v8 == v11 {
                return v6;
            }
        }
    }
}
