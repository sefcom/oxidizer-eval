
  int64_t metal_crusher::fun::notify::hb8b2a52834cecaca()

{
    int64_t* var_280 = rand::rngs::thread::rng::hf0f1cc4222ade925();
    int32_t rax_1 = rand::rng::Rng::random_range::h314d1556f613f069(&var_280, 0, 0xffffffff);
    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::h85086739cd9d0457(&var_280);
    std::sync::poison::once::Once::call_once::h38b33f284e35dbeb();
    _$LT$T$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::hd4d6040019a153be(
        &var_280, 1, 0, 0);
    int64_t rax_2;
    int64_t rdx_1;
    rax_2 = std::thread::local::LocalKey$LT$T$GT$::with::h8f8e589f1c431455(&data_996588);
    char const* const var_340 = "Metal Crusherdialog-informationd…";
    int64_t var_338 = 0xd;
    int32_t var_2d0 = rax_1;
    char const* const var_330 = "dialog-informationdbus-send --se…";
    int64_t var_328 = 0x12;
    int64_t rdi;
    int64_t var_320 = rdi;
    int64_t rsi;
    int64_t var_318 = rsi;
    int64_t rdx;
    int64_t var_310 = rdx;
    int64_t rcx;
    int64_t var_308 = rcx;
    int128_t var_358 = var_280;
    int64_t var_270;
    int64_t var_348 = var_270;
    int128_t var_300 = *data_996590;
    int128_t var_2f0 = data_9965a0;
    int64_t var_2e0 = rax_2;
    int64_t var_2d8 = rdx_1;
    int32_t var_2cc = 0xbb8;
    var_280 = &metal_crusher::fun::FUN_INSTANCE::hc5e563d48c906004;
    char const* const var_250 = "org.freedesktop.NotificationsMet…";
    int64_t var_248 = 0x1d;
    char const* const var_278 = "/org/freedesktop/NotificationsNo…";
    int64_t var_270_1 = 0x1e;
    char const* const var_240 = "org.freedesktop.NotificationsMet…";
    int64_t var_238 = 0x1d;
    char const* const var_268 = "Notify/rustc/1799887bb281d1ab492…";
    int64_t var_260 = 6;
    int128_t* var_258 = &var_358;
    char var_230 = 0;
    void var_2c0;
    async_io::driver::block_on::h5dbae8df137ade10(&var_2c0, &var_280);
    core::ptr::drop_in_place$LT$$LP$$RF$str$C$u32$C$$RF$str$C$$RF$str$C$$RF$str$C$alloc..vec..Vec$LT$$RF$str$GT$$C$std..collections..hash..map..HashMap$LT$$RF$str$C$$RF$zvariant..value..Value$GT$$C$i32$RP$$GT$::ha8e5c64d08ec86f7(&var_358);
    return core::ptr::drop_in_place$LT$core..result..Result$LT$zbus..message..Message$C$zbus..error..Error$GT$$GT$::hb2e84c115fc8b39a(&var_2c0);
}
