
  uint64_t uu_mv::is_empty_dir::h380343aaab058219(int64_t arg1)

{
    int64_t var_58;
    std::fs::read_dir::h17a15da7deb8ae8a(&var_58, arg1);
    char var_50;
    uint32_t rbx;
    int64_t var_48;
    
    if (var_50 != 2)
    {
        int64_t var_18 = var_58;
        char var_10_1 = var_50;
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
    return rbx;
}
