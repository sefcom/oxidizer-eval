
  int64_t uu_join::Repr$LT$Sep$GT$::print_fields::h4210fd7bff018645(int64_t arg1, int64_t arg2, int64_t* arg3, void* arg4, int64_t arg5)

{
    int64_t __saved_rsi_1;
    int64_t __saved_rsi = __saved_rsi_1;
    int64_t r13 = *(arg4 + 0x10);
    
    if (r13)
    {
        int64_t rbx_1 = 0;
        
        do
        {
            if (arg5 != rbx_1)
            {
                int64_t rax;
                uint64_t rdx;
                rax = std::ffi::os_str::_$LT$impl$u20$core..convert..AsRef$LT$std..ffi..os_str..OsStr$GT$$u20$for$u20$alloc..string..String$GT$::as_ref::h5eb4ca0e0b17e13d(arg1);
                int64_t result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h6a39e9ebdd504d15(arg3, rax, rdx);
                
                if (result)
                    return result;
                
                int64_t rax_1;
                uint64_t rdx_1;
                rax_1 = uu_join::Line::get_field::h5172ba7928bd7492(arg4, rbx_1);
                
                if (!rax_1)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h6a39e9ebdd504d15(arg3, rax_1, rdx_1);
                
                if (result)
                    return result;
            }
            
            rbx_1 += 1;
        } while (r13 != rbx_1);
    }
    
    return 0;
}
