fn flealib::commandprocessor::CommandProcessor::set_ftp_params(a0: u64, a1: i64, a2: u8, a3: u64) -> void {
    let v0: Result<struct24, struct24>;  // [bp-0x140]
    let v1: i64;  // [bp-0x138]
    let v2: std::path::PathBuf;  // [bp-0x130]
    let v3: u128;  // [bp-0x128]
    let v4: struct96;  // [bp-0x128]
    let v5: u64;  // [bp-0x118]
    let v6: struct24;  // [bp-0xc8], Other Possible Types: struct96
    let v7: struct24;  // [bp-0xc8]
    let v8: struct24;  // [bp-0xc8]
    let v9: struct24;  // [bp-0xc8], Other Possible Types: u192
    let v10: u128;  // [bp-0xc8]
    let v11: struct24;  // [bp-0xc8]
    let v12: struct16;  // [bp-0x68]
    let v13: core::str::pattern::CharSearcher;  // [bp-0x58]
    let v14: u16;  // [bp-0x28]
    let v16: u64;  // r15
    let v17: std::path::PathBuf;  // rsi
    let v18: u64;  // r15
    let v19: u64;  // rsi
    let v20: u64;  // r12
    let v21: u64;  // r14
    let v22: u64;  // r8

    v13 = <char as core::str::pattern::Pattern>::into_searcher(a2, a3, a3);
    v12 = struct16 {
        field_0: 0
        field_8: a3
    };
    v14 = 1;
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v12, "/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs");
    if v2 == 3 {
        v11 = <T as alloc::slice::hack::ConvertVec>::to_vec(*(v1 as &i64), *((v1 + 8) as &i64));
        v5 = v11.field_16;
        v3 = *(&v11.field_0 as &i128);
        v16 = a1 + 72;
        *((v16 + 16) as &u64) = v5;
        *(v16 as &u128) = v3;
        v17 = v2;
        v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(*((v1 + 16) as &i64), *((v1 + 24) as &i64));
        v18 = a1 + 24;
        v5 = v6.field_16;
        v3 = *(&v6.field_0 as &i128);
        *((v18 + 16) as &u64) = v5;
        *(v18 as &u128) = v3;
        v19 = v2;
        v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(*((v1 + 32) as &i64), *((v1 + 40) as &i64));
        v5 = v7.field_16;
        v3 = *(&v7.field_0 as &i128);
        v20 = a1 + 48;
        *((v20 + 16) as &u64) = v5;
        *(v20 as &u128) = v3;
        v8 = <T as alloc::slice::hack::ConvertVec>::to_vec("Files");
        v5 = v8.field_16;
        v3 = *(&v8.field_0 as &i128);
        v21 = a1 + 96;
        *((v21 + 16) as &u64) = v5;
        *(v21 as &u128) = v3;
        confy::store(&v3, "flea_conf", 0, v22, v18);
        if v3 as i32 != 10 {
            v6 = v4;
            <T as alloc::string::SpecToString>::spec_to_string(a0, &v6);
        }
        v9 = <T as alloc::slice::hack::ConvertVec>::to_vec("Ok");
    } else {
        v9 = <T as alloc::slice::hack::ConvertVec>::to_vec("Wrong number of parameters");
    }
    return struct24 {
        field_0: v10
        field_16: *((&v9 as &char + 16) as &i64)
    };
}
