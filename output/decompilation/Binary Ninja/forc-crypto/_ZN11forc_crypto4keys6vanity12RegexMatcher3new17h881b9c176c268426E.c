
  char const (***)[0xa] forc_crypto::keys::vanity::RegexMatcher::new::h881b9c176c268426(char const (*** arg1)[0xa], int64_t arg2, uint64_t arg3)

{
    int64_t var_30 = arg2;
    uint64_t var_28 = arg3;
    int64_t* var_20 = &var_30;
    int64_t (* var_18)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h30043921d5c5f2d0;
    char const (** const var_98)[0xa] = &data_a2f008;
    int64_t var_90 = 1;
    int64_t var_78 = 0;
    int64_t** var_88 = &var_20;
    int64_t var_80 = 1;
    void var_48;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_48, 0, arg3, &var_98);
    int64_t var_40;
    regex::regex::string::Regex::new::h92399a8041d2121d(&var_98, var_40);
    char const (** const r14)[0xa] = var_98;
    int128_t zmm0 = var_90;
    
    if (!r14)
    {
        int64_t var_88_1 = var_80;
        var_98 = zmm0;
        arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h776f44fb6b4ee09d(&var_98);
        *arg1 = nullptr;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_48);
    }
    else
    {
        arg1[3] = var_80;
        *(arg1 + 8) = zmm0;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_48);
        *arg1 = r14;
    }
    
    return arg1;
}
