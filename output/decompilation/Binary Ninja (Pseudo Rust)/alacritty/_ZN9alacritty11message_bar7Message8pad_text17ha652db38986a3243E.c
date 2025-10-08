
  fn alacritty::message_bar::Message::pad_text::ha652db38986a3243(arg1: *mut i128, arg2: *mut i64, arg3: i64, arg4: [i32; 0x4] @ zmm0) -> i64

{
    let rdi: *mut i8 = arg2[1];
    let rax: i64 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(rdi, &rdi[arg2[2]], arg4);
    let mut rsi_2: i64 = 0;
    
    if arg3 >= rax
    {
        rsi_2 = arg3 - rax;
    }
    
    let mut var_30: ();
    _$LT$T$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h4e14528b5566b325(
        &var_30, rsi_2);
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..Extend$LT$char$GT$$GT$::extend::h51d11e0496b22872(arg2, &var_30);
    let result: i64 = arg2[2];
    arg1[1] = result;
    *arg1 = *arg2;
    result
}
