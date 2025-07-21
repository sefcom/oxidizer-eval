fn uu_dd::Output::write_blocks(a1: i64, a2: i64, a3: i64) -> Result<struct32, struct8> {
    let a0: i64;  // rdi
    let v0: core::slice::iter::Chunks<usize>;  // [bp-0x60], Other Possible Types: struct24, struct40
    let v2: core::option::Option<&[usize]>;  // rax
    let v3: struct16;  // r12
    let v4: core::option::Option<&str>;  // r13
    let v5: core::result::Result<(), std::io::error::Error>;  // rbp
    let v6: u64;  // rdx
    let v7: u64;  // rdx

    if !*((*((a1 + 16) as &i64) + 120) as &i64) {
        v0 = struct40 {
            field_0: "chunk size must be non-zero"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        panic!("chunk size must be non-zero");
    }
    v0 = struct24 {
        field_0: a2
        field_8: a3
        field_16: *((*((a1 + 16) as &i64) + 120) as &i64)
    };
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
        if uu_dd::Output::write_block(a1, v2, v6) {
            return Err(v7);
        }
    } while ((v4 += (*((*((a1 + 16) as &i64) + 120) as &i64) > v7) as u8 as u64, v3 += (*((*((a1 + 16) as &i64) + 120) as &i64) <= v7) as u8 as u64, v5 += v7, v2 = <core::slice::iter::Chunks<T> as core::iter::traits::iterator::Iterator>::next(&v0) as u64, v2));
    return struct48 {
        field_0: 0
        padding_8: <UNKNOWN>
        field_16: v5
        field_24: 0
        field_32: v3
        field_40: v4
    };
}
