__int64 __fastcall uu_join::State::read_line(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _QWORD v9[3]; // [rsp+8h] [rbp-80h] BYREF
  _QWORD v10[3]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v11; // [rsp+38h] [rbp-50h] BYREF
  __int128 v12; // [rsp+48h] [rbp-40h]
  __int128 v13; // [rsp+58h] [rbp-30h]

  <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(v9, a2 + 40);
  result = v9[0];
  if ( v9[0] == 0x8000000000000001LL )
  {
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    v5 = v9[1];
    v6 = v9[2];
    ++*(_QWORD *)(a2 + 80);
    if ( result == 0x8000000000000000LL )
    {
      *(_QWORD *)(a1 + 8) = v5;
      *(_QWORD *)a1 = 0x8000000000000001LL;
    }
    else
    {
      v10[0] = result;
      v10[1] = v5;
      v10[2] = v6;
      uu_join::Line::new((__int64)&v11, (__int64)v10, a3, *(_QWORD *)(a2 + 72));
      result = v12;
      if ( (unsigned __int64)v12 > *(_QWORD *)(a2 + 72) )
        *(_QWORD *)(a2 + 72) = v12;
      v7 = v11;
      v8 = v12;
      *(_OWORD *)(a1 + 32) = v13;
      *(_OWORD *)(a1 + 16) = v8;
      *(_OWORD *)a1 = v7;
    }
  }
  return result;
}
