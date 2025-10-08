__int64 __fastcall rg::run(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  char v3; // al
  __int64 result; // rax
  _BYTE v5[8]; // [rsp+0h] [rbp-3B8h] BYREF
  __int64 v6; // [rsp+8h] [rbp-3B0h]
  _QWORD dest[117]; // [rsp+10h] [rbp-3A8h] BYREF

  v2 = 1LL;
  if ( (unsigned __int64)(*a2 - 2LL) < 3 )
    v2 = *a2 - 2LL;
  if ( !v2 )
    return rg::special(a1, *((unsigned int *)a2 + 2));
  if ( v2 == 1 )
  {
    memcpy(dest, a2, 0x398uLL);
    switch ( BYTE2(dest[100]) )
    {
      case 0:
        if ( !dest[48] && LOBYTE(dest[111]) != 1 || LODWORD(dest[4]) == 1 && !dest[5] )
          goto LABEL_15;
        if ( dest[98] != 1LL )
        {
          rg::search_parallel(v5, dest, BYTE3(dest[100]));
          goto LABEL_26;
        }
        rg::search(v5, dest, BYTE3(dest[100]));
        if ( v5[0] == 1 )
          goto LABEL_27;
        goto LABEL_12;
      case 1:
        if ( dest[98] == 1LL )
          rg::files(v5, dest);
        else
          rg::files_parallel(v5, dest);
LABEL_26:
        if ( v5[0] )
        {
LABEL_27:
          *(_QWORD *)(a1 + 8) = v6;
          *(_BYTE *)a1 = 1;
        }
        else
        {
LABEL_12:
          if ( (v5[1] & 1) != 0 && (BYTE2(dest[113]) || !rg::messages::errored()) )
            v3 = 0;
          else
LABEL_15:
            v3 = rg::messages::errored() + 1;
          *(_BYTE *)(a1 + 1) = v3;
          *(_BYTE *)a1 = 0;
        }
        break;
      case 2:
        rg::types(a1, a2);
        break;
      case 3:
        rg::generate(a1, BYTE3(dest[100]));
        break;
    }
    return core::ptr::drop_in_place<rg::flags::hiargs::HiArgs>(dest);
  }
  else
  {
    result = a2[1];
    *(_QWORD *)(a1 + 8) = result;
    *(_BYTE *)a1 = 1;
  }
  return result;
}