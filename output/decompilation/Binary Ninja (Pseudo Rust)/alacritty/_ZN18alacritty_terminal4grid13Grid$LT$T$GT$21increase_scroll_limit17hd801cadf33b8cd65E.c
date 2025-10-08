
  fn alacritty_terminal::grid::Grid$LT$T$GT$::increase_scroll_limit::hd801cadf33b8cd65(arg1: *mut i64, arg2: i64) -> i64

{
    let rcx: i64 = arg1[5];
    let mut rdx: i64 = 0;
    
    if rcx >= arg1[0x13]
    {
        rdx = rcx - arg1[0x13];
    }
    
    let result: i64 = core::cmp::Ord::min::h7c13e9bfb8ea3862(arg2, arg1[0x15] - rdx);
    
    if result == 0
    {
        return result;
    }
    
    /* tailcall */
    alacritty_terminal::grid::storage::Storage$LT$T$GT$::initialize::hf07ff5cf81d3c7d9(arg1, 
        result, arg1[0x12])
}
