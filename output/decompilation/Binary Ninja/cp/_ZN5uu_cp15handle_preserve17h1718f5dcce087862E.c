
  void uu_cp::handle_preserve::h1718f5dcce087862(int64_t* arg1, char arg2, char arg3, int64_t* arg4)

{
    if (!(arg2 & 1))
    {
        *arg1 = -0x7ffffffffffffff4;
        return;
    }
    
    void* var_90;
    uu_cp::copy_attributes::_$u7b$$u7b$closure$u7d$$u7d$::hb6503ed0832a970e(&var_90, arg4);
    void* rax = var_90;
    int128_t var_80;
    int128_t var_70;
    
    if (!(arg3 & 1))
    {
        if (rax != -0x7ffffffffffffff4)
        {
            int64_t var_60;
            int64_t var_28_1 = var_60;
            int128_t var_38_1 = var_70;
            int128_t var_48_1 = var_80;
            int128_t var_58 = var_90;
            uu_cp::show_error_if_needed::h37308d2f7c80265f(&var_58);
            core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h9ee7df58e7d9e41e(&var_90);
        }
        
        *arg1 = -0x7ffffffffffffff4;
    }
    else if (rax == -0x7ffffffffffffff4)
        *arg1 = -0x7ffffffffffffff4;
    else
    {
        *(arg1 + 0x28) = var_70;
        *(arg1 + 0x18) = var_80;
        int128_t var_88;
        *(arg1 + 8) = var_88;
        *arg1 = rax;
    }
}
