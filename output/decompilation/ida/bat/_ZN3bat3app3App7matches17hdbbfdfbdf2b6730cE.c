__int64 __fastcall bat::app::App::matches(_OWORD *a1, unsigned __int8 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // r12
  unsigned __int8 v7; // al
  char v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int64 result; // rax
  _BYTE v17[24]; // [rsp+0h] [rbp-368h] BYREF
  _BYTE v18[24]; // [rsp+18h] [rbp-350h] BYREF
  __int128 v19; // [rsp+30h] [rbp-338h] BYREF
  __int128 v20; // [rsp+40h] [rbp-328h]
  __int128 v21; // [rsp+50h] [rbp-318h] BYREF
  __int64 v22; // [rsp+60h] [rbp-308h]
  __int128 v23; // [rsp+70h] [rbp-2F8h] BYREF
  __int128 v24; // [rsp+80h] [rbp-2E8h]
  __int128 v25; // [rsp+90h] [rbp-2D8h]
  __int128 v26; // [rsp+A0h] [rbp-2C8h]
  __int128 v27; // [rsp+B0h] [rbp-2B8h]

  wild::args_os(&v23);
  if ( <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::advance_by(&v23) )
    *(_QWORD *)v17 = 0x8000000000000000LL;
  else
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v17, &v23);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v19, aCache_0, 5LL);
  v4 = *((_QWORD *)&v19 + 1);
  v3 = v19;
  v5 = *(_QWORD *)v17;
  if ( *(_QWORD *)v17 != 0x8000000000000000LL )
  {
    if ( (_QWORD)v19 != 0x8000000000000000LL )
    {
      v6 = *(_QWORD *)&v17[8];
      v3 = v19;
      if ( (unsigned __int8)alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                              *(_QWORD *)&v17[8],
                              *(_QWORD *)&v17[16],
                              *((_QWORD *)&v19 + 1),
                              v20) )
        goto LABEL_9;
    }
LABEL_10:
    core::ptr::drop_in_place<std::env::VarError>(v3, v4);
    core::ptr::drop_in_place<std::env::VarError>(v5, *(_QWORD *)&v17[8]);
    core::ptr::drop_in_place<std::env::ArgsOs>(&v23);
    wild::args_os(&v23);
    v7 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::try_fold(&v23);
    v8 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v7);
    core::ptr::drop_in_place<std::env::ArgsOs>(&v23);
    if ( v8 )
    {
      wild::args_os(&v19);
      bat::config::get_args_from_env_vars(v18);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v23, &v19);
      if ( (_QWORD)v23 == 0x8000000000000000LL )
        core::option::unwrap_failed(&off_6C82A0);
      *(_QWORD *)&v17[16] = v24;
      *(_OWORD *)v17 = v23;
      ((void (__fastcall *)(_BYTE *, _BYTE *, char **, __int64, __int64, __int64))alloc::vec::Vec<T,A>::insert)(
        v18,
        v17,
        &off_6C82B8,
        v9,
        v10,
        v11);
      v24 = v20;
      v23 = v19;
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::fold(&v23, v18);
LABEL_19:
      v21 = *(_OWORD *)v18;
      v22 = *(_QWORD *)&v18[16];
      goto LABEL_20;
    }
    wild::args_os(&v19);
    bat::config::get_args_from_env_opts_var(&v23);
    if ( (_QWORD)v23 == 0x8000000000000001LL )
    {
      bat::config::get_args_from_config_file(v17);
      v12 = *(_QWORD *)v17;
      if ( *(_QWORD *)v17 == 0x8000000000000000LL )
      {
LABEL_15:
        <bat::error::Error as core::convert::From<&str>>::from(&v23, aCouldNotParseC, 34LL);
        a1[4] = v27;
        v13 = v23;
        v14 = v24;
        v15 = v25;
        a1[3] = v26;
        a1[2] = v15;
        a1[1] = v14;
        *a1 = v13;
        return core::ptr::drop_in_place<std::env::ArgsOs>(&v19);
      }
    }
    else
    {
      *(_QWORD *)&v17[16] = v24;
      *(_OWORD *)v17 = v23;
      v12 = v23;
      if ( (_QWORD)v23 == 0x8000000000000000LL )
        goto LABEL_15;
    }
    *(_QWORD *)v18 = v12;
    *(_OWORD *)&v18[8] = *(_OWORD *)&v17[8];
    bat::config::get_args_from_env_vars(v17);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v23, v17);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(
      v18,
      &v23);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v23, &v19);
    if ( (_QWORD)v23 == 0x8000000000000000LL )
      core::option::unwrap_failed(&off_6C8270);
    *(_QWORD *)&v17[16] = v24;
    *(_OWORD *)v17 = v23;
    ((void (__fastcall *)(_BYTE *, _BYTE *, char **))alloc::vec::Vec<T,A>::insert)(v18, v17, &off_6C8288);
    v24 = v20;
    v23 = v19;
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::fold(&v23, v18);
    goto LABEL_19;
  }
  if ( (_QWORD)v19 != 0x8000000000000000LL )
    goto LABEL_10;
  v6 = *(_QWORD *)&v17[8];
LABEL_9:
  core::ptr::drop_in_place<std::env::VarError>(v3, v4);
  core::ptr::drop_in_place<std::env::VarError>(v5, v6);
  core::ptr::drop_in_place<std::env::ArgsOs>(&v23);
  wild::args_os(&v23);
  core::iter::traits::iterator::Iterator::collect(&v21, &v23);
LABEL_20:
  bat::clap_app::build_app(&v23, a2);
  result = clap_builder::builder::command::Command::get_matches_from((char *)a1 + 8, &v23, &v21);
  *(_BYTE *)a1 = 13;
  return result;
}