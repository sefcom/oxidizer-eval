fn uu_od::prn_float::format_float(a0: i64, a1: i64, a2: i256) -> long long {
    let v19: u128;  // [bp-0x38]
    let v21: u256;  // ymm0
    let v22: u128;  // xmm1
    let v23: u64;  // xmm1lq
    let v24: u64;  // rax
    let v25: u64;  // rdx
    let v26: u64;  // rcx
    let v27: u64;  // cc_ndep
    let v28: u64;  // cc_ndep
    let v29: u128;  // xmm0
    let v30: u256;  // ymm0
    let v34: struct24;  // rsi
    let v36: u64;  // rdx, Other Possible Types: struct24

    v22 = v21;
    v23 = v22;
    v24 = v21;
    v36 = a2;
    if ((BinaryOp CmpF & 69) >> 2 & 1) {
        return core::option::Option<T>::map_or_else(v34, v36) as u64;
    }
    v25 = 0x7ff0000000000000;
    v26 = v24 & 0x7ff0000000000000;
    if !(amd64g_calculate_condition(4, 32, v24 * 0x1000, v24 * 0x800, v27) as char) {
        v36 = v25;
        if !(!v26) {
            goto LABEL_4d525a;
        }
    } else {
        v36 = v25;
        if v26 && !((v36 = v25, v26 == 0x7ff0000000000000)) {
LABEL_4d525a:
            v29 = 170141183460469231722463931679029329919 & v22;
            v30 = (v21 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183460469231722463931679029329919) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29;
            v19 = v22;
            log10(v30);
            floor(v30);
            __powidf2((amd64g_calculate_condition(11, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v28) as char ? BinaryOp MinV : 0));
        }
    }
    return core::option::Option<T>::map_or_else(v34, v36) as u64;
}
