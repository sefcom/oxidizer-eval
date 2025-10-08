
  fn alacritty::input::Processor$LT$T$C$A$GT$::on_touch_end::h76c74ab013e5e8b1(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    alacritty::input::Processor$LT$T$C$A$GT$::on_touch_motion::hf382ca82a44bfd89();
    let rbx: *mut i64 = arg1[4];
    let mut result: i64 = *rbx - 4;
    let mut result_1: i64 = 3;
    
    if result < 7
    {
        result_1 = result;
    }
    
    let mut rcx_3: i16;
    
    match result_1
    {
        0 =>
        {
            return result;
        }
        1 =>
        {
            rcx_3 =
                core::ptr::drop_in_place$LT$alacritty..event..TouchPurpose$GT$::ha715079efdd062ac(
                rbx);
            *rbx = 4;
        }
        2 | 4 =>
        {
            'label_85ac97:
            result =
                core::ptr::drop_in_place$LT$alacritty..event..TouchPurpose$GT$::ha715079efdd062ac(
                rbx);
            *rbx = 4;
            return result;
        }
        3 =>
        {
            let mut r14_1: i64 = rbx[6];
            let mut rax_1: *mut c_void;
            let mut rcx_2: *mut c_void;
            
            if r14_1 != *arg2.byte_offset(0x30)
            {
                rcx_2 = &rbx[7];
                rax_1 = rbx;
            }
            else
            {
                rax_1 = &rbx[8];
                rcx_2 = &rbx[0xf];
                r14_1 = rbx[0xe];
            }
            
            let r15_2: i64 = *rcx_2;
            let zmm0_1: u128 = *rax_1;
            let zmm1_1: i128 = *rax_1.byte_offset(0x10);
            let zmm2_1: i128 = *rax_1.byte_offset(0x20);
            result =
                core::ptr::drop_in_place$LT$alacritty..event..TouchPurpose$GT$::ha715079efdd062ac(
                rbx);
            *rbx = 8;
            *rbx.byte_offset(8) = zmm0_1;
            *rbx.byte_offset(0x18) = zmm1_1;
            *rbx.byte_offset(0x28) = zmm2_1;
            rbx[7] = r14_1;
            rbx[8] = r15_2;
            return result;
        }
        5 =>
        {
            let var_50_1: u64 = rbx[5];
            let var_58_1: u64 = rbx[6];
            core::ptr::drop_in_place$LT$alacritty..event..TouchPurpose$GT$::ha715079efdd062ac(rbx);
            *rbx = 4;
            rcx_3 = alacritty::input::Processor$LT$T$C$A$GT$::mouse_input::h30bea7cf2096a377(arg1, 
                0, 0, 
                alacritty::input::Processor$LT$T$C$A$GT$::mouse_moved::hb35e8a462d92119a(arg1, 
                    var_50_1, var_58_1));
        }
        6 =>
        {
            result = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h458f590bc9374091(
                &rbx[1], arg2.byte_offset(0x30));
            
            if rbx[4] != 0
            {
                return result;
            }
            
            goto 'label_85ac97;
        }
    }
    
    /* tailcall */
    alacritty::input::Processor$LT$T$C$A$GT$::mouse_input::h30bea7cf2096a377(arg1, 1, 0, rcx_3)
}
