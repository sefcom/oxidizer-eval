__int64 __fastcall uu_join::parse_field_number_option(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+0h] [rbp-18h] BYREF
  __int64 v6; // [rsp+8h] [rbp-10h]

  if ( a2 )
  {
    uu_join::parse_field_number(&v5, a2, a3);
    result = v5;
    if ( v5 )
    {
      v4 = v6;
      a1[1] = v5;
      a1[2] = v4;
      *a1 = 1LL;
    }
    else
    {
      result = v6;
      a1[1] = 1LL;
      a1[2] = result;
      *a1 = 0LL;
    }
  }
  else
  {
    *(_OWORD *)a1 = 0LL;
  }
  return result;
}
