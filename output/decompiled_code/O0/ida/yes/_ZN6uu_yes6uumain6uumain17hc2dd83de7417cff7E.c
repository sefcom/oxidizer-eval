__int64 __fastcall uu_yes::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v9; // [rsp+0h] [rbp-638h]
  int v10; // [rsp+8h] [rbp-630h]
  struct _Unwind_Exception *v11; // [rsp+10h] [rbp-628h]
  char v12; // [rsp+16h] [rbp-622h]
  int v13; // [rsp+18h] [rbp-620h]
  __int64 v14; // [rsp+70h] [rbp-5C8h]
  int v15[4]; // [rsp+80h] [rbp-5B8h] BYREF
  int v16[4]; // [rsp+90h] [rbp-5A8h]
  int v17[4]; // [rsp+A0h] [rbp-598h]
  int v18[4]; // [rsp+B0h] [rbp-588h]
  int v19[4]; // [rsp+C0h] [rbp-578h]
  int v20[4]; // [rsp+D0h] [rbp-568h]
  int v21[2]; // [rsp+E0h] [rbp-558h]
  __int128 v22; // [rsp+E8h] [rbp-550h] BYREF
  __int128 v23; // [rsp+F8h] [rbp-540h]
  __int128 v24; // [rsp+108h] [rbp-530h]
  __int128 v25; // [rsp+118h] [rbp-520h]
  __int128 v26; // [rsp+128h] [rbp-510h]
  __int128 v27; // [rsp+138h] [rbp-500h]
  __int64 v28; // [rsp+148h] [rbp-4F0h]
  int v29[26]; // [rsp+150h] [rbp-4E8h] BYREF
  int dest[178]; // [rsp+1B8h] [rbp-480h] BYREF
  int v31[4]; // [rsp+480h] [rbp-1B8h]
  int v32[4]; // [rsp+490h] [rbp-1A8h]
  int v33[4]; // [rsp+4A0h] [rbp-198h]
  int v34[4]; // [rsp+4B0h] [rbp-188h]
  int v35[4]; // [rsp+4C0h] [rbp-178h]
  int v36[4]; // [rsp+4D0h] [rbp-168h]
  int v37[2]; // [rsp+4E0h] [rbp-158h]
  int v38[6]; // [rsp+4E8h] [rbp-150h] BYREF
  __int128 v39[4]; // [rsp+500h] [rbp-138h] BYREF
  __int64 v40; // [rsp+540h] [rbp-F8h] BYREF
  __int64 v41; // [rsp+548h] [rbp-F0h] BYREF
  char v42; // [rsp+557h] [rbp-E1h] BYREF
  __int64 v43; // [rsp+558h] [rbp-E0h] BYREF
  _QWORD v44[3]; // [rsp+560h] [rbp-D8h] BYREF
  _QWORD v45[3]; // [rsp+578h] [rbp-C0h] BYREF
  _BYTE v46[48]; // [rsp+590h] [rbp-A8h] BYREF
  __int128 v47; // [rsp+5C0h] [rbp-78h] BYREF
  __int128 v48; // [rsp+5D0h] [rbp-68h]
  char v49; // [rsp+5E6h] [rbp-52h]
  char v50; // [rsp+5E7h] [rbp-51h]
  __int64 *v51; // [rsp+5F8h] [rbp-40h]
  __int64 (__fastcall *v52)(); // [rsp+600h] [rbp-38h]
  __int64 v53; // [rsp+608h] [rbp-30h]
  __int64 v54; // [rsp+610h] [rbp-28h]
  _QWORD v55[4]; // [rsp+618h] [rbp-20h] BYREF

  v49 = 0;
  v50 = 1;
  uu_yes::uu_app(dest);
  v50 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v29, (int)dest, a1, a2, v2, v3, v9, v10, v11, v13);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v22, v29);
  if ( (_QWORD)v22 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v22 + 1),
             &off_F9CD8);
  *(_QWORD *)v37 = v28;
  *(_OWORD *)v36 = v27;
  *(_OWORD *)v35 = v26;
  *(_OWORD *)v34 = v25;
  *(_OWORD *)v33 = v24;
  *(_OWORD *)v32 = v23;
  *(_OWORD *)v31 = v22;
  *(_QWORD *)v21 = v28;
  *(_OWORD *)v20 = v27;
  *(_OWORD *)v19 = v26;
  *(_OWORD *)v18 = v25;
  *(_OWORD *)v17 = v24;
  *(_OWORD *)v16 = v23;
  *(_OWORD *)v15 = v22;
  alloc::vec::Vec<T>::with_capacity(v38, 0x4000LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v39, v15, aString, 6LL, &off_F9C98);
  v4 = uu_yes::args_into_buffer((__int64)v38, v39);
  v53 = v4;
  v54 = v5;
  if ( v4 )
  {
    v55[0] = v53;
    v55[1] = v54;
    core::result::unwrap_failed(aCalledResultUn, 43LL, v55, &off_F9BE8, &off_F9CB0);
  }
  uu_yes::prepare_buffer(v38);
  v6 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v38);
  v40 = uu_yes::exec(v6, v7);
  v49 = 1;
  if ( v40 )
  {
    v42 = std::io::error::Error::kind(&v40);
    v12 = <std::io::error::ErrorKind as core::cmp::PartialEq>::eq(&v42, &unk_15353);
    v49 = 0;
    if ( (v12 & 1) != 0 )
    {
      v41 = v40;
      v14 = 0LL;
      core::ptr::drop_in_place<std::io::error::Error>(&v41);
    }
    else
    {
      v43 = v40;
      v51 = &v43;
      v52 = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&v48 = &v43;
      *((_QWORD *)&v48 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
      v47 = v48;
      core::fmt::Arguments::new_v1(v46, &off_F9CC8, &v47);
      alloc::fmt::format(v45, v46);
      v44[0] = v45[0];
      v44[1] = v45[1];
      v44[2] = v45[2];
      v14 = uucore::mods::error::USimpleError::new(1LL, v44);
      core::ptr::drop_in_place<std::io::error::Error>(&v43);
    }
  }
  else
  {
    v14 = 0LL;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v38);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v15);
  v49 = 0;
  return v14;
}
