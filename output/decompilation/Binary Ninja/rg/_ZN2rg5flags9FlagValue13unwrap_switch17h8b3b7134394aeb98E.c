
  uint64_t rg::flags::FlagValue::unwrap_switch::h8b3b7134394aeb98(int64_t* arg1)

{
    if (-(*arg1) == -0x8000000000000000)
    {
        uint32_t rbx_1 = arg1[1];
        core::ptr::drop_in_place$LT$rg..flags..FlagValue$GT$::hd36131b5df04d880(
            -0x8000000000000000, arg1[1]);
        return rbx_1;
    }
    
    void** const var_48 = &data_7eb6c8;
    int64_t var_40 = 1;
    void var_50;
    void* var_38 = &var_50;
    int128_t var_30 = {0};
    core::panicking::panic_fmt::h96f341d36638c225(&var_48);
    /* no return */
}
