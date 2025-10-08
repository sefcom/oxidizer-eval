
  int64_t rg::flags::defs::convert::human_readable_u64::h8b0ab71a03bde6a2(char* arg1, int64_t arg2)

{
    char* var_38;
    rg::flags::defs::convert::str::hf200dae070501684(&var_38, arg1, arg2);
    char* rsi_1 = var_38;
    
    if (!rsi_1)
        return 1;
    
    uint64_t var_30;
    void var_28;
    grep_cli::human::parse_human_readable_size::h374500e7b36cff26(&var_28, rsi_1, var_30);
    return anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h0bff3d9e96ea8957(&var_28);
}
