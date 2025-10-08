
  fn alacritty_terminal::grid::Grid$LT$T$GT$::update_history::hf3d18eb057d90925(arg1: *mut c_void, arg2: i64) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let rax_1: i64 = *arg1.byte_offset(0x28);
    let mut rdx: i64 = 0;
    
    if rax_1 >= *arg1.byte_offset(0x98)
    {
        rdx = rax_1 - *arg1.byte_offset(0x98);
    }
    
    let rcx_3: i64 = arg2 - rdx;
    
    if arg2 < rdx
    {
        *arg1.byte_offset(0x28) = rcx_3 + rax_1;
        
        if *arg1.byte_offset(0x10) > rax_1 + rcx_3 + 0x3e8
        {
            alacritty_terminal::grid::storage::Storage$LT$T$GT$::truncate::h2d132ed67c9d1788(arg1);
        }
    }
    
    let result: i64 = core::cmp::Ord::min::h7c13e9bfb8ea3862(*arg1.byte_offset(0xa0), arg2);
    *arg1.byte_offset(0xa0) = result;
    *arg1.byte_offset(0xa8) = arg2;
    result
}
