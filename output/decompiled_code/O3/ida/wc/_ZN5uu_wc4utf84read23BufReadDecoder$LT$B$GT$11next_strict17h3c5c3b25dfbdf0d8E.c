_QWORD *__fastcall uu_wc::utf8::read::BufReadDecoder<B>::next_strict(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rbp
  __int64 v4; // r13
  char v5; // dl
  unsigned __int64 v6; // rax
  _QWORD *v7; // rcx
  bool v8; // bp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  __int64 v14; // [rsp+18h] [rbp-40h]
  char v15; // [rsp+20h] [rbp-38h]
  unsigned __int8 v16; // [rsp+21h] [rbp-37h]

  v2 = a2 + 24;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(a2 + 16) )
      {
        <std::io::stdio::StdinLock as std::io::BufRead>::consume(a2);
        *(_QWORD *)(a2 + 16) = 0LL;
      }
      <std::io::stdio::StdinLock as std::io::BufRead>::fill_buf(&v13, a2);
      v3 = v13;
      if ( !v13 )
        goto LABEL_24;
      v4 = v14;
      if ( !*(_BYTE *)(a2 + 28) )
        break;
      if ( !v14 )
      {
        v9 = uu_wc::utf8::Incomplete::take_buffer(v2);
        v7 = a1;
        goto LABEL_25;
      }
      *(_QWORD *)(a2 + 16) = uu_wc::utf8::Incomplete::try_complete_offsets(v2, v13, v14);
      if ( v5 != 2 )
      {
        v8 = v5;
        v9 = uu_wc::utf8::Incomplete::take_buffer(v2);
        goto LABEL_22;
      }
    }
    if ( !v14 )
    {
      v7 = a1;
      *a1 = 2LL;
      return v7;
    }
    core::str::converts::from_utf8(&v13, v13, v14);
    if ( !v13 )
    {
      v8 = 0;
      goto LABEL_20;
    }
    if ( v14 )
    {
      v4 = v14;
      goto LABEL_19;
    }
    if ( v15 )
      break;
    *(_QWORD *)(a2 + 16) = v4;
    v6 = uu_wc::utf8::Incomplete::new(v3, v4);
    *(_DWORD *)(a2 + 24) = v6;
    *(_BYTE *)(a2 + 28) = BYTE4(v6);
  }
  v4 = v16;
LABEL_19:
  v8 = v14 == 0;
LABEL_20:
  *(_QWORD *)(a2 + 16) = v4;
  <std::io::stdio::StdinLock as std::io::BufRead>::fill_buf(&v13, a2);
  if ( !v13 )
  {
LABEL_24:
    v11 = v14;
    v7 = a1;
    *a1 = 1LL;
    a1[1] = 0LL;
    a1[2] = v11;
    return v7;
  }
  v9 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v4, v13, v14, &off_132538);
LABEL_22:
  v7 = a1;
  if ( !v8 )
  {
    *a1 = 0LL;
    goto LABEL_26;
  }
LABEL_25:
  *v7 = 1LL;
LABEL_26:
  v7[1] = v9;
  v7[2] = v10;
  return v7;
}
