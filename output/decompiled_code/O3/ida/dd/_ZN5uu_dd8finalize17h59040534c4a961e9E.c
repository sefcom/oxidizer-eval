        char a8)
{
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // r13
  __int64 v17; // rax
  __m128i v18; // xmm2
  __int128 v19; // xmm0
  int v20; // edx
  __int128 v21; // rax
  __int64 v22; // r14
  unsigned __int64 v24; // [rsp+0h] [rbp-138h]
  unsigned __int64 v25; // [rsp+8h] [rbp-130h]
  __m128i v26; // [rsp+10h] [rbp-128h]
  __int128 v27; // [rsp+20h] [rbp-118h] BYREF
  unsigned __int64 v28; // [rsp+30h] [rbp-108h]
  unsigned __int64 v29; // [rsp+38h] [rbp-100h]
  __m128i v30; // [rsp+40h] [rbp-F8h]
  __int64 v31; // [rsp+80h] [rbp-B8h] BYREF
  int v32; // [rsp+88h] [rbp-B0h]
  __m128i v33; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-98h] BYREF
  int v35; // [rsp+A8h] [rbp-90h]
  __int128 v36; // [rsp+B0h] [rbp-88h]
  __int128 v37; // [rsp+C0h] [rbp-78h]
  unsigned __int128 v38; // [rsp+D0h] [rbp-68h]
  __m128i v39; // [rsp+E0h] [rbp-58h]
  char v40; // [rsp+F0h] [rbp-48h]

  v31 = a4;
  v32 = a5;
  if ( *a1 == 0x8000000000000000LL )
  {
    v26 = 0LL;
    v25 = 0LL;
    v24 = 0LL;
LABEL_3:
    v10 = uu_dd::Output::sync((__int64)(a1 + 1));
    goto LABEL_4;
  }
  uu_dd::bufferedoutput::BufferedOutput::flush(&v27, a1);
  if ( (_QWORD)v27 )
  {
    v11 = *((_QWORD *)&v27 + 1);
    goto LABEL_14;
  }
  v25 = v28;
  v24 = v29;
  v26 = v30;
  if ( *a1 == 0x8000000000000000LL )
    goto LABEL_3;
  v10 = uu_dd::Output::sync((__int64)(a1 + 3));
LABEL_4:
  v11 = v10;
  if ( !v10 )
  {
    if ( a8 )
    {
      if ( *a1 == 0x8000000000000000LL )
      {
        if ( *((_BYTE *)a1 + 8) != 1 )
          goto LABEL_28;
        if ( !<std::fs::File as std::io::Seek>::seek((char *)a1 + 12, 2LL, 0LL) )
          v12 = std::fs::File::set_len((char *)a1 + 12, v12);
        *(_QWORD *)&v27 = v12;
        if ( !v12 )
          goto LABEL_28;
      }
      else
      {
        if ( *((_BYTE *)a1 + 24) != 1 )
          goto LABEL_28;
        if ( !<std::fs::File as std::io::Seek>::seek((char *)a1 + 28, 2LL, 0LL) )
          v14 = std::fs::File::set_len((char *)a1 + 28, v14);
        *(_QWORD *)&v27 = v14;
        if ( !v14 )
          goto LABEL_28;
      }
      core::ptr::drop_in_place<std::io::error::Error>(&v27);
    }
LABEL_28:
    v33 = a3[1];
    v15 = a3->m128i_i64[0];
    v16 = a3->m128i_i64[1];
    v17 = std::time::Instant::elapsed(&v31);
    v18 = _mm_add_epi64(_mm_load_si128(&v33), v26);
    v19 = *a2;
    v37 = a2[1];
    v36 = v19;
    v38 = __PAIR128__(v24, v25) + __PAIR128__(v16, v15);
    v39 = v18;
    v34 = v17;
    v35 = v20;
    v40 = 2;
    std::sync::mpmc::Sender<T>::send(&v27, a6, &v34);
    v28 = *((_QWORD *)a7 + 2);
    v27 = *a7;
    *(_QWORD *)&v21 = std::thread::JoinInner<T>::join(&v27);
    if ( (_QWORD)v21 )
    {
      v27 = v21;
      core::result::unwrap_failed(aFailedToJoinWi, 38LL, &v27, &off_115B48, &off_115DA0);
    }
    v22 = *a1;
    if ( *a1 == 0x8000000000000000LL )
    {
      if ( (unsigned __int8)(*((_BYTE *)a1 + 8) - 1) <= 1u )
        close(*((_DWORD *)a1 + 3));
    }
    else
    {
      if ( (unsigned __int8)(*((_BYTE *)a1 + 24) - 1) <= 1u )
        close(*((_DWORD *)a1 + 7));
      if ( v22 )
        _rust_dealloc(a1[1], v22, 1LL);
    }
    return 0LL;
  }
LABEL_14:
  core::ptr::drop_in_place<std::thread::JoinHandle<()>>(a7);
  v13 = *a1;
  if ( *a1 == 0x8000000000000000LL )
  {
    if ( (unsigned __int8)(*((_BYTE *)a1 + 8) - 1) <= 1u )
      close(*((_DWORD *)a1 + 3));
  }
  else
  {
    if ( (unsigned __int8)(*((_BYTE *)a1 + 24) - 1) <= 1u )
      close(*((_DWORD *)a1 + 7));
    if ( v13 )
      _rust_dealloc(a1[1], v13, 1LL);
  }
  return v11;
}
