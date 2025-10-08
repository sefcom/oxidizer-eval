
  fn bat::preprocessor::strip_ansi::h73d81d147ad28998(arg1: *mut i128, arg2: *mut i8, arg3: i64) -> i64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h2ab28548f23fa4ab(arg3, 1, 1);
    let mut var_b8: i64 = rax;
    let var_b0: i64 = rdx;
    let result: i64 = 0;
    let mut var_98: *mut i8 = arg2;
    let var_90: i64 = arg3;
    let var_88: *mut i8 = arg2;
    let var_80: *mut c_void = &arg2[arg3];
    let var_78: i64 = 0;
    let var_68: i32 = 0x110001;
    let var_58: i64;
    let var_50: i64;
    
    loop
    {
        let mut var_60: i64;
        _$LT$bat..vscreen..EscapeSequenceOffsetsIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h292aaa547b62c7bf(&var_60, &var_98);
        let rax_2: i64 = var_60;
        
        if rax_2 != 0
        {
            if rax_2 == 5
            {
                arg1[1] = result;
                *arg1 = var_b8;
                return result;
            }
        }
        else
        {
            let mut rax_3: *mut c_void;
            let mut rdx_2: *mut c_void;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(var_58, var_50, arg2, arg3);
            
            if rax_3 == 0
            {
                break;
            }
            
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(&var_b8, rax_3, rdx_2.byte_offset(rax_3));
        }
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, var_58, var_50);
    /* no return */
}
