
  fn alacritty::config::cursor::_$LT$impl$u20$core..convert..From$LT$alacritty..config..cursor..ConfigCursorStyle$GT$$u20$for$u20$vte..ansi..CursorStyle$GT$::from::hf8b7e6b388c32a93(arg1: i32) -> i64

{
    let mut rcx_1: i32;
    rcx_1 = (arg1 & 0xfe00) == 0x200;
    let mut result: i16;
    result = arg1 != 3;
    result &= rcx_1;
    result
}
