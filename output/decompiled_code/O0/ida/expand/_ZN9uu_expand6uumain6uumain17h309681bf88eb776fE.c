__int64 __fastcall uu_expand::uumain::uumain(__int64 a1, __int64 a2)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v10; // [rsp+0h] [rbp-678h]
  struct _Unwind_Exception *v11; // [rsp+0h] [rbp-678h]
  int v12; // [rsp+8h] [rbp-670h]
  int v13; // [rsp+8h] [rbp-670h]
  struct _Unwind_Exception *v14; // [rsp+10h] [rbp-668h]
  int v15; // [rsp+18h] [rbp-660h]
  __int64 v16; // [rsp+40h] [rbp-638h]
  _OWORD v17[6]; // [rsp+50h] [rbp-628h] BYREF
  __int64 v18; // [rsp+B0h] [rbp-5C8h]
  __int128 v19; // [rsp+B8h] [rbp-5C0h] BYREF
  __int128 v20; // [rsp+C8h] [rbp-5B0h]
  __int128 v21; // [rsp+D8h] [rbp-5A0h]
  __int128 v22; // [rsp+E8h] [rbp-590h]
  __int128 v23; // [rsp+F8h] [rbp-580h]
  __int128 v24; // [rsp+108h] [rbp-570h]
  __int64 v25; // [rsp+118h] [rbp-560h]
  int v26[26]; // [rsp+120h] [rbp-558h] BYREF
  int dest[178]; // [rsp+188h] [rbp-4F0h] BYREF
  int v28[6]; // [rsp+450h] [rbp-228h] BYREF
  _BYTE v29[24]; // [rsp+468h] [rbp-210h] BYREF
  __int128 v30; // [rsp+480h] [rbp-1F8h]
  __int128 v31; // [rsp+490h] [rbp-1E8h]
  __int128 v32; // [rsp+4A0h] [rbp-1D8h]
  __int128 v33; // [rsp+4B0h] [rbp-1C8h]
  __int128 v34; // [rsp+4C0h] [rbp-1B8h]
  __int128 v35; // [rsp+4D0h] [rbp-1A8h]
  __int64 v36; // [rsp+4E0h] [rbp-198h]
  int v37[4]; // [rsp+4F0h] [rbp-188h] BYREF
  __int128 v38; // [rsp+500h] [rbp-178h]
  __int128 v39; // [rsp+510h] [rbp-168h]
  __int128 v40; // [rsp+520h] [rbp-158h]
  __int128 v41; // [rsp+530h] [rbp-148h]
  _BYTE v42[64]; // [rsp+540h] [rbp-138h] BYREF
  __int128 v43; // [rsp+580h] [rbp-F8h]
  _BYTE v44[80]; // [rsp+590h] [rbp-E8h] BYREF
  _OWORD v45[8]; // [rsp+5E0h] [rbp-98h] BYREF
  char v46; // [rsp+666h] [rbp-12h]
  char v47; // [rsp+667h] [rbp-11h]

  v46 = 0;
  v47 = 1;
  uu_expand::uu_app(dest);
  v46 = 1;
  v47 = 0;
  core::iter::traits::iterator::Iterator::collect(v29, a1, a2);
  uu_expand::expand_shortcuts(v28, v29);
  v46 = 0;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v26,
    (int)dest,
    (int)v28,
    v2,
    v3,
    v4,
    v10,
    v12,
    v14,
    v15);
  v46 = 0;
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v19, v26);
  if ( (_QWORD)v19 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v19 + 1),
             &off_107F68);
  v36 = v25;
  v35 = v24;
  v34 = v23;
  v33 = v22;
  v32 = v21;
  v31 = v20;
  v30 = v19;
  v18 = v25;
  v17[5] = v24;
  v17[4] = v23;
  v17[3] = v22;
  v17[2] = v21;
  v17[1] = v20;
  v17[0] = v19;
  uu_expand::Options::new(v44, v17);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v42, v44);
  if ( *(_QWORD *)v42 == 0x8000000000000000LL )
  {
    v45[2] = *(_OWORD *)&v42[40];
    v45[1] = *(_OWORD *)&v42[24];
    v45[0] = *(_OWORD *)&v42[8];
    v16 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v45,
            &off_107F50);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v17);
  }
  else
  {
    v45[7] = v43;
    v45[6] = *(_OWORD *)&v42[48];
    v45[5] = *(_OWORD *)&v42[32];
    v45[4] = *(_OWORD *)&v42[16];
    v45[3] = *(_OWORD *)v42;
    v41 = v43;
    v40 = *(_OWORD *)&v42[48];
    v39 = *(_OWORD *)&v42[32];
    v38 = *(_OWORD *)&v42[16];
    *(_OWORD *)v37 = *(_OWORD *)v42;
    v16 = uu_expand::expand(v37);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v17);
    core::ptr::drop_in_place<uu_expand::Options>((int)v37, (int)v44, v5, v6, v7, v8, v11, v13);
  }
  return v16;
}
