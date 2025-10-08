__int64 __fastcall uu_cp::copy_source(
        __int64 a1,
        __int64 a2,
        const char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 result; // rax
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rbp
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rbp
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // [rsp+10h] [rbp-118h] BYREF
  __int64 v29; // [rsp+20h] [rbp-108h]
  _QWORD v30[3]; // [rsp+30h] [rbp-F8h] BYREF
  __m256i v31; // [rsp+48h] [rbp-E0h] BYREF
  __int128 v32; // [rsp+68h] [rbp-C0h]
  __int64 v33; // [rsp+78h] [rbp-B0h]
  __int128 v34; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v35; // [rsp+90h] [rbp-98h]
  __int128 v36; // [rsp+A0h] [rbp-88h]
  __int64 v37; // [rsp+B0h] [rbp-78h]
  _QWORD v38[4]; // [rsp+B8h] [rbp-70h] BYREF
  _BYTE v39[80]; // [rsp+D8h] [rbp-50h] BYREF

  if ( (unsigned __int8)std::path::Path::is_dir(a3, a4) )
    return uu_cp::copydir::copy_directory(a1, a2, (__int64)a3, a4, a5, a6, a8, a9, a10, a11);
  v16 = a5;
  v17 = *(_DWORD *)(a8 + 92);
  uu_cp::construct_dest_path((__int64)&v31, a3, a4, v16, a6, a7, *(_BYTE *)(a8 + 90), v17);
  result = v31.m256i_i64[0];
  v34 = *(_OWORD *)&v31.m256i_u64[1];
  *(_QWORD *)&v35 = v31.m256i_i64[3];
  if ( v31.m256i_i64[0] != 0x800000000000000CLL )
  {
    *(_QWORD *)(a1 + 48) = v33;
    *(_OWORD *)(a1 + 32) = v32;
    *(_QWORD *)(a1 + 24) = v35;
    *(_OWORD *)(a1 + 8) = v34;
    *(_QWORD *)a1 = result;
    return result;
  }
  v28 = v34;
  v18 = v35;
  v29 = v35;
  v19 = *((_QWORD *)&v34 + 1);
  uu_cp::copy_file((unsigned int)&v34, a2, (_DWORD)a3, a4, DWORD2(v34), v35, a8, a9, a10, a11, 1);
  v20 = a1;
  if ( (v17 & 1) == 0 )
  {
LABEL_14:
    *(_QWORD *)(v20 + 48) = v37;
    v24 = v34;
    v25 = v35;
    *(_OWORD *)(v20 + 32) = v36;
    *(_OWORD *)(v20 + 16) = v25;
    *(_OWORD *)v20 = v24;
    return core::ptr::drop_in_place<std::path::PathBuf>(&v28);
  }
  uu_cp::aligned_ancestors(&v31, a3, a4, v19, v18);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v39, &v31);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v38, v39);
  v21 = v38[0];
  if ( !v38[0] )
  {
LABEL_13:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(v39);
    v20 = a1;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v22 = v38[2];
    v23 = v38[3];
    uucore::features::fs::canonicalize(v30, v21, v38[1], 0LL, 1LL);
    if ( v30[0] != 0x8000000000000000LL )
      break;
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(v30);
LABEL_8:
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v38, v39);
    v21 = v38[0];
    if ( !v38[0] )
      goto LABEL_13;
  }
  uu_cp::copy_attributes(&v31, v30[1], v30[2], v22, v23, a8 + 72);
  if ( v31.m256i_i64[0] == 0x800000000000000CLL )
  {
    core::ptr::drop_in_place<std::path::PathBuf>(v30);
    goto LABEL_8;
  }
  *(_QWORD *)(a1 + 48) = v33;
  v26 = *(_OWORD *)v31.m256i_i8;
  v27 = *(_OWORD *)&v31.m256i_u64[2];
  *(_OWORD *)(a1 + 32) = v32;
  *(_OWORD *)(a1 + 16) = v27;
  *(_OWORD *)a1 = v26;
  core::ptr::drop_in_place<std::path::PathBuf>(v30);
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(v39);
  core::ptr::drop_in_place<core::result::Result<(),uu_cp::Error>>(&v34);
  return core::ptr::drop_in_place<std::path::PathBuf>(&v28);
}