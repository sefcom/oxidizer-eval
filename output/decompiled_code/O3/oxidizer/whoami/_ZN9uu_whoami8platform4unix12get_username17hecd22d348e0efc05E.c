fn uu_whoami::platform::unix::get_username(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i192;  // [sp-0xa8], Other Possible Types: struct24
    let v1: i1024;  // [sp-0x90], Other Possible Types: Result<struct128, struct16>
    let v3: i64;  // rdx
    let v4: i64;  // rax

    v1 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(uucore::features::process::geteuid() as i32, v3);
    match v1 {
        Err(_) => {
            v4 = *((&v1 as &char + 8) as &i64);
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v4
            };
        },
        Ok(_) => {
            v0 = uucore::features::entries::uid2usr::{{closure}}(&v1);
            v0 = v0;
            v4 = core::ops::function::FnOnce::call_once(a0, &v0);
            return v4;
        },
    }
}
