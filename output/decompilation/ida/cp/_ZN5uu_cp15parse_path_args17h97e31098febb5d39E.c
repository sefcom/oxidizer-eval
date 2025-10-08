__int64 __fastcall uu_cp::parse_path_args(__int64 a1, __int128 *a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned __int64 v4; // r12
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rax
  __int128 *v15; // [rsp+8h] [rbp-E0h]
  __int128 v16; // [rsp+10h] [rbp-D8h] BYREF
  __m256i v17; // [rsp+20h] [rbp-C8h]
  __int64 v18; // [rsp+40h] [rbp-A8h]
  __int64 v19; // [rsp+50h] [rbp-98h]
  __int128 v20; // [rsp+58h] [rbp-90h] BYREF
  __int64 v21; // [rsp+68h] [rbp-80h]
  _BYTE v22[24]; // [rsp+70h] [rbp-78h]
  __int128 v23; // [rsp+88h] [rbp-60h] BYREF
  __int64 v24; // [rsp+98h] [rbp-50h]
  __int128 v25; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-38h]

  v3 = a1;
  v4 = *((_QWORD *)a2 + 2);
  if ( v4 == 1 )
  {
    if ( *(_QWORD *)(a3 + 24) == 0x8000000000000000LL )
    {
      *(_QWORD *)&v20 = *((_QWORD *)a2 + 1);
      *((_QWORD *)&v20 + 1) = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
      *(_QWORD *)&v16 = &off_15EA18;
      *((_QWORD *)&v16 + 1) = 1LL;
      v17.m256i_i64[0] = (__int64)&v20;
      *(_OWORD *)&v17.m256i_u64[1] = 1uLL;
      core::option::Option<T>::map_or_else(&v23, &v16);
      *(_QWORD *)(a1 + 24) = v24;
      v7 = v23;
LABEL_9:
      *(_OWORD *)(a1 + 8) = v7;
      *(_QWORD *)a1 = 0x8000000000000003LL;
      goto LABEL_10;
    }
    goto LABEL_15;
  }
  if ( v4 )
  {
    v8 = *(_QWORD *)(a3 + 24);
    if ( ((v8 == 0x8000000000000000LL) & *(_BYTE *)(a3 + 90)) != 0 )
    {
      if ( v4 > 2 )
      {
        *(_QWORD *)&v20 = *((_QWORD *)a2 + 1) + 48LL;
        *((_QWORD *)&v20 + 1) = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
        *(_QWORD *)&v16 = &off_15EA28;
        *((_QWORD *)&v16 + 1) = 1LL;
        v17.m256i_i64[0] = (__int64)&v20;
        *(_OWORD *)&v17.m256i_u64[1] = 1uLL;
        core::option::Option<T>::map_or_else(&v25, &v16);
        *(_QWORD *)(a1 + 24) = v26;
        v7 = v25;
        goto LABEL_9;
      }
LABEL_12:
      v19 = a1;
      *((_QWORD *)a2 + 2) = --v4;
      v9 = *((_QWORD *)a2 + 1);
      if ( *(_QWORD *)(v9 + 24 * v4) == 0x8000000000000000LL )
        core::option::unwrap_failed(&off_15EA38);
      v15 = a2;
      *(_QWORD *)v22 = *(_QWORD *)(v9 + 24 * v4);
      *(_OWORD *)&v22[8] = *(_OWORD *)(v9 + 24 * v4 + 8);
      if ( !*(_BYTE *)(a3 + 93) )
        goto LABEL_18;
      goto LABEL_16;
    }
    if ( v8 == 0x8000000000000000LL )
      goto LABEL_12;
LABEL_15:
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v16, *(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 40));
    v19 = a1;
    v15 = a2;
    *(_QWORD *)&v22[16] = v17.m256i_i64[0];
    *(_OWORD *)v22 = v16;
    if ( !*(_BYTE *)(a3 + 93) )
    {
LABEL_18:
      v17.m256i_i64[0] = *((_QWORD *)v15 + 2);
      v16 = *v15;
      v17.m256i_i64[3] = *(_QWORD *)&v22[16];
      *(_OWORD *)&v17.m256i_u64[1] = *(_OWORD *)v22;
      v3 = v19;
      *(_OWORD *)(v19 + 8) = v16;
      *(__m256i *)(v3 + 24) = v17;
      *(_QWORD *)v3 = 0x800000000000000CLL;
      return v3;
    }
LABEL_16:
    v11 = *((_QWORD *)v15 + 1);
    v12 = 24 * v4;
    do
    {
      std::path::Path::components(&v16, *(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16));
      v13 = std::path::Components::as_path(&v16);
      std::path::Path::to_path_buf(&v20, v13);
      core::ptr::drop_in_place<std::path::PathBuf>(v11);
      *(_QWORD *)(v11 + 16) = v21;
      *(_OWORD *)v11 = v20;
      v11 += 24LL;
      v12 -= 24LL;
    }
    while ( v12 );
    goto LABEL_18;
  }
  <uu_cp::Error as core::convert::From<&str>>::from(&v16, aMissingFileOpe, 20LL);
  *(_QWORD *)(a1 + 48) = v18;
  v5 = v16;
  v6 = *(_OWORD *)v17.m256i_i8;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)&v17.m256i_u64[2];
  *(_OWORD *)(a1 + 16) = v6;
  *(_OWORD *)a1 = v5;
LABEL_10:
  core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(a2);
  return v3;
}