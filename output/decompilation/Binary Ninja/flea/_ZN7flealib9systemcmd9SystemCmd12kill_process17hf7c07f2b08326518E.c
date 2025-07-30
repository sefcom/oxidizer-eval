
  int128_t* flealib::systemcmd::SystemCmd::kill_process::hf7c07f2b08326518(int128_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_48 = arg3;
    int64_t rcx;
    int64_t var_40 = rcx;
    int64_t* var_78 = &var_48;
    int64_t (* var_70)(int64_t* arg1, int64_t* arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e99a2697242919d;
    char const (** const var_a8)[0x14] = &data_b09140;
    int64_t var_a0 = 1;
    int64_t var_88 = 0;
    int64_t** var_98 = &var_78;
    int64_t var_90 = 1;
    void var_60;
    int64_t var_58;
    int64_t var_50;
    flealib::systemcmd::SystemCmd::execute_bash_command::h10459d7455dc0e1e(&var_78, 
        core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_60, &var_a8), var_58, 
        var_50);
    int64_t** var_38 = &var_78;
    int64_t (* var_30)(void* arg1, int64_t* arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
    var_a8 = &data_b09150;
    int64_t var_a0_1 = 1;
    int64_t var_88_1 = 0;
    int64_t*** var_98_1 = &var_38;
    int64_t var_90_1 = 1;
    int128_t var_28;
    core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_28, &var_a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_78);
    int64_t var_18;
    arg1[1] = var_18;
    *arg1 = var_28;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_60);
    return arg1;
}
