__int64 __fastcall uu_wc::utf8::read::BufReadDecoder<B>::next_strict(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rbp
  __int64 v4; // r13
  char v5; // dl
  __int64 v6; // rax
  char v7; // bp
  __int64 result; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  bool v11; // bp
  __int64 v12; // [rsp+10h] [rbp-48h] BYREF
  __int64 v13; // [rsp+18h] [rbp-40h]
  char v14; // [rsp+20h] [rbp-38h]
  unsigned __int8 v15; // [rsp+21h] [rbp-37h]

  v2 = a2 + 56;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(a2 + 48) )
      {
        <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::consume(a2);
        *(_QWORD *)(a2 + 48) = 0LL;
      }
      <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::fill_buf(&v12, a2);
      v3 = v12;
      if ( !v12 )
        goto LABEL_26;
      v4 = v13;
      if ( !*(_BYTE *)(a2 + 60) )
        break;
      if ( !v13 )
      {
        result = uu_wc::utf8::Incomplete::take_buffer(v2);
        goto LABEL_24;
      }
      *(_QWORD *)(a2 + 48) = uu_wc::utf8::Incomplete::try_complete_offsets(v2, v12, v13);
      if ( v5 != 2 )
      {
        v7 = v5;
        result = uu_wc::utf8::Incomplete::take_buffer(v2);
        if ( (v7 & 1) == 0 )
        {
LABEL_16:
          v10 = a1;
          *a1 = 0LL;
LABEL_25:
          v10[1] = result;
          v10[2] = v9;
          return result;
        }
LABEL_24:
        v10 = a1;
        *a1 = 1LL;
        goto LABEL_25;
      }
    }
    if ( !v13 )
    {
      result = (__int64)a1;
      *a1 = 2LL;
      return result;
    }
    core::str::converts::from_utf8(&v12, v12, v13);
    if ( (_DWORD)v12 != 1 )
    {
      v11 = 0;
      goto LABEL_22;
    }
    if ( v13 )
      break;
    if ( (v14 & 1) != 0 )
    {
      v4 = v15;
      goto LABEL_21;
    }
    *(_QWORD *)(a2 + 48) = v4;
    v6 = uu_wc::utf8::Incomplete::new(v3, v4);
    *(_DWORD *)(a2 + 56) = v6;
    *(_BYTE *)(a2 + 60) = BYTE4(v6);
  }
  v4 = v13;
LABEL_21:
  v11 = v13 == 0;
LABEL_22:
  *(_QWORD *)(a2 + 48) = v4;
  <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::fill_buf(&v12, a2);
  if ( v12 )
  {
    result = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
               0LL,
               v4,
               v12,
               v13,
               &off_F8F58);
    if ( !v11 )
      goto LABEL_16;
    goto LABEL_24;
  }
LABEL_26:
  result = v13;
  *a1 = 1LL;
  a1[1] = 0LL;
  a1[2] = result;
  return result;
}