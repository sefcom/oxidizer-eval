
  uint64_t bat::printer::InteractivePrinter::highlight_regions_for_line::ha23065aa3979fcb0(char* arg1, void* arg2, char* arg3, int64_t arg4)

{
    uint64_t result;
    int64_t var_78;
    
    if (!(0 + -(*(arg2 + 0x128))))
    {
        char const* const rdx = "\nWriting metadata to folder  ..…";
        
        if (arg4 < 0x4001)
            rdx = arg3;
        
        int64_t rcx = 1;
        
        if (arg4 < 0x4001)
            rcx = arg4;
        
        syntect::easy::HighlightLines::highlight_line::he5ec32671249364a(&var_78, arg2 + 0x128, 
            rdx, rcx, *(arg2 + 0x1f8));
        int64_t rcx_1 = var_78;
        char var_70;
        int64_t r12_1 = var_70;
        uint64_t result_1;
        result = result_1;
        void* var_68;
        
        if (rcx_1 != -0x7ffffffffffffff6)
        {
            int64_t var_38;
            *(arg1 + 0x48) = var_38;
            int128_t var_48;
            *(arg1 + 0x38) = var_48;
            int128_t var_58;
            *(arg1 + 0x28) = var_58;
            *arg1 = 2;
            *(arg1 + 8) = rcx_1;
            *(arg1 + 0x10) = r12_1;
            *(arg1 + 0x18) = var_68;
            *(arg1 + 0x20) = result;
        }
        else
        {
            if (arg4 > 0x4000)
            {
                if (!result)
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
                    /* no return */
                }
                
                *(var_68 + 0x10) = arg3;
                *(var_68 + 0x18) = arg4;
            }
            
            *(arg1 + 8) = r12_1;
            *(arg1 + 0x10) = var_68;
            *(arg1 + 0x18) = result;
            *arg1 = 0xd;
        }
    }
    else
    {
        result = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x20, 0);
        
        if (!result)
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        var_78 = -0x80808000808081;
        char var_70_1 = 0;
        *result = var_78;
        *(result + 0x10) = arg3;
        *(result + 0x18) = arg4;
        *(arg1 + 8) = 1;
        *(arg1 + 0x10) = result;
        *(arg1 + 0x18) = 1;
        *arg1 = 0xd;
    }
    return result;
}
