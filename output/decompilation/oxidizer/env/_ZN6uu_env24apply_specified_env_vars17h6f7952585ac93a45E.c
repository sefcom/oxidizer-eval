fn uu_env::apply_specified_env_vars(a0: i64) -> u64 {
    let v0: struct16;  // [bp-0x50], Other Possible Types: u64
    let v1: struct24;  // [bp-0x48], Other Possible Types: u64
    let v2: struct25;  // [bp-0x40]
    let v3: Option<struct17>;  // [bp-0x38]
    let v10: struct24;  // rax
    let v16: i64;  // rbx
    let v17: u64;  // r15
    let v18: u64;  // r15
    let v19: u64;  // rdx
    let v20: u64;  // rax

    v10 = *((a0 + 64) as &i64);
    if !v10 {
        return v10;
    }
    loop {
        v18 = v17;
        if !*((v16 - 8) as &i64) {
            v0 = uucore::util_name();
            v1 = v19;
            eprint!("{}: warning: ", &v0);
            v0 = 1;
            v1 = *((v16 + 8) as &i64);
            v2 = *((v16 + 16) as &i64);
            v3 = 1;
            v20 = eprintln!("no name specified for value {}", &v0);
            v16 += 48;
            v17 = v18 - 48;
            if v18 == 48 {
                break;
            }
        } else {
            v20 = std::env::set_var(v16 - 24, v16);
            v16 += 48;
            v17 = v18 - 48;
            if v18 == 48 {
                break;
            }
        }
    }
    return v20;
}
