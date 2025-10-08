fn fd::exec::CommandBuilder::finish(a0: &struct24) -> u64 {
    let v0: Result<struct4, struct8>;  // [bp-0x1e0]
    let v1: Result<struct232, struct16>;  // [bp-0x1e0]
    let v2: u32;  // [bp-0x1dc]
    let v3: u64;  // [bp-0x1d8]
    let v4: u8;  // [bp-0xf8]
    let v6: struct24;  // r14
    let v7: u64;  // rdx

    if !*((a0 + 312) as &i64) {
        return 0;
    }
    v6 = a0 + 80;
    if (argmax::Command::try_args(v6, *((a0 + 64) as &i64), *((a0 + 72) as &i64)) & 1) {
        return v7;
    }
    v0 = argmax::Command::status(v6);
    match v0 {
        Err(_) => {
            return v3;
        },
        Ok(_) => {
            if v2 {
                *((a0 + 328) as &i8) = 4;
            }
            v1 = fd::exec::CommandBuilder::new_command(*((a0 + 40) as &i64), *((a0 + 48) as &i64));
            if (((0 ^ v1 as i64) & (0 ^ -(v1 as i64))) >> 63) as char {
                return v3;
            }
            memcpy(&v4, &v1 as u8, 216);
            *((a0 + 80) as &i64) = v1 as i64;
            *((a0 + 88) as &u64) = v3;
            memcpy(a0 + 96, &v4, 216);
            *((a0 + 312) as &i64) = 0;
        },
    }
    return 0;
}
