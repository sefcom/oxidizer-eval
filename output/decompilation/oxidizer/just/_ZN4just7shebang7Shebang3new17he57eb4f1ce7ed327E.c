fn just::shebang::Shebang::new(a1: &str) -> Option<struct32> {
    let a0: i64;  // rdi
    let v0: struct48;  // [bp-0xb8]
    let v1: core::fmt::rt::Argument;  // [bp-0x88]
    let v2: core::fmt::rt::Argument;  // [bp-0x80]
    let v3: u16;  // [bp-0x78]
    let v4: void*;  // [bp-0x70], Other Possible Types: u64
    let v5: struct16;  // [bp-0x68]
    let v6: core::str::pattern::CharSearcher;  // [bp-0x58]
    let v7: struct24;  // [bp-0x28]
    let v9: u32;  // esi
    let v10: u64;  // rdx
    let v12: struct16;  // rax
    let v13: &mut [u8];  // rdx
    let v14: struct81;  // rsi
    let v15: struct72;  // rdi
    let v17: struct24;  // rax
    let v18: core::option::Option<&str>;  // r14, Other Possible Types: struct24
    let v19: struct16;  // rax
    let v21: &str;  // rax:rdx
    let v22: &str;  // rax:rdx

    if !core::slice::<impl [T]>::starts_with(v9, v10) {
        return struct8 {
            field_0: 0
        };
    }
    v6 = <char as core::str::pattern::Pattern>::into_searcher(0xa, core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(2, a1) as u64, v10);
    v5 = struct16 {
        field_0: 0
        field_8: v10
    };
    v7 = 0;
    v12 = core::str::iter::SplitInternal<P>::next_inclusive(&v5);
    if v12 {
        v22 = <core::str::LinesMap as core::ops::function::Fn<(&str,)>>::call(v12, v10, v10);
    }
    v21 = core::str::<impl str>::trim_matches(v15, v14, v13);
    v0 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(0x900000020, v21.data_ptr, v21.length);
    v1 = 0;
    v2 = v21.length;
    v3 = 1;
    v4 = 1;
    v17 = core::str::iter::SplitInternal<P>::next(&v0);
    if v17 {
        v18 = v10;
    }
    v4 = 0;
    v19 = core::str::iter::SplitInternal<P>::get_end(&v0);
    if let Some(_) = v18 {
        return Some(struct32 {
            field_0: v17
            field_8: v18
            field_16: v19
            field_24: v10
        });
    }
    return struct8 {
        field_0: 0
    };
}
