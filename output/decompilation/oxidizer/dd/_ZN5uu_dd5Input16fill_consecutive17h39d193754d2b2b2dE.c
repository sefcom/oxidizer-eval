fn uu_dd::Input::fill_consecutive(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: core::fmt::rt::Argument;  // [bp-0x70]
    let v1: core::fmt::Arguments;  // [bp-0x68]
    let v2: u128;  // [bp-0x60]
    let v3: core::fmt::rt::Argument;  // [bp-0x50]
    let v5: core::fmt::rt::Argument;  // rax
    let v7: i64;  // rbx
    let v8: core::fmt::Arguments;  // rax
    let v9: struct33;  // r13
    let v10: core::option::Option<&str>;  // rbp
    let v11: Result<struct4, struct8>;  // r14
    let v12: u64;  // rdx
    let v13: u64;  // rdx

    v5 = *((*((a1 + 8) as &i64) + 112) as &i64);
    if !v5 {
        panic!("chunk size must be non-zero");
    }
    v7 = a0;
    v2 = *((a2 + 8) as &i128);
    v3 = v5;
    <core::slice::iter::ChunksMut<T> as core::iter::traits::iterator::Iterator>::next(&v2);
    if v8 {
        v1 = a2;
        v0 = a0;
        loop {
            if (<uu_dd::Input as std::io::Read>::read(a1, v8, v12) & 1) {
                *((v0 + 8) as &u64) = v13;
                *(v0 as &i64) = 1;
                return v0;
            }
            if *((*((a1 + 8) as &i64) + 112) as &i64) != v13 && !v13 {
                break;
            }
            <core::slice::iter::ChunksMut<T> as core::iter::traits::iterator::Iterator>::next(&v2);
            if !v8 {
                break;
            }
        }
        v7 = v0;
        if v11 > *((v1 + 16) as &i64) {
            *((v7 + 8) as &struct33) = v9;
            *((v7 + 16) as &core::option::Option<&str>) = v10;
            *((v7 + 24) as &Result<struct4, struct8>) = v11;
            *((v7 + 32) as &i32) = 0;
            *(v7 as &i64) = 0;
            return v8;
        }
    }
    *((a2 + 16) as &Result<struct4, struct8>) = v11;
    *((v7 + 8) as &struct33) = v9;
    *((v7 + 16) as &core::option::Option<&str>) = v10;
    *((v7 + 24) as &Result<struct4, struct8>) = v11;
    *((v7 + 32) as &i32) = 0;
    *(v7 as &i64) = 0;
    return v8;
}
