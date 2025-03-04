__int64 __fastcall uu_cp::parse_path_args(__int64 a1, __int128 *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // r15
  unsigned __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm0
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int128 v22; // [rsp+10h] [rbp-F8h] BYREF
  __m256i v23; // [rsp+20h] [rbp-E8h]
  __int128 v24; // [rsp+40h] [rbp-C8h]
  __int128 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h]
  _BYTE v27[24]; // [rsp+70h] [rbp-98h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  _QWORD v29[2]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v30; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-50h]
  __int128 v32; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v33; // [rsp+D0h] [rbp-38h]

  v5 = a1;
  v6 = *((_QWORD *)a2 + 2);
  if ( v6 == 1 )
  {
    if ( *(_QWORD *)(a3 + 24) == 0x8000000000000000LL )
    {
      *(_QWORD *)&v25 = *((_QWORD *)a2 + 1);
      *((_QWORD *)&v25 + 1) = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
      *(_QWORD *)&v22 = &off_1B5C90;
      *((_QWORD *)&v22 + 1) = 1LL;
      v23.m256i_i64[0] = (__int64)&v25;
      *(_OWORD *)&v23.m256i_u64[1] = 1uLL;
      core::option::Option<T>::map_or_else(&v30, &v22);
      *(_QWORD *)(a1 + 24) = v31;
      v10 = v30;
LABEL_10:
      *(_OWORD *)(a1 + 8) = v10;
      *(_QWORD *)a1 = 4LL;
      goto LABEL_11;
    }
    goto LABEL_16;
  }
  if ( v6 )
  {
    a4 = 0x8000000000000000LL;
    v11 = *(_QWORD *)(a3 + 24);
    if ( v6 >= 3 && *(_BYTE *)(a3 + 66) && v11 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v25 = *((_QWORD *)a2 + 1) + 48LL;
      *((_QWORD *)&v25 + 1) = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
      *(_QWORD *)&v22 = &off_1B5CA0;
      *((_QWORD *)&v22 + 1) = 1LL;
      v23.m256i_i64[0] = (__int64)&v25;
      *(_OWORD *)&v23.m256i_u64[1] = 1uLL;
      core::option::Option<T>::map_or_else(&v32, &v22);
      *(_QWORD *)(a1 + 24) = v33;
      v10 = v32;
      goto LABEL_10;
    }
    if ( v11 == 0x8000000000000000LL )
    {
      v12 = v6 - 1;
      *((_QWORD *)a2 + 2) = v12;
      v13 = *((_QWORD *)a2 + 1);
      v14 = 3 * v12;
      v15 = *(_QWORD *)(v13 + 24 * v12);
      v22 = *(_OWORD *)(v13 + 8 * v14 + 8);
      if ( v15 == 0x8000000000000000LL )
        core::option::unwrap_failed(&off_1B5CB0, v13, a3, 0x8000000000000000LL);
      *(_QWORD *)v27 = v15;
      *(_OWORD *)&v27[8] = v22;
      if ( !*(_BYTE *)(a3 + 69) )
        goto LABEL_21;
      goto LABEL_17;
    }
LABEL_16:
    v16 = a3;
    v13 = a3 + 24;
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v22, a3 + 24, a3, a4);
    *(_QWORD *)&v27[16] = v23.m256i_i64[0];
    *(_OWORD *)v27 = v22;
    a3 = v16;
    if ( !*(_BYTE *)(v16 + 69) )
    {
LABEL_21:
      v23.m256i_i64[0] = *((_QWORD *)a2 + 2);
      v22 = *a2;
      v23.m256i_i64[3] = *(_QWORD *)&v27[16];
      *(_OWORD *)&v23.m256i_u64[1] = *(_OWORD *)v27;
      *(_OWORD *)(v5 + 8) = v22;
      *(__m256i *)(v5 + 24) = v23;
      *(_QWORD *)v5 = 13LL;
      return v5;
    }
LABEL_17:
    v28 = v5;
    v29[0] = <&mut alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2, v13, a3, a4);
    v29[1] = v17;
    v18 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(v29);
    if ( v18 )
    {
      v19 = v18;
      do
      {
        std::path::Path::components(&v22, *(_QWORD *)(v19 + 8), *(_QWORD *)(v19 + 16));
        v20 = std::path::Components::as_path(&v22);
        std::path::Path::to_path_buf(&v25, v20);
        core::ptr::drop_in_place<std::path::PathBuf>(v19);
        *(_QWORD *)(v19 + 16) = v26;
        *(_OWORD *)v19 = v25;
        v19 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(v29);
      }
      while ( v19 );
    }
    v5 = v28;
    goto LABEL_21;
  }
  <uu_cp::Error as core::convert::From<&str>>::from(&v22, aMissingFileOpe, 20LL);
  v7 = v22;
  v8 = *(_OWORD *)v23.m256i_i8;
  v9 = *(_OWORD *)&v23.m256i_u64[2];
  *(_OWORD *)(a1 + 48) = v24;
  *(_OWORD *)(a1 + 32) = v9;
  *(_OWORD *)(a1 + 16) = v8;
  *(_OWORD *)a1 = v7;
LABEL_11:
  core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(a2);
  return v5;
}
