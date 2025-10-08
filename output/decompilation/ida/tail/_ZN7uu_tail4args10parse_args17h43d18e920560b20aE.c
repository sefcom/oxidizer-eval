__int64 __fastcall uu_tail::args::parse_args(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int64 v2; // r15
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rdx
  __int128 v7; // kr00_16
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int128 v10; // kr10_16
  __int64 v11; // rbp
  __int64 v12; // rax
  __int128 v13; // kr20_16
  __int128 v14; // kr30_16
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v22; // [rsp+8h] [rbp-410h] BYREF
  _BYTE v23[64]; // [rsp+18h] [rbp-400h]
  _BYTE v24[8]; // [rsp+58h] [rbp-3C0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-3B8h]
  unsigned __int64 v26; // [rsp+68h] [rbp-3B0h]
  _OWORD v27[3]; // [rsp+70h] [rbp-3A8h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-378h]
  __int128 v29; // [rsp+B0h] [rbp-368h]
  __int128 v30; // [rsp+C0h] [rbp-358h]
  __int128 v31; // [rsp+D0h] [rbp-348h]
  __int64 v32; // [rsp+E0h] [rbp-338h]
  _OWORD v33[3]; // [rsp+E8h] [rbp-330h] BYREF
  __int64 v34; // [rsp+118h] [rbp-300h]
  __int128 dest; // [rsp+120h] [rbp-2F8h] BYREF
  __int64 v36; // [rsp+130h] [rbp-2E8h]
  __int128 v37; // [rsp+138h] [rbp-2E0h]
  __int128 v38; // [rsp+148h] [rbp-2D0h]
  __int128 v39; // [rsp+158h] [rbp-2C0h]
  __int64 v40; // [rsp+168h] [rbp-2B0h]

  core::iter::traits::iterator::Iterator::collect(v24);
  uu_tail::args::uu_app(&dest);
  v1 = v25;
  v2 = v26;
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v22, v25, v26);
  clap_builder::builder::command::Command::try_get_matches_from(v33, &dest, &v22);
  if ( __OFSUB__(0LL, *(_QWORD *)&v33[0]) )
  {
    *((_QWORD *)&v22 + 1) = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v33[0] + 1));
    *(_QWORD *)v23 = v3;
    *(_QWORD *)&v22 = 5LL;
    if ( (v2 & 0x7FFFFFFFFFFFFFELL) == 2 )
      goto LABEL_3;
LABEL_12:
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v23[48];
    v13 = v22;
    v14 = *(_OWORD *)v23;
    v15 = *(_OWORD *)&v23[16];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v23[32];
    *(_OWORD *)(a1 + 32) = v15;
    *(_OWORD *)(a1 + 16) = v14;
    *(_OWORD *)a1 = v13;
    return core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v24);
  }
  v28 = v34;
  v27[2] = v33[2];
  v27[1] = v33[1];
  v27[0] = v33[0];
  uu_tail::args::Settings::from(&dest, v27);
  v9 = v36;
  if ( (_QWORD)dest != 5LL )
  {
    *(_QWORD *)&v23[56] = v40;
    *(_OWORD *)&v23[40] = v39;
    *(_OWORD *)&v23[24] = v38;
    *(_OWORD *)&v23[8] = v37;
    v22 = dest;
    *(_QWORD *)v23 = v36;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v27);
    if ( (v2 & 0x7FFFFFFFFFFFFFELL) == 2 )
    {
      alloc::string::String::from_utf8_lossy(&dest, *(_QWORD *)(v1 + 32), *(_QWORD *)(v1 + 40));
      v10 = dest;
      v11 = v36;
      LODWORD(v27[0]) = 0;
      v12 = core::char::methods::encode_utf8_raw(v27);
      LOBYTE(v11) = core::slice::<impl [T]>::starts_with(*((_QWORD *)&v10 + 1), v11, v12);
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v10, *((_QWORD *)&v10 + 1));
      if ( !(_BYTE)v11 )
      {
LABEL_14:
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v23[48];
        v16 = v22;
        v17 = *(_OWORD *)v23;
        v18 = *(_OWORD *)&v23[16];
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v23[32];
        *(_OWORD *)(a1 + 32) = v18;
        *(_OWORD *)(a1 + 16) = v17;
        *(_OWORD *)a1 = v16;
        return core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v24);
      }
LABEL_3:
      v4 = v1 + 24;
      v5 = v1 + 48;
      v6 = 0LL;
      if ( v2 >= 3 )
        v6 = v5;
      uu_tail::args::parse_obsolete(&dest, v4, v6);
      v7 = dest;
      v8 = v36;
      if ( (_QWORD)dest == 6LL )
      {
        *(_QWORD *)(a1 + 8) = *((_QWORD *)&dest + 1);
        *(_QWORD *)(a1 + 16) = v8;
        *(_QWORD *)a1 = 5LL;
LABEL_16:
        core::ptr::drop_in_place<core::result::Result<uu_tail::args::Settings,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v22);
        return core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v24);
      }
      v32 = v40;
      v31 = v39;
      v30 = v38;
      v29 = v37;
      if ( (_DWORD)dest != 5 )
      {
        *(_QWORD *)(a1 + 72) = v32;
        v19 = v29;
        v20 = v30;
        *(_OWORD *)(a1 + 56) = v31;
        *(_OWORD *)(a1 + 40) = v20;
        *(_OWORD *)(a1 + 24) = v19;
        *(_OWORD *)a1 = v7;
        *(_QWORD *)(a1 + 16) = v8;
        goto LABEL_16;
      }
      goto LABEL_14;
    }
    goto LABEL_12;
  }
  *(_QWORD *)(a1 + 8) = *((_QWORD *)&dest + 1);
  *(_QWORD *)(a1 + 16) = v9;
  *(_QWORD *)a1 = 5LL;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v27);
  return core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v24);
}