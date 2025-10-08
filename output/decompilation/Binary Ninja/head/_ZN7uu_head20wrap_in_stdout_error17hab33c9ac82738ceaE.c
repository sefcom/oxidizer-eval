
  int64_t uu_head::wrap_in_stdout_error::hab33c9ac82738cea(int64_t arg1)

{
    int64_t var_68 = arg1;
    char rax = std::io::error::Error::kind::h135fe00c4e7365f3(arg1);
    int64_t* var_60 = &var_68;
    int64_t (* var_58)(int64_t* arg1, int64_t* arg2) =
        _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
    void** const var_50 = &data_4f7cd8;
    int64_t var_48 = 1;
    int64_t var_30 = 0;
    int64_t** var_40 = &var_60;
    int64_t var_38 = 1;
    void var_20;
    core::option::Option$LT$T$GT$::map_or_else::h4698243df58dc779(&var_20, &var_50);
    int64_t result = std::io::error::Error::new::ha2b5f63706640a17(rax, &var_20);
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hcee48fbfcf3aefed(&var_68);
    return result;
}
