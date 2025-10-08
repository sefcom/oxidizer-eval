
  int64_t fd::walk::ReceiverBuffer$LT$W$GT$::print::hd2dc40990132b5db(void* arg1, int32_t* arg2)

{
    int64_t rax;
    uint64_t rdx_1;
    rax = fd::output::print_entry::hc890df4f63d95a00(arg1 + 0x10, arg2, *(arg1 + 0x60));
    
    if (rax)
    {
        int64_t var_68 = rax;
        
        if (std::io::error::Error::kind::h135fe00c4e7365f3(rax) != 0xb)
        {
            int64_t* var_60 = &var_68;
            int64_t (* var_58)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            void** const var_50 = &data_802618;
            int64_t var_48 = 1;
            int64_t var_30 = 0;
            int64_t** var_40 = &var_60;
            int64_t var_38 = 1;
            void var_20;
            core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_20, 0, rdx_1, 
                &var_50);
            fd::error::print_error::h653511955bf98e50(&var_20);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h70c4621fa5d008f5(&var_68);
            int64_t rax_4;
            rax_4 = 4;
            return rax_4;
        }
        
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h70c4621fa5d008f5(&var_68);
    }
    
    if (!core::sync::atomic::atomic_load::h95058969b162ab98(*(arg1 + 0x70), 0))
        return 6;
    
    fd::walk::ReceiverBuffer$LT$W$GT$::flush::h793374cb5c5836e2(arg1);
    uint64_t rax_3;
    rax_3 = 5;
    return rax_3;
}
