fn uu_dd::read_helper::perform_swab(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [bp-0x48]
    let v1: i8;  // [bp-0x40]
    let v2: i8;  // [bp-0x38]
    let v4: struct25;  // rax
    let v5: u64;  // r12
    let v6: u64;  // r15
    let v8: u64;  // r12

    v4 = core::iter::adapters::step_by::StepBy<I>::new(a1);
    v5 = v1;
    if !v5 {
        return v4;
    }
    v6 = v0;
    do {
        v8 = v5;
        v4 = core::slice::<impl [T]>::swap(a0, a1, v6, v6 - 1);
        v6 += v2 + 1;
        v5 = v8 - 1;
    } while (v8 != 1);
    return v4;
}
