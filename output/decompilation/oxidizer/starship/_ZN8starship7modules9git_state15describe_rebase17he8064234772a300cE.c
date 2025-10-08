fn starship::modules::git_state::describe_rebase(a0: i64, a1: i64, a2: i64, a3: i64) -> double {
    let v0: struct40;  // [bp-0xf0]
    let v1: struct176;  // [bp-0xe8], Other Possible Types: struct72
    let v2: Option<struct80>;  // [bp-0xe0], Other Possible Types: struct24
    let v3: u64;  // [bp-0xd8]
    let v4: i64;  // [bp-0xd0]
    let v5: &str;  // [bp-0xc8]
    let v6: &str;  // [bp-0xc8]
    let v7: struct24;  // [bp-0xb8], Other Possible Types: struct_0 *
    let v8: struct16;  // [bp-0xb0], Other Possible Types: u64
    let v9: void*;  // [bp-0xa8], Other Possible Types: struct160
    let v10: struct24;  // [bp-0x98]
    let v11: u64;  // [bp-0x90]
    let v12: i64;  // [bp-0x88]
    let v13: u8;  // [bp-0x80], Other Possible Types: unsigned long
    let v14: u128;  // [bp-0x78]
    let v15: struct16;  // [bp-0x68]
    let v16: Option<struct40>;  // [bp-0x58]
    let v17: u64;  // [bp-0x48]
    let v18: i8;  // [bp-0x40]
    let v20: struct24;  // r13
    let v22: Option<struct161>;  // r13
    let v23: struct16;  // rax
    let v25: u64;  // rdx

    v0 = a1;
    v20 = 0x8000000000000000;
    if starship::modules::git_state::describe_rebase::{{closure}}(a1, "rebase-merge/msgnum") {
        v10 = starship::modules::git_state::describe_rebase::{{closure}}(&v0, "rebase-merge/msgnum", "rebase-merge/end");
        v22 = v20;
        v23 = 0x8000000000000000;
        if v10.field_0 as i32 == 1 {
            goto LABEL_b99d5d;
        }
    } else if starship::modules::git_state::describe_rebase::{{closure}}(a1, "rebase-apply") {
        v10 = starship::modules::git_state::describe_rebase::{{closure}}(&v0, "rebase-apply/next", "rebase-apply/last");
        v22 = v20;
        v23 = 0x8000000000000000;
        if v10.field_0 as i32 == 1 {
LABEL_b99d5d:
            v3 = v11;
            v4 = v12;
            v1 = &v3;
            v2 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v5 = "\x01";
            v9 = 0;
            v7 = &v1;
            v8 = 1;
            core::option::Option<T>::map_or_else(&v13, 0, v25, &v5 as u64);
            v1 = &v4;
            v2 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v6 = "\x01";
            v9 = 0;
            v7 = &v1;
            v8 = 1;
            core::option::Option<T>::map_or_else(&v17, 0, a2, &v6 as u64);
            v16 = *(&v18 as &i128);
            v15 = v14;
            v22 = v13;
            v23 = v17;
        }
    } else {
        v23 = 0x8000000000000000;
        v22 = v20;
    }
    return struct64 {
        field_0: v22
        field_8: v15
        field_24: v23
        field_32: v16
        field_48: a2
        field_56: a3
    };
}
