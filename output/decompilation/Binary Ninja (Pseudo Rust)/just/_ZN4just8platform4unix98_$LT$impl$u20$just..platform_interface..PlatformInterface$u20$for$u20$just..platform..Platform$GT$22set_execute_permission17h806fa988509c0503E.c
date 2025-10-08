
  fn just::platform::unix::_$LT$impl$u20$just..platform_interface..PlatformInterface$u20$for$u20$just..platform..Platform$GT$::set_execute_permission::h806fa988509c0503(arg1: i64, arg2: i64) -> i64

{
    let mut var_c0: i32;
    std::fs::metadata::h5a72efc395e817ee(&var_c0, arg1);
    let var_88: i32;
    
    if var_c0 != 2
    {
        /* tailcall */
        return std::fs::set_permissions::h821a786bf489bdf4(arg1, arg2, var_88 | 0x40);
    }
    let result: i64;
    result
}
