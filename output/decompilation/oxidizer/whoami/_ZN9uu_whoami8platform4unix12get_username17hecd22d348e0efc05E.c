fn uu_whoami::platform::unix::get_username(a0: &struct16) -> u64 {
    let v0: i128;  // [bp-0xa8]
    let v1: i64;  // [sp-0x98]
    let v2: Result<struct128, struct8>;  // [sp-0x90], Other Possible Types: i1024
    let v4: i64;  // rax

    v2 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(uucore::features::process::geteuid() as i32);
    match v2 {
        Err(v4) => {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v4
            };
        },
        Ok(_) => {
            uucore::features::entries::uid2usr::{{closure}}(&v0, &v2);
            v0 = v0;
            v1 = v1;
            v4 = core::ops::function::FnOnce::call_once();
        },
    }
}
