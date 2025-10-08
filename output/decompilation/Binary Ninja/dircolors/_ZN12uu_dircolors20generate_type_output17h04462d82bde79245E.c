
  int128_t* uu_dircolors::generate_type_output::h04462d82bde79245(int128_t* arg1, char* arg2)

{
    void var_40;
    int128_t var_28;
    int64_t var_38;
    int64_t var_30;
    
    if (*arg2 != 2)
    {
        core::iter::traits::iterator::Iterator::collect::h1107bfbe1ce66062(&var_40, &data_4f68f8);
        alloc::str::join_generic_copy::h8b37c6cf08035dd4(&var_28, var_38, var_30, ":\x1b[m\t", 1);
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h1b19423c6d48f07b(&var_40, &data_4f68f8);
        alloc::str::join_generic_copy::h8b37c6cf08035dd4(&var_28, var_38, var_30, "\n:\x1b[m\t", 1);
    }
    int64_t var_18;
    arg1[1] = var_18;
    *arg1 = var_28;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbd7984742b77bb31(
        &var_40);
    return arg1;
}
