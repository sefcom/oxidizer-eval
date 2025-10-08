
  fn alacritty::display::hint::HintMatch::should_highlight::hce366fcc7e207e17(arg1: *mut i64, arg2: i64, arg3: i32, arg4: *mut i64) -> i64

{
    let mut result: i64;
    let result_1: i64 = result;
    let rbx: *mut c_void = *arg1;
    
    if rbx == 0
    {
        if arg4 == 0
        {
            /* tailcall */
            return core::ops::range::RangeBounds::contains::h3765a02d6a3b303a(&arg1[2], arg2, arg3);
        }
    }
    else if arg4 != 0
    {
        let r14_1: *mut c_void = *arg4;
        
        if rbx == r14_1
        {
            result = 1;
            return result;
        }
        
        if alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hca30ad5d4cfd9901(*rbx.byte_offset(0x18), *rbx.byte_offset(0x20), *r14_1.byte_offset(0x18), 
            *r14_1.byte_offset(0x20)) != 0 && alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hca30ad5d4cfd9901(*rbx.byte_offset(0x30), *rbx.byte_offset(0x38), 
            *r14_1.byte_offset(0x30), *r14_1.byte_offset(0x38)) != 0
        {
            result = 1;
            return result;
        }
    }
    
    0
}
