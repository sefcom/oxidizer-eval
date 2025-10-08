fn turborepo_lsp::convert_ranges(a0: i64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: u64;  // [bp-0x38]
    let v2: u64;  // rax
    let v3: &u64;  // r13
    let v4: u64;  // rbp
    let v5: u32;  // eax

    v0 = v2;
    v3 = *(a1 as &i64);
    v4 = crop::rope::rope::Rope::line_of_byte(v3, a2, "crates/turborepo-lsp/src/lib.rs");
    v0 = crop::rope::rope::Rope::line_of_byte(v3, a3, "crates/turborepo-lsp/src/lib.rs");
    v5 = crop::rope::rope::Rope::byte_of_line(v3, *((a1 + 8) as &i32), v4, "crates/turborepo-lsp/src/lib.rs");
    return struct16 {
        field_0: v4 as u32
        field_4: (a2 - v5 as u64) as u32
        field_8: v0 as u32
        field_12: (a3 - crop::rope::rope::Rope::byte_of_line(v3, *((a1 + 8) as &i32) as u32 as u64, v0, "crates/turborepo-lsp/src/lib.rs")) as u32
    };
}
