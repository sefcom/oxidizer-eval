
  fn uu_join::State::finalize::h3e9313ec919a4c47(arg1: *mut i64, arg2: *mut i64, arg3: *mut i8, arg4: *mut c_void) -> *mut i128

{
    if arg1[2] != 0
    {
        if *arg1.byte_offset(0x59) != 0
            && uu_join::State::print_first_line::h7613f1add6e5ed81(arg1, arg2, arg4) != 0
        {
            return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        }
        
        let mut i_1: i64;
        uu_join::State::next_line::hdcd6fa155f18f200(&i_1, arg1, arg3);
        let i_3: i64 = i_1;
        let mut var_a0: i128;
        let mut var_c8_1: i128 = var_a0;
        let var_90: i64;
        let mut var_b8_1: i64 = var_90;
        
        if i_3 == -0x7fffffffffffffff
        {
            'label_47354f:
            *var_a0[8] = var_b8_1;
            i_1 = var_c8_1;
            return alloc::boxed::Box$LT$T$GT$::new::h06a7bb4fb867f987(&i_1);
        }
        
        let var_88: i128;
        let var_50_1: i128 = var_88;
        let mut var_68_1: i128 = var_c8_1;
        let var_58_1: i64 = var_b8_1;
        let mut i_2: i64 = i_3;
        
        if i_3 != -0x8000000000000000
        {
            let var_38_1: i64 = -0x7fffffffffffffff;
            let mut i: i64;
            
            do
            {
                if *arg1.byte_offset(0x59) != 0
                    && uu_join::State::print_line::h1d197a6baae46696(arg1, arg2, &i_2, arg4) != 0
                {
                    let result: *mut i128 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&i_2);
                    return result;
                }
                
                i_1 = i_2;
                uu_join::State::reset::h80c820df90bbe344(arg1, &i_1);
                uu_join::State::next_line::hdcd6fa155f18f200(&i_1, arg1, arg3);
                i = i_1;
                var_c8_1 = var_68_1;
                var_b8_1 = var_90;
                
                if i == var_38_1
                {
                    goto 'label_47354f;
                }
                
                let var_58_2: i64 = var_b8_1;
                var_68_1 = var_c8_1;
                i_2 = i;
            } while i != -0x8000000000000000;
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&i_2);
    }
    
    nullptr
}
