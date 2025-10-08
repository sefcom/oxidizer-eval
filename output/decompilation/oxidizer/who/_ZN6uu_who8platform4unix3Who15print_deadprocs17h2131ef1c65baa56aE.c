fn uu_who::platform::unix::Who::print_deadprocs(a0: i64, a1: i64) -> int {
    let v0: u32;  // [bp-0xec]
    let v1: struct24;  // [bp-0xe8]
    let v2: struct24;  // [bp-0xb8]
    let v3: struct24;  // [bp-0xb8]
    let v4: u64;  // [bp-0xa8]
    let v5: u128;  // [bp-0x98]
    let v6: u32;  // [bp-0x98]
    let v7: u64;  // [bp-0x88]
    let v8: i8;  // [bp-0x80]
    let v9: u64;  // [bp-0x70]
    let v10: u128;  // [bp-0x68]
    let v11: u64;  // [bp-0x58]
    let v12: u128;  // [bp-0x48]
    let v13: u64;  // [bp-0x38]

    v2 = uucore::features::utmpx::Utmpx::terminal_suffix(a1);
    format!("id={}", &v2);
    v10 = *(&v8 as &i128);
    v11 = v9;
    v6 = *((a1 + 4) as &i32);
    format!("{}", &v6 as u64);
    v12 = v2.field_0;
    v13 = v4;
    v0 = *((a1 + 332) as &i32);
    format!("term={} exit={}", &v0 as u8, &v0 as u8);
    v5 = *(&v8 as &i128);
    v7 = v9;
    v3 = uucore::features::utmpx::Utmpx::tty_device(a1);
    v1 = uu_who::platform::unix::time_string(a1);
    uu_who::platform::unix::Who::print_line(a0, 1, 0, 32, core::fmt::num::imp::<impl core::fmt::Display for i16>::fmt, v3.field_16, *((&v1.field_0 as &char + 8) as &i128), *((&v1.field_0 as &char + 8) as &i128), 1, 0, *((&v12 as &char + 8) as &i128), *((&v12 as &char + 8) as &i128), *((&v10 as &char + 8) as &i128), *((&v10 as &char + 8) as &i128), *((&v5 as &char + 8) as &i128));
    return;
}
