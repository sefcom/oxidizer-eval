fn starship::modules::battery::merge_battery_states(a0: u8, a1: u8) -> long long {
    let v1: u64;  // rax

    if !(!a1 == 1 && !a0 == 1) {
        return v1 & -0x100 | 1;
    } else if !(a1 != 2 & a0 != 2) {
        return (v1 & -0x100 | 1) & -0x100 | 2;
    } else if a0 == a1 {
        return a0;
    } else if a0 {
        return 0;
    } else {
        return a1;
    }
}
