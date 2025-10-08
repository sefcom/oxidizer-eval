
  fn uu_wc::files0_iter_file::hc5b7d8d6cb685047(arg1: *mut i64, arg2: i64, arg3: u64) -> u64

{
    let mut var_68: i32;
    std::fs::File::open::h2ac8fc8643c389e6(&var_68, arg2);
    
    if var_68 != 1
    {
        let mut var_38: i128;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h805faec68bbcdbaf(&var_38, arg2, arg3);
        let var_28: i64;
        let var_48_1: i64 = var_28;
        let mut var_58: i128 = var_38;
        let var_64: i32;
        return uu_wc::files0_iter::h3a2520d8f4dd46d9(arg1, var_64, &var_58);
    }
    
    let result: u64 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::he406d8bf057b4e96();
    *arg1 = -0x7fffffffffffffff;
    arg1[1] = result;
    arg1[2] = &data_4f9240;
    result
}
