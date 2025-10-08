
  int64_t uu_who::platform::unix::Who::print_deadprocs::h2131ef1c65baa56a(void* arg1, void* arg2)

{
    int128_t var_b8;
    uucore::features::utmpx::Utmpx::terminal_suffix::h90f3d33375c1dd6b(&var_b8, arg2);
    int128_t* var_98 = &var_b8;
    int64_t (* var_90)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    void** const var_e8 = &data_4fef78;
    int64_t var_e0 = 1;
    int64_t var_c8 = 0;
    int128_t** var_d8 = &var_98;
    int64_t var_d0 = 1;
    int128_t var_80;
    core::option::Option$LT$T$GT$::map_or_else::ha4af03a514854fed(&var_80, &var_e8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_b8);
    int128_t var_68 = var_80;
    int64_t var_70;
    int64_t var_58 = var_70;
    var_98 = *(arg2 + 4);
    var_80 = &var_98;
    *var_80[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
    var_e8 = &data_418a60;
    int64_t var_e0_1 = 1;
    int64_t var_c8_1 = 0;
    int128_t* var_d8_1 = &var_80;
    int64_t var_d0_1 = 1;
    core::option::Option$LT$T$GT$::map_or_else::ha4af03a514854fed(&var_b8, &var_e8);
    int128_t var_48 = var_b8;
    int64_t var_a8;
    int64_t var_38 = var_a8;
    int32_t var_ec = *(arg2 + 0x14c);
    var_b8 = &var_ec;
    *var_b8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i16$GT$::fmt::ha4190c1a8029117b;
    void* var_a8_1 = &*var_ec[2];
    uint64_t (* var_a0)(int16_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i16$GT$::fmt::ha4190c1a8029117b;
    var_e8 = &data_4fef88;
    int64_t var_e0_2 = 2;
    int64_t var_c8_2 = 0;
    int128_t* var_d8_2 = &var_b8;
    int64_t var_d0_2 = 2;
    core::option::Option$LT$T$GT$::map_or_else::ha4af03a514854fed(&var_80, &var_e8);
    var_98 = var_80;
    int64_t var_88 = var_70;
    uucore::features::utmpx::Utmpx::tty_device::h164f6e4ca04cfddc(&var_b8, arg2);
    int64_t r15 = *var_b8[8];
    uu_who::platform::unix::time_string::hf7b3fb93d48ce0b2(&var_e8, arg2);
    int64_t var_130 = 0;
    uu_who::platform::unix::Who::print_line::h48873e2090b4b940(arg1, 1, 0, 0x20, r15, var_e0_2, 1, 
        var_48, var_68, var_90);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_e8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_b8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_98);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_48);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_68);
}
