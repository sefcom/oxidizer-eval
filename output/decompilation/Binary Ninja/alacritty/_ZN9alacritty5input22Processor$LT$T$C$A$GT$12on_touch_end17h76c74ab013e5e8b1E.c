
  int64_t alacritty::input::Processor$LT$T$C$A$GT$::on_touch_end::h76c74ab013e5e8b1(int64_t* arg1, void* arg2)

{
    alacritty::input::Processor$LT$T$C$A$GT$::on_touch_motion::hf382ca82a44bfd89();
    int64_t* rbx = arg1[4];
    int64_t result = *rbx - 4;
    int64_t result_1 = 3;
    
    if (result < 7)
        result_1 = result;
    
    int16_t rcx_3;
    
    switch (result_1)
    {
        case 0:
        {
            return result;
            break;
        }
        case 1:
        {
            rcx_3 =
                core::ptr::drop_in_place$LT$alacritty..event..TouchPurpose$GT$::ha715079efdd062ac(
                rbx);
            *rbx = 4;
            break;
        }
        case 2:
        case 4:
        {
            label_85ac97:
            result =
                core::ptr::drop_in_place$LT$alacritty..event..TouchPurpose$GT$::ha715079efdd062ac(
                rbx);
            *rbx = 4;
            return result;
            break;
        }
        case 3:
        {
            int64_t r14_1 = rbx[6];
            void* rax_1;
            void* rcx_2;
            
            if (r14_1 != *(arg2 + 0x30))
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
            
            int64_t r15_2 = *rcx_2;
            uint128_t zmm0_1 = *rax_1;
            int128_t zmm1_1 = *(rax_1 + 0x10);
            int128_t zmm2_1 = *(rax_1 + 0x20);
            result =
                core::ptr::drop_in_place$LT$alacritty..event..TouchPurpose$GT$::ha715079efdd062ac(
                rbx);
            *rbx = 8;
            *(rbx + 8) = zmm0_1;
            *(rbx + 0x18) = zmm1_1;
            *(rbx + 0x28) = zmm2_1;
            rbx[7] = r14_1;
            rbx[8] = r15_2;
            return result;
            break;
        }
        case 5:
        {
            uint64_t var_50_1 = rbx[5];
            uint64_t var_58_1 = rbx[6];
            core::ptr::drop_in_place$LT$alacritty..event..TouchPurpose$GT$::ha715079efdd062ac(rbx);
            *rbx = 4;
            rcx_3 = alacritty::input::Processor$LT$T$C$A$GT$::mouse_input::h30bea7cf2096a377(arg1, 
                0, 0, 
                alacritty::input::Processor$LT$T$C$A$GT$::mouse_moved::hb35e8a462d92119a(arg1, 
                    var_50_1, var_58_1));
            break;
        }
        case 6:
        {
            result = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h458f590bc9374091(
                &rbx[1], arg2 + 0x30);
            
            if (rbx[4])
                return result;
            
            goto label_85ac97;
        }
    }
    
    /* tailcall */
    return alacritty::input::Processor$LT$T$C$A$GT$::mouse_input::h30bea7cf2096a377(arg1, 1, 0, 
        rcx_3);
}
