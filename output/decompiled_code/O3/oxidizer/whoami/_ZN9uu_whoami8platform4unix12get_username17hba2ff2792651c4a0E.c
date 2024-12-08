fn uu_whoami::platform::unix::get_username(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct24;  // [bp-0xa8], Other Possible Types: i8
    let v2: Result<struct128, struct16>;  // [sp-0x90], Other Possible Types: i1024
    let v4: i64;  // rdx
    let v5: i64;  // rax

    v2 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(uucore::features::process::geteuid() as i32, v4);
    match v2 {
        Err(_) => {
            v5 = *((&v2 as &char + 8) as &i64);
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v5
            };
        },
        Ok(_) => {
            uucore::features::entries::uid2usr::{{closure}}(&v0, &v2);
            v0 = struct24 {
                field_0: v0
                field_16: v1
            };
            v5 = core::ops::function::FnOnce::call_once(a0, &v0);
            return v5;
        },
    }
}
