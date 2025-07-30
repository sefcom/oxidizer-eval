
  int64_t flealib::commandprocessor::CommandProcessor::vec_to_string::h42d265a3d6a77fc9(int128_t* arg1, void* arg2)

{
    int64_t var_c0 = 0;
    int64_t var_b8 = 1;
    int64_t result = 0;
    int64_t rax;
    int64_t rdx;
    rax = _$LT$$RF$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7ee53d07f29f4608(arg2);
    int64_t var_a0 = rax;
    int64_t var_98 = rdx;
    
    for (int64_t i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3bfb18f4def3f622(&var_a0); i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3bfb18f4def3f622(&var_a0))
    {
        int64_t i_1 = i;
        int64_t* var_58 = &i_1;
        int64_t (* var_50_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49740bff2e11fb82;
        void* const var_88 = &data_b08608;
        int64_t var_80_1 = 2;
        int64_t var_68_1 = 0;
        int64_t** var_78_1 = &var_58;
        int64_t var_70_1 = 1;
        int128_t var_48;
        core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_48, &var_88);
        var_88 = var_48;
        uint64_t var_38;
        uint64_t var_78_2 = var_38;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_c0, var_80_1, var_38);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_88);
    }
    
    arg1[1] = result;
    *arg1 = var_c0;
    return result;
}
