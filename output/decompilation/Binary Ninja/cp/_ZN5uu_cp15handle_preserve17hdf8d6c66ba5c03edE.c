
  void uu_cp::handle_preserve::hdf8d6c66ba5c03ed(int64_t* arg1, char arg2, char arg3, void* arg4, int64_t* arg5)

{
    if (!arg2)
    {
        *arg1 = 0xd;
        return;
    }
    
    void* var_98;
    uu_cp::copy_attributes::_$u7b$$u7b$closure$u7d$$u7d$::h6173858c63ecfb53(&var_98, arg4, arg5);
    void* rax = var_98;
    int128_t var_88;
    int128_t var_78;
    int128_t var_68;
    
    if (!arg3)
    {
        if (rax != 0xd)
        {
            int128_t var_28_1 = var_68;
            int128_t var_38_1 = var_78;
            int128_t var_48_1 = var_88;
            int128_t var_58 = var_98;
            uu_cp::show_error_if_needed::h934143ac50374c6e(&var_58);
            core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&var_58);
        }
        
        *arg1 = 0xd;
    }
    else if (rax == 0xd)
        *arg1 = 0xd;
    else
    {
        arg1[7] = *var_68[8];
        *(arg1 + 0x28) = var_78;
        *(arg1 + 0x18) = var_88;
        int128_t var_90;
        *(arg1 + 8) = var_90;
        *arg1 = rax;
    }
}
