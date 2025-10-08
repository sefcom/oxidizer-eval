char __fastcall alacritty::logging::is_allowed_target(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  char result; // al
  char v6; // cl
  __int64 v7; // rdx
  _QWORD v8[2]; // [rsp+0h] [rbp-28h] BYREF
  _QWORD v9[3]; // [rsp+10h] [rbp-18h] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v4 = core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL);
  if ( a1 != 1 && a1 != 2 || (result = 1, v4 != 5) )
  {
    v6 = <T as core::slice::cmp::SliceContains>::slice_contains(v8, 0LL, v3, v4);
    result = 1;
    if ( !v6 )
    {
      v9[0] = alacritty::logging::extra_log_targets((__int64)v8);
      v9[1] = v9[0] + 24 * v7;
      return ((__int64 (__fastcall *)(_QWORD *, _QWORD *))<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any)(
               v9,
               v8);
    }
  }
  return result;
}