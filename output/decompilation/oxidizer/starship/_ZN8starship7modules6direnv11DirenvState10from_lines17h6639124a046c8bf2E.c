fn starship::modules::direnv::DirenvState::from_lines(a0: i64, a1: i64, a2: i64) {
    let v0: u8;  // [bp-0xf5]
    let v1: u32;  // [bp-0xf4]
    let v2: void*;  // [bp-0xf0]
    let v3: Result<struct48, struct16>;  // [bp-0xe8]
    let v4: u128;  // [bp-0xe8]
    let v5: u64;  // [bp-0xe0]
    let v6: struct24;  // [bp-0xd8]
    let v7: u64;  // [bp-0xd0]
    let v8: Result<struct16, struct1>;  // [bp-0xc8]
    let v9: core::option::Option<&str>;  // [bp-0xc0]
    let v10: u128;  // [bp-0xb8]
    let v11: iNone;  // [bp-0xa8]
    let v12: u128;  // [bp-0x98]
    let v13: u64;  // [bp-0x88]
    let v14: void*;  // [bp-0x78]
    let v15: u64;  // [bp-0x70]
    let v16: iNone;  // [bp-0x68]
    let v17: iNone;  // [bp-0x58]
    let v18: iNone;  // [bp-0x48]
    let v19: u16;  // [bp-0x38]
    let v21: core::str::pattern::CharSearcher;  // eax
    let v22: struct176;  // rax
    let v23: u64;  // rdx
    let v25: core::option::Option<&str>;  // rax
    let v26: core::option::Option<&str>;  // rax
    let v28: struct24;  // rcx
    let v29: &str;  // rax:rdx
    let v30: &str;  // rax:rdx
    let v31: &str;  // rax:rdx
    let v32: struct24;  // [bp-0xc8], Other Possible Types: char

    v3 = 0;
    v5 = 1;
    v6 = 0;
    v21 = <char as core::str::pattern::Pattern>::into_searcher(0xa, a1, a2);
    v18 = v11;
    v17 = v10;
    v16 = *(&v32 as &i128);
    v14 = 0;
    v15 = a2;
    v19 = 0;
    v1 = v21 & -0x100 | 1;
    v0 = 3;
    v7 = 9223372036854775809;
    loop {
        v22 = core::str::iter::SplitInternal<P>::next_inclusive(&v14);
        if !v22 {
            break;
        }
        v29 = <core::str::LinesMap as core::ops::function::Fn<(&str,)>>::call(v22, v23, a2);
        v25 = <&str as core::str::pattern::Pattern>::strip_prefix_of("Found RC path", v29.data_ptr, v29.length) as u64;
        match v25 {
            Some(_) => {
                v31 = core::str::<impl str>::trim_matches(v25, v23, a2);
                v32 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v31.data_ptr, a2);
                v13 = v32.field_16;
                v12 = *(&v32.field_0 as &i128);
                v6 = v13;
                v4 = v12;
            },
            None => {
                v26 = <&str as core::str::pattern::Pattern>::strip_prefix_of("Found RC allowed", v29.data_ptr, v29.length) as u64;
                match v26 {
                    None => {
                        v1 = (<&str as core::str::pattern::Pattern>::is_contained_in("No .envrc or .env loaded", v29.data_ptr, v29.length) as u8 ? 0 : v1);
                    },
                    Some(_) => {
                        v30 = core::str::<impl str>::trim_matches(v26, v23, a2);
                        v8 = <starship::modules::direnv::AllowStatus as core::str::traits::FromStr>::from_str(v30.data_ptr, a2);
                        v0 = v9;
                        if let Ok(_) = v8 {
                            v28 = *((&v8 as &char + 9) as &i64);
                            *(&v2[24] as &i64) = v10 as i64;
                            *(&v2[17] as &struct24) = v28;
                            *(&v2[8] as &i64) = v8 as i64;
                            *(&v2[16] as &u8) = v0;
                            *(v2 as &i64) = 0x8000000000000000;
                            return;
                        }
                    },
                }
            },
        }
    }
    if (v0 == 3 | !v6) != 1 {
        *(&v2[16] as &struct24) = v6;
        *(v2 as &i128) = v3 as i128;
        *(&v2[24] as &u8) = v1;
        *(&v2[25] as &u8) = v0;
        return;
    }
    *(&v2[8] as &i64) = 0x8000000000000000;
    *(&v2[16] as &&u8) = &g_53f244;
    *(&v2[24] as &i64) = 20;
    *(v2 as &i64) = 0x8000000000000000;
    return;
}
