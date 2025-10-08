
  fn alacritty_terminal::grid::storage::Storage$LT$T$GT$::initialize::hf07ff5cf81d3c7d9(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut var_20: i64 = arg3;
    let mut result: i64 = arg1[5] + arg2;
    let r15: i64 = arg1[2];
    
    if result > r15
    {
        let rdx: i64 = arg1[3];
        
        if rdx != 0
        {
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::rotate_left::h461a6a02631add82(arg1[1], 
                r15, rdx);
            arg1[3] = 0;
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::resize_with::hd62406631999c166(arg1, 
            r15 + core::cmp::Ord::max::h20b6d33cbe488162(arg2, 0x3e8), &var_20);
        result = arg2 + arg1[5];
    }
    
    arg1[5] = result;
    result
}
