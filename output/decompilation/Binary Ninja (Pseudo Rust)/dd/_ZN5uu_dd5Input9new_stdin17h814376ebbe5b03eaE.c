
  fn uu_dd::Input::new_stdin::h814376ebbe5b03ea(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    uu_dd::Source::stdin_as_file::h2487bb1f6c82b1dd();
    let mut var_e8: i64 = 1;
    let mut var_c0: i32;
    std::fs::File::metadata::he899a18112e6f19e(&var_c0, &*var_e8[4]);
    let mut rax_3: *mut i128;
    let mut rdx_2: i64;
    
    if var_c0 != 2
    {
        let var_88: i32;
        
        if (0xf000 & var_88) == 0x8000 && *arg2.byte_offset(0x42) != 0
        {
            let mut rax_2: i64;
            let mut rdx_1: i64;
            rax_2 = uucore::util_name::h60d842bf27b05e82();
            let mut var_d0: i64 = rax_2;
            let var_c8_1: i64 = rdx_1;
            let mut var_e0: *mut i64 = &var_d0;
            let var_d8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            var_c0 = &data_561008;
            let var_b8_1: i64 = 2;
            let var_a0_1: i64 = 0;
            let var_b0_1: *mut *mut i64 = &var_e0;
            let mut var_a8_1: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c0);
            var_c0 = &data_561060;
            let var_b8_2: i64 = 1;
            let var_b0_2: i64 = 8;
            var_a8_1 = {0};
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c0);
            rax_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
            goto 'label_4d6b91;
        }
        
        let rsi_1: i64 = *arg2.byte_offset(0x80);
        let mut zmm0_1: i64;
        
        if rsi_1 == 0
        {
            zmm0_1 = data_419580;
        }
        else
        {
            let mut rax_5: i64;
            let mut rdx_3: i64;
            rax_5 = uu_dd::Source::skip::hb4d238ded1ebd635(&var_e8, rsi_1);
            
            if rax_5 != 0
            {
                goto 'label_4d6ac9;
            }
            
            zmm0_1 = var_e8;
        }
        
        arg1[1] = zmm0_1;
        arg1[2] = arg2;
        *arg1 = 0;
    }
    else
    {
        'label_4d6ac9:
        rax_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        'label_4d6b91:
        arg1[1] = rax_3;
        arg1[2] = rdx_2;
        *arg1 = 1;
        core::ptr::drop_in_place$LT$uu_dd..Source$GT$::hdffc88ceb2c212a0(*var_e8[4]);
    }
    arg1
}
