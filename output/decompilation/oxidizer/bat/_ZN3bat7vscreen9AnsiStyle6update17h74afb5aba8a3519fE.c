fn bat::vscreen::AnsiStyle::update(a0: i64, a1: &u64) -> void {
    let v0: struct265;  // [bp-0x130]

    if (((0 ^ *(a0 as &i64)) & (0 ^ -(*(a0 as &i64)))) >> 63) as char {
        v0 = bat::vscreen::Attributes::new();
        memcpy(a0, &v0, 272);
        if *(a0 as &i64) == 0x8000000000000000 {
            core::option::unwrap_failed(); /* do not return */
        }
    }
    bat::vscreen::Attributes::update(a0, a1);
    return;
}
