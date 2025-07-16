fn uu_od::prn_float::format_flo32(a0: i32) -> long long {
    let v17: u64;  // xmm0lq
    let v18: u64;  // xmm1lq
    let v19: u64;  // rdx

    v18 = 9223372034707292159 & v17;
    if ((BinaryOp CmpF & 69) >> 6 & 1) != 1 && v18 && !(v17 & 0x7f800000) {
        return core::option::Option<T>::map_or_else(v19);
    }
    return uu_od::prn_float::format_float(a0, 14, 8);
}
