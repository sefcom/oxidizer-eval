__int64 __fastcall uu_dd::finalize(
        __int64 a1,
        __int128 *a2,
        __m128i *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int128 *a8,
        char a9)
{
  __int64 v11; // rbp
  unsigned __int64 v12; // r14
  __int64 v14; // rbp
  __int64 v15; // r13
  __int64 v16; // rax
  __m128i v17; // xmm2
  __int128 v18; // xmm0
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // [rsp+8h] [rbp-130h]
  __int64 v23; // [rsp+10h] [rbp-128h] BYREF
  int v24; // [rsp+18h] [rbp-120h]
  __m128i v25; // [rsp+20h] [rbp-118h] BYREF
  __m128i v26; // [rsp+30h] [rbp-108h]
  __int128 v27; // [rsp+40h] [rbp-F8h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-E8h]
  unsigned __int64 v29; // [rsp+58h] [rbp-E0h]
  __m128i v30; // [rsp+60h] [rbp-D8h]
  __int64 v31; // [rsp+A0h] [rbp-98h] BYREF
  int v32; // [rsp+A8h] [rbp-90h]
  __int128 v33; // [rsp+B0h] [rbp-88h]
  __int128 v34; // [rsp+C0h] [rbp-78h]
  unsigned __int128 v35; // [rsp+D0h] [rbp-68h]
  __m128i v36; // [rsp+E0h] [rbp-58h]
  char v37; // [rsp+F0h] [rbp-48h]

  v23 = a4;
  v24 = a5;
  uu_dd::BlockWriter::flush((__int64)&v27, a1);
  if ( (_DWORD)v27 == 1 )
  {
    v11 = *((_QWORD *)&v27 + 1);
LABEL_4:
    core::ptr::drop_in_place<std::thread::JoinHandle<()>>(a8);
    core::ptr::drop_in_place<uu_dd::BlockWriter>(a1);
    return v11;
  }
  v12 = v28;
  v22 = v29;
  v26 = v30;
  v11 = uu_dd::BlockWriter::sync(a1);
  if ( v11 )
    goto LABEL_4;
  if ( a9 )
    uu_dd::BlockWriter::truncate(a1);
  v25 = a3[1];
  v14 = a3->m128i_i64[0];
  v15 = a3->m128i_i64[1];
  v16 = std::time::Instant::elapsed(&v23);
  v17 = _mm_add_epi64(_mm_load_si128(&v25), v26);
  v18 = *a2;
  v34 = a2[1];
  v33 = v18;
  v35 = __PAIR128__(v15, v12) + __PAIR128__(v22, v14);
  v36 = v17;
  v31 = v16;
  v32 = v19;
  v37 = 2;
  std::sync::mpmc::Sender<T>::send(&v27, a6, a7, &v31);
  v28 = *((_QWORD *)a8 + 2);
  v27 = *a8;
  v20 = std::thread::JoinInner<T>::join(&v27);
  core::result::Result<T,E>::expect(v20, v21);
  core::ptr::drop_in_place<uu_dd::BlockWriter>(a1);
  return 0LL;
}