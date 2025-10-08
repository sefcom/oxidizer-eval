
  fn just::subcommand::Subcommand::summary::hf6e7b6af0c5cf7fd(arg1: i8, arg2: i8, arg3: *mut c_void) -> bool

{
    let mut var_40: i64 = 0;
    let mut var_38: *mut *mut [i8; 0x1] = nullptr;
    let var_30: i64 = 8;
    let var_28: i64 = 0;
    just::subcommand::Subcommand::summary_recursive::hc0eddb790c4e97dc(arg1, &var_38, &var_40, 
        arg3);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(var_38, var_30);
    var_38 = &data_82dbf8;
    let var_30_1: i64 = 1;
    let var_28_1: i64 = 8;
    let var_20: i128 = {0};
    std::io::stdio::_print::h5e446ff973c02de6(&var_38);
    let result: bool = var_40 != 0;
    
    if (arg2 == 0 | result) != 0
    {
        return result;
    }
    
    var_38 = &data_831490;
    let var_30_2: i64 = 1;
    let var_28_2: i64 = 8;
    let var_20_1: i128 = {0};
    std::io::stdio::_eprint::h57899770eacec2ad(&var_38)
}
