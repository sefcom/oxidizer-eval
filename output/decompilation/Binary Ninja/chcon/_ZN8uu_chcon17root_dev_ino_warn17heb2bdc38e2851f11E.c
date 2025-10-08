
  void* uu_chcon::root_dev_ino_warn::heb2bdc38e2851f11(int64_t arg1, uint64_t arg2)

{
    void* const var_a0;
    char const (** const var_70)[0x11];
    int64_t* var_50;
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he02cbea1a37bd162(arg1, arg2, "/std::fs::symlink_metadata: warn…", 1))
    {
        char const (** rax_1)[0x11];
        int64_t rdx;
        rax_1 = uucore::util_name::h074417a1e6395129();
        var_70 = rax_1;
        int64_t var_68 = rdx;
        var_50 = &var_70;
        int64_t (* var_48)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfc43d111ea64d20e;
        var_a0 = &data_4f04a0;
        int64_t var_98 = 2;
        int64_t var_80 = 0;
        int64_t** var_90 = &var_50;
        int64_t var_88 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
        var_70 = &uu_chcon::options::preserve_root::NO_PRESERVE_ROOT::hbcb70d7a28ebeb93;
        int64_t (* var_68_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfc43d111ea64d20e;
        var_a0 = &data_4f04c0;
        int64_t var_98_1 = 2;
        int64_t var_80_1 = 0;
        char const (** const* var_90_1)[0x11] = &var_70;
        int64_t var_88_1 = 1;
        return std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
    }
    
    char const (** rax_3)[0x11];
    int64_t rdx_1;
    rax_3 = uucore::util_name::h074417a1e6395129();
    var_70 = rax_3;
    int64_t var_68_2 = rdx_1;
    var_50 = &var_70;
    int64_t (* var_48_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfc43d111ea64d20e;
    var_a0 = &data_4f04a0;
    int64_t var_98_2 = 2;
    int64_t var_80_2 = 0;
    int64_t** var_90_2 = &var_50;
    int64_t var_88_2 = 1;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
    var_70 = 1;
    int64_t var_68_3 = arg1;
    uint64_t var_60_1 = arg2;
    char var_58_1 = 1;
    var_50 = &var_70;
    int64_t (* var_48_2)(int32_t* arg1, int64_t* arg2) =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    char const (** const var_40_1)[0x11] =
        &uu_chcon::options::preserve_root::NO_PRESERVE_ROOT::hbcb70d7a28ebeb93;
    int64_t (* var_38_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfc43d111ea64d20e;
    var_a0 = &data_4f04e0;
    int64_t var_98_3 = 3;
    int64_t var_80_3 = 0;
    int64_t** var_90_3 = &var_50;
    int64_t var_88_3 = 2;
    return std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
}
