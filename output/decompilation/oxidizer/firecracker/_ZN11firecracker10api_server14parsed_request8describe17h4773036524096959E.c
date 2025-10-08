fn firecracker::api_server::parsed_request::describe(a0: u64, a1: u8, a2: void*, a3: u64, a4: i64) -> long long {
    let v0: u8;  // [bp-0x89]
    let v2: struct16;  // [bp-0x88]
    let v3: struct40;  // [bp-0x80], Other Possible Types: u64
    let v4: struct40;  // [bp-0x78], Other Possible Types: struct_0 *
    let v6: u64;  // [bp-0x70]
    let v7: struct117;  // [bp-0x68]
    let v8: u64;  // [bp-0x60]
    let v9: core::fmt::Arguments;  // [bp-0x58], Other Possible Types: u64
    let v10: u64;  // [bp-0x58]
    let v11: u64;  // [bp-0x50]
    let v14: u64;  // rdx

    v0 = a1;
    v7 = a2;
    v8 = a3;
    if !(a4 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, "/mmds")) {
        v2 = &v0;
        v3 = <micro_http::common::Method as core::fmt::Debug>::fmt;
        v4 = &v7;
        v6 = <&T as core::fmt::Debug>::fmt;
        v9 = &g_7a3790;
        v11 = 2;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, "/cpu-config") && (core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) as u64 < 4 || !log::__private_api::enabled() as u8) {
        v2 = &v0;
        v3 = <micro_http::common::Method as core::fmt::Debug>::fmt;
        v4 = &v7;
        v6 = <&T as core::fmt::Debug>::fmt;
        v10 = &g_7a37b0;
        v11 = 3;
    } else {
        return firecracker::api_server::parsed_request::describe_with_body(a0, v0, a2, a3, *((a4 + 8) as &i64), *((a4 + 16) as &i64)) as u64;
    }
    vvar_177{stack -88} = core::fmt::Arguments OrderedDict([(0, &[&str] OrderedDict([(0, 𝜙@64b [((5588473, None), vvar_169{stack -88}), ((5588540, None), vvar_163{stack -88})])])), (16, [vvar_175{stack -136}, vvar_176{stack -120}]), (32, 0x0<64>)])
    return core::option::Option<T>::map_or_else(a0, 0, v14, &v9);
}
