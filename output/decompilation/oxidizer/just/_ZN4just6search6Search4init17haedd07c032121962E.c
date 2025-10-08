fn just::search::Search::init(a0: i64, a1: i64) -> void {
    let v0: struct56;  // [bp-0x28]
    let v1: u64;  // [bp-0x20]
    let v2: u64;  // [bp-0x18]
    let v3: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x10]
    let v4: u64;  // [bp-0x8]
    let v6: u64;  // r15
    let v7: i64;  // r14
    let v8: u64;  // r13
    let v9: u64;  // r12
    let v10: struct56;  // rbx
    let v11: u64;  // rax

    v4 = v6;
    v3 = v7;
    v2 = v8;
    v1 = v9;
    v0 = v10;
    v11 = *(a1 as &i64) ^ 0x8000000000000000;
}
