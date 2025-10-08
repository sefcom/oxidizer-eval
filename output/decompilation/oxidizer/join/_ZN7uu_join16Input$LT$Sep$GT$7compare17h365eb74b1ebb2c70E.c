fn uu_join::Input<Sep>::compare(a0: u8, a1: u64, a2: u64, a3: u64, a4: u64) -> long long {
    let v0: struct16;  // [bp-0x28]
    let v1: struct16;  // [bp-0x18]
    let v3: u64;  // rbx
    let v4: u64;  // 4096
    let v5: u64;  // rax
    let v6: u64;  // rax

    if !(a3 & a1) {
        return (!a1 ? -(0 < a3) : 1);
    } else if (a0 & 1) {
        v0 = struct16 {
            field_0: a1
            field_8: a2
        };
        v1 = struct16 {
            field_0: a3
            field_8: a4
        };
        return <uu_join::CaseInsensitiveSlice as core::cmp::Ord>::cmp(&v0, &v1);
    } else {
        v3 = a2 - a4;
        if a2 < a4 {
            v4 = a2;
        } else {
            v4 = a4;
        }
        v5 = memcmp(a1, a3, v4);
        if v5 {
            v6 = v5;
        } else {
            v6 = v3;
        }
        return v5 & 0xffffff00 | (v6 > 0) - (v6 < 0);
    }
}
