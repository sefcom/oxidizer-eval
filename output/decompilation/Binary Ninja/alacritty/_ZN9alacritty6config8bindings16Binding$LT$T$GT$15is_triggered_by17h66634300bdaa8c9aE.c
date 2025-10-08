
  bool alacritty::config::bindings::Binding$LT$T$GT$::is_triggered_by::h66634300bdaa8c9a(void* arg1, bool arg2, int32_t arg3, int16_t arg4, int16_t arg5)

{
    if (!_$LT$winit..event..MouseButton$u20$as$u20$core..cmp..PartialEq$GT$::eq::h519e731f333c5074(
            *(arg1 + 0x30), *(arg1 + 0x32), arg4, arg5) || *(arg1 + 0x34) != arg3)
        return false;
    
    if (*(arg1 + 0x38) & ~arg2)
        return 0;
    
    return !(*(arg1 + 0x39) & arg2);
}
