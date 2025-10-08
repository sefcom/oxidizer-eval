__int64 __fastcall uu_mknod::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _BYTE *v4; // rbx
  __int64 v5; // rax
  int v6; // r13d
  __int64 v7; // r14
  char flag; // bp
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // eax
  __int128 v24; // [rsp+0h] [rbp-368h] BYREF
  __int128 v25; // [rsp+10h] [rbp-358h]
  __int128 v26; // [rsp+20h] [rbp-348h]
  __int64 v27; // [rsp+30h] [rbp-338h]
  __int128 v28; // [rsp+40h] [rbp-328h] BYREF
  __int64 v29; // [rsp+50h] [rbp-318h]
  _QWORD v30[2]; // [rsp+58h] [rbp-310h] BYREF
  int v31; // [rsp+68h] [rbp-300h]
  char v32; // [rsp+6Ch] [rbp-2FCh]
  _OWORD dest[3]; // [rsp+70h] [rbp-2F8h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-2C8h]

  uu_mknod::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v24, dest, a1, a2);
  if ( __OFSUB__(-(__int64)v24, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v24 + 1),
             dest,
             v2,
             -(__int64)v24);
  v34 = v27;
  dest[2] = v26;
  dest[1] = v25;
  dest[0] = v24;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, dest);
  v4 = (_BYTE *)clap_builder::parser::error::MatchesError::unwrap(&v24);
  if ( !v4 )
    core::option::unwrap_failed(&off_E32C8);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, dest, aMode_0, 4LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aMode_0, 4LL, &v24);
  uu_mknod::get_mode(&v28, v5);
  if ( (_QWORD)v28 != 0x8000000000000000LL )
  {
    *(_QWORD *)&v25 = v29;
    v24 = v28;
    DWORD2(v25) = 1;
    v13 = ((__int64 (__fastcall *)(__int128 *))alloc::boxed::Box<T>::new)(&v24);
LABEL_14:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(dest);
    return v13;
  }
  v6 = dword_18C10[(unsigned __int8)*v4] | DWORD2(v28);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, dest, aName_0, 4LL);
  v7 = clap_builder::parser::error::MatchesError::unwrap(aName_0, 4LL, &v24);
  if ( !v7 )
    core::option::expect_failed(aMissingArgumen, 23LL, &off_E3368);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aZ, 1LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, dest, aContext, 7LL);
  v9 = clap_builder::parser::error::MatchesError::unwrap(aContext, 7LL, &v24);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, dest, aMajorminor);
  v10 = clap_builder::parser::error::MatchesError::unwrap(aMajorminor, &v24);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, dest, &aMajorminor[5]);
  v11 = clap_builder::parser::error::MatchesError::unwrap(&aMajorminor[5], &v24);
  if ( *v4 != 2 )
  {
    if ( v11 != 0 && v10 != 0 )
    {
      v12 = (*(_QWORD *)v11 << 12) & 0xFFFFFFFFFFF00000LL | (unsigned __int8)*(_QWORD *)v11 | (unsigned __int64)(((unsigned int)*(_QWORD *)v10 << 8) & 0xFFF00) | ((*(_QWORD *)v10 & 0xFFFFF000LL) << 32);
      goto LABEL_16;
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v28, aSpecialFilesRe, 53LL);
    *(_QWORD *)&v25 = v29;
    v24 = v28;
    DWORD2(v25) = 1;
    v18 = ((__int64 (__fastcall *)(__int128 *, const char *, __int64, __int64, __int64, __int64))alloc::boxed::Box<T>::new)(
            &v24,
            aSpecialFilesRe,
            v14,
            v15,
            v16,
            v17);
    goto LABEL_13;
  }
  if ( v11 | v10 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v28, aFifosDoNotHave, 49LL);
    *(_QWORD *)&v25 = v29;
    v24 = v28;
    DWORD2(v25) = 1;
    v18 = ((__int64 (__fastcall *)(__int128 *, const char *, __int64, __int64, __int64, __int64))alloc::boxed::Box<T>::new)(
            &v24,
            aFifosDoNotHave,
            v19,
            v20,
            v21,
            v22);
LABEL_13:
    v13 = v18;
    goto LABEL_14;
  }
  v12 = 0LL;
LABEL_16:
  v31 = v6;
  v30[0] = v12;
  v32 = (v9 != 0) | flag;
  v30[1] = v9;
  v23 = uu_mknod::mknod(*(_QWORD *)(v7 + 8), *(_QWORD *)(v7 + 16), v30);
  uucore::mods::error::set_exit_code(v23);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(dest);
  return 0LL;
}