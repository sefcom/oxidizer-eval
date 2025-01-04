fn uu_join::Input<Sep>::compare(a0: u8, a1: void*, a2: u64, a3: void*, a4: u64) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v1: u64;  // [sp-0x20]
    let v2: u64;  // [sp-0x18]
    let v3: u64;  // [sp-0x10]
    let v4: u64;  // [sp-0x8]
    let v6: u64;  // rbx
    let v8: u64;  // rbx
    let v10: u64;  // 4096
    let v11: u64;  // cc_ndep
    let v12: u64;  // rax
    let v13: u64;  // rax
    let v14: u64;  // rax

    if !(a1 && a3) {
        return (!a1 ? -(0 < a3) : 1);
    }
    v4 = v6;
    if a0 {
        v0 = a1;
        v1 = a2;
        v2 = a3;
        v3 = a4;
        return <uu_join::CaseInsensitiveSlice as core::cmp::Ord>::cmp(&v0, &v2);
    }
    v8 = a2;
    if v8 < a4 {
        v10 = a2;
    } else {
        v10 = a4;
    }
    v12 = memcmp(a1, a3, v10) as u32;
    if v12 {
        v13 = v12;
    } else {
        v13 = v8 - a4;
    }
    v14 = (amd64g_calculate_condition(9, 20, v13, 0, v11) as char ? (-0x100 | v13) & 4294967295 & 4294967295 : 255);
    return v14;
}
