__int64 __fastcall just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::set_execute_permission(
        __int64 a1,
        __int64 a2)
{
  int dest; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v4; // [rsp+10h] [rbp-B8h]
  int v5; // [rsp+40h] [rbp-88h]

  std::fs::metadata(&dest);
  if ( dest == 2 )
    return v4;
  else
    return std::fs::set_permissions(a1, a2, v5 | 0x40u);
}