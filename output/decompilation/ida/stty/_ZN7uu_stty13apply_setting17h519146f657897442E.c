char __fastcall uu_stty::apply_setting(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  char v5; // cl
  char result; // al
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r15
  int v12[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v4 = a2;
  v5 = uu_stty::apply_baud_rate_flag();
  result = 1;
  if ( v5 == 2 )
  {
    v12[0] = 0;
    v7 = core::char::methods::encode_utf8_raw(v12);
    v8 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v7, a2, a3);
    v9 = v8;
    v11 = v10;
    if ( v8 )
      v4 = v8;
    else
      v11 = a3;
    result = uu_stty::apply_flag(a1, v4, v11, v8 != 0);
    if ( result == 2 )
    {
      result = uu_stty::apply_flag(a1, v4, v11, v9 != 0);
      if ( result == 2 )
      {
        result = uu_stty::apply_flag(a1, v4, v11, v9 != 0);
        if ( result == 2 )
          return uu_stty::apply_flag(a1, v4, v11, v9 != 0) & 1;
      }
    }
  }
  return result;
}