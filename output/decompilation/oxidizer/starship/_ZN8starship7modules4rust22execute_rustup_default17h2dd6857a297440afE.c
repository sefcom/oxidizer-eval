fn starship::modules::rust::execute_rustup_default(a0: i64, a1: void*) -> int {
    let v0: &str;  // [bp-0xa8], Other Possible Types: struct40
    let v1: struct24;  // [bp-0xa0]
    let v2: Option<struct48>;  // [bp-0x98], Other Possible Types: u128
    let v3: Option<struct24>;  // [bp-0x88]
    let v4: struct16;  // [bp-0x70], Other Possible Types: struct40
    let v5: Option<struct48>;  // [bp-0x70]
    let v6: struct40;  // [bp-0x68]
    let v7: &str;  // [bp-0x60], Other Possible Types: struct40
    let v8: u128;  // [bp-0x58]
    let v9: Option<struct24>;  // [bp-0x38]
    let v10: struct24;  // [bp-0x30]
    let v12: &str;  // xmm0
    let v13: struct16;  // rax
    let v14: u32;  // rdx

    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 5 {
        v4 = "Searching for toolchain with rustup default";
        v6 = 1;
        v7 = 8;
        v8 = 0;
        v0 = struct40 {
            field_0: "starship::modules::rust"
            field_16: "starship::modules::rust"
            field_32: log::__private_api::loc("src/modules/rust.rs")
        };
        log::__private_api::log(&v4, 5, &v0);
    }
    v5 = starship::context::Context::exec_cmd(a1, "rustup", "default", 1);
    if (((0 ^ v5 as i64) & (0 ^ -(v4))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v12 = v5 as i128;
    v3 = *((&v5 as &char + 32) as &i128);
    v2 = *((&v5 as &char + 16) as &i128);
    v0 = v12;
    v7 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(v1, v2);
    v4 = struct16 {
        field_0: 0
        field_8: v2
    };
    v9 = 1;
    v13 = core::iter::traits::iterator::Iterator::try_fold(&v4);
    if !v13 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v10 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v13, v14);
    return struct24 {
        field_0: v10.field_0
        field_16: v10.field_16
    };
}
