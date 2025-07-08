
  int64_t uu_join::Repr$LT$Sep$GT$::print_fields::h97f24fe6eba7f34c(int64_t* arg1, void* arg2, int64_t arg3)

{
    int64_t rax;
    int64_t var_38 = rax;
    int64_t r13 = *(arg2 + 0x10);
    
    if (r13)
    {
        int64_t rbp_1 = 0;
        int64_t rax_1;
        
        do
        {
            rax_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rbp_1);
            
            if (rbp_1 != arg3)
            {
                int64_t result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg1, " UnknownErrnoEPERMENOENTESRCHEIN…", 1);
                
                if (result)
                    return result;
                
                int64_t rax_2;
                uint64_t rdx;
                rax_2 = uu_join::Line::get_field::h7dd14bed39768627(arg2, rbp_1);
                
                if (!rax_2)
                {
                    core::option::unwrap_failed::h0e11329e76906eaa();
                    /* no return */
                }
                
                result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(arg1, rax_2, rdx);
                
                if (result)
                    return result;
            }
            
            rbp_1 = rax_1;
        } while (rax_1 < r13);
    }
    
    return 0;
}
