fn uu_whoami::platform::unix::get_username() -> : struct16 {
    let a0: u64;  // rdi
    let v0: struct16;  // [bp-0xa8], Other Possible Types: struct24
    let v1: struct16;  // [bp-0xa8]
    let v2: Result<struct128, struct16>;  // [bp-0x90]

    v2 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(uucore::features::process::geteuid() as u32);
    match v2 {
        Ok(_) => {
            v0 = uucore::features::entries::uid2usr::{{closure}}(&v2);
            v0 = v1;
            return core::ops::function::FnOnce::call_once(a0, &v0);
        },
        Err(_) => {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: *((&v2 as &char + 8) as &i64)
            };
        },
    }
}
