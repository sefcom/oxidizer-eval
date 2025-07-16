fn uu_seq::done_printing(a0: i64, a1: i64, a2: i64) -> char {
    let v0: struct40;  // [bp-0x50]
    let v2: u8;  // al
    let v3: u8;  // al

    v0 = <uu_seq::extendedbigdecimal::ExtendedBigDecimal as num_traits::identities::Zero>::zero();
    v2 = core::cmp::PartialOrd::ge(a1);
    v3 = (!v2 ? core::cmp::PartialOrd::lt(a0) : core::cmp::PartialOrd::gt(a0));
    return v3;
}
