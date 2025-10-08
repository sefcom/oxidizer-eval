
  uint64_t alacritty::clipboard::Clipboard::new::h057223b09dc81a04(uint64_t* arg1, int32_t arg2, int64_t arg3)

{
    if (arg2 != 6)
        /* tailcall */
        return _$LT$alacritty..clipboard..Clipboard$u20$as$u20$core..default..Default$GT$::default::h95c70f02ce4db6f3(arg1);
    
    int128_t* rax;
    int64_t rdx;
    rax = copypasta::wayland_clipboard::create_clipboards_from_external::hc5be914f1b9013cd(arg3);
    int128_t* var_20 = rax;
    uint64_t rax_1 = alloc::boxed::Box$LT$T$GT$::new::h1e76a3124c301c1a(rdx);
    uint64_t result = alloc::boxed::Box$LT$T$GT$::new::h1e76a3124c301c1a(rax);
    *arg1 = rax_1;
    arg1[1] = &data_c816d8;
    arg1[2] = result;
    arg1[3] = &data_c81700;
    return result;
}
