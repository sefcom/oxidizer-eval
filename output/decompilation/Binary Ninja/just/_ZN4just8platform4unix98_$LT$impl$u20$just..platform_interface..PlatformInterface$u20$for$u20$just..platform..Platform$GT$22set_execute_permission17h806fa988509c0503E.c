
  int64_t just::platform::unix::_$LT$impl$u20$just..platform_interface..PlatformInterface$u20$for$u20$just..platform..Platform$GT$::set_execute_permission::h806fa988509c0503(int64_t arg1, int64_t arg2)

{
    int32_t var_c0;
    std::fs::metadata::h5a72efc395e817ee(&var_c0, arg1);
    int32_t var_88;
    
    if (var_c0 != 2)
        /* tailcall */
        return std::fs::set_permissions::h821a786bf489bdf4(arg1, arg2, var_88 | 0x40);
    int64_t result;
    return result;
}
