
  int64_t bat::vscreen::Attributes::update_with_charset::h05c800051a699d8f(void* arg1, int32_t arg2, int64_t arg3, int64_t arg4)

{
    int32_t var_9c = arg2;
    char const (** const var_78)[0x0];
    core::iter::traits::iterator::Iterator::take::heb50f55f44e46178(&var_78, arg3, arg4);
    void var_30;
    uint64_t rdx_1 =
        core::iter::traits::iterator::Iterator::collect::hf2327cdb95cc4d00(&var_30, &var_78);
    int32_t* var_98 = &var_9c;
    int64_t (* var_90)(int32_t* arg1, int64_t* arg2) =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
    void* var_88 = &var_30;
    int64_t (* var_80)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_78 = &data_aced50;
    int64_t var_70 = 2;
    int64_t var_58 = 0;
    int32_t** var_68 = &var_98;
    int64_t var_60 = 2;
    int128_t var_48;
    core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_48, 0, rdx_1, &var_78);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_30);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(arg1 + 0x48);
    int64_t result;
    *(arg1 + 0x58) = result;
    *(arg1 + 0x48) = var_48;
    return result;
}
