fn uu_tail::chunks::ReverseChunks::new(a0: &struct32, a1: &u32) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v1: u64;  // [sp-0x20]
    let v2: u64;  // [sp-0x18]
    let v3: u64;  // [sp-0x10]
    let v4: u64;  // [sp-0x8]
    let v6: u64;  // r15
    let v7: u64;  // r14
    let v8: u64;  // r13
    let v9: u64;  // r12
    let v10: u64;  // rbx
    let v11: u64;  // rdx
    let v13: u128;  // xmm1
    let v14: u128;  // xmm1
    let v15: u128;  // xmm1
    let v16: u128;  // xmm0
    let v17: u128;  // xmm0
    let v18: u128;  // xmm0
    let v20: u256;  // ymm0
    let v21: u256;  // ymm0

    v4 = v6;
    v3 = v7;
    v2 = v8;
    v1 = v9;
    v0 = v10;
    v13 = (core::result::Result<T,E>::unwrap(<std::fs::File as std::io::Seek>::seek(a1, 1, 0), v11, "src/uu/tail/src/chunks.rs") - core::result::Result<T,E>::unwrap(<std::fs::File as std::io::Seek>::seek(a1, 2, 0), v11, "src/uu/tail/src/chunks.rs")) as u64;
    v14 = BinaryOp InterleaveLOV;
    v15 = v14 - 0x45300000000000004330000000000000;
    v16 = v15;
    v17 = v15 >> 64 CONCAT v16 >> 64;
    v18 = BinaryOp AddV;
    v21 = (((v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV;
    ceil(v21);
    if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) == 1 {
        return struct32 {
            field_0: a1
            field_8: v12
            field_16: v24
            field_24: 0
        };
    }
}
