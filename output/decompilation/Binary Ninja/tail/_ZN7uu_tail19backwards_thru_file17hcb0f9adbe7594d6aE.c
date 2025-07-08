
  int128_t* uu_tail::backwards_thru_file::hcb0f9adbe7594d6a(int32_t* arg1, int64_t arg2, char arg3)

{
    void var_58;
    uu_tail::chunks::ReverseChunks::new::hc0b2e059517a0fa7(&var_58, arg1);
    int64_t var_38 = 0;
    int128_t* var_98;
    int128_t* result = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc6ca612b237c00c8(&var_98, &var_58);
    int64_t i;
    
    if (i != -0x8000000000000000)
    {
        int64_t r13_1 = 0;
        
        do
        {
            int128_t* rdx = var_98;
            int128_t var_b8 = i;
            int64_t rcx_1 = *var_b8[8];
            int64_t var_80;
            int64_t var_a8_1 = var_80;
            int64_t var_d0 = rcx_1;
            int64_t var_c0_1 = 0;
            
            if (!rdx && var_80 && *(var_80 + rcx_1 - 1) == arg3)
                _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h57eb2a97e4f62b20(&var_d0);
            
            int64_t var_68_1 = var_c0_1;
            int64_t var_78 = var_d0;
            int64_t var_70_1 = rcx_1 + var_80;
            
            while (true)
            {
                int64_t rax_4;
                char* rdx_1;
                rax_4 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h57eb2a97e4f62b20(&var_78);
                
                if (!rdx_1)
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h284f430dac29ffa9(
                        &var_b8);
                    result = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc6ca612b237c00c8(&var_98, &var_58);
                    break;
                }
                
                if (*rdx_1 == arg3)
                {
                    r13_1 += 1;
                    
                    if (r13_1 >= arg2)
                    {
                        int64_t rax_6;
                        int64_t rdx_3;
                        rax_6 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(arg1, 2, rax_4 + 1);
                        core::result::Result$LT$T$C$E$GT$::unwrap::hc23b1578389952be(rax_6, rdx_3);
                        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h284f430dac29ffa9(&var_b8);
                    }
                }
            }
        } while (i != -0x8000000000000000);
    }
    
    return result;
}
