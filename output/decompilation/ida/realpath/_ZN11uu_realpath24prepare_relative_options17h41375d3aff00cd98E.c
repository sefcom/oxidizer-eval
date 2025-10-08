_QWORD *__fastcall uu_realpath::prepare_relative_options(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  __int64 v4; // r14
  unsigned __int64 v6; // rbp
  void *v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int8 v11; // al
  unsigned int v12; // r14d
  unsigned int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // r14
  __int64 v22; // rcx
  _QWORD *v23; // r12
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r13
  char v27; // al
  __int64 v28; // rdx
  __int64 v30; // [rsp+0h] [rbp-98h]
  void *v31; // [rsp+8h] [rbp-90h]
  unsigned __int64 v32; // [rsp+10h] [rbp-88h] BYREF
  void *v33; // [rsp+18h] [rbp-80h]
  __int64 v34; // [rsp+20h] [rbp-78h]
  __int64 v35; // [rsp+38h] [rbp-60h]
  _QWORD *v36; // [rsp+40h] [rbp-58h]
  __int64 v37; // [rsp+48h] [rbp-50h] BYREF
  __int64 v38; // [rsp+50h] [rbp-48h]
  __int64 v39; // [rsp+58h] [rbp-40h]
  __int64 v40; // [rsp+60h] [rbp-38h]

  v36 = a1;
  v6 = 0x8000000000000000LL;
  v7 = &unk_1A307;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v32, a2, &unk_1A307, 11LL);
  v8 = clap_builder::parser::error::MatchesError::unwrap(&unk_1A307, 11LL, &v32);
  if ( v8 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v32, *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16));
    v9 = v32;
    v7 = v33;
    v4 = v34;
  }
  else
  {
    v9 = 0x8000000000000000LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v32, a2, aRelativeBase, 13LL);
  v10 = clap_builder::parser::error::MatchesError::unwrap(aRelativeBase, 13LL, &v32);
  if ( v10 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v32, *(_QWORD *)(v10 + 8), *(_QWORD *)(v10 + 16));
    v11 = a4;
    v6 = v32;
    v31 = v33;
    v40 = v34;
  }
  else
  {
    v11 = a4;
  }
  v32 = v9;
  v33 = v7;
  v34 = v4;
  v12 = a3;
  v13 = v11;
  uu_realpath::canonicalize_relative_option(&v37, &v32, a3, v11);
  v15 = v37;
  v16 = v39;
  if ( v37 == 0x8000000000000001LL )
  {
    v17 = v36;
    v36[1] = v38;
    v17[2] = v16;
    *v17 = 0x8000000000000001LL;
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v6, v31, v14, v16);
    return v17;
  }
  v35 = v39;
  v30 = v38;
  v32 = v6;
  v33 = v31;
  v34 = v40;
  uu_realpath::canonicalize_relative_option(&v37, &v32, v12, v13);
  v20 = v37;
  v21 = v38;
  v22 = v39;
  v23 = v36;
  if ( v37 == 0x8000000000000001LL )
  {
    v36[1] = v38;
    v23[2] = v22;
    *v23 = 0x8000000000000001LL;
  }
  else
  {
    v24 = 0LL;
    v25 = v38;
    if ( v37 == 0x8000000000000000LL )
      v25 = 0LL;
    if ( v15 != 0x8000000000000000LL )
      v24 = v30;
    if ( v25 == 0 || v24 == 0 || (v26 = v39, v27 = std::path::Path::starts_with(v24, v35), v22 = v26, v27) )
    {
      *v23 = v15;
      v23[1] = v30;
      v23[2] = v35;
      v23[3] = v20;
      v23[4] = v21;
      v23[5] = v22;
      return v23;
    }
    *v23 = 0x8000000000000000LL;
    v23[3] = 0x8000000000000000LL;
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v20, v21, v28, v26);
  }
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v15, v30, v19, v22);
  return v23;
}