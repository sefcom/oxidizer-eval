
  void* const uu_df::is_best::h69ca5df66aadf4f9(int64_t arg1, int64_t arg2, void* arg3)

{
    int64_t var_38 = arg1;
    int64_t var_30 = arg2 * 0x98 + arg1;
    void* const i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h437f1ce06bbe5de2(&var_38);
    
    if (i)
    {
        void* const i_1 = i;
        int64_t r14_1 = *(arg3 + 8);
        int64_t r15_1 = *(arg3 + 0x10);
        
        do
        {
            if (alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h26cf2969793785fb(*(i_1 + 8), *(i_1 + 0x10), r14_1, r15_1)
                    && uu_df::mount_info_lt::he7799b73577b1743(arg3, i_1))
                return nullptr;
            
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h437f1ce06bbe5de2(&var_38);
            i_1 = i;
        } while (i);
    }
    
    i = 1;
    return i;
}
