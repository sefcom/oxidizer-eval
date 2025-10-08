
  fn uu_kill::print_signals::h042cfab5aaca8808() -> i64

{
    let mut var_230: ();
    memcpy(&var_230, &uucore::features::signals::ALL_SIGNALS::hb6c41a286543a4a8, 0x200);
    let mut var_240: i64 = 0;
    let var_238: i64 = 0x20;
    let mut i: i64;
    let mut rdx: i64;
    i = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h905af251fa7b808e(&var_240);
    
    while i != 0
    {
        let mut i_1: i64 = i;
        let var_288_1: i64 = rdx;
        let mut var_280: *mut i64 = &i_1;
        let var_278_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3a9a4fe6be7cab02;
        let mut var_270: *mut c_void = &data_4e7650;
        let var_268_1: i64 = 2;
        let var_250_1: i64 = 0;
        let var_260_1: *mut *mut i64 = &var_280;
        let var_258_1: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_270);
        i = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h905af251fa7b808e(&var_240);
    }
    
    i
}
