fn forc_crypto::keys::vanity::validate_hex_string(a0: u64, a1: u64, a2: u32) -> long long {
    let v0: struct16;  // [bp-0x28]
    let v2: u64;  // rdi
    let v3: struct24;  // rax

    v0 = struct16 {
        field_0: a1
        field_8: a1 + a2
    };
    v2 = a0 + 8;
    if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0), a1) {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v2, a1, a2);
    } else {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v2, "Pattern must contain only hex characters (0-9, a-f)");
    }
    return struct8 {
        field_0: v3
    };
}
