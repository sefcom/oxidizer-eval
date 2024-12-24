__int64 __fastcall uu_cp::parse_path_args(__int64 a1, __int128 *a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rax
  __int128 v22; // [rsp+0h] [rbp-E8h] BYREF
  __m256i v23; // [rsp+10h] [rbp-D8h]
  __int128 v24; // [rsp+30h] [rbp-B8h]
  __int128 v25; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-90h]
  _BYTE v27[24]; // [rsp+60h] [rbp-88h]
  _QWORD v28[2]; // [rsp+78h] [rbp-70h] BYREF
  __int128 v29; // [rsp+88h] [rbp-60h] BYREF
  __int64 v30; // [rsp+98h] [rbp-50h]
  __int128 v31; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-38h]

  v5 = *((_QWORD *)a2 + 2);
  if ( v5 )
  {
    v6 = 0x8000000000000000LL;
    v7 = *(_QWORD *)(a3 + 24);
    if ( v5 == 1 && v7 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v25 = *((_QWORD *)a2 + 1);
      *((_QWORD *)&v25 + 1) = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
      *(_QWORD *)&v22 = &off_1B55C0;
      *((_QWORD *)&v22 + 1) = 1LL;
      v23.m256i_i64[0] = (__int64)&v25;
      *(_OWORD *)&v23.m256i_u64[1] = 1uLL;
      core::option::Option<T>::map_or_else(&v29, &v22);
      *(_QWORD *)(a1 + 24) = v30;
      v8 = v29;
LABEL_10:
      *(_OWORD *)(a1 + 8) = v8;
      *(_QWORD *)a1 = 4LL;
      goto LABEL_11;
    }
    if ( v5 >= 3 && *(_BYTE *)(a3 + 66) && v7 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v25 = *((_QWORD *)a2 + 1) + 48LL;
      *((_QWORD *)&v25 + 1) = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
      *(_QWORD *)&v22 = &off_1B55E8;
      *((_QWORD *)&v22 + 1) = 1LL;
      v23.m256i_i64[0] = (__int64)&v25;
      *(_OWORD *)&v23.m256i_u64[1] = 1uLL;
      core::option::Option<T>::map_or_else(&v31, &v22);
      *(_QWORD *)(a1 + 24) = v32;
      v8 = v31;
      goto LABEL_10;
    }
    if ( v7 == 0x8000000000000000LL )
    {
      v13 = v5 - 1;
      *((_QWORD *)a2 + 2) = v13;
      v14 = *((_QWORD *)a2 + 1);
      v15 = 3 * v13;
      v16 = *(_QWORD *)(v14 + 24 * v13);
      v22 = *(_OWORD *)(v14 + 8 * v15 + 8);
      if ( v16 == 0x8000000000000000LL )
        core::option::unwrap_failed(&off_1B55D0, v14, a3, 0x8000000000000000LL);
      *(_QWORD *)v27 = v16;
      *(_OWORD *)&v27[8] = v22;
      if ( !*(_BYTE *)(a3 + 69) )
        goto LABEL_21;
    }
    else
    {
      v17 = a3;
      v14 = a3 + 24;
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v22, a3 + 24, a3, 0x8000000000000000LL);
      *(_QWORD *)&v27[16] = v23.m256i_i64[0];
      *(_OWORD *)v27 = v22;
      a3 = v17;
      if ( !*(_BYTE *)(v17 + 69) )
      {
LABEL_21:
        v23.m256i_i64[0] = *((_QWORD *)a2 + 2);
        v22 = *a2;
        v23.m256i_i64[3] = *(_QWORD *)&v27[16];
        *(_OWORD *)&v23.m256i_u64[1] = *(_OWORD *)v27;
        *(_OWORD *)(a1 + 8) = v22;
        *(__m256i *)(a1 + 24) = v23;
        *(_QWORD *)a1 = 13LL;
        return a1;
      }
    }
    v28[0] = <&mut alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2, v14, a3, v6);
    v28[1] = v18;
    v19 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(v28);
    if ( v19 )
    {
      v20 = v19;
      do
      {
        std::path::Path::components(&v22, *(_QWORD *)(v20 + 8), *(_QWORD *)(v20 + 16));
        v21 = std::path::Components::as_path(&v22);
        std::path::Path::to_path_buf(&v25, v21);
        core::ptr::drop_in_place<std::path::PathBuf>(v20);
        *(_QWORD *)(v20 + 16) = v26;
        *(_OWORD *)v20 = v25;
        v20 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(v28);
      }
      while ( v20 );
    }
    goto LABEL_21;
  }
  <uu_cp::Error as core::convert::From<&str>>::from(&v22, aMissingFileOpe, 20LL);
  v9 = v22;
  v10 = *(_OWORD *)v23.m256i_i8;
  v11 = *(_OWORD *)&v23.m256i_u64[2];
  *(_OWORD *)(a1 + 48) = v24;
  *(_OWORD *)(a1 + 32) = v11;
  *(_OWORD *)(a1 + 16) = v10;
  *(_OWORD *)a1 = v9;
LABEL_11:
  core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(a2);
  return a1;
}
