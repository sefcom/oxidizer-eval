
  bool just::subcommand::Subcommand::summary::hf6e7b6af0c5cf7fd(char arg1, char arg2, void* arg3)

{
    int64_t var_40 = 0;
    char const (** const var_38)[0x1] = nullptr;
    int64_t var_30 = 8;
    int64_t var_28 = 0;
    just::subcommand::Subcommand::summary_recursive::hc0eddb790c4e97dc(arg1, &var_38, &var_40, 
        arg3);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(var_38, var_30);
    var_38 = &data_82dbf8;
    int64_t var_30_1 = 1;
    int64_t var_28_1 = 8;
    int128_t var_20 = {0};
    std::io::stdio::_print::h5e446ff973c02de6(&var_38);
    bool result = var_40;
    
    if (!arg2 | result)
        return result;
    
    var_38 = &data_831490;
    int64_t var_30_2 = 1;
    int64_t var_28_2 = 8;
    int128_t var_20_1 = {0};
    return std::io::stdio::_eprint::h57899770eacec2ad(&var_38);
}
