        char a8)
{
  __int64 v10; // rbp
  __int64 v12; // rbp
  __int64 v13; // r13
  __int64 v14; // rax
  __m128i v15; // xmm2
  __int128 v16; // xmm0
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int128 v20; // [rsp+0h] [rbp-138h]
  __int64 v21; // [rsp+10h] [rbp-128h] BYREF
  int v22; // [rsp+18h] [rbp-120h]
  __m128i v23; // [rsp+20h] [rbp-118h] BYREF
  __m128i v24; // [rsp+30h] [rbp-108h]
  __int128 v25; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v26; // [rsp+50h] [rbp-E8h]
  __m128i v27; // [rsp+60h] [rbp-D8h]
  __int64 v28; // [rsp+A0h] [rbp-98h] BYREF
  int v29; // [rsp+A8h] [rbp-90h]
  __int128 v30; // [rsp+B0h] [rbp-88h]
  __int128 v31; // [rsp+C0h] [rbp-78h]
  __int128 v32; // [rsp+D0h] [rbp-68h]
  __m128i v33; // [rsp+E0h] [rbp-58h]
  char v34; // [rsp+F0h] [rbp-48h]

  v21 = a4;
  v22 = a5;
  uu_dd::BlockWriter::flush((__int64)&v25, a1);
  if ( (_QWORD)v25 )
  {
    v10 = *((_QWORD *)&v25 + 1);
LABEL_4:
    core::ptr::drop_in_place<std::thread::JoinHandle<()>>(a7);
    core::ptr::drop_in_place<uu_dd::BlockWriter>(a1);
    return v10;
  }
  v20 = v26;
  v24 = v27;
  v10 = uu_dd::BlockWriter::sync((__int64)a1);
  if ( v10 )
    goto LABEL_4;
  if ( a8 )
    uu_dd::BlockWriter::truncate((__int64)a1);
  v23 = a3[1];
  v12 = a3->m128i_i64[0];
  v13 = a3->m128i_i64[1];
  v14 = std::time::Instant::elapsed(&v21);
  v15 = _mm_add_epi64(_mm_load_si128(&v23), v24);
  v16 = *a2;
  v31 = a2[1];
  v30 = v16;
  v32 = v20 + __PAIR128__(v13, v12);
  v33 = v15;
  v28 = v14;
  v29 = v17;
  v34 = 2;
  std::sync::mpmc::Sender<T>::send(&v25, a6, &v28);
  *(_QWORD *)&v26 = *((_QWORD *)a7 + 2);
  v25 = *a7;
  v18 = std::thread::JoinInner<T>::join(&v25);
  core::result::Result<T,E>::expect(v18, v19);
  core::ptr::drop_in_place<uu_dd::BlockWriter>(a1);
  return 0LL;
}
