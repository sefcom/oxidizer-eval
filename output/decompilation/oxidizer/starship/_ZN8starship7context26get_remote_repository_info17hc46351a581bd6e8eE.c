fn starship::context::get_remote_repository_info(a0: i64, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: struct24;  // [bp-0x120]
    let v2: u64;  // [bp-0x110]
    let v3: iNone;  // [bp-0x108]
    let v4: iNone;  // [bp-0xf8]
    let v5: Option<struct32>;  // [bp-0xe8]
    let v6: struct160;  // [bp-0xc8]
    let v7: struct24;  // [bp-0xc8]
    let v8: struct24;  // [bp-0xc8]
    let v10: core::fmt::Arguments;  // r13
    let v11: u64;  // rax
    let v13: u64;  // rdx

    v10 = 0x8000000000000000;
    if !a2 {
        return struct8 {
            field_0: 9223372036854775809
        };
    }
    v6 = gix::repository::config::branch::<impl gix::types::Repository>::branch_remote_ref_name(a1, a2, a3, 1);
    if v6.field_0 != 10 && v6.field_0 == 9 {
        v11 = (&v6)[1].field_0;
        v3 = *(&(&v6)[2] as &i128);
        if v11 != 9223372036854775809 {
            v7 = struct24 {
                field_0: v11
                field_8: v3
            };
            v0 = starship::context::get_remote_repository_info::{{closure}}(&v7);
        }
    }
    v5 = gix::repository::config::branch::<impl gix::types::Repository>::branch_remote_name(a1, gix_ref::fullname::<impl gix_ref::FullNameRef>::shorten(a2, a3), v13);
    if let None = v5 {
        return struct48 {
            field_0: *(&v0.field_0 as &i128)
            field_16: v2
            field_24: v10
            field_32: v4
        };
    }
    v8 = starship::context::get_remote_repository_info::{{closure}}(&v5);
    return struct48 {
        field_0: *(&v0.field_0 as &i128)
        field_16: v2
        field_24: v10
        field_32: v4
    };
}
