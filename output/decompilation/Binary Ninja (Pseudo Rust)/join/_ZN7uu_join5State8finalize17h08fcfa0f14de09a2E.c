
  fn uu_join::State::finalize::h08fcfa0f14de09a2(arg1: *mut i64, arg2: *mut i64, arg3: *mut c_void, arg4: *mut c_void) -> u64

{
    if arg1[2] != 0
    {
        if *arg1.byte_offset(0x59) != 0
            && uu_join::State::print_first_line::hca78e112704afaab(arg1, arg2, arg4) != 0
        {
            return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        }
        
        let mut var_98: i64;
        uu_join::State::next_line::hd68ae9e4628c6bfa(&var_98, arg1, arg3);
        let rax_3: i64 = var_98;
        let var_90: i128;
        let mut var_68: i128 = var_90;
        
        if rax_3 == -0x7fffffffffffffff
        {
            return alloc::boxed::Box$LT$T$GT$::new::hbde49e4af2e5852b(&var_68);
        }
        
        let var_78: i128;
        let var_b8_1: i128 = var_78;
        let mut var_d0_1: i128 = var_68;
        let var_80: i64;
        let var_c0_1: i64 = var_80;
        let mut var_d8: i64 = rax_3;
        
        if rax_3 != -0x8000000000000000
        {
            let mut var_48: i128;
            
            loop
            {
                if *arg1.byte_offset(0x59) != 0
                    && uu_join::State::print_line::he9418c62082595ef(arg1, arg2, &var_d8, arg4)
                    != 0
                {
                    let result: u64 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h0fad273de0c46d5d(&var_d8);
                    return result;
                }
                
                var_98 = var_d8;
                uu_join::State::reset::hf11a3d581915b2af(arg1, &var_98);
                uu_join::State::next_line::hd68ae9e4628c6bfa(&var_98, arg1, arg3);
                let rax_5: i64 = var_98;
                var_48 = var_d0_1;
                
                if rax_5 == -0x7fffffffffffffff
                {
                    break;
                }
                
                let var_c0_2: i64 = var_80;
                var_d0_1 = var_48;
                var_d8 = rax_5;
                
                if rax_5 == -0x8000000000000000
                {
                    goto 'label_463fe9;
                }
            }
            
            return alloc::boxed::Box$LT$T$GT$::new::hbde49e4af2e5852b(&var_48);
        }
        
        'label_463fe9:
        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h0fad273de0c46d5d(&var_d8);
    }
    
    0
}
