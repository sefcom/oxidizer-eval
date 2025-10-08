
  int64_t alacritty::display::Display::validate_hint_highlights::hf25de0d633e6798e(void* arg1, int32_t arg2)

{
    int64_t rdi = *(arg1 + 0x798);
    int64_t var_70 = 0;
    int64_t var_68 = 2;
    void* var_60 = arg1 + 0x728;
    void* var_58 = arg1 + 0x7c0;
    char var_50 = 1;
    void* var_48 = arg1 + 0x760;
    void* var_40 = arg1 + 0x7c8;
    char var_38 = 0;
    int64_t* var_98;
    int64_t result = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h3691be2fc57bbae7(&var_98, &var_70);
    char i_1;
    char i = i_1;
    
    if (i != 2)
    {
        do
        {
            int64_t* r12_1 = var_98;
            
            if (r12_1[6] != 2)
            {
                int64_t rax_5 = r12_1[2];
                int32_t rcx_1 = r12_1[3];
                int64_t r15_1 = r12_1[4];
                int32_t r14_1 = r12_1[5];
                int64_t* var_90;
                int64_t rsi_3 = *var_90;
                *var_90 = rsi_3 + 1;
                
                if (rsi_3)
                {
                    int64_t rax_6;
                    
                    if (rcx_1 + arg2 < 0)
                        rax_6 = 0;
                    else
                    {
                        uint64_t var_a8_1 = rcx_1 + arg2;
                        int64_t var_a0_1 = rax_5;
                        rax_6 = 1;
                    }
                    
                    int64_t var_b0 = rax_6;
                    char var_c8;
                    core::option::Option$LT$T$GT$::filter::h004bc68bf47f05d7(&var_c8, &var_b0, rdi);
                    int64_t r13_1 = 0;
                    int64_t rbp_1 = 0;
                    int64_t var_c0;
                    int64_t var_b8;
                    
                    if (var_c8)
                    {
                        r13_1 = var_b8;
                        rbp_1 = var_c0;
                    }
                    
                    int64_t rax_7 = 0;
                    
                    if (r14_1 + arg2 >= 0)
                    {
                        uint64_t var_a8_2 = r14_1 + arg2;
                        int64_t var_a0_2 = r15_1;
                        rax_7 = 1;
                    }
                    
                    var_b0 = rax_7;
                    core::option::Option$LT$T$GT$::filter::h004bc68bf47f05d7(&var_c8, &var_b0, rdi);
                    int64_t rcx_4;
                    int64_t r8_1;
                    
                    if (!var_c8)
                    {
                        r8_1 = *(arg1 + 0x7a0) - 1;
                        rcx_4 = rdi - 1;
                    }
                    else
                    {
                        rcx_4 = var_c0;
                        r8_1 = var_b8;
                    }
                    
                    if (alacritty::display::damage::FrameDamage::intersects::h58f384c2d23e8aa8(
                        arg1 + 0x18, rbp_1, r13_1, rcx_4, r8_1))
                    {
                        if (i & 1 && *(arg1 + 0x415))
                        {
                            *(arg1 + 0x415) = 0;
                            winit::window::Window::set_cursor::h058b386c12dba32c(*(arg1 + 0x340), 
                                *(arg1 + 0x348), 0);
                        }
                        
                        *(arg1 + 0x48) = 1;
                        core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..display..hint..HintMatch$GT$$GT$::ha95ebafd6b78edef(r12_1);
                        r12_1[6] = 2;
                    }
                }
            }
            
            result = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h3691be2fc57bbae7(&var_98, &var_70);
            i = i_1;
        } while (i != 2);
    }
    
    return result;
}
