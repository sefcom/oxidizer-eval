__int64 __fastcall uu_paste::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // [rsp+0h] [rbp-5E8h]
  int v8; // [rsp+8h] [rbp-5E0h]
  struct _Unwind_Exception *v9; // [rsp+10h] [rbp-5D8h]
  int v10; // [rsp+18h] [rbp-5D0h]
  unsigned __int8 v11; // [rsp+26h] [rbp-5C2h]
  char v12; // [rsp+27h] [rbp-5C1h]
  __int64 v13; // [rsp+28h] [rbp-5C0h]
  __int64 one; // [rsp+30h] [rbp-5B8h]
  char flag; // [rsp+4Fh] [rbp-599h]
  __int64 v16; // [rsp+60h] [rbp-588h]
  _OWORD v17[6]; // [rsp+70h] [rbp-578h] BYREF
  __int64 v18; // [rsp+D0h] [rbp-518h]
  __int128 v19; // [rsp+D8h] [rbp-510h] BYREF
  __int128 v20; // [rsp+E8h] [rbp-500h]
  __int128 v21; // [rsp+F8h] [rbp-4F0h]
  __int128 v22; // [rsp+108h] [rbp-4E0h]
  __int128 v23; // [rsp+118h] [rbp-4D0h]
  __int128 v24; // [rsp+128h] [rbp-4C0h]
  __int64 v25; // [rsp+138h] [rbp-4B0h]
  int v26[26]; // [rsp+140h] [rbp-4A8h] BYREF
  int v27[178]; // [rsp+1A8h] [rbp-440h] BYREF
  __int128 v28; // [rsp+470h] [rbp-178h]
  __int128 v29; // [rsp+480h] [rbp-168h]
  __int128 v30; // [rsp+490h] [rbp-158h]
  __int128 v31; // [rsp+4A0h] [rbp-148h]
  __int128 v32; // [rsp+4B0h] [rbp-138h]
  __int128 v33; // [rsp+4C0h] [rbp-128h]
  __int64 v34; // [rsp+4D0h] [rbp-118h]
  __int128 v35; // [rsp+4D8h] [rbp-110h] BYREF
  __int64 v36; // [rsp+4E8h] [rbp-100h]
  _BYTE v37[64]; // [rsp+4F0h] [rbp-F8h] BYREF
  _BYTE dest[64]; // [rsp+530h] [rbp-B8h] BYREF
  _QWORD src[8]; // [rsp+570h] [rbp-78h] BYREF
  __int128 v40; // [rsp+5B0h] [rbp-38h] BYREF
  __int64 v41; // [rsp+5C0h] [rbp-28h]
  char v42; // [rsp+5CDh] [rbp-1Bh]
  char v43; // [rsp+5CEh] [rbp-1Ah]
  char v44; // [rsp+5CFh] [rbp-19h]
  __int64 v45; // [rsp+5E0h] [rbp-8h]

  v43 = 0;
  v42 = 0;
  v44 = 1;
  uu_paste::uu_app(v27);
  v44 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v26, (int)v27, a1, a2, v2, v3, v7, v8, v9, v10);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v19, v26);
  if ( (_QWORD)v19 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v19 + 1),
             &off_100278);
  v34 = v25;
  v33 = v24;
  v32 = v23;
  v31 = v22;
  v30 = v21;
  v29 = v20;
  v28 = v19;
  v18 = v25;
  v17[5] = v24;
  v17[4] = v23;
  v17[3] = v22;
  v17[2] = v21;
  v17[1] = v20;
  v17[0] = v19;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v17, aSerial, 6LL, &off_1001E8);
  one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v17, aDelimiters, 10LL, &off_100200);
  v45 = one;
  if ( !one )
    core::option::unwrap_failed(&off_100218);
  v13 = v45;
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(src, v17, aFile_0, 4LL, &off_100230);
  if ( !src[0] )
    core::option::unwrap_failed(&off_100248);
  memcpy(dest, src, sizeof(dest));
  core::iter::traits::iterator::Iterator::cloned(v37, dest);
  core::iter::traits::iterator::Iterator::collect(&v35, v37);
  v43 = 1;
  v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v17, aZeroTerminated, 15LL, &off_100260);
  v11 = uucore::mods::line_ending::LineEnding::from_zero_flag(v12 & 1);
  v43 = 0;
  v42 = 1;
  v41 = v36;
  v40 = v35;
  v4 = <alloc::string::String as core::ops::deref::Deref>::deref(v13);
  v42 = 0;
  v16 = uu_paste::paste(&v40, flag & 1, v4, v5, v11);
  v42 = 0;
  v43 = 0;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v17);
  return v16;
}
