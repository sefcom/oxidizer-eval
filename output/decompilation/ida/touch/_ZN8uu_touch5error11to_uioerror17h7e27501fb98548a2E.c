__int64 __fastcall uu_touch::error::to_uioerror(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax
  _BYTE v5[4]; // [rsp+8h] [rbp-20h] BYREF
  int v6; // [rsp+Ch] [rbp-1Ch]

  std::io::error::repr_bitpacked::decode_repr(v5);
  if ( v5[0] )
  {
    v2 = (unsigned __int8)std::io::error::Error::kind(a2);
    v3 = 3LL;
  }
  else
  {
    v2 = v6;
    v3 = 2LL;
  }
  result = v3 | (v2 << 32);
  *a1 = 0x8000000000000000LL;
  a1[3] = result;
  return result;
}