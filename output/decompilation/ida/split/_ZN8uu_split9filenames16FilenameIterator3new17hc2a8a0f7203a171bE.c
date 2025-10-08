__int64 (__fastcall **__fastcall uu_split::filenames::FilenameIterator::new(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4))()
{
  unsigned __int64 v5; // r14
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned __int64 v9; // r13
  __int64 v10; // rsi
  __int64 (__fastcall **result)(); // rax
  __int128 v12; // xmm0
  _QWORD v13[2]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v14; // [rsp+10h] [rbp-58h]
  __int64 v15; // [rsp+18h] [rbp-50h]
  _BYTE v16[24]; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+38h] [rbp-30h]

  v5 = a3;
  v7 = *(unsigned __int8 *)(a4 + 41);
  LOBYTE(v7) = 8 * v7;
  v8 = (unsigned int)&loc_100A1A >> v7;
  v9 = 0x8000000000000000LL;
  if ( *(_BYTE *)(a4 + 40) )
  {
    v10 = *(_QWORD *)(a4 + 32);
  }
  else
  {
    uu_split::number::FixedWidthNumber::new(v13, (unsigned __int8)v8, *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 32));
    if ( v13[0] == 0x8000000000000000LL )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v16, aNumericalSuffi, 63LL);
      v17 = 1;
      *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(v16);
      result = &off_10AB40;
      *(_QWORD *)(a1 + 16) = &off_10AB40;
      *(_QWORD *)a1 = 0x8000000000000001LL;
      return result;
    }
    v10 = v13[1];
    LOBYTE(v8) = v14;
    v7 = v15;
    a3 = v14 >> 8;
    v9 = v13[0];
  }
  v12 = *(_OWORD *)(a4 + 8);
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v10;
  *(_BYTE *)(a1 + 16) = v8;
  *(_DWORD *)(a1 + 17) = a3;
  result = (__int64 (__fastcall **)())HIWORD(a3);
  *(_BYTE *)(a1 + 23) = BYTE6(a3);
  *(_WORD *)(a1 + 21) = WORD2(a3);
  *(_QWORD *)(a1 + 24) = v7;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = v5;
  *(_OWORD *)(a1 + 48) = v12;
  *(_BYTE *)(a1 + 64) = 1;
  return result;
}