
  int64_t uu_join::State::combine::h04498694d71d4131(void* arg1, int64_t* arg2, void* arg3, void* arg4)

{
    int64_t rax;
    uint64_t rdx;
    rax = uu_join::State::get_current_key::hb0aa7b8c555c38dc(arg1);
    int64_t var_a8 = rax;
    int64_t var_40 = rax;
    uint64_t var_98 = rdx;
    uint64_t var_38 = rdx;
    int64_t rax_1 = *(arg1 + 0x10);
    
    if (!rax_1)
        return 0;
    
    void* rcx = *(arg1 + 8);
    void* r14_3 = rax_1 * 0x30 + rcx;
    void* var_b0_1 = rcx;
    void* rsi = rcx + 0x30;
    void* rdi = *(arg3 + 8);
    void* rcx_4 = *(arg3 + 0x10) * 0x30 + rdi;
    char rcx_5 = *(arg4 + 0x148);
    void* var_a0_1 = rdi;
    int64_t result;
    int64_t* var_68;
    
    if (!*(arg4 + 0x140))
    {
        if (!var_a8)
        {
            var_a8 = *(arg4 + 0x120);
            var_98 = *(arg4 + 0x128);
        }
        
        int64_t rax_5 = *(arg1 + 0x40);
        int64_t r13_1 = *(arg4 + 0x108);
        int64_t r15_1 = *(arg4 + 0x110);
        int64_t rax_6 = *(arg3 + 0x40);
        void* rax_8;
        
        do
        {
            void* r12_1 = rdi;
            
            while (true)
            {
                void* rbp_2 = r12_1 + 0x30;
                
                if (r12_1 == rcx_4)
                    rbp_2 = r12_1;
                
                if (r12_1 == rcx_4)
                    break;
                
                result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h6a39e9ebdd504d15(arg2, var_a8, var_98);
                
                if (result)
                    return result;
                
                result = uu_join::Repr$LT$Sep$GT$::print_fields::h4210fd7bff018645(r13_1, r15_1, 
                    arg2, var_b0_1, rax_5);
                
                if (result)
                    return result;
                
                result = uu_join::Repr$LT$Sep$GT$::print_fields::h4210fd7bff018645(r13_1, r15_1, 
                    arg2, r12_1, rax_6);
                
                if (result)
                    return result;
                
                var_68 = rcx_5;
                result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h6a39e9ebdd504d15(arg2, &var_68, 1);
                r12_1 = rbp_2;
                
                if (result)
                    return result;
            }
            
            rax_8 = rsi;
            rsi = rax_8 + 0x30;
            var_b0_1 = rax_8;
            
            if (rax_8 == r14_3)
                rsi = rax_8;
            
            rdi = var_a0_1;
            result = 0;
        } while (rax_8 != r14_3);
    }
    else
    {
        do
        {
            void* r14_4 = var_b0_1;
            var_b0_1 = rsi;
            void* rcx_6 = rdi;
            
            while (true)
            {
                void* rbp_1 = rcx_6 + 0x30;
                
                if (rcx_6 == rcx_4)
                    rbp_1 = rcx_6;
                
                if (rcx_6 == rcx_4)
                    break;
                
                var_68 = &var_40;
                void* var_60_1 = arg1;
                void* var_58_1 = r14_4;
                void* var_50_1 = arg3;
                void* var_48_1 = rcx_6;
                result =
                    uu_join::Repr$LT$Sep$GT$::print_format::heaf7e2b100816df7(arg4, arg2, &var_68);
                
                if (result)
                    return result;
                
                var_68 = rcx_5;
                result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h6a39e9ebdd504d15(arg2, &var_68, 1);
                rcx_6 = rbp_1;
                
                if (result)
                    return result;
            }
            
            rsi = var_b0_1 + 0x30;
            
            if (var_b0_1 == r14_3)
                rsi = var_b0_1;
            
            rdi = var_a0_1;
            result = 0;
        } while (var_b0_1 != r14_3);
    }
    return result;
}
