
  fn uu_stty::print_in_save_format::he259ed46e6739654(arg1: *mut i128) -> *mut c_void

{
    let mut var_b8: i32 = *arg1.byte_offset(0x68);
    let mut var_b4: i32 = *arg1.byte_offset(0x6c);
    let mut var_bc: i32 = arg1[7];
    let mut var_40: i32 = *arg1.byte_offset(0x74);
    let mut var_b0: *mut i32 = &var_b8;
    let var_a8: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$i32$GT$::fmt::h4196a9ba243f0c82;
    let var_a0: *mut i32 = &var_b4;
    let mut var_98: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$i32$GT$::fmt::h4196a9ba243f0c82;
    let var_90: *mut i32 = &var_bc;
    let var_88: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$i32$GT$::fmt::h4196a9ba243f0c82;
    let var_80: *mut i32 = &var_40;
    let var_78: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$i32$GT$::fmt::h4196a9ba243f0c82;
    let mut var_70: *mut c_void = &data_4e2f68;
    let var_68: i64 = 4;
    let mut var_50: i64 = 0;
    let mut var_60: *mut *mut i32 = &var_b0;
    let var_58: i64 = 4;
    std::io::stdio::_print::h5e446ff973c02de6(&var_70);
    var_50 = arg1[1];
    var_60 = *arg1;
    var_70 = nullptr;
    let var_68_1: i64 = 0x20;
    let mut rax_4: i8;
    let mut rdx: i8;
    rax_4 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::hc81e3e552d30d6ce(&var_70);
    
    if (rax_4 & 1) != 0
    {
        let mut rax_5: i8;
        
        do
        {
            var_bc = rdx;
            var_40 = &var_bc;
            let var_38_1: fn(arg1: *mut i8, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$i8$GT$::fmt::hb8ba8748e41ecb7b;
            var_b0 = &data_4e2fa8;
            let var_a8_1: i64 = 1;
            let var_90_1: i64 = 0;
            let var_a0_1: *mut i32 = &var_40;
            var_98 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_b0);
            rax_5 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::hc81e3e552d30d6ce(&var_70);
        } while (rax_5 & 1) != 0;
    }
    
    var_b0 = &data_4e2ac0;
    let var_a8_2: i64 = 1;
    let var_a0_2: i64 = 8;
    var_98 = {0};
    std::io::stdio::_print::h5e446ff973c02de6(&var_b0)
}
