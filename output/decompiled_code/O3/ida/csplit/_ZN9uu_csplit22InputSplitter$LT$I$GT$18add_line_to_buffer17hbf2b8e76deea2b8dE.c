        __int64 a6)
{
  __int64 result; // rax
  _BYTE v9[24]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+18h] [rbp-40h]
  __int128 v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-28h]

  if ( *(_BYTE *)(a2 + 56) )
  {
    v10 = *(_QWORD *)(a4 + 16);
    *(_OWORD *)&v9[8] = *(_OWORD *)a4;
    *(_QWORD *)v9 = a3;
    ((void (__fastcall *)(__int64, _QWORD, _BYTE *))alloc::vec::Vec<T,A>::insert)(a2, 0LL, v9);
LABEL_5:
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
    return result;
  }
  if ( *(_QWORD *)(a2 + 16) < *(_QWORD *)(a2 + 48) )
  {
    v10 = *(_QWORD *)(a4 + 16);
    *(_OWORD *)&v9[8] = *(_OWORD *)a4;
    *(_QWORD *)v9 = a3;
    ((void (__fastcall *)(__int64, _BYTE *, __int64, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
      a2,
      v9,
      a3,
      a4,
      a5,
      a6);
    goto LABEL_5;
  }
  alloc::vec::Vec<T,A>::remove(v9, a2, 0LL, &off_2DF828);
  v12 = v10;
  v11 = *(_OWORD *)&v9[8];
  v10 = *(_QWORD *)(a4 + 16);
  *(_OWORD *)&v9[8] = *(_OWORD *)a4;
  *(_QWORD *)v9 = a3;
  ((void (__fastcall *)(__int64, _BYTE *))alloc::vec::Vec<T,A>::push)(a2, v9);
  *(_QWORD *)&v9[16] = v12;
  *(_OWORD *)v9 = v11;
  return ((__int64 (__fastcall *)(_QWORD *, _BYTE *, char **))core::result::Result<T,E>::unwrap)(a1, v9, &off_2DF840);
}
