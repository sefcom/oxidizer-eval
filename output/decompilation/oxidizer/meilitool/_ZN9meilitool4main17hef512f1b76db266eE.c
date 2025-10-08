fn meilitool::main() -> void {
    let v0: u128;  // [bp-0xf8]
    let v1: iNone;  // [bp-0xe8]
    let v2: iNone;  // [bp-0xd8]
    let v3: u64;  // [bp-0xc8]
    let v4: Result<struct12, struct8>;  // [bp-0xb8]
    let v7: u128;  // [bp-0xa8]
    let v8: u64;  // [bp-0xa0]
    let v9: u64;  // [bp-0x98]
    let v12: struct112;  // [bp-0x78], Other Possible Types: struct36
    let v13: u64;  // [bp-0x68]
    let v14: iNone;  // [bp-0x60]
    let v15: iNone;  // [bp-0x50]
    let v16: iNone;  // [bp-0x40]
    let v17: u64;  // [bp-0x30]
    let v19: u64;  // rbx
    let v20: u64;  // r12
    let v21: u64;  // r14
    let v22: u64;  // r15

    v12 = struct112 {
        field_0: clap_builder::derive::Parser::parse()
        field_80: v19
        field_88: v20
        field_96: v21
        field_104: v22
    };
    v9 = v13;
    *(&v7 as &i64) = v12.field_0;
    v3 = v17;
    v2 = v16;
    v1 = v15;
    v0 = v14;
    v12 = meilisearch_types::versioning::get_version(v8, v13);
    v4 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v12, "While checking the version file");
}
