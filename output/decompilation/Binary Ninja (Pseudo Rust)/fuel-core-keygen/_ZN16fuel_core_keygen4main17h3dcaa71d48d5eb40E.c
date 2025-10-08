
  fn fuel_core_keygen::main::h3dcaa71d48d5eb40() -> u64

{
    let mut var_28: ();
    clap_builder::derive::Parser::parse::h492cd61fcc8e4985(&var_28);
    let mut result_1: u64;
    fuel_core_keygen::Command::exec::h7b13e9ffe44d0813(&result_1, &var_28);
    let mut result: u64 = result_1;
    let var_50: i8;
    
    if var_50 != 2
    {
        let var_58: i64;
        let var_30_1: i64 = var_58;
        let var_68: i128;
        let var_40_1: i128 = var_68;
        let mut result_2: u64 = result;
        result = fuel_core_keygen::print_value::h4e8c20a34f891bad(&result_2, var_50);
    }
    
    core::ptr::drop_in_place$LT$fuel_core_keygen..Command$GT$::hfd94021fab8dc8ba(&var_28);
    result
}
