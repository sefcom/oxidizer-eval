fn starship::modules::rust::format_rustc_version_verbose(a0: i64, a1: u64, a2: i256, a3: u64, a4: u64) -> long long {
    let v0: struct16;  // [bp-0xb8]
    let v1: struct72;  // [bp-0xb0]
    let v2: struct20;  // [bp-0xa8], Other Possible Types: u128
    let v3: struct28;  // [bp-0xa0]
    let v4: core::str::pattern::CharSearcher;  // [bp-0x98]
    let v5: u64;  // [bp-0x98]
    let v6: u128;  // [bp-0x90]
    let v7: u64;  // [bp-0x88]
    let v8: u64;  // [bp-0x80]
    let v9: struct104;  // [bp-0x68]
    let v10: u128;  // [bp-0x60]
    let v11: u64;  // [bp-0x50]
    let v12: struct24;  // [bp-0x48]
    let v14: struct40;  // rax
    let v15: struct16;  // r12
    let v16: struct16;  // r13
    let v17: &mut [u8];  // rdx
    let v19: struct72;  // rdx
    let v20: Result<struct40, struct32>;  // rax
    let v21: &str;  // rax:rdx

    v4 = <char as core::str::pattern::Pattern>::into_searcher(0xa, a1, a2);
    v2 = 0;
    v3 = a2;
    v9 = 0;
    v14 = core::str::iter::SplitInternal<P>::next_inclusive(&v2);
    if v14 {
        do {
            v21 = <core::str::LinesMap as core::ops::function::Fn<(&str,)>>::call(v14, v17, v17);
            if core::slice::<impl [T]>::starts_with(v21.data_ptr as u32, v21.length) {
                v15 = core::str::<impl str>::trim_start_matches(v21.data_ptr, v21.length, "release: ");
                v0 = v19;
            }
            if core::slice::<impl [T]>::starts_with(v21.data_ptr as u32, v21.length) {
                v16 = core::str::<impl str>::trim_start_matches(v21.data_ptr, v21.length, "host: ");
                v1 = v19;
            }
            v14 = core::str::iter::SplitInternal<P>::next_inclusive(&v2);
        } while (v14);
        if (!v16 | !v15) != 1 {
            starship::modules::rust::format_semver(&v10, v15, v0);
            v12 = core::option::Option<T>::map_or_else(a3, a4, v16, v1);
            v5 = v11;
            v2 = v10;
            v8 = v12.field_16;
            v6 = *(&v12.field_0 as &i128);
            v20 = v6 as i64;
            return struct48 {
                field_0: v10
                field_16: v5
                field_24: v20
                field_32: v7
                field_40: v8
            };
        }
    }
    *(a0 as &i64) = 0x8000000000000000;
    return 0x8000000000000000;
}
