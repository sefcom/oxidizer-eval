fn bat::syntax_mapping::SyntaxMapping::start_offload_build_all(a0: i64) {
    let v0: alloc::string::String;  // [bp-0x58], Other Possible Types: struct24
    let v1: &std::ffi::os_str::OsStr;  // [bp-0x48]
    let v2: struct24;  // [bp-0x30]
    let v3: struct24;  // [bp-0x28]
    let v4: struct24;  // [bp-0x10]
    let v5: u64;  // [bp-0x8]
    let v7: u64;  // cc_op
    let v8: u64;  // cc_dep1
    let v9: u64;  // cc_dep2
    let v10: u64;  // cc_ndep
    let v11: u64;  // r14
    let v12: struct24;  // rbx

    if _ccall(14, 24, atomic_fetch_add(*((a0 + 48) as &i64)) as u64 + 1, 0, _ccall(v7, v8, v9, v10)) as char {
        [D] Unsupported jumpkind Ijk_NoDecode at address 8665035()
    }
    v5 = v11;
    v4 = v12;
    v1 = 0x8000000000000000;
    v0 = 0;
    v2 = 0;
    v3 = std::thread::Builder::spawn_unchecked(&v0, *((a0 + 48) as &i64));
    v0 = core::result::Result<T,E>::expect(&v3);
    return;
}
