fn uu_stty::print_control_chars(a0: i64, a1: i8) -> long long {
    let v0: u64;  // [bp-0xb8]
    let v1: u32;  // [bp-0xb0]
    let v2: u64;  // [bp-0xac]
    let v3: u32;  // [bp-0xa4]
    let v4: u64;  // [bp-0x80]
    let v5: u64;  // [bp-0x48]
    let v6: struct24;  // [bp-0x48]
    let v7: u32;  // [bp-0x40]
    let v8: u64;  // [bp-0x3c]
    let v10: i64;  // r12

    if !(a1 & 1) {
        return 134;
    }
    loop {
        vvar_197{stack -72} = struct24 OrderedDict([(0, 𝜙@64b [((4558445, None), vvar_141{stack -72}), ((4558224, None), None)]), (8, 𝜙@32b [((4558445, None), vvar_143{stack -64}), ((4558224, None), None)])])
        v4 = "intr" + v10;
        uu_stty::control_char_to_string(&v6, *((a0 + *(&(&g_4e2e10)[v10] as &i64)) as &i8));
        if (((0 ^ v6.field_0) & (0 ^ -(v5))) >> 63) as char {
            return v1;
        }
        v3 = *((&v6.field_16 as &char + 4) as &i32);
        v2 = v8;
        v0 = v6.field_0;
        v1 = v7;
        print!("{} = {}; ", &v4, &v0);
        if v10 == 360 {
            println!("min = {}; time = {};", a0 + 6, a0 + 5);
            return 134;
        }
    }
}
