fn uu_join::Input<Sep>::compare(a0: i8, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u128;  // [bp-0x28]
    let v1: u128;  // [bp-0x18]
    let v2: u64;  // [bp-0x8]
    let v4: u64;  // rbx
    let v5: u64;  // rbx
    let v6: struct8;  // 4096
    let v7: u64;  // rax
    let v8: u64;  // rax

    if !(a1 && a3) {
        return (!a1 ? -(0 < a3) : 1);
    }
    v2 = v4;
    if a0 {
        v0 = struct16 {
            field_0: a1
            field_8: a2
        };
        v1 = struct16 {
            field_0: a3
            field_8: a4
        };
        return <uu_join::CaseInsensitiveSlice as core::cmp::Ord>::cmp(&v0, &v1);
    }
    v5 = a2 - a4;
    if a2 < a4 {
        v6 = a2;
    } else {
        v6 = a4;
    }
    v7 = memcmp(a1, a3, v6);
    if v7 {
        v8 = v7;
    } else {
        v8 = v5;
    }
    return (v8 >= 0 ? v8 : 255);
    return (!a1 ? -(0 < a3) : 1);
}
