fn uu_cp::backup_dest(a0: u64, a1: u32, a2: u32, a3: u64, a4: u32, a5: u32) -> long long {
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v5: u64;  // rdx
    let v6: u64;  // rax

    v0 = v2;
    if a5 {
        v3 = std::fs::rename(a1, a2, a3, a4);
        if v3 {
            return struct16 {
                field_0: 9223372036854775809
                field_8: v3
            };
        }
    } else if (std::fs::copy(a1, a2, a3, a4) & 1) {
        return struct16 {
            field_0: 9223372036854775809
            field_8: v5
        };
    }
    v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 8, a3, a4);
    return struct8 {
        field_0: 9223372036854775820
    };
}
