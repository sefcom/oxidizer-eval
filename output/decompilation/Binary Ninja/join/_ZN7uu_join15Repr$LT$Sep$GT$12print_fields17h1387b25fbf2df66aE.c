
  int64_t uu_join::Repr$LT$Sep$GT$::print_fields::h1387b25fbf2df66a(int64_t arg1, int64_t arg2, int64_t* arg3, void* arg4, int64_t arg5)

{
    int64_t rbp = *(arg4 + 0x10);
    
    if (rbp)
    {
        int64_t rbx_1 = 0;
        int64_t rax_1;
        
        do
        {
            rax_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rbx_1);
            
            if (rbx_1 != arg5)
            {
                int64_t rax_2;
                uint64_t rdx;
                rax_2 = _$LT$uu_join..MultiByteSep$u20$as$u20$uu_join..Separator$GT$::output_separator::hb76fe36ffd6c0412(arg1);
                int64_t result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg3, rax_2, rdx);
                
                if (result)
                    return result;
                
                int64_t rax_3;
                uint64_t rdx_1;
                rax_3 = uu_join::Line::get_field::h7dd14bed39768627(arg4, rbx_1);
                
                if (!rax_3)
                {
                    core::option::unwrap_failed::h0e11329e76906eaa();
                    /* no return */
                }
                
                result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg3, rax_3, rdx_1);
                
                if (result)
                    return result;
            }
            
            rbx_1 = rax_1;
        } while (rax_1 < rbp);
    }
    
    return 0;
}
