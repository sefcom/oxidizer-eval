
  fn just::function::env::hd72232ca44c3d4f4(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: u64, arg5: i64, arg6: u64) -> *mut i64

{
    if arg5 != 0
    {
        just::function::env_var_or_default::hb666ce340b10189a(arg1, arg2, arg3, arg4, arg5, arg6);
        return arg1;
    }
    
    just::function::env_var::hbabeac8dce4c02ef(arg1, arg2, arg3, arg4);
    arg1
}
