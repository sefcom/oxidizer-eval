fn bat::vscreen::AnsiStyle::to_reset_sequence(a0: u64, a1: u64, a2: u32) -> long long {
    if !((((0 ^ a1) & (0 ^ -(a1))) >> 63) as char) {
        return bat::vscreen::Attributes::to_reset_sequence(a0, a2);
    }
    return struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
}
