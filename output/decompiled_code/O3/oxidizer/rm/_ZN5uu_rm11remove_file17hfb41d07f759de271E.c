fn uu_rm::remove_file(a0: u64, a1: u64, a2: u8, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x78]
    let v1: u64;  // [bp-0x70]
    let v2: u64;  // [sp-0x68]
    let v3: u8;  // [sp-0x60]
    let v4: i8;  // [bp-0x50]
    let v5: u64;  // [sp-0x38]
    let v7: u32;  // rdx
    let v8: u64;  // rax

    if !uu_rm::prompt_file(a0, a1, a3) as i8 {
        return 0;
    }
    v8 = std::fs::remove_file(a0, a1, v7);
    if v8 {
        v5 = v8;
        if std::io::error::Error::kind(v8) as i8 == 1 {
            v0 = uucore::util_name();
            v1 = v7;
            eprint!("{:?}: ", &v0);
            v0 = 1;
            v1 = a0;
            v2 = a1;
            v3 = 1;
            eprintln!("cannot remove {:?}: Permission denied", &v0);
        } else {
            v0 = uucore::util_name();
            v1 = v7;
            eprint!("{:?}: ", &v0);
            v0 = 1;
            v1 = a0;
            v2 = a1;
            v3 = 1;
            eprintln!("cannot remove {:?}: {:?}", &v0, &v5);
        }
        return core::ptr::drop_in_place<std::io::error::Error>(&v5) | -0x100 | 1;
    } else if a2 {
        uu_rm::normalize();
        v0 = 1;
        *(&v1 as &i8) = v4;
        v3 = 1;
        println!("removed {:?}", &v0);
    }
}
