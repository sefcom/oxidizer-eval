fn uu_dd::read_helper::perform_swab(a0: u64, a1: u32) -> long long {
    let v0: struct24;  // [bp-0x48], Other Possible Types: u8
    let v1: u64;  // [bp-0x40]
    let v2: i8;  // [bp-0x38]
    let v4: u64;  // rax
    let v5: core::option::Option<&[usize]>;  // rax

    v4 = core::iter::adapters::step_by::StepBy<I>::new(&v0, a1);
    if !v1 {
        return v4;
    }
    do {
        v1 -= 1;
        v5 = core::ptr::swap(a0 + v0, a0 + v0 - 1);
        v0 += *(&v2 as &i64) + 1;
    } while (v1);
    return v5;
}
