fn uu_env::parse_signal_value(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i224;  // [bp-0xb8]
    let v1: struct24;  // [sp-0x88], Other Possible Types: i192
    let v2: i64;  // [sp-0x60]
    let v3: i64;  // [sp-0x58]
    let v4: i64;  // [sp-0x50]
    let v5: i8;  // [sp-0x48]
    let v6: i192;  // [sp-0x40]
    let v9: i64;  // rdx

    v1 = alloc::str::<impl str>::to_uppercase(a1, a2);
    v2 = 0;
    v3 = a1;
    v4 = a2;
    v5 = 1;
    v6 = format!("{:?}: invalid signal", &v2);
    v0 = v6;
    if !uucore::features::signals::signal_by_name_or_value(*((&v1 as &char + 8) as &i64), *((&v1 as &char + 16) as &i64)) || !v9 {
        *(a0 as &double) = alloc::boxed::Box<T>::new(&v0);
        *((a0 + 8) as &&i64) = &g_548908;
    } else {
        *((a0 + 8) as &i64) = v9;
        *(a0 as &i64) = 0;
    }
    return;
}
