fn uu_chmod::Chmoder::change_file(a0: i64, a1: i32, a2: i32, a3: i64, a4: i64) -> u64 {
    let v0: u32;  // [bp-0x108]
    let v1: u32;  // [bp-0x104]
    let v2: u64;  // [bp-0x100]
    let v3: u64;  // [bp-0xf8]
    let v4: u64;  // [bp-0xf0]
    let v5: u8;  // [bp-0xe8]
    let v6: u64;  // [bp-0xe0]
    let v7: u64;  // [bp-0xd8]
    let v8: u64;  // [bp-0x60]
    let v9: struct24;  // [bp-0x58]
    let v10: struct24;  // [bp-0x40]
    let v12: u64;  // rax
    let v13: u64;  // rdx

    v0 = a1;
    v1 = a2;
    if a1 != a2 {
        v12 = std::fs::set_permissions(a3, a4, a2);
        if v12 {
            v8 = v12;
            if !*((a0 + 33) as &i8) {
                v6 = uucore::util_name();
                v7 = v13;
                eprint!("{}: ", &v6);
                eprintln!("{}", &v8);
            }
            if !*((a0 + 34) as &i8) {
                return 1;
            }
            v2 = 1;
            v3 = a3;
            v4 = a4;
            v5 = 1;
            v10 = uucore::features::fs::display_permissions_unix(v0, 0);
            v9 = uucore::features::fs::display_permissions_unix(v1, 0);
            println!("failed to change mode of file {} from {} ({}) to {} ({})", &v2, &v0, &v10, &v1, &v9);
            return 1;
        } else {
            if !*((a0 + 34) as &i8) && *((a0 + 32) as &i8) != 1 {
                return 0;
            }
            v2 = 1;
            v3 = a3;
            v4 = a4;
            v5 = 1;
            v10 = uucore::features::fs::display_permissions_unix(a1, 0);
            v9 = uucore::features::fs::display_permissions_unix(v1, 0);
            println!("mode of {} changed from {} ({}) to {} ({})", &v2, &v0, &v10, &v1, &v9);
            return 0;
        }
    } else if !*((a0 + 34) as &i8) {
        return 0;
    } else if !*((a0 + 32) as &i8) {
        v2 = 1;
        v3 = a3;
        v4 = a4;
        v5 = 1;
        v9 = uucore::features::fs::display_permissions_unix(a1, 0);
        println!("mode of {} retained as {} ({})", &v2, &v0, &v9);
        return 0;
    } else {
        return 0;
    }
}
