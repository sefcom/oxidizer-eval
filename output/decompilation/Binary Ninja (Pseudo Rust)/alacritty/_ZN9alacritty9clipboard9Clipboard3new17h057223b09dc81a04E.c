
  fn alacritty::clipboard::Clipboard::new::h057223b09dc81a04(arg1: *mut u64, arg2: i32, arg3: i64) -> u64

{
    if arg2 != 6
    {
        /* tailcall */
        return _$LT$alacritty..clipboard..Clipboard$u20$as$u20$core..default..Default$GT$::default::h95c70f02ce4db6f3(arg1);
    }
    
    let mut rax: *mut i128;
    let mut rdx: i64;
    rax = copypasta::wayland_clipboard::create_clipboards_from_external::hc5be914f1b9013cd(arg3);
    let var_20: *mut i128 = rax;
    let rax_1: u64 = alloc::boxed::Box$LT$T$GT$::new::h1e76a3124c301c1a(rdx);
    let result: u64 = alloc::boxed::Box$LT$T$GT$::new::h1e76a3124c301c1a(rax);
    *arg1 = rax_1;
    arg1[1] = &data_c816d8;
    arg1[2] = result;
    arg1[3] = &data_c81700;
    result
}
