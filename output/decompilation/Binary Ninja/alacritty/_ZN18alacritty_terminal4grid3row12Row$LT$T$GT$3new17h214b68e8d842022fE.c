
  int64_t alacritty_terminal::grid::row::Row$LT$T$GT$::new::h214b68e8d842022f(int64_t* arg1, int64_t arg2)

{
    int64_t result;
    void* rdx;
    result =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(arg2, 8, 0x18);
    void* rbp = rdx;
    int128_t var_48;
    int64_t var_38;
    
    if (arg2 >= 2)
    {
        int64_t i_1 = arg2 - 1;
        rbp = rdx;
        int64_t i;
        
        do
        {
            _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$core..default..Default$GT$::default::h2206ab58710dae3d(&var_48);
            *(rbp + 0x10) = var_38;
            *rbp = var_48;
            rbp += 0x18;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }
    
    _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$core..default..Default$GT$::default::h2206ab58710dae3d(&var_48);
    *(rbp + 0x10) = var_38;
    *rbp = var_48;
    *arg1 = result;
    arg1[1] = rdx;
    arg1[2] = arg2;
    arg1[3] = 0;
    return result;
}
