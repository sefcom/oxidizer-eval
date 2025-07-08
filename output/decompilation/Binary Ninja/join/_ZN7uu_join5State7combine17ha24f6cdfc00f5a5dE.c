
  int64_t uu_join::State::combine::ha24f6cdfc00f5a5d(void* arg1, int64_t* arg2, void* arg3, void* arg4)

{
    int64_t rax;
    uint64_t rdx;
    rax = uu_join::State::get_current_key::h6b22667ac5a703a7(arg1);
    int64_t r12 = rax;
    int64_t var_40 = rax;
    uint64_t var_98 = rdx;
    uint64_t var_38 = rdx;
    int64_t rax_1 = *(arg1 + 8);
    int64_t rcx = *(arg1 + 0x10);
    int64_t var_80 = rax_1;
    int64_t var_78 = rcx * 0x30 + rax_1;
    void* i_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&var_80);
    
    if (i_3)
    {
        void* i_1 = i_3;
        int64_t rcx_4 = *(arg3 + 8);
        int64_t rax_5 = *(arg3 + 0x10) * 0x30 + rcx_4;
        char rdx_1 = *(arg4 + 0x28);
        int64_t var_a0_1 = rcx_4;
        int64_t var_a8_1 = rax_5;
        int64_t var_90;
        int64_t* var_68;
        int64_t result;
        
        if (!*(arg4 + 0x10))
        {
            if (!r12)
            {
                r12 = *(arg4 + 0x18);
                var_98 = *(arg4 + 0x20);
            }
            
            int64_t r13_1 = *(arg1 + 0x40);
            int64_t rdx_4 = *(arg3 + 0x40);
            
            while (true)
            {
                var_90 = rcx_4;
                int64_t var_88_2 = rax_5;
                
                while (true)
                {
                    void* rax_8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&var_90);
                    
                    if (!rax_8)
                        break;
                    
                    result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, r12, var_98);
                    
                    if (!result)
                    {
                        result = uu_join::Repr$LT$Sep$GT$::print_fields::hb1432fea054a9535(arg4, 
                            arg2, i_1, r13_1);
                        
                        if (!result)
                        {
                            result = uu_join::Repr$LT$Sep$GT$::print_fields::hb1432fea054a9535(
                                arg4, arg2, rax_8, rdx_4);
                            
                            if (!result)
                            {
                                var_68 = rdx_1;
                                result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, &var_68, 1);
                                
                                if (!result)
                                    continue;
                            }
                        }
                    }
                    
                    return result;
                }
                
                void* i_4 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&var_80);
                i_1 = i_4;
                rcx_4 = var_a0_1;
                rax_5 = var_a8_1;
                
                if (!i_4)
                    break;
            }
        }
        else
        {
            void* i;
            
            do
            {
                var_90 = rcx_4;
                int64_t var_88_1 = rax_5;
                
                while (true)
                {
                    int64_t rax_6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&var_90);
                    
                    if (!rax_6)
                        break;
                    
                    var_68 = &var_40;
                    void* var_60_1 = arg1;
                    void* i_2 = i_1;
                    void* var_50_1 = arg3;
                    int64_t var_48_1 = rax_6;
                    result = uu_join::Repr$LT$Sep$GT$::print_format::ha0fea88deb104ec8(arg4, arg2, 
                        &var_68);
                    
                    if (result)
                        return result;
                    
                    var_68 = rdx_1;
                    result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, &var_68, 1);
                    
                    if (result)
                        return result;
                }
                
                i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&var_80);
                i_1 = i;
                rcx_4 = var_a0_1;
                rax_5 = var_a8_1;
            } while (i);
        }
    }
    
    return 0;
}
