void *__fastcall alacritty::string::StrShortener::new(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, int a5)
{
  void *result; // rax
  void *v6; // r14
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // r13
  unsigned __int64 v10; // r15
  __int64 v11; // rbp
  int v12; // r12d
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  char v19; // dl
  __int128 v20; // [rsp+10h] [rbp-78h] BYREF
  __int64 v21; // [rsp+20h] [rbp-68h]
  unsigned __int64 v22; // [rsp+28h] [rbp-60h]
  __int64 v23; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  __int128 v25; // [rsp+40h] [rbp-48h] BYREF
  __int64 v26; // [rsp+50h] [rbp-38h]

  result = &unk_110000;
  LODWORD(v6) = 8230;
  if ( !a3 )
    LODWORD(v6) = (unsigned int)&unk_110000;
  if ( a5 )
  {
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = a2 + a3;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 32) = a4;
    *(_BYTE *)(a1 + 44) = a5;
    *(_DWORD *)(a1 + 40) = (_DWORD)v6;
    *(_BYTE *)(a1 + 45) = 3;
    return result;
  }
  v22 = a4;
  v23 = a2;
  *(_QWORD *)&v20 = a2;
  v24 = a2 + a3;
  *((_QWORD *)&v20 + 1) = a2 + a3;
  v21 = 0LL;
  v7 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v20);
  if ( v8 == (_DWORD)&unk_110000 )
  {
    v9 = 0LL;
    v10 = 0LL;
    goto LABEL_16;
  }
  v11 = v7;
  v9 = 0LL;
  v12 = (int)v6;
  v10 = 0LL;
  while ( 1 )
  {
    v13 = 1LL;
    if ( v8 >= 0xA0 )
      v13 = (unsigned __int8)unicode_width::tables::lookup_width(v8);
    v10 += v13;
    if ( v10 > v22 == v10 < v22 )
      break;
    LODWORD(v6) = v12;
    if ( (unsigned __int8)((v10 > v22) - (v10 < v22)) != 255 )
      goto LABEL_15;
LABEL_10:
    v9 = v11 + 1;
    v11 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v20);
    v12 = (int)v6;
    if ( v8 == (_DWORD)&unk_110000 )
      goto LABEL_16;
  }
  v6 = &unk_110000;
  if ( v12 == (_DWORD)&unk_110000 )
    goto LABEL_10;
  v25 = v20;
  v26 = v21;
  <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v25);
  if ( v14 == (_DWORD)&unk_110000 )
    goto LABEL_10;
LABEL_15:
  LODWORD(v6) = v12;
LABEL_16:
  v15 = core::iter::traits::double_ended::DoubleEndedIterator::rfold(v20, *((_QWORD *)&v20 + 1), v21);
  v17 = core::option::Option<T>::map_or(v15, v16, v9);
  v18 = v22;
  v19 = (v10 < v22 || (_DWORD)v6 == (_DWORD)&unk_110000) | 2;
  *(_QWORD *)a1 = v23;
  *(_QWORD *)(a1 + 8) = v24;
  *(_QWORD *)(a1 + 16) = v17 - v9;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = v18;
  result = 0LL;
  *(_BYTE *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 40) = (_DWORD)v6;
  *(_BYTE *)(a1 + 45) = v19;
  return result;
}