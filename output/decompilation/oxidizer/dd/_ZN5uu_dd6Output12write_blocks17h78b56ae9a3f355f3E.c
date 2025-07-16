fn uu_dd::Output::write_blocks(a1: i64, a2: i64, a3: i64) -> Result<struct32, struct8> {
    let a0: i64;  // rdi
    let v0: u192;  // [bp-0x60]
    let v2: core::option::Option<&[usize]>;  // rax
    let v3: void*;  // r12
    let v4: void*;  // r13
    let v5: void*;  // rbp
    let v6: u64;  // rdx
    let v7: u64;  // rbp
    let v8: u64;  // rdx
    let v9: core::result::Result<(), std::io::error::Error>;  // rbp

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
    match v2 {
        None => {
            return Ok(struct32 {
                field_8: <UNKNOWN>
                field_16: 0
                field_24: 0
                field_32: 0
            });
        },
        Some(_) => {
            loop {
                v7 = v5;
                if uu_dd::Output::write_block(a1, v2, v6) {
                    return Err(v8);
                }
                v4 += (*((*((a1 + 16) as &i64) + 120) as &i64) > v8) as u8 as u64;
                v3 += (*((*((a1 + 16) as &i64) + 120) as &i64) <= v8) as u8 as u64;
                v9 = v7 + v8;
                v2 = <core::slice::iter::Chunks<T> as core::iter::traits::iterator::Iterator>::next(&v0) as u64;
                v5 = v9;
                if let None = v2 {
                    return Ok(struct32 {
                        field_8: <UNKNOWN>
                        field_16: v7 + v8
                        field_24: 0
                        field_32: v3
                    });
                }
            }
        },
    }
}
