fn uu_dd::Input::fill_consecutive(a1: i64, a2: i64) -> Result<struct28, struct8> {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0x60], Other Possible Types: struct40
    let v1: u64;  // [bp-0x50]
    let v3: u64;  // rax
    let v4: core::fmt::Arguments;  // rax
    let v5: core::fmt::rt::Argument;  // rbp
    let v6: Result<struct216, struct40>;  // r14
    let v7: core::option::Option<&str>;  // r12
    let v8: u64;  // rdx
    let v10: u64;  // rdx
    let v11: u64;  // rax

    v3 = *((*((a1 + 8) as &i64) + 112) as &i64);
    if !v3 {
        v0 = struct40 {
            field_0: "chunk size must be non-zero"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        panic!("chunk size must be non-zero");
    }
    v0 = struct16 {
        field_0: *((a2 + 8) as &i128)
        field_8: <UNKNOWN>
    };
    v1 = v3;
    v4 = <core::slice::iter::ChunksMut<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v4 {
        do {
            if <uu_dd::Input as std::io::Read>::read(a1, v4, v8) {
                return Err(v10);
            }
        } while ((*((*((a1 + 8) as &i64) + 112) as &i64) == v10 || v10) && (v7 += v10, v4 = <core::slice::iter::ChunksMut<T> as core::iter::traits::iterator::Iterator>::next(&v0), v4));
    }
    v11 = alloc::vec::Vec<T,A>::truncate(a2, v7) as u64;
    return Ok(struct32 {
        field_0: v5
        field_8: v6
        field_16: v7
        field_24: 0
    });
}
