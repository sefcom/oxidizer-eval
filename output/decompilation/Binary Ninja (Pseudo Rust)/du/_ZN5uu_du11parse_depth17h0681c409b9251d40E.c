
  fn uu_du::parse_depth::h0681c409b9251d40(arg1: *mut i64, arg2: *mut i8, arg3: u64, arg4: i8, arg5: i64 @ rax) -> *mut i64

{
    let mut rax_1: i64;
    let mut rcx: i64;
    
    if arg2 == 0
    {
        rcx = 0;
        'label_4f40b8:
        arg1[1] = rcx;
        arg1[2] = arg5;
        rax_1 = 0;
    }
    else
    {
        let mut var_40: i8;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_40, arg2, arg3);
        let mut var_38: i64;
        
        if var_40 == 0
        {
            if arg4 == 0
            {
                arg5 = var_38;
                rcx = 1;
                goto 'label_4f40b8;
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1383527df360b9cf(
                &var_38, arg2, arg3);
            var_40 = 1;
        }
        else if arg4 != 0
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1383527df360b9cf(
                &var_38, arg2, arg3);
            var_40 = 1;
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1383527df360b9cf(
                &var_38, arg2, arg3);
            var_40 = 0;
        }
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h19aedf1648b3dc3b(&var_40);
        arg1[2] = &data_584558;
        rax_1 = 1;
    }
    *arg1 = rax_1;
    arg1
}
