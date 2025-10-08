
  fn alacritty::input::Processor$LT$T$C$A$GT$::on_touch_motion::hf382ca82a44bfd89(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let var_80: u64 = *arg2.byte_offset(0x20);
    let var_88: u64 = *arg2.byte_offset(0x28);
    let mut result: i64;
    
    loop
    {
        let r15_1: *mut i32 = arg1[4];
        result = *r15_1 - 4;
        
        if result >= 7
        {
            result = 3;
        }
        
        if result != 5
        {
            /* jump -> *(&data_4f2bc4).byte_offset(result << 2) + &data_4f2bc4 */
        }
        
        let zmm4: i64 = *r15_1.byte_offset(0x28);
        let mut zmm3: u128 = *r15_1.byte_offset(0x30);
        let mut zmm0: u128;
        zmm0 = var_80 - zmm4;
        let mut zmm1: [u64; 0x2] = data_4e7800;
        let mut zmm2: u128 = 0x4034000000000000;
        
        if _mm_and_pd(zmm0, zmm1) > zmm2
        {
            zmm0 = *r15_1.byte_offset(8);
            zmm1 = *r15_1.byte_offset(0x18);
            zmm2 = *r15_1.byte_offset(0x28);
            let var_30_1: u64 = zmm3;
            zmm3 = *r15_1.byte_offset(0x38);
            core::ptr::drop_in_place$LT$alacritty..event..TouchPurpose$GT$::ha715079efdd062ac(
                r15_1);
            *r15_1 = 5;
            *r15_1.byte_offset(0x38) = zmm3;
            *r15_1.byte_offset(0x28) = zmm2;
            *r15_1.byte_offset(0x18) = zmm1;
            *r15_1.byte_offset(8) = zmm0;
            alacritty::input::Processor$LT$T$C$A$GT$::mouse_input::h30bea7cf2096a377(arg1, 0, 0, 
                alacritty::input::Processor$LT$T$C$A$GT$::mouse_moved::hb35e8a462d92119a(arg1, 
                    zmm4, var_30_1));
        }
        else
        {
            zmm0 = var_88 - zmm3;
            
            if _mm_and_pd(zmm0, zmm1) <= zmm2
            {
                break;
            }
            
            zmm0 = *r15_1.byte_offset(8);
            zmm1 = *r15_1.byte_offset(0x18);
            zmm2 = *r15_1.byte_offset(0x28);
            zmm3 = *r15_1.byte_offset(0x38);
            core::ptr::drop_in_place$LT$alacritty..event..TouchPurpose$GT$::ha715079efdd062ac(
                r15_1);
            *r15_1 = 6;
            *r15_1.byte_offset(0x38) = zmm3;
            *r15_1.byte_offset(0x28) = zmm2;
            *r15_1.byte_offset(0x18) = zmm1;
            *r15_1.byte_offset(8) = zmm0;
        }
    }
    
    result
}
