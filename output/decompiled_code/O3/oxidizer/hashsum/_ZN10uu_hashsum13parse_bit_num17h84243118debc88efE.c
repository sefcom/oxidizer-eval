fn uu_hashsum::parse_bit_num(a0: void*, a1: u64, a2: u64) -> u64 {
    return core::num::<impl core::str::traits::FromStr for usize>::from_str(a0, a1, a2);
}
