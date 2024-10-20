__int64 __fastcall uu_sort::FieldSelector::new(__int64 a1, __int128 *a2, __int128 *a3, __int64 a4)
{
  __int64 v4; // r8
  char v5; // r10
  char v6; // r8
  bool v7; // r9
  __int64 v8; // rbx
  void *v9; // r14
  __int128 v10; // xmm0
  __int64 v12; // [rsp+8h] [rbp-60h] BYREF
  __int64 v13; // [rsp+10h] [rbp-58h]
  void *v14; // [rsp+18h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+38h] [rbp-30h]
  __int64 v17; // [rsp+48h] [rbp-20h]

  v4 = *((_QWORD *)a2 + 1);
  if ( v4 )
  {
    if ( *(_QWORD *)a2 == 1LL )
    {
      v5 = *((_BYTE *)a3 + 16);
      if ( v4 != 1 || v5 != 2 || BYTE5(a4) < 2u || (v5 = 2, v6 = 0, v7 = 0, (a2[1] & 1) != 0) )
      {
        v6 = BYTE5(a4) != 2;
        v7 = v5 != 2;
      }
    }
    else
    {
      v6 = BYTE5(a4) != 2;
      v7 = 1;
    }
    v17 = *((_QWORD *)a2 + 2);
    v16 = *a2;
    v15 = *((_QWORD *)a3 + 2);
    v10 = *a3;
    *(_QWORD *)(a1 + 32) = *((_QWORD *)&v16 + 1);
    *(_QWORD *)(a1 + 40) = v17;
    *(_OWORD *)a1 = v10;
    *(_QWORD *)(a1 + 16) = v15;
    *(_QWORD *)(a1 + 24) = v16;
    *(_BYTE *)(a1 + 52) = BYTE4(a4);
    *(_DWORD *)(a1 + 48) = a4;
    *(_BYTE *)(a1 + 53) = BYTE5(a4);
    *(_BYTE *)(a1 + 54) = v7;
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v12, 59LL, 0LL);
    v8 = v13;
    if ( v12 )
      alloc::raw_vec::handle_error(v13, v14);
    v9 = v14;
    core::intrinsics::copy_nonoverlapping::precondition_check(aInvalidCharact, v14, 1LL, 1LL, 59LL);
    qmemcpy(v9, "invalid character index 0 for the start position of a field", 59);
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = 59LL;
    v6 = 2;
  }
  *(_BYTE *)(a1 + 55) = v6;
  return a1;
}
