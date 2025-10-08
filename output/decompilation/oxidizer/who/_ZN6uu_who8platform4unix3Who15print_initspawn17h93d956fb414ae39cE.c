fn uu_who::platform::unix::Who::print_initspawn(a0: i64, a1: i64) -> int {
    let v0: void*;  // [bp-0xc0]
    let v1: u32;  // [bp-0xac]
    let v2: i8;  // [bp-0xa8], Other Possible Types: u128
    let v3: u64;  // [bp-0x98]
    let v4: struct24;  // [bp-0x90]
    let v5: u64;  // [bp-0x88]
    let v6: u64;  // [bp-0x80]
    let v7: u128;  // [bp-0x78]
    let v8: u64;  // [bp-0x68]
    let v9: struct24;  // [bp-0x58]

    v4 = uucore::features::utmpx::Utmpx::terminal_suffix(a1);
    format!("id={}", &v4);
    v7 = *(&v2 as &i128);
    v8 = v3;
    v1 = *((a1 + 4) as &i32);
    format!("{}", &v1);
    v2 = v4.field_0;
    v3 = v6;
    v4 = uucore::features::utmpx::Utmpx::tty_device(a1);
    v9 = uu_who::platform::unix::time_string(a1);
    v0 = 0;
    uu_who::platform::unix::Who::print_line(a0, 1, 0, 32, v5, v6, *((&v9.field_0 as &char + 8) as &i128), *((&v9.field_0 as &char + 8) as &i128), 1, 0, core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt, v3, <alloc::string::String as core::fmt::Display>::fmt, v8, 1);
    return;
}
