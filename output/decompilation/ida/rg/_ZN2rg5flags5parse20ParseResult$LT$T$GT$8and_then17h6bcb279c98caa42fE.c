__int64 __fastcall rg::flags::parse::ParseResult<T>::and_then(_QWORD *dest, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  _BYTE desta[608]; // [rsp+0h] [rbp-270h] BYREF

  v2 = 1LL;
  if ( (unsigned __int64)(*a2 - 2LL) < 3 )
    v2 = *a2 - 2LL;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      memcpy(desta, a2, sizeof(desta));
      return rg::flags::parse::parse::{{closure}}(dest);
    }
    else
    {
      result = a2[1];
      dest[1] = result;
      *dest = 4LL;
    }
  }
  else
  {
    result = *((unsigned __int8 *)a2 + 8);
    *((_BYTE *)dest + 8) = result;
    *dest = 2LL;
  }
  return result;
}