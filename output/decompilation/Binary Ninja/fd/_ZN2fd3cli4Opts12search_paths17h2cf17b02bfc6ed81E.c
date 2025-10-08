
  int64_t fd::cli::Opts::search_paths::h2cf17b02bfc6ed81(int64_t* arg1, void* arg2)

{
    int64_t rax = 0xa0;
    int64_t var_30;
    
    if (!*(arg2 + 0xb0))
    {
        rax = 0xb8;
        
        if (!*(arg2 + 0xc8))
        {
            int64_t result = fd::cli::ensure_current_directory_exists::hea3f65f4cbc3c1ec();
            
            if (!result)
            {
                int128_t* rax_4 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
                
                if (!rax_4)
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                fd::cli::Opts::normalize_path::h71e0e83f385b24ab(&var_30, *(arg2 + 0x1eb), 
                    "./cannot parse integer from empt…", 2);
                int64_t result_1;
                result = result_1;
                rax_4[1] = result;
                *rax_4 = var_30;
                *arg1 = 1;
                arg1[1] = rax_4;
                arg1[2] = 1;
            }
            else
            {
                arg1[1] = result;
                *arg1 = -0x8000000000000000;
            }
            
            return result;
        }
    }
    
    int64_t rcx_1 = *(arg2 + rax + 8);
    int64_t rax_1 = *(arg2 + rax + 0x10);
    var_30 = rcx_1;
    int64_t var_28_1 = rcx_1 + rax_1 * 0x18;
    void* var_20 = arg2;
    return core::iter::traits::iterator::Iterator::collect::hf49997e5ea1d6eb1(arg1, &var_30);
}
