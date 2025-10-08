
  int64_t rg::flags::doc::version::generate_short::h331b40a84196a55d(int64_t* arg1)

{
    void var_58;
    uint64_t rdx = rg::flags::doc::version::generate_digits::hfdf8238140a9a514(&var_58);
    void* var_68 = &var_58;
    int64_t (* var_60)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    char const (** const var_40)[0x10] = &data_7eaab8;
    int64_t var_38 = 1;
    int64_t var_20 = 0;
    void** var_30 = &var_68;
    int64_t var_28 = 1;
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(arg1, 0, rdx, &var_40);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_58);
}
