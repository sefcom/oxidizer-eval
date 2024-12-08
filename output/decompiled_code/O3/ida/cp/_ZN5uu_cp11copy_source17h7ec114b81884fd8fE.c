        __int64 a11)
{
  __int64 result; // rax
  __int64 v16; // r8
  int v17; // ebp
  _OWORD *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rbp
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int128 v29; // [rsp+8h] [rbp-150h] BYREF
  __int64 v30; // [rsp+18h] [rbp-140h]
  __int128 v31; // [rsp+20h] [rbp-138h] BYREF
  __int64 v32; // [rsp+30h] [rbp-128h]
  __int128 v33; // [rsp+40h] [rbp-118h] BYREF
  __int64 v34; // [rsp+50h] [rbp-108h]
  _QWORD v35[4]; // [rsp+60h] [rbp-F8h] BYREF
  __m256i v36; // [rsp+80h] [rbp-D8h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-B8h]
  __int128 v38; // [rsp+B0h] [rbp-A8h]
  __int128 v39; // [rsp+C0h] [rbp-98h] BYREF
  __int128 v40; // [rsp+D0h] [rbp-88h]
  __int128 v41; // [rsp+E0h] [rbp-78h]
  __int128 v42; // [rsp+F0h] [rbp-68h]
  _BYTE v43[80]; // [rsp+108h] [rbp-50h] BYREF

  if ( (unsigned __int8)std::path::Path::is_dir(a3, a4) )
    return uu_cp::copydir::copy_directory(a1, a2, (_DWORD)a3, a4, a5, a6, a8, a9, a10, a11, 1);
  v16 = a6;
  v17 = *(_DWORD *)(a8 + 68);
  uu_cp::construct_dest_path((__int64)&v36, a3, a4, a5, v16, a7, *(_BYTE *)(a8 + 66), v17);
  result = v36.m256i_i64[0];
  v39 = *(_OWORD *)&v36.m256i_u64[1];
  *(_QWORD *)&v40 = v36.m256i_i64[3];
  if ( v36.m256i_i64[0] != 13 )
  {
    v22 = v37;
    *(_OWORD *)(a1 + 48) = v38;
    *(_OWORD *)(a1 + 32) = v22;
    *(_QWORD *)(a1 + 24) = v40;
    *(_OWORD *)(a1 + 8) = v39;
    *(_QWORD *)a1 = result;
    return result;
  }
  v31 = v39;
  v32 = v40;
  uu_cp::copy_file((unsigned int)&v39, a2, (_DWORD)a3, a4, DWORD2(v39), v40, a8, a9, a10, a11, 1);
  v18 = (_OWORD *)a1;
  if ( !(_BYTE)v17 )
  {
LABEL_15:
    v23 = v39;
    v24 = v40;
    v25 = v41;
    v18[3] = v42;
    v18[2] = v25;
    v18[1] = v24;
    *v18 = v23;
    return core::ptr::drop_in_place<std::path::PathBuf>(&v31);
  }
  uu_cp::aligned_ancestors(&v36, a3, a4, *((_QWORD *)&v31 + 1), v32);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v43, &v36);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v35, v43);
  v19 = v35[0];
  if ( !v35[0] )
  {
LABEL_14:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(v43);
    v18 = (_OWORD *)a1;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v20 = v35[2];
    v21 = v35[3];
    uucore::features::fs::canonicalize(&v29, v19, v35[1], 0LL, 1LL);
    if ( (_QWORD)v29 != 0x8000000000000000LL )
      break;
LABEL_7:
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v29);
LABEL_8:
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v35, v43);
    v19 = v35[0];
    if ( !v35[0] )
      goto LABEL_14;
  }
  v34 = v30;
  v33 = v29;
  uu_cp::copy_attributes(&v36, *((_QWORD *)&v29 + 1), v30, v20, v21, a8 + 48);
  if ( v36.m256i_i32[0] == 13 )
  {
    core::ptr::drop_in_place<std::path::PathBuf>(&v33);
    if ( (_QWORD)v29 != 0x8000000000000000LL )
      goto LABEL_8;
    goto LABEL_7;
  }
  v26 = *(_OWORD *)v36.m256i_i8;
  v27 = *(_OWORD *)&v36.m256i_u64[2];
  v28 = v37;
  *(_OWORD *)(a1 + 48) = v38;
  *(_OWORD *)(a1 + 32) = v28;
  *(_OWORD *)(a1 + 16) = v27;
  *(_OWORD *)a1 = v26;
  core::ptr::drop_in_place<std::path::PathBuf>(&v33);
  if ( (_QWORD)v29 == 0x8000000000000000LL )
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v29);
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(v43);
  core::ptr::drop_in_place<core::result::Result<(),uu_cp::Error>>(&v39);
  return core::ptr::drop_in_place<std::path::PathBuf>(&v31);
}
