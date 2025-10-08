fn uu_sort::KeyPosition::new(a0: i64, a1: u64, a2: u64, a3: u64, a4: u32) -> long long {
    let v0: struct24;  // [bp-0xfd]
    let v1: Result<struct24, struct16>;  // [bp-0xf8], Other Possible Types: struct17
    let v2: u64;  // [bp-0xf8]
    let v3: u64;  // [bp-0xf0]
    let v4: u64;  // [bp-0xe8]
    let v5: u8;  // [bp-0xe0]
    let v6: core::iter::adapters::flatten::FlattenCompat<core::iter::adapters::map::Map<core::str::iter::Chars, std::sys_common::wtf8::{impl#10}::fmt::write_str_escaped::{closure_env#0}>, core::char::EscapeDebug>;  // [bp-0xd8], Other Possible Types: u8
    let v7: struct24;  // [bp-0xd7]
    let v8: struct16;  // [bp-0xc8], Other Possible Types: struct24
    let v9: u64;  // [bp-0xb8]
    let v10: struct16;  // [bp-0x78]
    let v11: core::str::pattern::CharSearcher;  // [bp-0x68]
    let v12: core::fmt::Arguments;  // [bp-0x38]
    let v14: u64;  // rax
    let v15: u64;  // r13
    let v16: u64;  // rax
    let v17: u64;  // rdx
    let v18: u64;  // r13
    let v19: alloc::string::String;  // rax
    let v20: u64;  // rax
    let v21: u64;  // rax
    let v22: u64;  // rax
    let v23: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx

    v11 = <char as core::str::pattern::Pattern>::into_searcher(0x2e, a1, a2);
    v10 = struct16 {
        field_0: 0
        field_8: a2
    };
    v12 = 1;
    v14 = core::str::iter::SplitInternal<P>::next(&v10);
    if !v14 {
        v8 = uu_sort::KeyPosition::new::{{closure}}(a1, a2);
        v22 = v9;
        *((a0 + 8) as &u128) = v8.field_0;
        *((a0 + 24) as &u64) = v9;
    }
    v15 = v14;
    v16 = core::str::iter::SplitInternal<P>::next(&v10);
    v23 = core::num::<impl usize>::from_ascii_radix(&v6, v15, v17);
    if v6 {
        if v7.field_0 as i8 != 2 {
            v0 = v7.field_0 as i8;
            v1 = 0;
            v3 = v15;
            v4 = v17;
            v5 = 1;
            v19 = format!("failed to parse field index {} {}", &v1, &v0);
        }
    } else {
        if !v18 {
            v21 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 8, "field index can not be 0");
        }
    }
    v8 = struct16 {
        field_0: 0x8000000000000000
        field_8: a3
    };
    v1 = core::option::Option<T>::map_or(v16, v17, &v8);
    v20 = v3;
    if !((((0 ^ v1 as i64) & (0 ^ -(v2))) >> 63) as char) {
        return struct32 {
            field_0: 1
            field_8: v1 as i64
            field_16: v3
            field_24: v4
        };
    }
    return struct32 {
        field_0: 0
        field_8: v18
        field_16: v3
        field_24: a4 as u8
    };
}
