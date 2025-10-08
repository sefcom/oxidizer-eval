
  int64_t alacritty::input::Processor$LT$T$C$A$GT$::on_touch_motion::hf382ca82a44bfd89(int64_t* arg1, void* arg2)

{
    uint64_t var_80 = *(arg2 + 0x20);
    uint64_t var_88 = *(arg2 + 0x28);
    int64_t result;
    
    while (true)
    {
        int32_t* r15_1 = arg1[4];
        result = *r15_1 - 4;
        
        if (result >= 7)
            result = 3;
        
        if (result != 5)
            /* jump -> *(&data_4f2bc4 + (result << 2)) + &data_4f2bc4 */
        
        int64_t zmm4 = *(r15_1 + 0x28);
        uint128_t zmm3 = *(r15_1 + 0x30);
        uint128_t zmm0;
        zmm0 = var_80 - zmm4;
        uint64_t zmm1[0x2] = data_4e7800;
        uint128_t zmm2 = 0x4034000000000000;
        
        if (_mm_and_pd(zmm0, zmm1) > zmm2)
        {
            zmm0 = *(r15_1 + 8);
            zmm1 = *(r15_1 + 0x18);
            zmm2 = *(r15_1 + 0x28);
            uint64_t var_30_1 = zmm3;
            zmm3 = *(r15_1 + 0x38);
            core::ptr::drop_in_place$LT$alacritty..event..TouchPurpose$GT$::ha715079efdd062ac(
                r15_1);
            *r15_1 = 5;
            *(r15_1 + 0x38) = zmm3;
            *(r15_1 + 0x28) = zmm2;
            *(r15_1 + 0x18) = zmm1;
            *(r15_1 + 8) = zmm0;
            alacritty::input::Processor$LT$T$C$A$GT$::mouse_input::h30bea7cf2096a377(arg1, 0, 0, 
                alacritty::input::Processor$LT$T$C$A$GT$::mouse_moved::hb35e8a462d92119a(arg1, 
                    zmm4, var_30_1));
        }
        else
        {
            zmm0 = var_88 - zmm3;
            
            if (_mm_and_pd(zmm0, zmm1) <= zmm2)
                break;
            
            zmm0 = *(r15_1 + 8);
            zmm1 = *(r15_1 + 0x18);
            zmm2 = *(r15_1 + 0x28);
            zmm3 = *(r15_1 + 0x38);
            core::ptr::drop_in_place$LT$alacritty..event..TouchPurpose$GT$::ha715079efdd062ac(
                r15_1);
            *r15_1 = 6;
            *(r15_1 + 0x38) = zmm3;
            *(r15_1 + 0x28) = zmm2;
            *(r15_1 + 0x18) = zmm1;
            *(r15_1 + 8) = zmm0;
        }
    }
    
    return result;
}
