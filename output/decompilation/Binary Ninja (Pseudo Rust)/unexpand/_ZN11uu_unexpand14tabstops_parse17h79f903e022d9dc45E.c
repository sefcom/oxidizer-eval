
  fn uu_unexpand::tabstops_parse::h79f903e022d9dc45(arg1: *mut i64, arg2: i64, arg3: i64) -> *mut c_void

{
    let mut var_68: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_68, 
        arg2, arg3);
    let mut var_b8: i64 = 0;
    let var_b0: i64 = 8;
    let var_a8: i64 = 0;
    let mut var_78: i64 = 0;
    let var_70: i64 = arg3;
    let var_38: i16 = 1;
    
    loop
    {
        let mut rax_1: *mut i8;
        let mut rdx: i64;
        rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::hc3086131f80cc882(&var_78);
        let mut rax_4: i64;
        
        if rax_1 == 0
        {
            let r15_1: i64 = var_b0 + (var_a8 << 3);
            var_78 = var_b0;
            let var_70_1: i64 = r15_1;
            
            if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hfb74872ec2eaf285(&var_78) == 0
            {
                if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h5c45441c9d008661(var_b0, r15_1) & 1) != 0
                {
                    let result: *mut c_void = &arg1[1];
                    *result.byte_offset(0x10) = var_a8;
                    *result = var_b8;
                    *arg1 = 0;
                    return result;
                }
                
                rax_4 = -0x7ffffffffffffffe;
            }
            else
            {
                rax_4 = -0x8000000000000000;
            }
            
            goto 'label_4b193e;
        }
        
        let mut var_a0: i8;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_a0, rax_1, rdx);
        
        if var_a0 != 0
        {
            let var_9f: i8;
            
            if var_9f == 2
            {
                rax_4 = -0x7fffffffffffffff;
                'label_4b193e:
                arg1[1] = rax_4;
                *arg1 = 1;
                return 
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h1b908adb0cd1da04(
                    &var_b8);
            }
            
            let mut rax_6: i64;
            let mut rdx_2: u64;
            rax_6 =
                core::str::_$LT$impl$u20$str$GT$::trim_start_matches::he524a6a972df7d79(rax_1, rdx);
            let mut var_90: i128;
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hde6101a7564f34fb(
                &var_90, rax_6, rdx_2);
            let var_80: i64;
            arg1[3] = var_80;
            *arg1.byte_offset(8) = var_90;
            *arg1 = 1;
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h1b908adb0cd1da04(
                &var_b8);
        }
        
        let var_98: i64;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h7c81b2a5e929de98(&var_b8, var_98);
    }
}
