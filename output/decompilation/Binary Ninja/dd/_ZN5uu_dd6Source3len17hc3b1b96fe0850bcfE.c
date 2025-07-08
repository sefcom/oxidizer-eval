
  int64_t uu_dd::Source::len::hc3b1b96fe0850bcf(void* arg1)

{
    if (*arg1)
        return 0;
    
    int32_t var_b0;
    std::fs::File::metadata::he899a18112e6f19e(&var_b0, arg1 + 4);
    
    if (var_b0 != 2)
        return 0;
    
    return 1;
}
