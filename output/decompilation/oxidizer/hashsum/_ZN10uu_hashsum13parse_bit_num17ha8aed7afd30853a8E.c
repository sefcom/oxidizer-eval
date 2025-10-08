fn uu_hashsum::parse_bit_num(a0: u64, a1: u64, a2: u32) -> long long {
    let v2: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx

    v2 = core::num::<impl usize>::from_ascii_radix(a0, a1, a2);
    return v2 as i64;
}
