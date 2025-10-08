fn starship::modules::git_status::get_stashed_count(a0: u64) -> long long {
    let v0: struct8;  // [bp-0x5b0]
    let v1: struct40;  // [bp-0x5a8]
    let v2: struct24;  // [bp-0x580], Other Possible Types: struct88
    let v3: struct56;  // [bp-0x580], Other Possible Types: u64
    let v4: struct24;  // [bp-0x578], Other Possible Types: struct40, u64
    let v5: struct24;  // [bp-0x570], Other Possible Types: struct40, u64
    let v6: struct24;  // [bp-0x568], Other Possible Types: u128
    let v7: struct24;  // [bp-0x560]
    let v8: u64;  // [bp-0x538]
    let v9: u64;  // [bp-0x530]
    let v10: struct40;  // [bp-0x528], Other Possible Types: struct48
    let v11: Option<struct138>;  // [bp-0x520]
    let v12: struct16;  // [bp-0x518]
    let v13: struct56;  // [bp-0x510]
    let v14: struct32;  // [bp-0x508]
    let v15: Result<struct24, struct8>;  // [bp-0x4f8], Other Possible Types: struct56
    let v16: struct72;  // [bp-0x4f0], Other Possible Types: struct92, u192, unsigned long
    let v17: u128;  // [bp-0x4d8]
    let v18: Option<struct56>;  // [bp-0x4c8], Other Possible Types: struct40
    let v19: struct32;  // [bp-0x4b8], Other Possible Types: struct40
    let v20: struct24;  // [bp-0x4a8], Other Possible Types: struct32
    let v21: Result<struct24, struct24>;  // [bp-0x498], Other Possible Types: u64
    let v22: struct24;  // [bp-0x488]
    let v23: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x478]
    let v24: struct24;  // [bp-0x470]
    let v25: struct24;  // [bp-0x468]
    let v26: struct328;  // [bp-0x450]
    let v28: struct24;  // rbx

    v26 = starship::context::Repo::open(a0);
    v2 = gix::repository::reference::<impl gix::types::Repository>::try_find_reference(&v26);
    v28 = 1;
    if (((0 ^ v2.field_0) & (0 ^ -(v3))) >> 63) as char {
        return v28;
    }
    if v2.field_0 == 9223372036854775809 {
        v21 = v8;
        v20 = v2.field_56;
        v19 = v2.field_40;
        v18 = v2.field_24;
        v17 = v2.field_8;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 4 {
            v15 = &v17;
            v16 = <gix::reference::errors::find::Error as core::fmt::Display>::fmt;
            v10 = "Error finding stash reference: ";
            v11 = 1;
            v14 = 0;
            v12 = &v15;
            v13 = 1;
            v1 = struct40 {
                field_0: "starship::modules::git_status"
                field_16: "starship::modules::git_status"
                field_32: log::__private_api::loc("src/modules/git_status.rs")
            };
            log::__private_api::log(&v10, 4, &v1);
        }
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "refs/stash") {
        v22 = v9;
        v21 = *((&v2.field_56 as &char + 8) as &i128);
        v20 = *((&v2.field_40 as &char + 8) as &i128);
        v19 = *((&v2.field_24 as &char + 8) as &i128);
        v18 = *((&v2.field_8 as &char + 8) as &i128);
        v17 = *(&v2.field_0 as &i128);
        v10 = struct48 {
            field_0: 0
            field_8: ""
            field_24: v22 + 800
            field_32: *((&v17 as &char + 8) as &i128)
        };
        v15 = gix_ref::store_impl::file::log::iter::Platform::all(&v10);
        if v15 as i32 == 1 {
            v0 = v16;
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 4 {
                v23 = &v0;
                v24 = <std::io::error::Error as core::fmt::Display>::fmt;
                v2 = "Error getting stash log: ";
                v4 = 1;
                v7 = 0;
                v5 = &v23;
                v6 = 1;
                v1 = struct40 {
                    field_0: "starship::modules::git_status"
                    field_16: "starship::modules::git_status"
                    field_32: log::__private_api::loc("src/modules/git_status.rs")
                };
                log::__private_api::log(&v2, 4, &v1);
            }
        } else if v16 {
            v25 = v16;
            core::iter::traits::iterator::Iterator::fold(&v25);
        } else {
            v28 = 1;
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 4 {
                v3 = "No reflog found for stash";
                v4 = 1;
                v5 = 8;
                v6 = 0;
                v1 = struct40 {
                    field_0: "starship::modules::git_status"
                    field_16: "starship::modules::git_status"
                    field_32: log::__private_api::loc("src/modules/git_status.rs")
                };
                log::__private_api::log(&v3, 4, &v1);
            }
        }
    }
    return v28;
}
