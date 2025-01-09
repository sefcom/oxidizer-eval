fn uu_whoami::platform::unix::get_username(a0: &struct16) -> u64 {
    let v0: struct24;  // [sp-0xa8]
    let v1: Result<struct128, struct8>;  // [sp-0x90], Other Possible Types: i1032
    let v4: i64;  // rax

    v1 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(uucore::features::process::geteuid() as i32);
    return struct16 {
        field_0: 0x8000000000000000
        field_8: v3
    };
    v0 = uucore::features::entries::uid2usr::{{closure}}(&v1);
    v0 = v0;
    v4 = core::ops::function::FnOnce::call_once();
}
