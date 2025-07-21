fn uu_tail::chunks::ReverseChunks::new(a1: i64) -> : struct32 {
    let a0: &u32;  // rsi
    let v0: core::result::Result<u64, std::io::error::Error>;  // [bp-0x28]
    let v1: u64;  // [bp-0x20]
    let v2: std::sys::os_str::bytes::Buf;  // [bp-0x18]
    let v3: struct66;  // [bp-0x10]
    let v4: struct48;  // [bp-0x8]
    let v6: struct48;  // r15
    let v7: struct66;  // r14
    let v8: std::sys::os_str::bytes::Buf;  // r13
    let v9: u64;  // r12
    let v10: u64;  // rbx
    let v13: u64;  // rax
    let v14: struct24;  // r15
    let v16: u64;  // xmm0lq
    let v17: struct24;  // rdx
    let v18: i64;  // rdi
    let v19: core::result::Result<u64, std::io::error::Error>;  // rax:rdx
    let v20: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v4 = v6;
    v3 = v7;
    v2 = v8;
    v1 = v9;
    v0 = v10;
    v20 = <std::fs::File as std::io::Seek>::seek(a0);
    v13 = core::result::Result<T,E>::unwrap(v20 as i64, *((&v20 as &char + 8) as &i64), "src/uu/tail/src/chunks.rs");
    v19 = <std::fs::File as std::io::Seek>::seek(a0);
    v14 = core::result::Result<T,E>::unwrap(v19 as i64, *((&v19 as &char + 8) as &i64), "src/uu/tail/src/chunks.rs") - v13;
    v16 = BinaryOp MulV;
    ceil(v16);
    *(v18 as &&u32) = a0;
    *((v18 + 8) as &struct24) = v14;
    *((v18 + 16) as &struct24) = v17;
    *((v18 + 24) as &i64) = 0;
    return;
}
