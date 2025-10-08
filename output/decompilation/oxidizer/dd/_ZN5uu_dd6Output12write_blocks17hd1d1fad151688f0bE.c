fn uu_dd::Output::write_blocks(a1: i64, a2: i64, a3: i64) -> Result<struct32, struct8> {
    let a0: i64;  // rdi
    let v0: core::slice::iter::Chunks<usize>;  // [bp-0x60]
    let v2: core::option::Option<&[usize]>;  // rax
    let v3: struct20;  // r12
    let v4: struct16;  // r13
    let v5: struct16;  // rbp
    let v6: u64;  // rdx
    let v7: u64;  // rdx

    if !*((*((a1 + 16) as &i64) + 120) as &i64) {
        panic!("chunk size must be non-zero");
    }
    v0 = core::slice::iter::Chunks<usize> {
        v: &[usize] {
            ptr: a2
            len: a3
        }
        chunk_size: *((*((a1 + 16) as &i64) + 120) as &i64)
    };
    v2 = <core::slice::iter::Chunks<T> as core::iter::traits::iterator::Iterator>::next(&v0) as u64;
    if let None = v2 {
        return struct48 {
            field_0: 0
            padding_8: <UNKNOWN>
            field_16: v5
            field_24: 0
            field_32: v3
            field_40: v4
        };
    }
    do {
        if (uu_dd::Output::write_block(a1, v2, v6) & 1) {
            return Err(v7);
        }
        v4 += *((*((a1 + 16) as &i64) + 120) as &i64) > v7;
        v3 += *((*((a1 + 16) as &i64) + 120) as &i64) <= v7;
        v5 += v7;
        v2 = <core::slice::iter::Chunks<T> as core::iter::traits::iterator::Iterator>::next(&v0) as u64;
    } while (v2);
    return struct48 {
        field_0: 0
        padding_8: <UNKNOWN>
        field_16: v5
        field_24: 0
        field_32: v3
        field_40: v4
    };
}
