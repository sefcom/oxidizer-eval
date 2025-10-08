
  fn alacritty_terminal::sync::FairMutex$LT$T$GT$::lock::h8771cda87d96e8b1(arg1: *mut i8) -> *mut i8

{
    let rax: i64;
    let var_18: i64 = rax;
    _$LT$parking_lot..raw_mutex..RawMutex$u20$as$u20$lock_api..mutex..RawMutex$GT$::lock::h8f21b5fe103f8e9a(&arg1[0x6f0]);
    _$LT$parking_lot..raw_mutex..RawMutex$u20$as$u20$lock_api..mutex..RawMutex$GT$::lock::h8f21b5fe103f8e9a(arg1);
    core::ptr::drop_in_place$LT$lock_api..mutex..MutexGuard$LT$parking_lot..raw_mutex..RawMutex$C$alacritty_terminal..term..Term$LT$alacritty..event..EventProxy$GT$$GT$$GT$::h090449980f2d2d72(&arg1[0x6f0]);
    arg1
}
