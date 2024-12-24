fn uu_join::Input<Sep>::compare(a0: u8, a1: u64, a2: i64, a3: u64, a4: u64) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v1: u64;  // [sp-0x20]
    let v2: u64;  // [sp-0x18]
    let v3: u64;  // [sp-0x10]
    let v4: u64;  // [sp-0x8]
    let v6: u64;  // rbx
    let v9: u64;  // rbx
    let v10: u64;  // cc_ndep
    let v12: u64;  // rax

    if !(a1 && a3) {
        return (!a1 ? -(0 < a3) : 1);
    }
    v4 = v6;
    if !a0 {
        v9 = a4 - a4;
        return (amd64g_calculate_condition(9, 20, v12, 0, v10) as char ? (-0x100 | v12) & 4294967295 & 4294967295 : 255);
    }
    v0 = a1;
    v1 = a4;
    v2 = a3;
    v3 = a4;
    return <uu_join::CaseInsensitiveSlice as core::cmp::Ord>::cmp(&v0, &v2);
}
