__int128 *__fastcall uu_tr::operation::Sequence::single_char(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int128 *result; // rax
  __int128 v6; // xmm0
  int v7; // [rsp+8h] [rbp-40h] BYREF
  __int128 v8; // [rsp+10h] [rbp-38h] BYREF
  __int128 v9; // [rsp+20h] [rbp-28h]

  v4 = nom::bytes::take();
  <nom::bytes::Take<Error> as nom::internal::Parser<I>>::process(&v7, v4, a2, a3);
  if ( v7 == 1 )
  {
    result = &v8;
    v6 = v8;
    *(_OWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v6;
  }
  else
  {
    if ( !*((_QWORD *)&v9 + 1) )
      core::panicking::panic_bounds_check(0LL, 0LL, &off_FE320);
    result = (__int128 *)*(unsigned __int8 *)v9;
    *(_OWORD *)(a1 + 8) = v8;
    *(_BYTE *)(a1 + 24) = (_BYTE)result;
    *(_QWORD *)a1 = 3LL;
  }
  return result;
}