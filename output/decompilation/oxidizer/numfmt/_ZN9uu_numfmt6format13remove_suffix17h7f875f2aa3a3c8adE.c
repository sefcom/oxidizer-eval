fn uu_numfmt::format::remove_suffix(a0: u64, a1: u8, a2: u8, a3: u8) -> long long {
    let v0: u8;  // [bp-0x79]
    let v1: u64;  // [bp-0x70]
    let v2: u64;  // [bp-0x68]
    let v4: u64;  // xmm0lq
    let v5: u8;  // al
    let v6: u64;  // r8
    let v7: u64;  // rax
    let v8: u64;  // rcx

    if a2 == 2 {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v4
        };
    }
    v5 = a3 - 2;
    v6 = (v5 < 4 ? v5 : 2);
    if (a2 & 1) {
        if v5 != 3 {
            return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "This suffix is unsupported for specified unit");
        }
    } else {
        if (v5 < 4 ? v5 : 2) == 2 {
            return format!("missing 'i' suffix in input: '{}{}' (e.g Ki/Mi/Gi)", &vvar_27{reg 224}, &v1 as u64);
        } else if v5 != 3 {
            return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "This suffix is unsupported for specified unit");
        }
    }
    v0 = a1;
    v1 = v8;
    v2 = v7;
    return format!("rejecting suffix in input: '{}{}{}' (consider using --from)", &vvar_27{reg 224}, &v0, &v1);
}
