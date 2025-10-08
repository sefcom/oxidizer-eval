
  int64_t alacritty::display::hint::HintMatch::should_highlight::hce366fcc7e207e17(int64_t* arg1, int64_t arg2, int32_t arg3, int64_t* arg4)

{
    int64_t result;
    int64_t result_1 = result;
    void* rbx = *arg1;
    
    if (!rbx)
    {
        if (!arg4)
            /* tailcall */
            return core::ops::range::RangeBounds::contains::h3765a02d6a3b303a(&arg1[2], arg2, arg3);
    }
    else if (arg4)
    {
        void* r14_1 = *arg4;
        
        if (rbx == r14_1)
        {
            result = 1;
            return result;
        }
        
        if (alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hca30ad5d4cfd9901(*(rbx + 0x18), *(rbx + 0x20), *(r14_1 + 0x18), *(r14_1 + 0x20)) && alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hca30ad5d4cfd9901(*(rbx + 0x30), 
            *(rbx + 0x38), *(r14_1 + 0x30), *(r14_1 + 0x38)))
        {
            result = 1;
            return result;
        }
    }
    
    return 0;
}
