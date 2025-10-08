fn turborepo_lsp::strip_lit_prefix(a0: i64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // r12
    let v4: core::option::Option<&str>;  // rax
    let v5: u64;  // r14
    let v7: u64;  // rdx
    let v8: u64;  // r12

    v0 = v2;
    v3 = 0x8000000000000000;
    v4 = <&str as core::str::pattern::Pattern>::strip_prefix_of(a2, a3, *((a1 + 8) as &i64), *((a1 + 16) as &i64)) as u64;
    v5 = a3 + *((a1 + 24) as &i64);
    return struct40 {
        field_0: v8
        field_8: v4
        field_16: v7
        field_24: v5
        field_32: *((a1 + 32) as &i64)
    };
}
