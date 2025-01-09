__int64 __fastcall uu_dd::try_get_len_of_block_device(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r15
  int v6; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v7; // [rsp+8h] [rbp-C0h]
  int v8; // [rsp+38h] [rbp-90h]

  std::fs::File::metadata(&v6, a2, a3);
  if ( v6 == 2 )
  {
    result = v7;
    goto LABEL_3;
  }
  result = (unsigned __int16)v8 & 0xF000;
  if ( (_DWORD)result == 24576 )
  {
    result = <std::fs::File as std::io::Seek>::seek(a2, 1LL, 0LL);
    if ( result )
    {
      a1[1] = v4;
      goto LABEL_7;
    }
    v5 = v4;
    result = std::io::Seek::rewind(a2);
    if ( result )
    {
LABEL_3:
      a1[1] = result;
LABEL_7:
      *a1 = 2LL;
      return result;
    }
    *a1 = 1LL;
    a1[1] = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return result;
}
