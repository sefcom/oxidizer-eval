
  int64_t just::subcommand::Subcommand::groups::h91135709a9d2e1de(void* arg1, void* arg2)

{
    char const (** const var_b8)[0xd5] = &data_831050;
    int64_t var_b0 = 1;
    int64_t var_a8 = 8;
    int128_t var_a0 = {0};
    std::io::stdio::_print::h5e446ff973c02de6(&var_b8);
    just::justfile::Justfile::public_groups::he2abda4ed6140bb7(&var_b8, arg2, *(arg1 + 0x1a3));
    void var_50;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he9001c4925ee01b8(&var_50, &var_b8);
    int64_t i;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h89f3f68b0a4d6be6(&i, &var_50);
    
    if (!(0 + -(i)))
    {
        do
        {
            int64_t var_c0;
            int64_t var_78_1 = var_c0;
            int128_t var_88 = i;
            void* var_70 = arg1 + 0x48;
            int64_t (* var_68_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            int128_t* var_60_1 = &var_88;
            int64_t (* var_58_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_b8 = &data_831060;
            int64_t var_b0_1 = 3;
            *var_a0[8] = 0;
            void** var_a8_1 = &var_70;
            var_a0 = 2;
            std::io::stdio::_print::h5e446ff973c02de6(&var_b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_88);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h89f3f68b0a4d6be6(&i, &var_50);
        } while (i != -0x8000000000000000);
    }
    
    return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h57d196e280b32628(&var_50);
}
