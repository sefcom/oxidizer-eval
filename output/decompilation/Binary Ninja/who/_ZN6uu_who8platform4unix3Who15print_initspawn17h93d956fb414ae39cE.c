
  int64_t uu_who::platform::unix::Who::print_initspawn::h93d956fb414ae39c(void* arg1, void* arg2)

{
    int128_t var_90;
    uucore::features::utmpx::Utmpx::terminal_suffix::h90f3d33375c1dd6b(&var_90, arg2);
    int128_t* var_78 = &var_90;
    int64_t (* var_70)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    void** const var_58 = &data_4fef78;
    int64_t var_50 = 1;
    int64_t var_38 = 0;
    int128_t** var_48 = &var_78;
    int64_t var_40 = 1;
    int128_t var_a8;
    core::option::Option$LT$T$GT$::map_or_else::ha4af03a514854fed(&var_a8, &var_58);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_90);
    var_78 = var_a8;
    int32_t var_ac = *(arg2 + 4);
    var_a8 = &var_ac;
    *var_a8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
    var_58 = &data_418a60;
    int64_t var_50_1 = 1;
    int64_t var_38_1 = 0;
    int128_t* var_48_1 = &var_a8;
    int64_t var_40_1 = 1;
    core::option::Option$LT$T$GT$::map_or_else::ha4af03a514854fed(&var_90, &var_58);
    var_a8 = var_90;
    uucore::features::utmpx::Utmpx::tty_device::h164f6e4ca04cfddc(&var_90, arg2);
    int64_t r12 = *var_90[8];
    uu_who::platform::unix::time_string::hf7b3fb93d48ce0b2(&var_58, arg2);
    int64_t var_98;
    int64_t var_d0 = var_98;
    int64_t var_80;
    int64_t var_e0 = var_80;
    int64_t var_c0 = 0;
    int64_t var_f0 = 0;
    uu_who::platform::unix::Who::print_line::h48873e2090b4b940(arg1, 1, 0, 0x20, r12, var_50_1, 1, 
        *var_a8[8], var_70, 1);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_58);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_90);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_a8);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_78);
}
