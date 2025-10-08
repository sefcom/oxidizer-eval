fn linera_summary::github::GithubRepository::from_env(a0: i64, a1: u32) -> int {
    let v0: struct24;  // [bp-0xf8], Other Possible Types: u64
    let v1: u64;  // [bp-0xf0]
    let v2: u64;  // [bp-0xe8]
    let v3: void*;  // [bp-0xd8], Other Possible Types: struct16, u128
    let v4: struct24;  // [bp-0xd8]
    let v5: core::str::pattern::CharSearcher;  // [bp-0xc8]
    let v6: u64;  // [bp-0xc8]
    let v7: u128;  // [bp-0xc0]
    let v8: u64;  // [bp-0xb8]
    let v9: u64;  // [bp-0xb0]
    let v10: u16;  // [bp-0x98]
    let v11: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x88]
    let v12: u32;  // [bp-0x80]
    let v13: u64;  // [bp-0x78]
    let v14: u64;  // [bp-0x70]
    let v15: i64;  // [bp-0x60]
    let v16: u64;  // [bp-0x58]
    let v17: u64;  // [bp-0x50]
    let v18: u128;  // [bp-0x48]
    let v19: u64;  // [bp-0x38]
    let v20: struct24;  // [bp-0x30]

    v11 = std::env::var("GITHUB_REPOSITORY");
    if a1 {
        match v11 {
            Err(_) => {
                v0 = linera_summary::github::GithubRepository::from_env::{{closure}}(v12, v13);
            },
            Ok(_) => {
                v2 = v14;
                v0 = *((&v11 as &char + 8) as &i128) as u128;
            },
        }
    } else {
        match v11 {
            Ok(_) => {
                v0 = v12;
                v1 = v13;
                v2 = v14;
            },
            Err(_) => {
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: linera_summary::github::GithubRepository::from_env::{{closure}}(v12, v1)
                };
            },
        }
    }
    v5 = <char as core::str::pattern::Pattern>::into_searcher(0x2f, v1, v2);
    v3 = struct16 {
        field_0: 0
        field_8: v2
    };
    v10 = 1;
    core::iter::traits::iterator::Iterator::collect(&v11 as u8, &v3);
    v17 = v16;
    if v16 != 2 {
        v3 = 0;
        core::panicking::assert_failed(0, &v17, &g_533f38, &v3, "linera-summary/src/github.rs"); /* do not return */
    }
    v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(v15 as &i64), *((v15 + 8) as &i64));
    v19 = v4.field_16;
    v18 = v4.field_0;
    v20 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v15 + 16) as &i64), *((v15 + 24) as &i64));
    v9 = v20.field_16;
    v7 = v20.field_0;
    v6 = v19;
    v3 = v18;
    return struct48 {
        field_0: v18
        field_16: v6
        field_24: v7 as i64
        field_32: v8
        field_40: v9
    };
}
