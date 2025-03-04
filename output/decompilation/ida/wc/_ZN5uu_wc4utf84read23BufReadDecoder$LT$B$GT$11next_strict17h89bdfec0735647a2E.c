_QWORD *__fastcall uu_wc::utf8::read::BufReadDecoder<B>::next_strict(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rbp
  __int64 v4; // r13
  char v5; // dl
  unsigned __int64 v6; // rax
  char v7; // bp
  __int64 v8; // rax
  __int64 v9; // rdx
  bool v10; // bp
  __int64 v11; // rax
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+8h] [rbp-40h]
  char v15; // [rsp+10h] [rbp-38h]
  unsigned __int8 v16; // [rsp+11h] [rbp-37h]

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
      <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::fill_buf(&v13, a2);
      v3 = v13;
      if ( !v13 )
        goto LABEL_26;
      v4 = v14;
      if ( !*(_BYTE *)(a2 + 60) )
        break;
      if ( !v14 )
      {
        v8 = uu_wc::utf8::Incomplete::take_buffer(v2);
        goto LABEL_16;
      }
      *(_QWORD *)(a2 + 48) = uu_wc::utf8::Incomplete::try_complete_offsets(v2, v13, v14);
      if ( v5 != 2 )
      {
        v7 = v5;
        v8 = uu_wc::utf8::Incomplete::take_buffer(v2);
        if ( (v7 & 1) != 0 )
          goto LABEL_16;
LABEL_24:
        *a1 = 0LL;
        goto LABEL_25;
      }
    }
    if ( !v14 )
    {
      *a1 = 2LL;
      return a1;
    }
    core::str::converts::from_utf8(&v13, v13, v14);
    if ( !v13 )
    {
      v10 = 0;
      goto LABEL_22;
    }
    if ( v14 )
      break;
    if ( (v15 & 1) != 0 )
    {
      v4 = v16;
      goto LABEL_21;
    }
    *(_QWORD *)(a2 + 48) = v4;
    v6 = uu_wc::utf8::Incomplete::new(v3, v4);
    *(_DWORD *)(a2 + 56) = v6;
    *(_BYTE *)(a2 + 60) = BYTE4(v6);
  }
  v4 = v14;
LABEL_21:
  v10 = v14 == 0;
LABEL_22:
  *(_QWORD *)(a2 + 48) = v4;
  <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::fill_buf(&v13, a2);
  if ( v13 )
  {
    v8 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v4, v13, v14);
    if ( !v10 )
      goto LABEL_24;
LABEL_16:
    *a1 = 1LL;
LABEL_25:
    a1[1] = v8;
    a1[2] = v9;
    return a1;
  }
LABEL_26:
  v11 = v14;
  *a1 = 1LL;
  a1[1] = 0LL;
  a1[2] = v11;
  return a1;
}
