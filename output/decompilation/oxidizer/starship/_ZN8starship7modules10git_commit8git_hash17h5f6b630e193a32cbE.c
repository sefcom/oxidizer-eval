fn starship::modules::git_commit::git_hash(a0: i64, a1: u64, a2: i192) -> int {
    let v0: struct72;  // [bp-0x508], Other Possible Types: u128
    let v1: struct24;  // [bp-0x500]
    let v2: struct24;  // [bp-0x4f8]
    let v3: &str;  // [bp-0x4f8]
    let v4: struct24;  // [bp-0x4f0]
    let v5: Result<struct24, struct16>;  // [bp-0x4e8]
    let v6: &str;  // [bp-0x4e0]
    let v7: struct80;  // [bp-0x4e0]
    let v8: u64;  // [bp-0x4d8]
    let v9: struct24;  // [bp-0x4d0]
    let v10: Result<struct24, struct16>;  // [bp-0x4c8]
    let v11: &str;  // [bp-0x4c0], Other Possible Types: Result<struct16, struct64>
    let v12: struct72;  // [bp-0x490]
    let v13: Result<struct72, struct24>;  // [bp-0x488]
    let v14: &str;  // [bp-0x478]
    let v15: u128;  // [bp-0x470]
    let v16: i64;  // [bp-0x460]
    let v17: struct328;  // [bp-0x458]

    v17 = starship::context::Repo::open(a1);
    v7 = gix::repository::reference::<impl gix::types::Repository>::head_id(&v17);
    if v7.field_0 as i32 != 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v0 = *((&v7.field_8 as &char + 8) as &i128);
    v3 = v11;
    if v8 {
        v14 = v3;
        v13 = v0;
        v12 = v8;
        v0 = &v13;
        v1 = 20;
        v2 = a2;
        v4 = &v0;
        v5 = <gix_hash::borrowed::HexDisplay as core::fmt::Display>::fmt;
        v6 = "\x01";
        v11 = 0;
        v9 = &v4;
        v10 = 1;
        core::option::Option<T>::map_or_else(&v15, 0, v3, &v6 as u64);
        return struct24 {
            field_0: v15
            field_16: v16
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
