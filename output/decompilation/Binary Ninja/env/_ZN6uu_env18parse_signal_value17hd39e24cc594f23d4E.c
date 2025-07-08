
  int64_t uu_env::parse_signal_value::hd39e24cc594f23d4(int128_t** arg1, int64_t* arg2, size_t arg3)

{
    void var_88;
    alloc::str::_$LT$impl$u20$str$GT$::to_uppercase::h63d26fcff35cb62e(&var_88, arg2, arg3);
    int64_t* var_80;
    size_t var_78;
    int64_t rax;
    int64_t rdx;
    rax = uucore::features::signals::signal_by_name_or_value::hc8db721c3f0fdbdd(var_80, var_78);
    int64_t var_60 = 0;
    int64_t* var_58 = arg2;
    size_t var_50 = arg3;
    char var_48 = 1;
    int64_t* var_70 = &var_60;
    int64_t (* var_68)(void* arg1, void* arg2) =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    void* const var_b8 = &data_5488b0;
    int64_t var_b0 = 2;
    int64_t var_98 = 0;
    int64_t** var_a8 = &var_70;
    int64_t var_a0 = 1;
    int128_t var_40;
    core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d(&var_40, &var_b8);
    var_a0 = 0x7d;
    var_b8 = var_40;
    int64_t var_30;
    int64_t var_a8_1 = var_30;
    int128_t* rax_2 = alloc::boxed::Box$LT$T$GT$::new::h48315bbd00cc7109(&var_b8);
    
    if (!rax || !rdx)
    {
        *arg1 = rax_2;
        arg1[1] = &data_548908;
    }
    else
    {
        arg1[1] = rdx;
        *arg1 = nullptr;
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h327fc43f13d631eb(rax_2);
    }
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hc60ce05406126818(&var_88);
}
