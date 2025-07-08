
  fn uu_od::prn_float::format_flo32::h9997a42b85d61a4b(arg1: [u32; 0x4] @ zmm0) -> *mut i128

{
    let mut var_8c: u32 = arg1[0];
    let temp0: [u32; 0x4] = _mm_and_ps(data_40db40, arg1);
    let rdi: *mut i128;
    
    if temp0[0] == inff || temp0[0] == 0 || (arg1[0] & 0x7f800000) != 0
    {
        arg1[0] = arg1[0];
        /* tailcall */
        return uu_od::prn_float::format_float::h341a0cfde1a47520(rdi, 0xe, 8, arg1);
    }
    
    let mut var_88: *mut i32 = &var_8c;
    let var_80: fn(arg1: *mut i128, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..LowerExp$u20$for$u20$f32$GT$::fmt::h814b1cab8d475c50;
    let var_78: i64 = 0xe;
    let var_70: i64 = 0;
    let mut var_38: i64 = 2;
    let var_28: i64 = 1;
    let var_20: i64 = 1;
    let var_18: i64 = 0;
    let var_10: i64 = 0x20;
    let var_8: i8 = 3;
    let mut var_68: *mut i128 = &data_40dad0;
    let var_60: i64 = 1;
    let var_48: *mut i64 = &var_38;
    let var_40: i64 = 1;
    let var_58: *mut *mut i32 = &var_88;
    let var_50: i64 = 2;
    core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(rdi, &var_68)
}
