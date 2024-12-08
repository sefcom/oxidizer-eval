        __int64 a6)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE v16[24]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+18h] [rbp-40h]
  __int128 v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+30h] [rbp-28h]

  if ( *(_BYTE *)(a2 + 88) )
  {
    v17 = *(_QWORD *)(a4 + 16);
    *(_OWORD *)&v16[8] = *(_OWORD *)a4;
    *(_QWORD *)v16 = a3;
    ((void (__fastcall *)(__int64, _QWORD, _BYTE *, __int64, __int64, __int64))alloc::vec::Vec<T,A>::insert)(
      a2,
      0LL,
      v16,
      a4,
      a5,
      a6);
LABEL_5:
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
    return result;
  }
  if ( *(_QWORD *)(a2 + 16) < *(_QWORD *)(a2 + 80) )
  {
    v17 = *(_QWORD *)(a4 + 16);
    *(_OWORD *)&v16[8] = *(_OWORD *)a4;
    *(_QWORD *)v16 = a3;
    ((void (__fastcall *)(__int64, _BYTE *, __int64, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
      a2,
      v16,
      a3,
      a4,
      a5,
      a6);
    goto LABEL_5;
  }
  alloc::vec::Vec<T,A>::remove(v16, a2, 0LL, &off_2DF828);
  v19 = v17;
  v18 = *(_OWORD *)&v16[8];
  v17 = *(_QWORD *)(a4 + 16);
  *(_OWORD *)&v16[8] = *(_OWORD *)a4;
  *(_QWORD *)v16 = a3;
  ((void (__fastcall *)(__int64, _BYTE *, __int64, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
    a2,
    v16,
    v9,
    v10,
    v11,
    v12);
  *(_QWORD *)&v16[16] = v19;
  *(_OWORD *)v16 = v18;
  return ((__int64 (__fastcall *)(_QWORD *, _BYTE *, char **, __int64, __int64, __int64))core::result::Result<T,E>::unwrap)(
           a1,
           v16,
           &off_2DF840,
           v13,
           v14,
           v15);
}
