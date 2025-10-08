
  fn uu_mv::is_empty_dir::h380343aaab058219(arg1: i64) -> u64

{
    let mut var_58: i64;
    std::fs::read_dir::h17a15da7deb8ae8a(&var_58, arg1);
    let var_50: i8;
    let mut rbx: u32;
    let mut var_48: i64;
    
    if var_50 != 2
    {
        let mut var_18: i64 = var_58;
        let var_10_1: i8 = var_50;
        var_48 = 2;
        core::option::Option$LT$T$GT$::get_or_insert_with::h8aa5c01daaeebc96(&var_48, &var_18);
        rbx = var_48 ^ 1;
        core::ptr::drop_in_place$LT$core..iter..adapters..peekable..Peekable$LT$std..fs..ReadDir$GT$$GT$::hacabfff80385f592(&var_48);
    }
    else
    {
        var_48 = var_58;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96abb429d2198cc4(&var_48);
        rbx = 0;
    }
    rbx &= 1;
    rbx
}
