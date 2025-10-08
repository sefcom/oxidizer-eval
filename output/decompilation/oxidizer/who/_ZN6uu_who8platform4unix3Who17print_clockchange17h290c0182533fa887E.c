fn uu_who::platform::unix::Who::print_clockchange(a0: i64, a1: i64) -> int {
    let v0: void*;  // [bp-0x30]
    let v1: struct24;  // [bp-0x20]

    v1 = uu_who::platform::unix::time_string(a1);
    v0 = 0;
    uu_who::platform::unix::Who::print_line(a0, 1, 0, 32, "clock change", *((&v1.field_0 as &char + 8) as &i128), *((&v1.field_0 as &char + 8) as &i128), 1, 0, 1, 0, 1, 0, 1);
    return;
}
