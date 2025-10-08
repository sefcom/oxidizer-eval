fn just::function::blake3_file(a0: i64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: struct24;  // [bp-0x7f8]
    let v1: u64;  // [bp-0x7f0]
    let v2: u64;  // [bp-0x7e8]
    let v3: struct24;  // [bp-0x7e0], Other Possible Types: struct32
    let v4: struct24;  // [bp-0x7c0]
    let v5: u64;  // [bp-0x7b0]
    let v6: struct152;  // [bp-0x7a8], Other Possible Types: struct24
    let v7: void*;  // [bp-0x7a0]
    let v9: u64;  // rdx
    let v10: core::fmt::rt::Argument;  // rax

    v6 = just::execution_context::ExecutionContext::working_directory(*((*(a1 as &i64) + 16) as &i64), *((*(a1 as &i64) + 24) as &i64));
    v0 = std::path::Path::join(v7, v6.field_16, a2, a3);
    v6 = blake3::Hasher::new();
    if !(blake3::Hasher::update_mmap_rayon(&v6, &v0) & 1) {
        v3 = blake3::Hasher::finalize(&v6);
        v4 = <T as alloc::string::SpecToString>::spec_to_string(&v3);
        return struct32 {
            field_0: 0
            field_8: *(&v4.field_0 as &i128)
            field_24: v5
        };
    }
    v3 = just::function::blake3_file::{{closure}}(v1, v2, v9);
    v10 = v3.field_16;
    return struct32 {
        field_0: 1
        field_8: *(&v3.field_0 as &i128)
        field_24: v10
    };
}
