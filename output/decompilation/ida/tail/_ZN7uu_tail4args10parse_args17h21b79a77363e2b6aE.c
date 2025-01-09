__int64 __fastcall uu_tail::args::parse_args(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int128 v12; // kr00_16
  __int64 v13; // rcx
  __int128 v14; // kr10_16
  __int128 v15; // kr20_16
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  _BYTE v23[8]; // [rsp+8h] [rbp-400h] BYREF
  __int64 v24; // [rsp+10h] [rbp-3F8h]
  unsigned __int64 v25; // [rsp+18h] [rbp-3F0h]
  __int128 v26; // [rsp+20h] [rbp-3E8h] BYREF
  _BYTE v27[64]; // [rsp+30h] [rbp-3D8h]
  _OWORD v28[3]; // [rsp+70h] [rbp-398h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-368h]
  __int128 v30; // [rsp+B0h] [rbp-358h]
  __int128 v31; // [rsp+C0h] [rbp-348h]
  __int128 v32; // [rsp+D0h] [rbp-338h]
  __int64 v33; // [rsp+E0h] [rbp-328h]
  _OWORD v34[3]; // [rsp+E8h] [rbp-320h] BYREF
  __int64 v35; // [rsp+118h] [rbp-2F0h]
  __int128 v36; // [rsp+120h] [rbp-2E8h] BYREF
  __int64 v37; // [rsp+130h] [rbp-2D8h]
  __int128 v38; // [rsp+138h] [rbp-2D0h]
  __int128 v39; // [rsp+148h] [rbp-2C0h]
  __int128 v40; // [rsp+158h] [rbp-2B0h]
  __int64 v41; // [rsp+168h] [rbp-2A0h]

  core::iter::traits::iterator::Iterator::collect(v23);
  uu_tail::args::uu_app(&v36);
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v26, v23);
  clap_builder::builder::command::Command::try_get_matches_from(v34, &v36, &v26);
  if ( *(_QWORD *)&v34[0] == 0x8000000000000000LL )
  {
    *((_QWORD *)&v26 + 1) = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v34[0] + 1));
    *(_QWORD *)v27 = v1;
    *(_QWORD *)&v26 = 5LL;
    v2 = v25;
    if ( (v25 & 0xFFFFFFFFFFFFFFFELL) == 2 )
    {
      v3 = v24;
      v4 = v24 + 24;
      goto LABEL_9;
    }
    goto LABEL_13;
  }
  v29 = v35;
  v28[2] = v34[2];
  v28[1] = v34[1];
  v28[0] = v34[0];
  uu_tail::args::Settings::from((__int64)&v36, (__int64)v28);
  v5 = v37;
  if ( (_QWORD)v36 != 5LL )
  {
    *(_QWORD *)&v27[56] = v41;
    *(_OWORD *)&v27[40] = v40;
    *(_OWORD *)&v27[24] = v39;
    *(_OWORD *)&v27[8] = v38;
    v26 = v36;
    *(_QWORD *)v27 = v37;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v28);
    if ( (v25 & 0xFFFFFFFFFFFFFFFELL) == 2 )
    {
      v4 = v24 + 24;
      std::sys::os_str::bytes::Slice::to_string_lossy(&v36, *(_QWORD *)(v24 + 32), *(_QWORD *)(v24 + 40));
      v6 = *((_QWORD *)&v36 + 1);
      v7 = v37;
      LODWORD(v28[0]) = 0;
      v8 = core::char::methods::encode_utf8_raw(v28);
      if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v6, v7, v8, v9) )
      {
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v36);
        goto LABEL_17;
      }
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v36);
      v3 = v24;
      v2 = v25;
LABEL_9:
      v10 = v3 + 48;
      v11 = 0LL;
      if ( v2 >= 3 )
        v11 = v10;
      uu_tail::args::parse_obsolete((__int64)&v36, v4, v11);
      v12 = v36;
      v13 = v37;
      if ( (_QWORD)v36 == 6LL )
      {
        *(_QWORD *)(a1 + 8) = *((_QWORD *)&v36 + 1);
        *(_QWORD *)(a1 + 16) = v13;
        *(_QWORD *)a1 = 5LL;
        core::ptr::drop_in_place<core::result::Result<uu_tail::args::Settings,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v26);
        goto LABEL_18;
      }
      v33 = v41;
      v32 = v40;
      v31 = v39;
      v30 = v38;
      if ( (_DWORD)v36 != 5 )
      {
        *(_QWORD *)(a1 + 72) = v33;
        v17 = v30;
        v18 = v31;
        *(_OWORD *)(a1 + 56) = v32;
        *(_OWORD *)(a1 + 40) = v18;
        *(_OWORD *)(a1 + 24) = v17;
        *(_OWORD *)a1 = v12;
        *(_QWORD *)(a1 + 16) = v13;
        core::ptr::drop_in_place<core::result::Result<uu_tail::args::Settings,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v26);
        goto LABEL_18;
      }
LABEL_17:
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v27[48];
      v19 = v26;
      v20 = *(_OWORD *)v27;
      v21 = *(_OWORD *)&v27[16];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v27[32];
      *(_OWORD *)(a1 + 32) = v21;
      *(_OWORD *)(a1 + 16) = v20;
      *(_OWORD *)a1 = v19;
      goto LABEL_18;
    }
LABEL_13:
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v27[48];
    v14 = v26;
    v15 = *(_OWORD *)v27;
    v16 = *(_OWORD *)&v27[16];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v27[32];
    *(_OWORD *)(a1 + 32) = v16;
    *(_OWORD *)(a1 + 16) = v15;
    *(_OWORD *)a1 = v14;
    goto LABEL_18;
  }
  *(_QWORD *)(a1 + 8) = *((_QWORD *)&v36 + 1);
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)a1 = 5LL;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v28);
LABEL_18:
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v23);
  return a1;
}
