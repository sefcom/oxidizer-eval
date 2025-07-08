
  int64_t uu_join::Repr$LT$Sep$GT$::print_fields::hb1432fea054a9535(int64_t arg1, int64_t* arg2, void* arg3, int64_t arg4)

{
    int64_t rax;
    int64_t var_38 = rax;
    int64_t r15 = *(arg3 + 0x10);
    
    if (r15)
    {
        int64_t rbp_1 = 0;
        int64_t rax_1;
        
        do
        {
            rax_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rbp_1);
            
            if (rbp_1 != arg4)
            {
                int64_t result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, 
                    _$LT$uu_join..OneByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::h46f4732182ca8865(arg1 + 0x29), 
                    1);
                
                if (result)
                    return result;
                
                int64_t rax_3;
                uint64_t rdx;
                rax_3 = uu_join::Line::get_field::h7dd14bed39768627(arg3, rbp_1);
                
                if (!rax_3)
                {
                    core::option::unwrap_failed::h0e11329e76906eaa();
                    /* no return */
                }
                
                result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg2, rax_3, rdx);
                
                if (result)
                    return result;
            }
            
            rbp_1 = rax_1;
        } while (rax_1 < r15);
    }
    
    return 0;
}
