fn uu_who::platform::unix::Who::exec(a0: &struct39) -> u64 {
    let v0: u64;  // [bp-0x3b0]
    let v1: u8;  // [bp-0x3a6]
    let v2: u8;  // [bp-0x3a5]
    let v3: u8;  // [bp-0x3a4]
    let v4: u8;  // [bp-0x3a3]
    let v5: u8;  // [bp-0x3a2]
    let v6: u8;  // [bp-0x3a1]
    let v7: struct24;  // [bp-0x3a0], Other Possible Types: u64
    let v8: u64;  // [bp-0x398]
    let v9: void*;  // [bp-0x390]
    let v10: void*;  // [bp-0x388]
    let v11: u64;  // [bp-0x380]
    let v12: u64;  // [bp-0x378]
    let v13: u8;  // [bp-0x370]
    let v14: u8;  // [bp-0x368]
    let v15: struct24;  // [bp-0x368]
    let v16: u64;  // [bp-0x360]
    let v17: u64;  // [bp-0x358]
    let v18: struct16;  // [bp-0x350]
    let v19: Option<struct0>;  // [bp-0x340], Other Possible Types: Result<struct24, struct24>
    let v20: u32;  // [bp-0x33c]
    let v21: u64;  // [bp-0x330]
    let v22: u64;  // [bp-0x1b8]
    let v23: u64;  // [bp-0x1a8]
    let v25: u64;  // rcx
    let v26: u64;  // rdx
    let v27: Result<struct24, struct24>;  // rsi
    let v28: struct24;  // rdx
    let v29: u64;  // rax
    let v30: u32;  // edx
    let v31: u8;  // dl
    let v33: u64;  // r12
    let v34: u16;  // ax

    v25 = *((a0 + 8) as &i64) + 8;
    v26 = "/var/run/utmp";
    if *((a0 + 16) as &i64) != 1 {
        v28 = v26;
    } else {
        v28 = v25;
    }
    if *((a0 + 25) as &i8) {
        v29 = uucore::features::utmpx::Utmpx::iter_all_records_from(*(v28 as &i64), *(v27 as &i64));
        core::iter::traits::iterator::Iterator::collect(&v14, v29, v30 & 1);
        v19 = alloc::str::join_generic_copy(v16, v17);
        v23 = v21;
        v22 = v19 as i128;
        println!("{}", &v22 as u8);
        v7 = v17;
        println!("# users={}", &v7);
    } else {
        v18 = struct16 {
            field_0: uucore::features::utmpx::Utmpx::iter_all_records_from(*(v28 as &i64), *(v27 as &i64))
            field_8: v31 & 1
        };
        if *((a0 + 28) as &i8) {
            v0 = 4;
            uu_who::platform::unix::Who::print_line(a0, "NAME", 32, "LINE", "TIME", "IDLE", "PID", "COMMENT", &g_4191b0);
        }
        if *((a0 + 38) as &i8) {
            v7 = uu_who::platform::unix::current_tty();
            v11 = v8;
            v10 = v9;
        }
        v12 = v18.field_0;
        v13 = v31 & 1;
        v6 = *((a0 + 36) as &i8);
        v5 = *((a0 + 31) as &i8);
        v1 = *((a0 + 32) as &i8);
        v4 = *((a0 + 35) as &i8);
        v3 = *((a0 + 34) as &i8);
        v2 = *((a0 + 33) as &i8);
        loop {
            v19 = <uucore::features::utmpx::UtmpxIter as core::iter::traits::iterator::Iterator>::next();
            if let None = v19 {
                break;
            }
            memcpy(&v22, &v20, 384);
            if *((a0 + 38) as &i8) {
                v15 = uucore::features::utmpx::Utmpx::tty_device(&v22);
                if !alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v11, v10, v16, v17) {
                    continue;
                }
            }
            if (*((a0 + 37) as &i8) & 1) && uucore::features::utmpx::Utmpx::is_user_process(&v22) {
                v33 = uu_who::platform::unix::Who::print_user(a0, &v22);
                if v33 {
                    return v33;
                }
            } else {
                v34 = v22;
                if (v34 == 1 & v6) {
                    uu_who::platform::unix::Who::print_runlevel(a0, &v22);
                } else if (v34 == 2 & v5) {
                    uu_who::platform::unix::Who::print_boottime(a0, &v22);
                } else if (v34 == 3 & v4) {
                    uu_who::platform::unix::Who::print_clockchange(a0, &v22);
                } else if (v34 == 5 & v3) {
                    uu_who::platform::unix::Who::print_initspawn(a0, &v22);
                } else if (v34 == 6 & v2) {
                    uu_who::platform::unix::Who::print_login(a0, &v22);
                } else if (v34 == 8 & v1) {
                    uu_who::platform::unix::Who::print_deadprocs(a0, &v22);
                }
            }
        }
    }
    return 0;
}
