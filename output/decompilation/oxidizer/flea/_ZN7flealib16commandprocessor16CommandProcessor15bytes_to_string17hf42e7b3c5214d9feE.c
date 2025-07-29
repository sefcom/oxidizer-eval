fn flealib::commandprocessor::CommandProcessor::bytes_to_string(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: void*;  // [bp-0x100]
    let v1: u64;  // [bp-0xf8]
    let v2: void*;  // [bp-0xf0]
    let v3: i64;  // [bp-0xe8]
    let v4: u64;  // [bp-0xe0]
    let v5: u64;  // [bp-0xd8]
    let v6: u64;  // [bp-0xd0]
    let v7: u64;  // [bp-0xc8]
    let v8: u64;  // [bp-0xc8]
    let v9: alloc::string::String;  // [bp-0xc0]
    let v10: void*;  // [bp-0xb8], Other Possible Types: u64
    let v11: u64;  // [bp-0xb0]
    let v12: void*;  // [bp-0xa8]
    let v13: u64;  // [bp-0xa0]
    let v14: u8;  // [bp-0x98]
    let v15: i64;  // [bp-0x88]
    let v16: u64;  // [bp-0x80]
    let v17: &str;  // [bp-0x78]
    let v18: i64;  // [bp-0x68]
    let v19: u64;  // [bp-0x60]
    let v20: i64;  // [bp-0x58]
    let v21: u64;  // [bp-0x50]
    let v22: alloc::string::String;  // [bp-0x48]
    let v24: u64;  // rax
    let v25: u64;  // rdx
    let v26: u64;  // rcx
    let v27: u64;  // r8

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v4 = a1;
    v5 = a2 + a1;
    v24 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
    if v24 {
        do {
            v6 = v24;
            v15 = &v6;
            v16 = <&T as core::fmt::LowerHex>::fmt;
            v7 = 2;
            v10 = 0;
            v11 = 2;
            v12 = 0;
            v13 = 34359738400;
            v14 = 3;
            v17 = "\x01";
            v20 = &v7;
            v21 = 1;
            v18 = &v15;
            v19 = 1;
            v22 = core::option::Option<T>::map_or_else(&v17 as u64, v25, v26, v27);
            *(&v8 as &i128) = *(&v22.vec.buf.inner.cap as &i128);
            v10 = v22.vec.len;
            alloc::vec::Vec<T,A>::append_elements(&v0, v9, v22.vec.len, "/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs");
            v24 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
        } while (v24);
    }
    *((v3 + 16) as &i64) = 0;
    *(v3 as &i128) = *(&v0 as &i128);
    return 0;
}
