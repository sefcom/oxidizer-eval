fn uu_dd::Input::fill_consecutive(a0: &Result<struct28, struct8>, a1: void*, a2: void*) -> u64 {
    let v0: u128;  // [bp-0x60]
    let v1: u64;  // [sp-0x50]
    let v3: u64;  // rax
    let v4: struct16;  // rax
    let v5: void*;  // rbp
    let v6: void*;  // r14
    let v7: void*;  // r12
    let v8: u64;  // rdx
    let v10: u64;  // rdx

    v3 = a1->field_8->field_70;
    if !v1 {
        panic!("chunk size must be non-zero");
    }
    v0 = *(&(&a2->padding_0)[1] as &i128);
    v1 = v3;
    v4 = <core::slice::iter::ChunksMut<T> as core::iter::traits::iterator::Iterator>::next();
    if !v4 {
        v7 = 0;
    } else {
        v5 = 0;
        v6 = 0;
        v7 = 0;
        do {
            <uu_dd::Input as std::io::Read>::read(a1, v4, v8);
            return Err(struct8 {
                field_0: v10
            });
            if a1->field_8->field_70 == v10 {
                v5 += 1;
            } else {
                if !v10 {
                    break;
                }
                v6 += 1;
            }
        } while ((v7 += v10, v4 = <core::slice::iter::ChunksMut<T> as core::iter::traits::iterator::Iterator>::next(), v4));
    }
    alloc::vec::Vec<T,A>::truncate(a2, v7);
    return Ok(struct28 {
        field_0: v5
        field_8: v6
        field_16: v7
        field_24: 0
    });
}
