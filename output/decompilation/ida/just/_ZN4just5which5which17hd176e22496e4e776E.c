_QWORD *__fastcall just::which::which(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  _QWORD *v7; // rdi
  const char *v8; // rsi
  _QWORD *result; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  __int128 v12; // xmm0
  __int64 v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  _BYTE v16[24]; // [rsp+0h] [rbp-128h] BYREF
  __int128 v17; // [rsp+20h] [rbp-108h] BYREF
  __int64 v18; // [rsp+30h] [rbp-F8h]
  _QWORD *v19; // [rsp+38h] [rbp-F0h]
  __int128 v20; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-D8h]
  __int128 v22; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+70h] [rbp-B8h]
  __int64 v24; // [rsp+78h] [rbp-B0h]
  __int64 (__fastcall *v25)(); // [rsp+80h] [rbp-A8h]
  char v26; // [rsp+88h] [rbp-A0h]
  __int128 v27; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-78h]
  _QWORD v29[3]; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD v30[2]; // [rsp+D0h] [rbp-58h] BYREF
  __int128 v31; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-38h]

  v30[0] = a3;
  v30[1] = a4;
  std::path::Path::components(&v22, a3, a4);
  v6 = core::iter::traits::iterator::Iterator::fold(&v22);
  if ( !v6 )
  {
    v7 = a1 + 1;
    v8 = aEmptyCommand;
    goto LABEL_6;
  }
  if ( v6 == 1 )
  {
    std::env::var_os(v16, aPath, 4LL);
    if ( __OFSUB__(-*(_QWORD *)v16, 1LL) )
    {
      v7 = a1 + 1;
      v8 = aPathEnvironmen;
LABEL_6:
      result = (_QWORD *)<T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v7, v8);
      *a1 = 1LL;
      return result;
    }
    v20 = *(_OWORD *)v16;
    v21 = *(_QWORD *)&v16[16];
    *((_QWORD *)&v22 + 1) = std::path::Path::to_path_buf;
    v23 = *(_QWORD *)&v16[8];
    v24 = *(_QWORD *)&v16[16];
    v25 = std::sys::pal::unix::os::split_paths::is_separator;
    v26 = 0;
    *(_QWORD *)&v22 = v30;
    core::iter::traits::iterator::Iterator::collect(v29, &v22);
    v19 = a1;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v20);
  }
  else
  {
    v10 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
    if ( !v10 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v11 = v10;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v22, a3);
    v19 = a1;
    *(_QWORD *)&v16[16] = v23;
    v12 = v22;
    *(_OWORD *)v16 = v22;
    *(_QWORD *)(v11 + 16) = v23;
    *(_OWORD *)v11 = v12;
    v29[0] = 1LL;
    v29[1] = v11;
    v29[2] = 1LL;
  }
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v22, v29);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v27, &v22);
  if ( __OFSUB__(0LL, (_QWORD)v27) )
  {
LABEL_15:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(&v22);
    result = v19;
    v19[1] = 0x8000000000000000LL;
    *result = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v17 = v27;
      v18 = v28;
      if ( !(unsigned __int8)std::path::Path::is_absolute(*((_QWORD *)&v27 + 1)) )
      {
        just::execution_context::ExecutionContext::working_directory(
          (__int64)&v20,
          *(_QWORD *)(a2 + 16),
          *(_QWORD *)(a2 + 24));
        *(_QWORD *)&v16[16] = v18;
        *(_OWORD *)v16 = v17;
        std::path::Path::join(&v31, *((_QWORD *)&v20 + 1), v21, v16);
        v17 = v31;
        v18 = v32;
        core::ptr::drop_in_place<std::path::PathBuf>(&v20);
      }
      <&std::path::Path as lexiclean::Lexiclean>::lexiclean(v16, *((_QWORD *)&v17 + 1), v18);
      core::ptr::drop_in_place<std::path::PathBuf>(&v17);
      v18 = *(_QWORD *)&v16[16];
      v17 = *(_OWORD *)v16;
      if ( (unsigned __int8)is_executable::is_executable(&v17) )
        break;
      core::ptr::drop_in_place<std::path::PathBuf>(&v17);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v27, &v22);
      if ( (_QWORD)v27 == 0x8000000000000000LL )
        goto LABEL_15;
    }
    core::str::converts::from_utf8(v16, *((_QWORD *)&v17 + 1), v18);
    if ( (v16[0] & 1) != 0
      || (<T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v16, *(_QWORD *)&v16[8]),
          v13 = *(_QWORD *)v16,
          v20 = *(_OWORD *)&v16[8],
          *(_QWORD *)v16 == 0x8000000000000001LL) )
    {
      just::which::which::{{closure}}(v16, *((_QWORD *)&v17 + 1), v18);
      v14 = v19;
      v19[3] = *(_QWORD *)&v16[16];
      *(_OWORD *)(v14 + 1) = *(_OWORD *)v16;
      *v14 = 1LL;
    }
    else
    {
      v15 = v19;
      *((_OWORD *)v19 + 1) = v20;
      v15[1] = v13;
      *v15 = 0LL;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v17);
    return (_QWORD *)core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(&v22);
  }
  return result;
}