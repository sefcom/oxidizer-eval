
  fn uu_dircolors::generate_type_output::h04462d82bde79245(arg1: *mut i128, arg2: *mut i8) -> *mut i128

{
    let mut var_40: ();
    let mut var_28: i128;
    let var_38: i64;
    let var_30: i64;
    
    if *arg2 != 2
    {
        core::iter::traits::iterator::Iterator::collect::h1107bfbe1ce66062(&var_40, &data_4f68f8);
        alloc::str::join_generic_copy::h8b37c6cf08035dd4(&var_28, var_38, var_30, ":\x1b[m\t", 1);
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h1b19423c6d48f07b(&var_40, &data_4f68f8);
        alloc::str::join_generic_copy::h8b37c6cf08035dd4(&var_28, var_38, var_30, "\n:\x1b[m\t", 1);
    }
    let var_18: i64;
    arg1[1] = var_18;
    *arg1 = var_28;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbd7984742b77bb31(
        &var_40);
    arg1
}
