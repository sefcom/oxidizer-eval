
  fn alacritty_terminal::term::TermDamageIterator::new::h9c507061ce1d7d92(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64) -> *mut i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let mut rdi: i64 = 0;
    
    if arg3 >= arg4
    {
        rdi = arg3 - arg4;
    }
    
    let mut rax_3: i64;
    let mut rdx: i64;
    rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0245a51238550835(rdi, arg2, arg3);
    *arg1 = rax_3;
    arg1[1] = rax_3 + rdx * 0x18;
    arg1[2] = arg4;
    arg1
}
