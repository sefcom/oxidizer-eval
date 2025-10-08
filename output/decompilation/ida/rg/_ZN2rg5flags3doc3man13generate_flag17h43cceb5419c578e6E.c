__int64 __fastcall rg::flags::doc::man::generate_flag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // dl
  unsigned __int8 v5; // al
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al
  int v10; // eax
  int v11; // edx
  unsigned __int8 v12; // al
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int8 v15; // al
  unsigned __int8 v16; // al
  unsigned __int8 v17; // al
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int8 v21; // al
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int8 v24; // al
  unsigned __int8 v25; // al
  unsigned __int8 v26; // al
  char **v28; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+10h] [rbp-B8h]
  __int64 **v30; // [rsp+18h] [rbp-B0h]
  __int128 v31; // [rsp+20h] [rbp-A8h]
  __int64 *v32; // [rsp+38h] [rbp-90h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+40h] [rbp-88h]
  __int64 v34; // [rsp+50h] [rbp-78h] BYREF
  __int64 v35; // [rsp+58h] [rbp-70h]
  __int64 v36; // [rsp+60h] [rbp-68h]
  __int64 **v37; // [rsp+68h] [rbp-60h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+70h] [rbp-58h]
  _QWORD v39[2]; // [rsp+78h] [rbp-50h] BYREF
  _DWORD v40[16]; // [rsp+88h] [rbp-40h] BYREF

  if ( ((*(__int64 (**)(void))(a2 + 40))() & 1) != 0 )
  {
    v40[0] = v4;
    v32 = (__int64 *)v40;
    v33 = <char as core::fmt::Display>::fmt;
    v28 = &off_3EA770;
    v29 = 2LL;
    v30 = &v32;
    v31 = 1uLL;
    v5 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v28);
    core::result::Result<T,E>::unwrap(v5, &off_3EA850);
    v6 = (*(__int64 (__fastcall **)(__int64))(a2 + 72))(a1);
    if ( v6 )
    {
      v34 = v6;
      v35 = v7;
      v32 = &v34;
      v33 = <&T as core::fmt::Display>::fmt;
      v28 = &off_3EA790;
      v29 = 2LL;
      v30 = &v32;
      v31 = 1uLL;
      v8 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v28);
      core::result::Result<T,E>::unwrap(v8, &off_3EA868);
    }
    v28 = &off_3EA2B0;
    v29 = 1LL;
    v30 = (__int64 **)&byte_8;
    v31 = 0LL;
    v9 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v28);
    core::result::Result<T,E>::unwrap(v9, &off_3EA880);
  }
  v10 = (*(__int64 (__fastcall **)(__int64))(a2 + 48))(a1);
  alloc::str::<impl str>::replace((unsigned int)v40, v10, v11, (unsigned int)asc_69BA0, 1, (unsigned int)asc_83D88, 2LL);
  v32 = (__int64 *)v40;
  v33 = <alloc::string::String as core::fmt::Display>::fmt;
  v28 = &off_3EA7B0;
  v29 = 2LL;
  v30 = &v32;
  v31 = 1uLL;
  v12 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v28);
  core::result::Result<T,E>::unwrap(v12, &off_3EA898);
  v13 = (*(__int64 (__fastcall **)(__int64))(a2 + 72))(a1);
  if ( v13 )
  {
    v34 = v13;
    v35 = v14;
    v32 = &v34;
    v33 = <&T as core::fmt::Display>::fmt;
    v28 = &off_3EA7D0;
    v29 = 2LL;
    v30 = &v32;
    v31 = 1uLL;
    v15 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v28);
    core::result::Result<T,E>::unwrap(v15, &off_3EA8B0);
  }
  v28 = (char **)&off_3EA358;
  v29 = 1LL;
  v30 = (__int64 **)&byte_8;
  v31 = 0LL;
  v16 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v28);
  core::result::Result<T,E>::unwrap(v16, &off_3EA8C8);
  v28 = &off_3EA7F0;
  v29 = 1LL;
  v30 = (__int64 **)&byte_8;
  v31 = 0LL;
  v17 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v28);
  core::result::Result<T,E>::unwrap(v17, &off_3EA8E0);
  v18 = (*(__int64 (__fastcall **)(__int64))(a2 + 96))(a1);
  v20 = core::str::<impl str>::trim_matches(v18, v19);
  rg::flags::doc::render_custom_markup(&v34, v20);
  rg::flags::doc::render_custom_markup(&v32, v35, v36);
  v37 = &v32;
  v38 = <alloc::string::String as core::fmt::Display>::fmt;
  v28 = (char **)&unk_3EA800;
  v29 = 2LL;
  v30 = (__int64 **)&v37;
  v31 = 1uLL;
  v21 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v28);
  core::result::Result<T,E>::unwrap(v21, &off_3EA8F8);
  v22 = (*(__int64 (__fastcall **)(__int64))(a2 + 64))(a1);
  if ( v22 )
  {
    v39[0] = v22;
    v39[1] = v23;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(a2 + 32))(a1) )
    {
      v28 = &off_3EA748;
      v29 = 1LL;
      v30 = (__int64 **)&byte_8;
      v31 = 0LL;
      v24 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v28);
      core::result::Result<T,E>::unwrap(v24, &off_3EA910);
      v37 = (__int64 **)v39;
      v38 = <&T as core::fmt::Display>::fmt;
      v28 = &off_3EA820;
      v29 = 2LL;
      v30 = (__int64 **)&v37;
      v31 = 1uLL;
      v25 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v28);
      core::result::Result<T,E>::unwrap(v25, &off_3EA928);
    }
  }
  v28 = &off_3EA840;
  v29 = 1LL;
  v30 = (__int64 **)&byte_8;
  v31 = 0LL;
  v26 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v28);
  core::result::Result<T,E>::unwrap(v26, &off_3EA940);
  core::ptr::drop_in_place<alloc::string::String>(&v32);
  core::ptr::drop_in_place<alloc::string::String>(&v34);
  return core::ptr::drop_in_place<alloc::string::String>(v40);
}