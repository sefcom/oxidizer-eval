__int64 __fastcall uu_mv::rename_fifo_fallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _BYTE v7[8]; // [rsp+8h] [rbp-30h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h]

  std::fs::exists(v7, a3, a4);
  if ( v7[0] == 1 )
    return v8;
  if ( v7[1] != 1 || (result = std::fs::remove_file(a3, a4)) == 0 )
  {
    result = uucore::features::fs::make_fifo(a3, a4);
    if ( !result )
      return std::fs::remove_file(a1, a2);
  }
  return result;
}