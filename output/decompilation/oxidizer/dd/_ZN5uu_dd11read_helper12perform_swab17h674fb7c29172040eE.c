fn uu_dd::read_helper::perform_swab(a0: i64, a1: i64) -> long long {
    let v0: core::fmt::rt::Argument;  // [bp-0x40]
    let v2: u64;  // rdx
    let v3: u64;  // rcx
    let v4: core::iter::adapters::step_by::StepBy<core::ops::range::Range<usize>>;  // rax
    let v5: core::fmt::rt::Argument;  // r12
    let v6: u64;  // rax

    v4 = core::iter::adapters::step_by::StepBy<I>::new(a1, v2, v3);
    if !v0 {
        return v4;
    }
    do {
        v5 = v0;
        v6 = core::slice::<impl [T]>::swap(a0, a1) as i64;
    } while ((v0 = v5 - 1, v5 != 1));
    return v6;
}
