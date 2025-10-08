__int64 __fastcall uu_sort::FieldSelector::new(__int64 a1, __int128 *a2, __int128 *a3, __int64 a4)
{
  __int64 v5; // rdi
  bool v6; // di
  bool v7; // r8
  __int128 v9; // xmm0
  __int64 v10; // [rsp+10h] [rbp-28h]
  __int128 v11; // [rsp+18h] [rbp-20h]
  __int64 v12; // [rsp+28h] [rbp-10h]

  v5 = *((_QWORD *)a2 + 1);
  if ( v5 )
  {
    if ( *(_QWORD *)a2 ^ 1LL | v5 ^ 1 )
    {
      v6 = BYTE5(a4) != 2;
      v7 = 1;
      if ( *(_QWORD *)a2 == 1LL )
        v7 = *((_BYTE *)a3 + 16) != 2;
    }
    else if ( *((_BYTE *)a3 + 16) == 2 )
    {
      if ( BYTE5(a4) < 2u || (v6 = 0, v7 = 0, *((_BYTE *)a2 + 16) == 1) )
      {
        v6 = BYTE5(a4) != 2;
        v7 = 0;
      }
    }
    else
    {
      v6 = BYTE5(a4) != 2;
      v7 = 1;
    }
    v12 = *((_QWORD *)a2 + 2);
    v11 = *a2;
    v10 = *((_QWORD *)a3 + 2);
    v9 = *a3;
    *(_QWORD *)(a1 + 32) = *((_QWORD *)a2 + 1);
    *(_QWORD *)(a1 + 40) = v12;
    *(_OWORD *)a1 = v9;
    *(_QWORD *)(a1 + 16) = v10;
    *(_QWORD *)(a1 + 24) = v11;
    *(_BYTE *)(a1 + 52) = BYTE4(a4);
    *(_DWORD *)(a1 + 48) = a4;
    *(_BYTE *)(a1 + 53) = BYTE5(a4);
    *(_BYTE *)(a1 + 54) = v7;
    *(_BYTE *)(a1 + 55) = v6;
    return a1;
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aInvalidCharact, 59LL);
    *(_BYTE *)(a1 + 55) = 2;
    return a1;
  }
}