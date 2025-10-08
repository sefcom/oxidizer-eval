FTSENT *__fastcall uu_chcon::fts::FTS::read_next_entry(__int64 a1, __int64 a2)
{
  FTSENT *result; // rax
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  _BYTE v5[4]; // [rsp+8h] [rbp-20h] BYREF
  int v6; // [rsp+Ch] [rbp-1Ch]

  result = fts_read(*(FTS **)a2);
  *(_QWORD *)(a2 + 8) = result;
  if ( result )
  {
    *(_BYTE *)(a1 + 4) = 1;
    *(_DWORD *)a1 = 18;
  }
  else
  {
    v3 = ((unsigned __int64)(unsigned int)*_errno_location() << 32) | 2;
    v4 = v3;
    std::io::error::repr_bitpacked::decode_repr(v5, v3);
    if ( v5[0] || v6 )
    {
      *(_DWORD *)a1 = 16;
      result = (FTSENT *)aFtsRead_0;
      *(_QWORD *)(a1 + 8) = aFtsRead_0;
      *(_QWORD *)(a1 + 16) = 10LL;
      *(_QWORD *)(a1 + 24) = v3;
    }
    else
    {
      *(_BYTE *)(a1 + 4) = 0;
      *(_DWORD *)a1 = 18;
      return (FTSENT *)core::ptr::drop_in_place<std::io::error::Error>(&v4);
    }
  }
  return result;
}