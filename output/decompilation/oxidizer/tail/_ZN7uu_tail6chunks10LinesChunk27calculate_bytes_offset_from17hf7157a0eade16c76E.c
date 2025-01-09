fn uu_tail::chunks::LinesChunk::calculate_bytes_offset_from(a0: void*, a1: u64) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: u64;  // [sp-0x38]
    let v3: u64;  // rdx
    let v4: &u8;  // rax
    let v5: void*;  // r14
    let v7: u64;  // rbx
    let v8: u64;  // r13
    let v9: u8;  // r13b
    let v10: u64;  // r12

    v0 = uu_tail::chunks::LinesChunk::get_buffer(a0);
    v1 = v3 + v0;
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if !a1 {
        return 0;
    } else if !v4 {
        return 0;
    } else {
        v5 = 0;
        loop {
            v7 = a1;
            v9 = *(v4) == a0->field_2010;
            v8 = v8 & -0x100 | v9;
            v5 += 1;
            v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
            if !v4 {
                return v5;
            }
            v10 = v9;
            a1 = v7 - v10;
            if v7 == v10 {
                return v5;
            }
        }
    }
}
