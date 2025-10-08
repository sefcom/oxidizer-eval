
  int64_t alacritty::config::cursor::_$LT$impl$u20$core..convert..From$LT$alacritty..config..cursor..ConfigCursorStyle$GT$$u20$for$u20$vte..ansi..CursorStyle$GT$::from::hf8b7e6b388c32a93(int32_t arg1) __pure

{
    int32_t rcx_1;
    rcx_1 = (arg1 & 0xfe00) == 0x200;
    int16_t result;
    result = arg1 != 3;
    result &= rcx_1;
    return result;
}
