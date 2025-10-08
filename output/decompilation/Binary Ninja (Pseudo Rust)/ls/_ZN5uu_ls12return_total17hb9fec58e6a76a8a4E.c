
  fn uu_ls::return_total::hb9fec58e6a76a8a4(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: *mut c_void, arg5: *mut c_void) -> u64

{
    let mut var_b0: *mut c_void;
    let mut rbx: *mut c_void;
    let mut r15: u64;
    
    if arg3 != 0
    {
        let r13_1: i64 = *arg4.byte_offset(0xd8);
        let mut i_1: i64 = arg3 * 0x130;
        r15 = 0;
        let rbp_1: i8 = *arg4.byte_offset(0xf9);
        let mut i: i64;
        
        do
        {
            let mut rax_1: *mut c_void =
                uu_ls::PathData::get_metadata::h14c40f15e3077b4f(arg2, arg5);
            var_b0 = rax_1;
            
            if rax_1 != 0
            {
                rax_1 = &var_b0;
            }
            
            r15 += core::option::Option$LT$T$GT$::map_or::hffc32c0b19950d04(rax_1, r13_1, rbp_1);
            arg2 += 0x130;
            i = i_1;
            i_1 -= 0x130;
        } while i != 0x130;
        rbx = arg4;
        
        if *rbx.byte_offset(0xf6) != 0
        {
            goto 'label_59c023;
        }
        
        goto 'label_59c061;
    }
    
    r15 = 0;
    rbx = arg4;
    let mut result: u64;
    
    if *rbx.byte_offset(0xf6) == 0
    {
        'label_59c061:
        let mut var_48: ();
        uu_ls::display_size::hb2e480a0d8619531(&var_48, r15, *rbx.byte_offset(0xf9));
        let mut var_80: *mut c_void = &var_48;
        let var_78_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        let var_70_1: *mut c_void = rbx.byte_offset(0x102);
        let var_68_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hd41883bc456718a9;
        var_b0 = &data_686bf8;
        let var_a8_1: i64 = 2;
        let var_90_1: i64 = 0;
        let var_a0_1: *mut *mut c_void = &var_80;
        let var_98_1: i64 = 2;
        let mut var_60: i128;
        core::option::Option$LT$T$GT$::map_or_else::h69a0b1154707aabf(&var_60, &var_b0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_48);
        let result_1: u64;
        result = result_1;
        arg1[2] = result;
        *arg1 = var_60;
    }
    else
    {
        'label_59c023:
        let mut rdx_1: i64;
        result = uu_ls::dired::indent::h7abdb3264981e476(arg5);
        
        if result == 0
        {
            goto 'label_59c061;
        }
        
        arg1[1] = result;
        arg1[2] = rdx_1;
        *arg1 = -0x8000000000000000;
    }
    
    result
}
