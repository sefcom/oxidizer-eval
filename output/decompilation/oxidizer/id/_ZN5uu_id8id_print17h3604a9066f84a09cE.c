fn uu_id::id_print(a0: i64, a1: i64, a2: i64) -> int {
    let v0: struct24;  // [bp-0x1d8]
    let v1: struct24;  // [bp-0x1d8]
    let v3: struct24;  // [bp-0x1d8]
    let v5: struct24;  // [bp-0x1d8]
    let v7: u128;  // [bp-0x1d8]
    let v9: u64;  // [bp-0x1c8]
    let v10: Result<struct32, struct16>;  // [bp-0x1b8], Other Possible Types: struct24
    let v11: struct24;  // [bp-0x1b8]
    let v12: core::fmt::rt::Argument;  // [bp-0x1b8]
    let v13: Result<struct32, struct16>;  // [bp-0x1b8]
    let v14: core::fmt::rt::Argument;  // [bp-0x1b8]
    let v15: u64;  // [bp-0x1b0]
    let v16: u64;  // [bp-0x1a8]
    let v17: u64;  // [bp-0x1a8]
    let v18: u32;  // [bp-0x184]
    let v19: u32;  // [bp-0x180]
    let v20: u32;  // [bp-0x17c]
    let v21: u32;  // [bp-0x178]
    let v23: u64;  // [bp-0x170]
    let v24: u64;  // [bp-0x170]
    let v25: u64;  // [bp-0x160]
    let v26: u64;  // [bp-0x160]
    let v27: Result<struct128, struct16>;  // [bp-0x130]
    let v28: u64;  // [bp-0x130]
    let v29: Result<struct128, struct16>;  // [bp-0xb0]
    let v31: u64;  // rdx
    let v32: u64;  // rdx

    if !(*(a0 as &i8) & 1) {
        core::option::unwrap_failed(); /* do not return */
    }
    v18 = *((a0 + 4) as &i32);
    v10 as u32 = *((a0 + 8) as &i32);
    v10 as u32 = *((a0 + 12) as &i32);
    v20 = *((a0 + 16) as &i32);
    v13 as u32 = *((a0 + 16) as &i32);
    v27 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(*((a0 + 4) as &i32));
    if !((((0 ^ v27 as i64) & (0 ^ -(v28))) >> 63) as char) {
        v11 = uucore::features::entries::uid2usr::{{closure}}(&v27);
        v31 = v15;
        if v11.field_0 as i64 != 0x8000000000000000 {
            goto LABEL_45def5;
        }
    }
    v0 = uu_id::id_print::{{closure}}(&v18, v31);
LABEL_45def5:
    print!("uid={}({})", &v18, &v2 as u8);
    v10 = <uucore::features::entries::Group as uucore::features::entries::Locate<u32>>::locate(*((a0 + 8) as &i32));
    if let Err(_) = v10 {
        v1 = uu_id::id_print::{{closure}}(&v10 as u32, 3);
    }
    print!(" gid={}({})", &v10 as u32, &v2 as u8);
    if !*((a0 + 28) as &i8) {
        if v21 != v18 {
            v29 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(v21);
            if let Ok(_) = v29 {
                v11 = uucore::features::entries::uid2usr::{{closure}}(&v29);
                v32 = 3;
                if v11.field_0 as i64 != 0x8000000000000000 {
                    goto LABEL_45e0a2;
                }
            }
            v3 = uu_id::id_print::{{closure}}(&v10 as u32, v32);
LABEL_45e0a2:
            print!(" euid={}({})", &v10 as u32, &v2 as u8);
        }
        if v20 != v19 {
            v13 = <uucore::features::entries::Group as uucore::features::entries::Locate<u32>>::locate(v20);
            if let Err(_) = v13 {
                v5 = uu_id::id_print::{{closure}}(&v13 as u32, 3);
            }
            print!(" egid={}({})", &v13 as u32, &v2 as u8);
            v12 = v14;
            v16 = v17;
            v23 = v24;
            v25 = v26;
        }
    }
    core::iter::traits::iterator::Iterator::collect(&v23, a1, a1 + a2 * 4);
    v10 = alloc::str::join_generic_copy(core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt, v25, &g_419f18);
    v9 = v16;
    v7 = v10.field_0;
    print!(" groups={}", &v1);
    return;
}
