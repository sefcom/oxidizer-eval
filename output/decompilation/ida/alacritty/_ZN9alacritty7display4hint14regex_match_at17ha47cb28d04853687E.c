__int64 __fastcall alacritty::display::hint::regex_match_at(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        char a6)
{
  __int64 result; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // [rsp+0h] [rbp-128h] BYREF
  __int128 v12; // [rsp+10h] [rbp-118h]
  __int64 v13; // [rsp+20h] [rbp-108h]
  __int64 v14; // [rsp+28h] [rbp-100h] BYREF
  int v15; // [rsp+30h] [rbp-F8h]
  _OWORD v16[2]; // [rsp+38h] [rbp-F0h] BYREF
  unsigned __int8 v17; // [rsp+58h] [rbp-D0h]
  _BYTE v18[7]; // [rsp+59h] [rbp-CFh]
  _OWORD v19[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+80h] [rbp-A8h]
  _BYTE v21[16]; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-70h]
  int v23; // [rsp+C0h] [rbp-68h]
  __int64 v24; // [rsp+C8h] [rbp-60h]
  __int64 v25; // [rsp+D0h] [rbp-58h]
  char v26; // [rsp+F8h] [rbp-30h]

  v14 = a3;
  v15 = a4;
  alacritty::display::hint::visible_regex_match_iter((__int64)v19, a2, a5);
  <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold(v16, v19, &v14);
  result = v17;
  if ( v17 == 2 )
    goto LABEL_2;
  v12 = v16[1];
  v11 = v16[0];
  *(_DWORD *)((char *)&v13 + 1) = *(_DWORD *)v18;
  HIDWORD(v13) = *(_DWORD *)&v18[3];
  LOBYTE(v13) = v17;
  if ( a6 )
  {
    v24 = a5;
    v25 = a2;
    v26 = 2;
    v22 = v12;
    v23 = DWORD2(v12);
    alacritty::display::hint::HintPostProcessor<T>::next_processed_match(v21, &v11);
    result = core::iter::traits::iterator::Iterator::try_fold(v19, v21, &v14);
    if ( (_BYTE)v20 == 2 )
    {
LABEL_2:
      *(_BYTE *)(a1 + 32) = 2;
      return result;
    }
    result = v20;
    *(_QWORD *)(a1 + 32) = v20;
    v9 = v19[0];
    v10 = v19[1];
  }
  else
  {
    result = v13;
    *(_QWORD *)(a1 + 32) = v13;
    v9 = v11;
    v10 = v12;
  }
  *(_OWORD *)(a1 + 16) = v10;
  *(_OWORD *)a1 = v9;
  return result;
}