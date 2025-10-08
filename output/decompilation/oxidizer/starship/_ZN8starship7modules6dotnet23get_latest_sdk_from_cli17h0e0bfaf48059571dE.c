fn starship::modules::dotnet::get_latest_sdk_from_cli(a0: &struct24, a1: i64) {
    let v0: void*;  // [bp-0x110], Other Possible Types: struct24, u64
    let v1: &str;  // [bp-0x108], Other Possible Types: u64
    let v2: u128;  // [bp-0x100]
    let v3: u128;  // [bp-0xf8]
    let v4: struct24;  // [bp-0xf0]
    let v5: struct16;  // [bp-0xe0]
    let v6: u16;  // [bp-0xd0]
    let v7: core::str::pattern::CharSearcher;  // [bp-0xc8], Other Possible Types: struct40
    let v8: u128;  // [bp-0x98]
    let v9: u64;  // [bp-0x90]
    let v10: u128;  // [bp-0x88]
    let v11: iNone;  // [bp-0x78]
    let v12: Option<struct48>;  // [bp-0x60]
    let v13: iNone;  // [bp-0x50]
    let v15: &str;  // r14
    let v16: u64;  // rdx
    let v17: struct16;  // r14
    let v18: Option<struct40>;  // rdx
    let v19: core::option::Option<&str>;  // rax

    v12 = starship::context::Context::exec_cmd(a1, "dotnet", "--list-sdks", 1);
    if (((0 ^ v12 as i64) & (0 ^ -(v12 as i64))) >> 63) as char {
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 > 3 {
            v0 = "Received a non-success exit code from `dotnet --list-sdks`. Falling back to `dotnet --version`.";
            v1 = 1;
            v2 = 8;
            v3 = 0;
            v7 = struct40 {
                field_0: "starship::modules::dotnet"
                field_16: "starship::modules::dotnet"
                field_32: log::__private_api::loc("src/modules/dotnet.rs")
            };
            log::__private_api::log(&v0, 4, &v7);
        }
        starship::modules::dotnet::get_version_from_cli(a0, a1);
        return;
    } else {
        v11 = *((&v12 as &char + 32) as &i128);
        v10 = v13;
        v8 = v12 as i128;
        v15 = v10 as i64;
        v7 = <char as core::str::pattern::Pattern>::into_searcher(0xa, v9, v15);
        v5 = *(&v7.field_0 as &i128);
        v4 = *(&v7.finger as &i128);
        v2 = *(&v7.haystack.data_ptr as &i128);
        v0 = 0;
        v1 = v15;
        v6 = 0;
        v17 = core::option::Option<T>::or_else(core::iter::traits::double_ended::DoubleEndedIterator::try_rfold(&v0, a1, v16), v16);
        if !v17 || !(core::option::Option<T>::or_else(core::str::<impl str>::find(v17, v16, 91), v16) & 1) {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v18 = v16 - 1;
        if v18 <= 1 {
            starship::modules::dotnet::get_latest_sdk_from_cli::parse_failed(a0);
        }
        v19 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v18, v17, v16) as u64;
        v0 = struct24 {
            field_0: alloc::raw_vec::RawVecInner<A>::with_capacity_in(v16 + 1, 1, 1, "/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/string.rs")
            field_8: v16
            field_16: 0
        };
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v0, v19, v16 + v19);
        return struct24 {
            field_0: v0.field_0
            field_16: 0
        };
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
}
