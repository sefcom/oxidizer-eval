__int64 __fastcall uu_fmt::linebreak::build_best_path(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v6; // rax
  __int64 result; // rax
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  __int64 v10; // [rsp+18h] [rbp-20h]

  v8 = a4;
  *(_QWORD *)&v9 = a4 + 8 * a5;
  *((_QWORD *)&v9 + 1) = a2;
  v10 = a3;
  v6 = (_QWORD *)core::iter::traits::iterator::Iterator::reduce(&v8);
  if ( v6 )
  {
    uu_fmt::linebreak::build_best_path::{{closure}}(&v8, a2, a3, *v6);
    result = v8;
    *(_OWORD *)(a1 + 8) = v9;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 8LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    result = 0LL;
  }
  *(_QWORD *)a1 = result;
  return result;
}