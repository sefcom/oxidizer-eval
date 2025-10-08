fn uu_who::platform::unix::Who::print_runlevel(a0: i64, a1: i64) -> int {
    let v0: void*;  // [bp-0xc0]
    let v1: u32;  // [bp-0xb0]
    let v2: i32;  // [bp-0xac]
    let v3: u128;  // [bp-0xa8]
    let v4: core::fmt::Arguments;  // [bp-0x98]
    let v5: struct24;  // [bp-0x90]
    let v6: u32;  // [bp-0x80]
    let v7: i8;  // [bp-0x60]
    let v8: core::fmt::Arguments;  // [bp-0x50]
    let v9: u64;  // [bp-0x40]
    let v10: u8;  // [bp-0x38]
    let v12: u32;  // eax
    let v13: u32;  // ebp
    let v14: u8;  // al

    v12 = *((a1 + 4) as &i32);
    v13 = (v12 >= 0 ? v12 : v12 + 255) >> 8;
    v1 = v12;
    format!("run-level {}", &v1);
    v2 = (v13 == 78) * 5 + 78;
    format!("last={}", &v2);
    v3 = *(&v7 as &i128);
    v4 = v8;
    v5 = uu_who::platform::unix::time_string(a1);
    v14 = core::unicode::unicode_data::cc::lookup(v13);
    v0 = 0;
    uu_who::platform::unix::Who::print_line(a0, 1, 0, 32, v9, *(&v10 as &i64), 1, v6, 1, 0, 1, 0, (!v14 ? <char as core::fmt::Display>::fmt : 1), v4, 1);
    return;
}
