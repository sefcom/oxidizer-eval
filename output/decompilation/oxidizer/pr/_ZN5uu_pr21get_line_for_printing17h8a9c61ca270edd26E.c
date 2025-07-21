fn uu_pr::get_line_for_printing(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64) -> : struct24 {
    let a0: i64;  // rsi
    let v0: struct40;  // [bp-0x168], Other Possible Types: u64
    let v1: struct24;  // [bp-0x168]
    let v2: u128;  // [bp-0x168]
    let v3: alloc::string::String;  // [bp-0x160], Other Possible Types: u64
    let v4: Result<struct32, struct32>;  // [bp-0x158], Other Possible Types: gimli::constants::DwAccess *, u64
    let v5: struct32;  // [bp-0x150], Other Possible Types: u64
    let v6: void*;  // [bp-0x148], Other Possible Types: Result<struct32, struct32>
    let v7: struct32;  // [bp-0x140]
    let v8: core::fmt::Arguments;  // [bp-0x138], Other Possible Types: u64
    let v9: u128;  // [bp-0x130]
    let v10: u64;  // [bp-0x128]
    let v11: u64;  // [bp-0x118]
    let v12: u64;  // [bp-0x110]
    let v13: u64;  // [bp-0x108]
    let v14: (usize, std::backtrace_rs::symbolize::gimli::Mapping);  // [bp-0xf8], Other Possible Types: struct24, u64
    let v15: i64;  // [bp-0xf8]
    let v16: struct32;  // [bp-0xf0], Other Possible Types: u64
    let v17: Result<struct32, struct32>;  // [bp-0xe8], Other Possible Types: gimli::constants::DwAccess *
    let v18: u64;  // [bp-0xe0]
    let v19: struct32;  // [bp-0xd8]
    let v20: u64;  // [bp-0xc8]
    let v21: void*;  // [bp-0xc0]
    let v22: u64;  // [bp-0xb8]
    let v23: void*;  // [bp-0xb0]
    let v24: u64;  // [bp-0xa8]
    let v25: u64;  // [bp-0xa0]
    let v26: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x98]
    let v27: u128;  // [bp-0x90]
    let v28: u64;  // [bp-0x80]
    let v29: u128;  // [bp-0x78]
    let v30: struct24;  // [bp-0x68]
    let v31: i64;  // [bp-0x60]
    let v32: i64;  // [bp-0x58]
    let v33: i64;  // [bp-0x50]
    let v34: Result<struct24, struct24>;  // [bp-0x48]
    let v35: u64;  // rbp
    let v37: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // rax
    let v38: i64;  // rdx
    let v39: i64;  // rdi

    v20 = a2;
    v21 = 0;
    v22 = 1;
    v23 = 0;
    v34 = uu_pr::get_formatted_line_number(a0, *((a1 + 32) as &i64), a3);
    core::result::Result<T,E>::unwrap(*(a1 as &i64) == 0x8000000000000000, a1 + (*(a1 as &i64) == 0x8000000000000000) * 8);
    v15 = &v34;
    v16 = <alloc::string::String as core::fmt::Display>::fmt;
    v17 = &v8;
    v18 = <&T as core::fmt::Display>::fmt;
    v0 = &g_46bf10.pieces.ptr;
    v3 = 2;
    v6 = 0;
    v4 = &v15;
    v5 = 2;
    v1 = core::option::Option<T>::map_or_else(a1);
    v11 = v27;
    v35 = v28;
    v13 = v35;
    v24 = a0 + 168;
    v25 = core::iter::traits::iterator::Iterator::fold(v12, v12 + v35) * 7 + v35;
    v26 = v37;
    v31 = &v20;
    v32 = &v25;
    v33 = &v11;
    if a4 {
        uu_pr::get_line_for_printing::{{closure}}(&v1, &v31, a5);
        *(&v14 as &i128) = *((&v1.field_0 as &char + 8) as &i128);
        v4 = v13;
        v2 = *(&v11 as &i128);
        if 0 {
            goto LABEL_5c8434;
        }
        v9 = *(&v14 as &i128);
        v8 = &g_46bf10.pieces.ptr;
    } else {
        v4 = v28;
        v2 = v27;
LABEL_5c8434:
        v10 = v4;
        v8 = v2;
    }
    v0 = &v24;
    v3 = <&T as core::fmt::Display>::fmt;
    v4 = &v8;
    v5 = <alloc::string::String as core::fmt::Display>::fmt;
    v6 = &v26;
    v7 = <&T as core::fmt::Display>::fmt;
    v14 = &g_475660.__0;
    v16 = 3;
    v19 = 0;
    v17 = &v0;
    v18 = 3;
    v14 = core::option::Option<T>::map_or_else(v38);
    *((v39 + 16) as &struct24) = v30;
    *(v39 as &u128) = v29;
    return;
}
