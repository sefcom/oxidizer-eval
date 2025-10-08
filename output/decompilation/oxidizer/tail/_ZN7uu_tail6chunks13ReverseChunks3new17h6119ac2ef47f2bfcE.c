fn uu_tail::chunks::ReverseChunks::new(a0: i64, a1: u64) -> long long {
    let v0: u64;  // [bp-0x28]
    let v1: u64;  // [bp-0x20]
    let v2: u64;  // [bp-0x18]
    let v3: u64;  // [bp-0x10]
    let v4: u64;  // [bp-0x8]
    let v6: u64;  // r15
    let v7: u64;  // r14
    let v8: u64;  // r13
    let v9: u64;  // r12
    let v10: u64;  // rbx
    let v13: u64;  // rax
    let v14: u64;  // r15
    let v16: struct16;  // xmm0lq
    let v17: core::option::Option<&str>;  // rdx
    let v18: core::result::Result<u64, std::io::error::Error>;  // rax:rdx
    let v19: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v4 = v6;
    v3 = v7;
    v2 = v8;
    v1 = v9;
    v0 = v10;
    v18 = <std::fs::File as std::io::Seek>::stream_position(a1);
    v13 = core::result::Result<T,E>::unwrap(v18 as i8, *((&v18 as &char + 8) as &i64), "src/uu/tail/src/chunks.rs");
    v19 = <std::fs::File as std::io::Seek>::seek(a1, 1, 0);
    v14 = core::result::Result<T,E>::unwrap(v19 as i8, *((&v19 as &char + 8) as &i64), "src/uu/tail/src/chunks.rs") - v13;
    v16 = BinaryOp MulV;
    ceil();
    return struct32 {
        field_0: a1
        field_8: v14
        field_16: v17
        field_24: 0
    };
}
