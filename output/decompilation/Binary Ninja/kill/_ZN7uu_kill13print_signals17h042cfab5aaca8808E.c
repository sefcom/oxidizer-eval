
  int64_t uu_kill::print_signals::h042cfab5aaca8808()

{
    void var_230;
    memcpy(&var_230, &uucore::features::signals::ALL_SIGNALS::hb6c41a286543a4a8, 0x200);
    int64_t var_240 = 0;
    int64_t var_238 = 0x20;
    int64_t i;
    int64_t rdx;
    i = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h905af251fa7b808e(&var_240);
    
    while (i)
    {
        int64_t i_1 = i;
        int64_t var_288_1 = rdx;
        int64_t* var_280 = &i_1;
        int64_t (* var_278_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3a9a4fe6be7cab02;
        void* const var_270 = &data_4e7650;
        int64_t var_268_1 = 2;
        int64_t var_250_1 = 0;
        int64_t** var_260_1 = &var_280;
        int64_t var_258_1 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_270);
        i = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h905af251fa7b808e(&var_240);
    }
    
    return i;
}
