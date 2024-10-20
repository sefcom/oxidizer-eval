__int64 __fastcall uu_env::EnvAppData::run_env(bool *a1, struct _Unwind_Exception *a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 config_file; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  char is_empty; // [rsp+2Fh] [rbp-5E9h]
  bool v25; // [rsp+125h] [rbp-4F3h]
  unsigned __int8 count; // [rsp+126h] [rbp-4F2h]
  __int64 v27; // [rsp+130h] [rbp-4E8h]
  _QWORD v28[3]; // [rsp+140h] [rbp-4D8h] BYREF
  _BYTE v29[104]; // [rsp+158h] [rbp-4C0h] BYREF
  _QWORD src[16]; // [rsp+1C0h] [rbp-458h] BYREF
  _BYTE v31[128]; // [rsp+240h] [rbp-3D8h] BYREF
  _QWORD dest[3]; // [rsp+2C0h] [rbp-358h] BYREF
  __int64 v33; // [rsp+2D8h] [rbp-340h] BYREF
  bool v34; // [rsp+345h] [rbp-2D3h]
  bool v35; // [rsp+346h] [rbp-2D2h]
  char v36; // [rsp+347h] [rbp-2D1h]
  _BYTE v37[72]; // [rsp+348h] [rbp-2D0h] BYREF
  _BYTE v38[88]; // [rsp+390h] [rbp-288h] BYREF
  _QWORD v39[20]; // [rsp+3E8h] [rbp-230h] BYREF
  _BYTE v40[160]; // [rsp+488h] [rbp-190h] BYREF
  _BYTE v41[160]; // [rsp+528h] [rbp-F0h] BYREF
  __int64 v42; // [rsp+5C8h] [rbp-50h]
  __int64 v43; // [rsp+5D0h] [rbp-48h]
  __int64 v44; // [rsp+5D8h] [rbp-40h]
  __int64 v45; // [rsp+5E0h] [rbp-38h]
  __int64 v46; // [rsp+5E8h] [rbp-30h]
  __int64 v47; // [rsp+5F0h] [rbp-28h]
  __int64 v48; // [rsp+5F8h] [rbp-20h]
  __int64 v49; // [rsp+600h] [rbp-18h]

  uu_env::EnvAppData::parse_arguments((__int64)v31, (__int64)a1, a2, a3);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(src, v31);
  if ( src[0] == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             src[1],
             src[2],
             &off_135ED8);
  memcpy(dest, src, 0x80uLL);
  v28[0] = dest[0];
  v28[1] = dest[1];
  v28[2] = dest[2];
  memcpy(v29, &v33, sizeof(v29));
  v34 = *a1
     || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_count(
                           v29,
                           aDebug,
                           5LL,
                           &off_135E30) != 0;
  *a1 = v34;
  v25 = a1[2];
  count = clap_builder::parser::matches::arg_matches::ArgMatches::get_count(v29, aDebug, 5LL, &off_135E48);
  LOBYTE(v3) = count - 2;
  v35 = count >= 2u;
  a1[2] = core::option::Option<T>::or(v25, count >= 2u, v4, v3);
  if ( a1[2] != 2 && a1[2] )
  {
    v5 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v28);
    uu_env::debug_print_args(v5, v6);
    v36 = 0;
    a1[2] = 0;
  }
  uu_env::make_options(v40, v29);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v39, v40);
  if ( v39[0] == 0x8000000000000000LL )
  {
    v27 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v39[1],
            v39[2],
            &off_135EC0);
LABEL_29:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v29);
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v28);
    return v27;
  }
  memcpy(v41, v39, sizeof(v41));
  memcpy(v37, v41, 160LL);
  v7 = uu_env::apply_change_directory(v37);
  v9 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v7, v8);
  v42 = v9;
  v43 = v10;
  if ( v9 )
  {
    v27 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v42,
            v43,
            &off_135EA8);
LABEL_27:
    core::ptr::drop_in_place<uu_env::Options>(v37);
    goto LABEL_29;
  }
  uu_env::apply_removal_of_all_env_vars(v37);
  config_file = uu_env::load_config_file(v37);
  v13 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(config_file, v12);
  v44 = v13;
  v45 = v14;
  if ( v13 )
  {
    v27 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v44,
            v45,
            &off_135E90);
    goto LABEL_27;
  }
  v15 = uu_env::apply_unset_env_vars(v37);
  v17 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v15, v16);
  v46 = v17;
  v47 = v18;
  if ( v17 )
  {
    v27 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v46,
            v47,
            &off_135E78);
    goto LABEL_27;
  }
  uu_env::apply_specified_env_vars(v37);
  v19 = uu_env::apply_ignore_signal(v37);
  v21 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v19, v20);
  v48 = v21;
  v49 = v22;
  if ( v21 )
  {
    v27 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v48,
            v49,
            &off_135E60);
    goto LABEL_27;
  }
  is_empty = alloc::vec::Vec<T,A>::is_empty(v38);
  if ( (is_empty & 1) == 0 )
  {
    v27 = uu_env::EnvAppData::run_program(a1, v37, *a1);
    goto LABEL_27;
  }
  uu_env::print_env(v38[81]);
  v27 = 0LL;
  core::ptr::drop_in_place<uu_env::Options>(v37);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v29);
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v28);
  return v27;
}
