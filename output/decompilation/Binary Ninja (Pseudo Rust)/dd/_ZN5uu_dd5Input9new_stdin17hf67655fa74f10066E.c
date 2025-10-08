
  fn uu_dd::Input::new_stdin::hf67655fa74f10066(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    uu_dd::Source::stdin_as_file::h88ed056d97613b9f();
    let mut var_e8: i64 = 1;
    let mut rax_1: u64;
    let mut rdx_1: *mut *mut c_void;
    
    if *arg2.byte_offset(0x42) == 0
    {
        'label_48fa6b:
        let rsi_1: i64 = *arg2.byte_offset(0x80);
        let mut rax_3: i8;
        
        if rsi_1 != 0
        {
            rax_3 = uu_dd::Source::skip::h56a70907a2f0c0f8(&var_e8, rsi_1);
        }
        
        if rsi_1 != 0 && (rax_3 & 1) != 0
        {
            rax_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            goto 'label_48fae6;
        }
        
        arg1[1] = var_e8;
        arg1[2] = arg2;
        *arg1 = 0;
    }
    else
    {
        let mut var_c8: i32;
        std::fs::File::metadata::h5e84e533705f8c98(&var_c8, &*var_e8[4]);
        
        if var_c8 != 2
        {
            let var_90: i32;
            
            if (0xf000 & var_90) == 0x4000
            {
                goto 'label_48fa6b;
            }
            
            let mut var_e0: i128;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h074386e79a8fa9e7(&var_e0, "setting flags for 'standard inpu…", 0x33);
            let var_d0: i64;
            let var_b8_1: i64 = var_d0;
            var_c8 = var_e0;
            let var_b0_1: i32 = 1;
            rax_1 = alloc::boxed::Box$LT$T$GT$::new::he73dee4c808ee59f(&var_c8);
            rdx_1 = &data_53dcd8;
            goto 'label_48fae6;
        }
        
        rax_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        'label_48fae6:
        arg1[1] = rax_1;
        arg1[2] = rdx_1;
        *arg1 = 1;
        core::ptr::drop_in_place$LT$uu_dd..Source$GT$::h0f98b01c459a3648(*var_e8[4]);
    }
    arg1
}
