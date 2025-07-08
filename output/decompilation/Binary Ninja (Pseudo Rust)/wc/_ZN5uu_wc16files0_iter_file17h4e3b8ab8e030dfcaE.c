
  fn uu_wc::files0_iter_file::h4e3b8ab8e030dfca(arg1: *mut i64, arg2: i64, arg3: size_t) -> *mut i128

{
    let mut var_68: i32;
    std::fs::File::open::h104bd9348fd76b4f(&var_68, arg2);
    
    if var_68 == 0
    {
        let mut var_38: i128;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_38, arg2, arg3);
        let var_28: i64;
        let var_48_1: i64 = var_28;
        let mut var_58: i128 = var_38;
        let var_64: i32;
        return uu_wc::files0_iter::h0e34cd9488cdd310(arg1, var_64, &var_58);
    }
    
    let result: *mut i128 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h3635bd652e6372fa();
    *arg1 = -0x7fffffffffffffff;
    arg1[1] = result;
    arg1[2] = &data_531158;
    result
}
