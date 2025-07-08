
  void uu_join::get_field_number::h8241ec84504e8cda(int128_t** arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    if (arg2 != 1)
    {
        if (!arg4)
            arg5 = arg4;
        
        arg1[1] = arg5;
        *arg1 = nullptr;
        return;
    }
    
    if (arg4 != 1 || arg3 == arg5)
    {
        arg1[1] = arg3;
        *arg1 = nullptr;
        return;
    }
    
    int64_t var_90 = arg3 + 1;
    int64_t var_88 = arg5 + 1;
    int64_t* var_80 = &var_90;
    uint64_t (* var_78)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    int64_t* var_70 = &var_88;
    uint64_t (* var_68)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    char const (** const var_60)[0x47] = &data_535490;
    int64_t var_58 = 2;
    int64_t var_40 = 0;
    int64_t** var_50 = &var_80;
    int64_t var_48 = 2;
    void var_30;
    core::option::Option$LT$T$GT$::map_or_else::h84da32fb4d9c85b4(&var_30, &var_60);
    int32_t var_18 = 1;
    *arg1 = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&var_30);
    arg1[1] = &data_5352b8;
}
