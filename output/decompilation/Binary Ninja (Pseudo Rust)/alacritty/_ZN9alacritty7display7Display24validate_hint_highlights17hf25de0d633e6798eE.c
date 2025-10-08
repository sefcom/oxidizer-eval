
  fn alacritty::display::Display::validate_hint_highlights::hf25de0d633e6798e(arg1: *mut c_void, arg2: i32) -> i64

{
    let rdi: i64 = *arg1.byte_offset(0x798);
    let mut var_70: i64 = 0;
    let var_68: i64 = 2;
    let var_60: *mut c_void = arg1.byte_offset(0x728);
    let var_58: *mut c_void = arg1.byte_offset(0x7c0);
    let var_50: i8 = 1;
    let var_48: *mut c_void = arg1.byte_offset(0x760);
    let var_40: *mut c_void = arg1.byte_offset(0x7c8);
    let var_38: i8 = 0;
    let mut var_98: *mut i64;
    let mut result: i64 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h3691be2fc57bbae7(&var_98, &var_70);
    let i_1: i8;
    let mut i: i8 = i_1;
    
    if i != 2
    {
        do
        {
            let r12_1: *mut i64 = var_98;
            
            if r12_1[6] != 2
            {
                let rax_5: i64 = r12_1[2];
                let rcx_1: i32 = r12_1[3];
                let r15_1: i64 = r12_1[4];
                let r14_1: i32 = r12_1[5];
                let var_90: *mut i64;
                let rsi_3: i64 = *var_90;
                *var_90 = rsi_3 + 1;
                
                if rsi_3 != 0
                {
                    let mut rax_6: i64;
                    
                    if rcx_1 + arg2 < 0
                    {
                        rax_6 = 0;
                    }
                    else
                    {
                        let var_a8_1: u64 = rcx_1 + arg2;
                        let var_a0_1: i64 = rax_5;
                        rax_6 = 1;
                    }
                    
                    let mut var_b0: i64 = rax_6;
                    let mut var_c8: i8;
                    core::option::Option$LT$T$GT$::filter::h004bc68bf47f05d7(&var_c8, &var_b0, rdi);
                    let mut r13_1: i64 = 0;
                    let mut rbp_1: i64 = 0;
                    let var_c0: i64;
                    let var_b8: i64;
                    
                    if var_c8 != 0
                    {
                        r13_1 = var_b8;
                        rbp_1 = var_c0;
                    }
                    
                    let mut rax_7: i64 = 0;
                    
                    if r14_1 + arg2 >= 0
                    {
                        let var_a8_2: u64 = r14_1 + arg2;
                        let var_a0_2: i64 = r15_1;
                        rax_7 = 1;
                    }
                    
                    var_b0 = rax_7;
                    core::option::Option$LT$T$GT$::filter::h004bc68bf47f05d7(&var_c8, &var_b0, rdi);
                    let mut rcx_4: i64;
                    let mut r8_1: i64;
                    
                    if var_c8 == 0
                    {
                        r8_1 = *arg1.byte_offset(0x7a0) - 1;
                        rcx_4 = rdi - 1;
                    }
                    else
                    {
                        rcx_4 = var_c0;
                        r8_1 = var_b8;
                    }
                    
                    if alacritty::display::damage::FrameDamage::intersects::h58f384c2d23e8aa8(
                        arg1.byte_offset(0x18), rbp_1, r13_1, rcx_4, r8_1) != 0
                    {
                        if (i & 1) != 0 && *arg1.byte_offset(0x415) != 0
                        {
                            *arg1.byte_offset(0x415) = 0;
                            winit::window::Window::set_cursor::h058b386c12dba32c(
                                *arg1.byte_offset(0x340), *arg1.byte_offset(0x348), 0);
                        }
                        
                        *arg1.byte_offset(0x48) = 1;
                        core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..display..hint..HintMatch$GT$$GT$::ha95ebafd6b78edef(r12_1);
                        r12_1[6] = 2;
                    }
                }
            }
            
            result = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h3691be2fc57bbae7(&var_98, &var_70);
            i = i_1;
        } while i != 2;
    }
    
    result
}
