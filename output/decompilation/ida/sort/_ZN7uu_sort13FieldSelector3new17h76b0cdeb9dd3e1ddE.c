__int64 __fastcall uu_sort::FieldSelector::new(__int64 a1, __int128 *a2, __int128 *a3, __int64 a4)
{
  __int64 v5; // r8
  unsigned __int8 v6; // r8
  bool v7; // di
  bool v8; // r8
  __int128 v9; // xmm0
  __int64 v11; // [rsp+10h] [rbp-28h]
  __int128 v12; // [rsp+18h] [rbp-20h]
  __int64 v13; // [rsp+28h] [rbp-10h]

  v5 = *((_QWORD *)a2 + 1);
  if ( v5 )
  {
    if ( *(_QWORD *)a2 == 1LL )
    {
      if ( v5 == 1 )
      {
        v6 = *((_BYTE *)a3 + 16);
        v7 = (BYTE5(a4) < 2u || (*((_BYTE *)a2 + 16) | v6 ^ 2) != 0) && BYTE5(a4) != 2;
      }
      else
      {
        v7 = BYTE5(a4) != 2;
        v6 = *((_BYTE *)a3 + 16);
      }
      v8 = v6 != 2;
    }
    else
    {
      v7 = BYTE5(a4) != 2;
      v8 = 1;
    }
    v13 = *((_QWORD *)a2 + 2);
    v12 = *a2;
    v11 = *((_QWORD *)a3 + 2);
    v9 = *a3;
    *(_QWORD *)(a1 + 32) = *((_QWORD *)a2 + 1);
    *(_QWORD *)(a1 + 40) = v13;
    *(_OWORD *)a1 = v9;
    *(_QWORD *)(a1 + 16) = v11;
    *(_QWORD *)(a1 + 24) = v12;
    *(_BYTE *)(a1 + 52) = BYTE4(a4);
    *(_DWORD *)(a1 + 48) = a4;
    *(_BYTE *)(a1 + 53) = BYTE5(a4);
    *(_BYTE *)(a1 + 54) = v8;
    *(_BYTE *)(a1 + 55) = v7;
  }
  else
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(a1, aInvalidCharact, 59LL);
    *(_BYTE *)(a1 + 55) = 2;
  }
  return a1;
}
