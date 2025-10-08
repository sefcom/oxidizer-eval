
  fn fd::cli::Opts::search_paths::h2cf17b02bfc6ed81(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let mut rax: i64 = 0xa0;
    let mut var_30: i64;
    
    if *arg2.byte_offset(0xb0) == 0
    {
        rax = 0xb8;
        
        if *arg2.byte_offset(0xc8) == 0
        {
            let mut result: i64 = fd::cli::ensure_current_directory_exists::hea3f65f4cbc3c1ec();
            
            if result == 0
            {
                let rax_4: *mut i128 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
                
                if rax_4 == 0
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                fd::cli::Opts::normalize_path::h71e0e83f385b24ab(&var_30, *arg2.byte_offset(0x1eb), 
                    "./cannot parse integer from empt…", 2);
                let result_1: i64;
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
    
    let rcx_1: i64 = *arg2.byte_offset(rax).byte_offset(8);
    let rax_1: i64 = *arg2.byte_offset(rax).byte_offset(0x10);
    var_30 = rcx_1;
    let var_28_1: i64 = rcx_1 + rax_1 * 0x18;
    let var_20: *mut c_void = arg2;
    core::iter::traits::iterator::Iterator::collect::hf49997e5ea1d6eb1(arg1, &var_30)
}
