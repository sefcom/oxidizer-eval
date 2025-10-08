char __fastcall zoxide::db::stream::Stream::filter_by_exists(char a1, char a2, __int64 a3, __int64 a4)
{
  char result; // al
  __int64 (__fastcall *v5)(void *); // r8
  char v6; // al
  _BYTE v7[8]; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+8h] [rbp-B8h]
  int v9; // [rsp+10h] [rbp-B0h] BYREF
  __int64 v10; // [rsp+18h] [rbp-A8h]
  int v11; // [rsp+48h] [rbp-78h]

  result = 1;
  if ( (a1 & 1) != 0 )
  {
    v5 = std::fs::metadata;
    if ( (a2 & 1) != 0 )
      v5 = std::fs::symlink_metadata;
    ((void (__fastcall *)(int *, __int64, __int64))v5)(&v9, a3, a4);
    if ( v9 == 2 )
    {
      v8 = v10;
      v6 = 1;
    }
    else
    {
      v7[1] = (v11 & 0xF000) == 0x4000;
      v6 = 0;
    }
    v7[0] = v6;
    return core::result::Result<T,E>::unwrap_or_default(v7);
  }
  return result;
}