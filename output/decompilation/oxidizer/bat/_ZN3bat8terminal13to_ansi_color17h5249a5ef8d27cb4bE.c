fn bat::terminal::to_ansi_color(a0: i64, a1: i8) -> u64 {
    let v2: u32;  // ecx

    v2 = a0 >> 24;
    if v2 == 1 {
        return 21;
    } else if !v2 {
        if (a0 & 248) {
            return a0 * 0x100 | 18;
        }
        return (&g_4857a0.field_0)[a0 & 7];
    } else {
        if a1 {
            return a0 * 0x100 | 19;
        }
        return ansi_colours::ansi256_from_rgb(a0) * 0x100 | 18;
    }
}
