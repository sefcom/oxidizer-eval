fn flealib::commandprocessor::CommandProcessor::set_email_params(a0: u64, a1: i64, a2: u8, a3: u64) -> void {
    let v0: Result<struct24, struct24>;  // [bp-0x140]
    let v1: i64;  // [bp-0x138]
    let v2: u64;  // [bp-0x130]
    let v3: u128;  // [bp-0x128]
    let v4: struct96;  // [bp-0x128]
    let v5: u64;  // [bp-0x118]
    let v6: struct24;  // [bp-0xc8], Other Possible Types: struct96
    let v7: struct24;  // [bp-0xc8]
    let v8: struct24;  // [bp-0xc8]
    let v9: struct24;  // [bp-0xc8]
    let v10: struct24;  // [bp-0xc8], Other Possible Types: u192
    let v11: u128;  // [bp-0xc8]
    let v12: struct24;  // [bp-0xc8]
    let v13: struct16;  // [bp-0x60]
    let v14: core::str::pattern::CharSearcher;  // [bp-0x50]
    let v15: u16;  // [bp-0x20]
    let v17: u64;  // r15
    let v18: u64;  // rsi
    let v19: u64;  // r15
    let v20: u64;  // rsi
    let v21: alloc::string::String;  // r15
    let v22: struct24;  // rsi
    let v23: u64;  // r15
    let v24: struct24;  // rsi
    let v25: u64;  // r15
    let v26: u64;  // r8

    v14 = <char as core::str::pattern::Pattern>::into_searcher(a2, a3, a3);
    v13 = struct16 {
        field_0: 0
        field_8: a3
    };
    v15 = 1;
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v13, "/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs");
    if v2 == 5 {
        v12 = <T as alloc::slice::hack::ConvertVec>::to_vec(*(v1 as &i64), *((v1 + 8) as &i64));
        v5 = v12.field_16;
        v3 = *(&v12.field_0 as &i128);
        v17 = a1 + 192;
        *((v17 + 16) as &u64) = v5;
        *(v17 as &u128) = v3;
        v18 = v2;
        v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(*((v1 + 16) as &i64), *((v1 + 24) as &i64));
        v5 = v6.field_16;
        v3 = *(&v6.field_0 as &i128);
        v19 = a1 + 216;
        *((v19 + 16) as &u64) = v5;
        *(v19 as &u128) = v3;
        v20 = v2;
        v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(*((v1 + 32) as &i64), *((v1 + 40) as &i64));
        v5 = v7.field_16;
        v3 = *(&v7.field_0 as &i128);
        v21 = a1 + 120;
        *((v21 + 16) as &u64) = v5;
        *(v21 as &u128) = v3;
        v22 = v2;
        v8 = <T as alloc::slice::hack::ConvertVec>::to_vec(*((v1 + 48) as &i64), *((v1 + 56) as &i64));
        v5 = v8.field_16;
        v3 = *(&v8.field_0 as &i128);
        v23 = a1 + 144;
        *((v23 + 16) as &u64) = v5;
        *(v23 as &u128) = v3;
        v24 = v2;
        v9 = <T as alloc::slice::hack::ConvertVec>::to_vec(*((v1 + 64) as &i64), *((v1 + 72) as &i64));
        v5 = v9.field_16;
        v3 = *(&v9.field_0 as &i128);
        v25 = a1 + 168;
        *((v25 + 16) as &u64) = v5;
        *(v25 as &u128) = v3;
        confy::store(&v3, "flea_conf", 0, v26, a1 + 24);
        if v3 as i32 != 10 {
            v6 = v4;
            <T as alloc::string::SpecToString>::spec_to_string(a0, &v6);
        }
        v10 = <T as alloc::slice::hack::ConvertVec>::to_vec("Ok");
    } else {
        v10 = <T as alloc::slice::hack::ConvertVec>::to_vec("Wrong number of parameters");
    }
    return struct24 {
        field_0: v11
        field_16: *((&v10 as &char + 16) as &i64)
    };
}
