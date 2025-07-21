fn uu_ls::display_dir_entry_size(a1: i32, a2: i64, a3: i32) -> : struct48 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0xa8], Other Possible Types: u128
    let v1: alloc::string::String;  // [bp-0x98]
    let v2: alloc::string::String;  // [bp-0x88]
    let v3: void*;  // [bp-0x80]
    let v4: struct24;  // [bp-0x78]
    let v5: u128;  // [bp-0x78]
    let v6: u64;  // [bp-0x68]
    let v7: u64;  // [bp-0x68]
    let v8: struct24;  // [bp-0x60], Other Possible Types: struct48
    let v9: u64;  // [bp-0x50]
    let v10: u128;  // [bp-0x48]
    let v12: i64;  // rax
    let v13: i64;  // r14
    let v14: void*;  // r13
    let v15: core::result::Result<&str, core::str::error::Utf8Error>;  // r12

    v12 = uu_ls::PathData::get_metadata(a1, a3);
    if !v12 {
        return struct48 {
            field_0: 0
            field_16: 0
            field_32: 0
        };
    }
    v13 = v12;
    v8 = uu_ls::display_len_or_rdev(v12, *((a2 + 208) as &i64), *((a2 + 241) as &i8));
    if v8.field_24 as i64 == 0x8000000000000000 {
        v0 = v8.field_0;
        v2 = v9;
        v1 = v2;
    } else {
        v14 = v9;
        v7 = v14;
        v5 = v8.field_0;
        v15 = v8.field_40;
        v1 = v15;
        v0 = v10;
        v3 = v15;
        v2 = v15 + v14 + 2;
    }
    vvar_206{stack -120} = struct24 OrderedDict({0: 𝜙@128b [((5410148, None), None), ((5410228, None), vvar_183{stack -120})], 16: 𝜙@64b [((5410148, None), None), ((5410228, None), vvar_181{stack -104})]})
    uu_ls::display_symlink_count(&v4, *((v13 + 48) as &i64));
    v0 = uu_ls::display_uname(*((v13 + 60) as &i32), *((a2 + 227) as &i8));
    v8 = uu_ls::display_group(*((v13 + 64) as &i32), *((a2 + 227) as &i8));
    return struct48 {
        field_0: v6
        field_8: v1
        field_16: v9
        field_24: v2
        field_32: v14
        field_40: v3
    };
}
