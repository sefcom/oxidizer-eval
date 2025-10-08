
  fn alacritty::migrate::Migration::new_path::h798257b5137424a1(arg1: *mut u64, arg2: *mut i64) -> *mut u64

{
    if !(0 + -(arg2[2]))
    {
        /* tailcall */
        return
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            arg1, &arg2[2]);
    }
    
    let mut var_28: ();
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_28, *arg2, arg2[1]);
    _$LT$alloc..string..String$u20$as$u20$core..convert..From$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::from::hf538378189c0d550(arg1, &var_28)
}
