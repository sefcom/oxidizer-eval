
  fn metal_crusher::fun::notify::hb8b2a52834cecaca() -> i64

{
    let mut var_280: *mut i64 = rand::rngs::thread::rng::hf0f1cc4222ade925();
    let rax_1: i32 = rand::rng::Rng::random_range::h314d1556f613f069(&var_280, 0, 0xffffffff);
    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::h85086739cd9d0457(&var_280);
    std::sync::poison::once::Once::call_once::h38b33f284e35dbeb();
    _$LT$T$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::hd4d6040019a153be(
        &var_280, 1, 0, 0);
    let mut rax_2: i64;
    let mut rdx_1: i64;
    rax_2 = std::thread::local::LocalKey$LT$T$GT$::with::h8f8e589f1c431455(&data_996588);
    let var_340: *const i8 = "Metal Crusherdialog-informationd…";
    let var_338: i64 = 0xd;
    let var_2d0: i32 = rax_1;
    let var_330: *const i8 = "dialog-informationdbus-send --se…";
    let var_328: i64 = 0x12;
    let rdi: i64;
    let var_320: i64 = rdi;
    let rsi: i64;
    let var_318: i64 = rsi;
    let rdx: i64;
    let var_310: i64 = rdx;
    let rcx: i64;
    let var_308: i64 = rcx;
    let mut var_358: i128 = var_280;
    let var_270: i64;
    let var_348: i64 = var_270;
    let var_300: i128 = *data_996590;
    let var_2f0: i128 = data_9965a0;
    let var_2e0: i64 = rax_2;
    let var_2d8: i64 = rdx_1;
    let var_2cc: i32 = 0xbb8;
    var_280 = &metal_crusher::fun::FUN_INSTANCE::hc5e563d48c906004;
    let var_250: *const i8 = "org.freedesktop.NotificationsMet…";
    let var_248: i64 = 0x1d;
    let var_278: *const i8 = "/org/freedesktop/NotificationsNo…";
    let var_270_1: i64 = 0x1e;
    let var_240: *const i8 = "org.freedesktop.NotificationsMet…";
    let var_238: i64 = 0x1d;
    let var_268: *const i8 = "Notify/rustc/1799887bb281d1ab492…";
    let var_260: i64 = 6;
    let var_258: *mut i128 = &var_358;
    let var_230: i8 = 0;
    let mut var_2c0: ();
    async_io::driver::block_on::h5dbae8df137ade10(&var_2c0, &var_280);
    core::ptr::drop_in_place$LT$$LP$$RF$str$C$u32$C$$RF$str$C$$RF$str$C$$RF$str$C$alloc..vec..Vec$LT$$RF$str$GT$$C$std..collections..hash..map..HashMap$LT$$RF$str$C$$RF$zvariant..value..Value$GT$$C$i32$RP$$GT$::ha8e5c64d08ec86f7(&var_358);
    core::ptr::drop_in_place$LT$core..result..Result$LT$zbus..message..Message$C$zbus..error..Error$GT$$GT$::hb2e84c115fc8b39a(&var_2c0)
}
