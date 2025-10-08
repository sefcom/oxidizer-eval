
  fn alacritty::config::bindings::BindingMode::new::h37ed06d7071d7006(arg1: i32, arg2: i32) -> u64

{
    let mut var_19: i8 = 0;
    alacritty::config::bindings::_::InternalBitFlags::set::h14601641b5933c70(&var_19, 1, 
        (arg1 & 2) >> 1);
    alacritty::config::bindings::_::InternalBitFlags::set::h14601641b5933c70(&var_19, 2, 
        (arg1 & 4) >> 2);
    alacritty::config::bindings::_::InternalBitFlags::set::h14601641b5933c70(&var_19, 4, 
        arg1 >> 0xc & 1);
    alacritty::config::bindings::_::InternalBitFlags::set::h14601641b5933c70(&var_19, 8, 
        arg1 >> 0x10 & 1);
    alacritty::config::bindings::_::InternalBitFlags::set::h14601641b5933c70(&var_19, 0x10, arg2);
    alacritty::config::bindings::_::InternalBitFlags::set::h14601641b5933c70(&var_19, 0x20, 
        arg1 >> 0x12 & 1);
    alacritty::config::bindings::_::InternalBitFlags::set::h14601641b5933c70(&var_19, 0x40, 
        arg1 >> 0x15 & 1);
    var_19
}
