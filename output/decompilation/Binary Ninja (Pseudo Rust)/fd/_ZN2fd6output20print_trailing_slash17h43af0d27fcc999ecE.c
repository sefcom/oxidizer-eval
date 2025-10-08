
  fn fd::output::print_trailing_slash::h43af0d27fcc999ec(arg1: i64, arg2: *mut i64, arg3: i64, arg4: i64, arg5: u64) -> i64

{
    let mut rax: u32;
    let mut rdx: i32;
    rax = fd::dir_entry::DirEntry::file_type::ha8777f9a24494ad2(arg2);
    
    if ((rdx & 0xf000) == 0x4000 & rax) != 1
    {
        return 0;
    }
    
    let mut var_a8: i64;
    let mut var_a0: i8;
    let mut var_9f: i64;
    let mut rax_1: i8;
    let mut zmm0_1: i64;
    let mut zmm1_1: i64;
    
    if arg5 == 0
    {
        zmm0_1 = *data_470da0;
        zmm1_1 = {0};
        rax_1 = 0;
    }
    else
    {
        lscolors::style::Style::to_nu_ansi_term_style::h4f37f75a73819d26(&var_a8, arg5, rax, arg5);
        zmm1_1 = var_a8;
        rax_1 = var_a0;
        zmm0_1 = var_9f;
    }
    
    let var_78_1: i64 = zmm1_1;
    let var_70_1: i8 = rax_1;
    let var_6f_1: i64 = zmm0_1;
    var_a8 = -0x8000000000000000;
    var_a0 = arg3;
    var_9f = arg4;
    let var_90_1: i64 = -0x7ffffffffffffffe;
    let mut var_60: *mut i64 = &var_a8;
    let var_58_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
    let mut var_50: *const i8 = &data_470810;
    let var_48_1: i64 = 1;
    let var_30_1: i64 = 0;
    let var_40_1: *mut *mut i64 = &var_60;
    let var_38_1: i64 = 1;
    let result: i64 = std::io::Write::write_fmt::h323bfdffb85eb317(arg1, &var_50);
    core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hed8dd3841b2e91c8(&var_a8);
    result
}
