
  uint64_t alacritty::config::bindings::BindingMode::new::h37ed06d7071d7006(int32_t arg1, int32_t arg2)

{
    char var_19 = 0;
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
    return var_19;
}
