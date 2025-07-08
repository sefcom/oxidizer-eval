
  fn uu_shuf::parse_head_count::h8e9cdbfd7a5f28a8(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let mut var_b8: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hce8092579b78d193(&var_b8, arg2);
    let mut i: i64;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h500d15644f3f8d52(&i, &var_b8);
    let mut r14: i64 = -1;
    
    while i != -0x8000000000000000
    {
        let var_e0: i64;
        let var_f8_1: i64 = var_e0;
        let mut var_108: i128 = i;
        let mut var_d8: i8;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_d8, *var_108[8], var_e0);
        
        if var_d8 != 0
        {
            let zmm0_2: i128 = var_108;
            let mut var_50: i64 = 0;
            let var_48_1: i128 = zmm0_2;
            let var_38_1: i8 = 1;
            let mut var_c8: *mut i64 = &var_50;
            let var_c0_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            let mut var_80: *mut *mut c_void = &data_537d48;
            let var_78_1: i64 = 1;
            let var_60_1: i64 = 0;
            let var_70_1: *mut *mut i64 = &var_c8;
            let var_68_1: i64 = 1;
            let mut var_98: i128;
            core::option::Option$LT$T$GT$::map_or_else::h7c94a57f03ee0317(&var_98, &var_80);
            let var_88: i64;
            arg1[2] = var_88;
            *arg1 = var_98;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::heff478339c936245(&var_108);
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hd4042d487b460da7(&var_b8);
            return arg1;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::heff478339c936245(&var_108);
        let var_d0: i64;
        r14 = core::cmp::min_by::h9901c89ba00e38af(r14, var_d0);
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h500d15644f3f8d52(&i, &var_b8);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hd4042d487b460da7(&var_b8);
    arg1[1] = r14;
    *arg1 = -0x8000000000000000;
    arg1
}
