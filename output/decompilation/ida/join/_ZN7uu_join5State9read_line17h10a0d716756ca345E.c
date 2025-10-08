__int64 __fastcall uu_join::State::read_line(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 v8; // r12
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  _QWORD v11[3]; // [rsp+8h] [rbp-80h] BYREF
  _QWORD v12[3]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v13; // [rsp+38h] [rbp-50h] BYREF
  __int128 v14; // [rsp+48h] [rbp-40h]
  __int128 v15; // [rsp+58h] [rbp-30h]

  <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(v11, a2 + 40);
  result = v11[0];
  if ( v11[0] == 0x8000000000000001LL )
  {
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    v6 = v11[1];
    v7 = v11[2];
    ++*(_QWORD *)(a2 + 80);
    if ( result == 0x8000000000000000LL )
    {
      *(_QWORD *)(a1 + 8) = v6;
      *(_QWORD *)a1 = 0x8000000000000001LL;
    }
    else
    {
      v12[0] = result;
      v12[1] = v6;
      v12[2] = v7;
      v8 = *(_QWORD *)(a2 + 72);
      uu_join::Line::new(&v13, v12, a3, v8);
      result = v14;
      if ( (unsigned __int64)v14 > v8 )
        *(_QWORD *)(a2 + 72) = v14;
      v9 = v13;
      v10 = v14;
      *(_OWORD *)(a1 + 32) = v15;
      *(_OWORD *)(a1 + 16) = v10;
      *(_OWORD *)a1 = v9;
    }
  }
  return result;
}