
  int64_t* just::function::parent_directory::he998b42e01b3bf07(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_58 = arg3;
    int64_t var_50 = arg4;
    char* rax;
    uint64_t rdx;
    rax = std::path::Path::parent::hef287f60afa56900(arg3, arg4);
    int64_t rax_2;
    char const (** const var_48)[0xab];
    
    if (!rax)
    {
        int64_t* var_18 = &var_58;
        int64_t (* var_10_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
        var_48 = &data_82ffa0;
        int64_t var_40_1 = 2;
        int64_t var_28_1 = 0;
        int64_t** var_38_1 = &var_18;
        int64_t var_30_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&arg1[1], 0, rdx, &var_48);
        rax_2 = 1;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h901fb789f3b446ec(
            &var_48, rax, rdx);
        char const (** const rax_1)[0xab] = var_48;
        int64_t var_40;
        *(arg1 + 0x10) = var_40;
        arg1[1] = rax_1;
        rax_2 = 0;
    }
    *arg1 = rax_2;
    return arg1;
}
