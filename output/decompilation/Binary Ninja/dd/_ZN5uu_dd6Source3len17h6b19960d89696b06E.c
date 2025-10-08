
  int64_t uu_dd::Source::len::h6b19960d89696b06(void* arg1)

{
    if (*arg1)
        return 0;
    
    int32_t var_b0;
    std::fs::File::metadata::h5e84e533705f8c98(&var_b0, arg1 + 4);
    
    if (var_b0 != 2)
        return 0;
    
    return 1;
}
