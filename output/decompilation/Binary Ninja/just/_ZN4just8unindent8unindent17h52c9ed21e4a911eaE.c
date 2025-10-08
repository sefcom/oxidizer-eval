
  int128_t* just::unindent::unindent::h52c9ed21e4a911ea(int128_t* arg1, char* arg2, int64_t arg3)

{
    int64_t var_88 = 0;
    char* var_80 = 8;
    int64_t var_78 = 0;
    char* var_58 = arg2;
    void* var_50 = &arg2[arg3];
    int64_t var_48 = 0;
    int64_t r13 = 0;
    int64_t rdx;
    
    while (true)
    {
        int64_t rax_1;
        rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_58);
        int64_t rbx_1 = 1;
        
        if (rdx != 0xa)
        {
            if (rdx == 0x110000)
                break;
            
            if (rdx >= 0x80)
            {
                int64_t rcx_1;
                rcx_1 = rdx < 0x10000;
                int64_t rcx_2 = rcx_1 | 0xfffffffffffffffc;
                
                if (rdx < 0x800)
                    rcx_2 = -2;
                
                if (rax_1 == rcx_2 + arg3)
                {
                    rbx_1 = 2;
                    
                    if (rdx >= 0x800)
                        rbx_1 = 4 - 0;
                }
                else
                    continue;
            }
            else if (rax_1 != arg3 - 1)
                continue;
        }
        
        int64_t rbx_2 = rbx_1 + rax_1;
        void* rax_2;
        int64_t rdx_2;
        rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r13, rbx_2, arg2, arg3);
        
        if (!rax_2)
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, r13, rbx_2);
            /* no return */
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6fed9915a4cca328(&var_88, rax_2, rdx_2);
        r13 = rbx_2;
    }
    
    int64_t* rdi_3 = var_80;
    char* rax_3;
    char* rdx_3;
    rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h8e8ec918cf53d1e0(rdi_3, &rdi_3[var_78 * 2], rdx);
    char* rbx_3 = rdx_3;
    
    if (!rax_3)
        rbx_3 = rax_3;
    
    int64_t rax_4;
    int64_t rdx_4;
    rax_4 =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h4882e918a7022fbf(var_78, 8, 0x10);
    int64_t var_70 = rax_4;
    int64_t var_68 = rdx_4;
    int64_t var_60 = 0;
    var_58 = var_80;
    void* var_50_1 = &var_80[var_78 << 4];
    int64_t var_48_1 = 0;
    
    while (true)
    {
        int64_t rax_9;
        char** rdx_6;
        rax_9 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1433946cae7ad1f0(&var_58);
        
        if (!rdx_6)
            break;
        
        char* rbp_1 = *rdx_6;
        int64_t r13_1 = rdx_6[1];
        void* rax_8;
        uint64_t rdx_5;
        
        if (just::unindent::blank::hbfd378a8e0644ce4(rbp_1, r13_1))
        {
            int64_t rax_7;
            rax_7 = rax_9 != var_78 - 1;
            bool rcx_10 = rax_9 & rax_7;
            rax_8 = 1;
            
            if (rcx_10)
                rax_8 = &data_46e198;
            
            rdx_5 = rcx_10;
        }
        else
        {
            rax_8 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rbx_3, rbp_1, r13_1);
            
            if (!rax_8)
            {
                core::str::slice_error_fail::h1a2885084e28d077(rbp_1, r13_1, rbx_3, r13_1);
                /* no return */
            }
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6fed9915a4cca328(&var_70, rax_8, rdx_5);
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hce1d56ed9ffb2283(&var_58, &var_70);
    core::iter::traits::iterator::Iterator::collect::h8cd5e0768337b274(arg1, &var_58);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(var_88, var_80);
    return arg1;
}
