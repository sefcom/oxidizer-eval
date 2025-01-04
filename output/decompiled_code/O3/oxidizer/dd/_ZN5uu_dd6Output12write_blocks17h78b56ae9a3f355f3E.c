fn uu_dd::Output::write_blocks(a0: &u64, a1: &struct_1, a2: u64, a3: u64) -> u64 {
    let v0: u64;  // [sp-0x60]
    let v1: u64;  // [sp-0x58]
    let v2: u64;  // [sp-0x50]
    let v5: struct16;  // rax
    let v6: void*;  // r12
    let v7: void*;  // r13
    let v8: void*;  // rbp
    let v9: u64;  // rdx
    let v10: &struct_0;  // rax
    let v11: u64;  // rdx

    if !v2 {
        panic!("chunk size must be non-zero");
    }
    v0 = a2;
    v1 = a3;
    v2 = a1->field_10->field_78;
    v5 = <core::slice::iter::Chunks<T> as core::iter::traits::iterator::Iterator>::next();
    if !v5 {
        v8 = 0;
        v7 = 0;
        v6 = 0;
    } else {
        v6 = 0;
        v7 = 0;
        v8 = 0;
        do {
            if uu_dd::Output::write_block(a1, v5, v9) {
                return struct16 {
                    field_0: 1
                    field_8: v11
                };
            }
        } while ((v10 = a1->field_10, v7 += -0x100 | !(v10->field_78 <= v11) as u8 as u64, v6 += -0x100 | (v10->field_78 <= v11) as u8 as u64, v8 += v11, v5 = <core::slice::iter::Chunks<T> as core::iter::traits::iterator::Iterator>::next(), v5));
    }
    return struct16 {
        field_0: 1
        field_8: v11
    };
}
