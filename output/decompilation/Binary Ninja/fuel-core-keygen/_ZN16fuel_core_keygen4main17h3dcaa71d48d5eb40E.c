
  uint64_t fuel_core_keygen::main::h3dcaa71d48d5eb40()

{
    void var_28;
    clap_builder::derive::Parser::parse::h492cd61fcc8e4985(&var_28);
    uint64_t result_1;
    fuel_core_keygen::Command::exec::h7b13e9ffe44d0813(&result_1, &var_28);
    uint64_t result = result_1;
    char var_50;
    
    if (var_50 != 2)
    {
        int64_t var_58;
        int64_t var_30_1 = var_58;
        int128_t var_68;
        int128_t var_40_1 = var_68;
        uint64_t result_2 = result;
        result = fuel_core_keygen::print_value::h4e8c20a34f891bad(&result_2, var_50);
    }
    
    core::ptr::drop_in_place$LT$fuel_core_keygen..Command$GT$::hfd94021fab8dc8ba(&var_28);
    return result;
}
