fn starship::modules::git_commit::git_tag(a0: i64, a1: u64, a2: u64) -> int {
    let v0: struct16;  // [bp-0x698], Other Possible Types: struct24
    let v1: Result<struct16, struct1>;  // [bp-0x688], Other Possible Types: struct40
    let v2: iNone;  // [bp-0x678], Other Possible Types: struct32
    let v3: u128;  // [bp-0x668]
    let v4: iNone;  // [bp-0x658]
    let v5: core::str::pattern::CharSearcher;  // [bp-0x648]
    let v6: struct16;  // [bp-0x640]
    let v7: u128;  // [bp-0x630]
    let v8: struct32;  // [bp-0x620]
    let v9: struct40;  // [bp-0x610]
    let v10: iNone;  // [bp-0x5e8]
    let v11: struct40;  // [bp-0x5d8]
    let v12: struct8;  // [bp-0x5c8]
    let v13: u128;  // [bp-0x5b8]
    let v14: iNone;  // [bp-0x5a8]
    let v15: struct24;  // [bp-0x590]
    let v16: u64;  // [bp-0x580]
    let v17: struct128;  // [bp-0x578]
    let v18: struct16;  // [bp-0x578], Other Possible Types: struct80
    let v19: u128;  // [bp-0x570]
    let v20: core::str::pattern::CharSearcher;  // [bp-0x560]
    let v21: struct8;  // [bp-0x550]
    let v22: u128;  // [bp-0x540]
    let v23: u128;  // [bp-0x530]
    let v24: struct328;  // [bp-0x458], Other Possible Types: struct48
    let v26: Option<struct24>;  // rax
    let v27: struct24;  // xmm0
    let v28: struct16;  // rax
    let v29: struct16;  // xmm0
    let v30: core::str::pattern::CharSearcher;  // xmm1
    let v31: Option<struct40>;  // rax

    v24 = starship::context::Repo::open(a1);
    v24 = gix::repository::cache::<impl gix::types::Repository>::object_cache_size_if_unset(&_ZN12tracing_core10dispatcher13CURRENT_STATE29_$u7b$$u7b$constant$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$3VAL17h7c57377789603b22E);
    v18 = gix::repository::reference::<impl gix::types::Repository>::head_commit(&v24);
    if v18.field_0 as i32 != 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v26 = v18.field_8 as i64;
    *(&v0 as &i128) = *((&v18.field_8 as &char + 8) as &i128);
    v1 = *((&v18.field_24 as &char + 8) as &i128);
    v2 = *((&v18.field_40 as &char + 8) as &i128);
    if let Some(_) = v26 {
        v27 = *(&v0 as &i128);
        v8 = v2;
        *(&v7 as &Result<struct16, struct1>) = v1;
        v6 = v27;
        v5 = v26;
        v9 = struct40 {
            field_0: a2
            field_8: v7 as i64
            field_16: *((&v7 as &char + 8) as &i128)
            field_32: v8.field_8 as i32
            field_36: 257
        };
        v17 = gix::commit::describe::Platform::try_format(&v9);
        if v17.field_0 as i32 != 10 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v28 = v17.field_8;
        v0.field_0 = v17.field_16;
        v1 = v17.field_32;
        v2 = v17.field_48;
        v3 = v17.field_64;
        v4 = v17.field_80;
        if v28 != 9223372036854775810 {
            v14 = v4;
            v29 = *(&v0.field_0 as &i128);
            v13 = v3;
            v12 = v2;
            v11 = v1;
            v10 = v29;
            if v28 != 9223372036854775809 {
                *(&v23 as void*) = v14;
                v30 = *(&v11.field_0 as &i128);
                v22 = v13;
                v21 = v12;
                v20 = v30;
                *(&v19 as void*) = v10;
                v18 = v28;
                v31 = v20.haystack.data_ptr;
                if let None = v31 {
                    v0 = struct24 {
                        field_0: v31
                        field_8: *(&v11.field_8 as &i128)
                    };
                    v15 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
                    return struct24 {
                        field_0: *(&v15 as &i128)
                        field_16: v16
                    };
                }
            }
        }
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
