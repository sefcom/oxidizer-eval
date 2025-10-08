char __fastcall forc_debug::cli::commands::Commands::is_register_command(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // cl
  char result; // al
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  v3 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1[30], a1[31], a2);
  result = 1;
  if ( !v3 )
    return <T as core::slice::cmp::SliceContains>::slice_contains(v5, a1[32], a1[33]);
  return result;
}