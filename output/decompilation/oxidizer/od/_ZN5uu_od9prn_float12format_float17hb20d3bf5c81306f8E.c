fn uu_od::prn_float::format_float(a0: i64, a1: i16, a2: i64) -> u64 {
    let v12: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x38]
    let v14: u256;  // ymm0
    let v15: alloc::vec::Vec<u8, alloc::alloc::Global>;  // xmm1
    let v16: &mut [u8];  // xmm1lq
    let v17: u64;  // rax
    let v19: u64;  // r9
    let v20: u128;  // xmm0
    let v21: u64;  // xmm0lq
    let v22: u64;  // cc_ndep
    let v23: core::fmt::rt::Argument;  // ebx
    let v27: core::fmt::Arguments;  // rsi

    v15 = v14;
    v16 = v15 as u64;
    v17 = v14;
    if (9223372036854775807 & v17) != 0x7ff0000000000000 {
        v19 = v17;
        if (v19 & 0x7ff0000000000000) && (v19 & 0x7ff0000000000000) != 0x7ff0000000000000 {
            v20 = 170141183460469231722463931679029329919 & v15;
            v21 = v20;
            v12 = v15;
            log10(v21);
            floor();
            __powidf2((_ccall(11, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v22) as char ? BinaryOp MinV : 0));
            if (v23 < a2 & (v23 < 0 ^ 1)) && a2 + ~(v23) as u64 > 65535 {
                panic!("Formatting argument out of range");
            }
        }
    }
    return core::option::Option<T>::map_or_else(a0, v27);
}
