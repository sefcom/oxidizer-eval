char __fastcall uu_timeout::send_signal(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rdx
  char result; // al

  if ( a3 )
  {
    v3 = <std::process::Child as uucore::features::process::ChildExt>::send_signal();
    return core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v3);
  }
  v4 = ((__int64 (*)(void))<std::process::Child as uucore::features::process::ChildExt>::send_signal_group)();
  core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v4);
  if ( (uucore::features::signals::signal_by_name_or_value(aKill_0, 4LL) & 1) == 0 )
    core::option::unwrap_failed(&off_112830);
  v6 = v5;
  if ( (uucore::features::signals::signal_by_name_or_value(aCont, 4LL) & 1) == 0 )
    core::option::unwrap_failed(&off_112848);
  result = a2 != v6;
  if ( a2 != v7 && a2 != v6 )
  {
    v3 = <std::process::Child as uucore::features::process::ChildExt>::send_signal_group(a1, v7);
    return core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v3);
  }
  return result;
}