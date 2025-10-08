
  uint64_t uu_df::is_best::h2e728b01e5cd47e3(void* arg1, int64_t arg2, void* arg3)

{
    int64_t rax;
    int64_t var_38 = rax;
    int64_t rbx;
    rbx = 1;
    
    if (arg2)
    {
        void* r15_1 = arg1;
        int64_t r12_1 = *(arg3 + 8);
        int64_t r13_1 = *(arg3 + 0x10);
        int64_t i_1 = arg2 * 0x98;
        int64_t i;
        
        do
        {
            if (alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h6c46bd122a266b24(*(r15_1 + 8), *(r15_1 + 0x10), r12_1, r13_1)
                && uu_df::mount_info_lt::h4da597b980b7148d(arg3, r15_1))
            {
                rbx = 0;
                break;
            }
            
            r15_1 += 0x98;
            i = i_1;
            i_1 -= 0x98;
        } while (i != 0x98);
    }
    
    return rbx;
}
