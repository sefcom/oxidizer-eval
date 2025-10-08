fn turborepo_lsp::Backend::handle_file_update(a0: i64, a1: u64, a2: i64, a3: u64, a4: u8, a5: u32, a6: u32) -> long long {
    let v0: u128;  // xmm1
    let v1: iNone;  // xmm2
    let v2: iNone;  // xmm3

    v0 = *((a2 + 16) as &i128);
    v1 = *((a2 + 32) as &i128);
    v2 = *((a2 + 48) as &i128);
    return struct152 {
        field_0: *(a2 as &i128)
        field_16: v0
        field_32: v1
        field_48: v2
        field_64: *((a2 + 64) as &i128)
        field_80: *((a2 + 80) as &i64)
        field_88: a5
        field_92: a6
        field_96: a3
        field_104: a4
        field_112: a1
        padding_120: <UNKNOWN>
        field_328: <UNKNOWN>
    };
}
