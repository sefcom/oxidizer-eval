__int64 __fastcall uu_vdir::uumain::uumain(__int64 a1, __int64 a2)
{
  struct _Unwind_Exception *v2; // rdx
  int v3; // r8d
  int v4; // r9d
  char v6; // [rsp+2Ah] [rbp-7EEh]
  char v7; // [rsp+2Dh] [rbp-7EBh]
  char flag; // [rsp+2Eh] [rbp-7EAh]
  __int64 v9; // [rsp+40h] [rbp-7D8h]
  int v10[178]; // [rsp+50h] [rbp-7C8h] BYREF
  int v11[27]; // [rsp+318h] [rbp-500h] BYREF
  char v12; // [rsp+386h] [rbp-492h]
  char v13; // [rsp+387h] [rbp-491h]
  int v14[61]; // [rsp+388h] [rbp-490h] BYREF
  __int16 v15; // [rsp+47Dh] [rbp-39Bh]
  char v16; // [rsp+47Fh] [rbp-399h]
  char v17; // [rsp+480h] [rbp-398h]
  _QWORD src[32]; // [rsp+488h] [rbp-390h] BYREF
  _BYTE v19[256]; // [rsp+588h] [rbp-290h] BYREF
  _BYTE dest[259]; // [rsp+688h] [rbp-190h] BYREF
  __int16 v21; // [rsp+78Bh] [rbp-8Dh]
  char v22; // [rsp+78Dh] [rbp-8Bh]
  char v23; // [rsp+78Eh] [rbp-8Ah]
  char v24; // [rsp+78Fh] [rbp-89h]
  _BYTE v25[24]; // [rsp+790h] [rbp-88h] BYREF
  _BYTE v26[24]; // [rsp+7A8h] [rbp-70h] BYREF
  _BYTE v27[71]; // [rsp+7C0h] [rbp-58h] BYREF
  char v28; // [rsp+807h] [rbp-11h]

  v28 = 1;
  uu_vdir::uu_app(v10);
  v28 = 0;
  clap_builder::builder::command::Command::get_matches_from(v11, v10, a1, a2);
  v12 = 0;
  v13 = 0;
  if ( (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
          v11,
          anon_73fe86e94af803e79a7413c597bf8ca8_30_llvm_2470886751594806832,
          *(&uu_ls::options::QUOTING_STYLE + 1)) & 1) == 0 )
  {
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             v11,
             anon_7c1e270846ccb77ed0002241600464f7_23_llvm_18082322705867691778,
             *(&uu_ls::options::quoting::C + 1),
             &off_1F7F68);
    if ( (flag & 1) == 0
      && (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v11,
            anon_7c1e270846ccb77ed0002241600464f7_21_llvm_18082322705867691778,
            *(&uu_ls::options::quoting::ESCAPE + 1),
            &off_1F7F80) & 1) == 0
      && (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v11,
            anon_7c1e270846ccb77ed0002241600464f7_22_llvm_18082322705867691778,
            *(&uu_ls::options::quoting::LITERAL + 1),
            &off_1F7F98) & 1) == 0 )
    {
      v12 = 1;
    }
  }
  v7 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
         v11,
         anon_73fe86e94af803e79a7413c597bf8ca8_36_llvm_2470886751594806832,
         *(&uu_ls::options::FORMAT + 1));
  if ( (v7 & 1) == 0 )
  {
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v11,
           anon_d13c0a923ac77d86b5cd3d5212361a5f_62_llvm_13257680528908953851,
           uu_ls::options::format::ACROSS[1],
           &off_1F7FB0);
    if ( (v6 & 1) == 0
      && (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v11,
            anon_d13c0a923ac77d86b5cd3d5212361a5f_61_llvm_13257680528908953851,
            uu_ls::options::format::COLUMNS[1],
            &off_1F7FC8) & 1) == 0
      && (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v11,
            anon_d13c0a923ac77d86b5cd3d5212361a5f_64_llvm_13257680528908953851,
            uu_ls::options::format::COMMAS[1],
            &off_1F7FE0) & 1) == 0
      && (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v11,
            anon_d13c0a923ac77d86b5cd3d5212361a5f_60_llvm_13257680528908953851,
            *(&uu_ls::options::format::LONG + 1),
            &off_1F7FF8) & 1) == 0
      && (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v11,
            anon_d13c0a923ac77d86b5cd3d5212361a5f_66_llvm_13257680528908953851,
            uu_ls::options::format::LONG_NO_GROUP[1],
            &off_1F8010) & 1) == 0
      && (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v11,
            anon_d13c0a923ac77d86b5cd3d5212361a5f_65_llvm_13257680528908953851,
            uu_ls::options::format::LONG_NO_OWNER[1],
            &off_1F8028) & 1) == 0
      && (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v11,
            anon_d13c0a923ac77d86b5cd3d5212361a5f_67_llvm_13257680528908953851,
            *(&uu_ls::options::format::LONG_NUMERIC_UID_GID + 1),
            &off_1F8040) & 1) == 0
      && (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v11,
            anon_d13c0a923ac77d86b5cd3d5212361a5f_59_llvm_13257680528908953851,
            uu_ls::options::format::ONE_LINE[1],
            &off_1F8058) & 1) == 0 )
    {
      v13 = 1;
    }
  }
  uu_ls::Config::from(v19, v11);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(src, v19);
  if ( src[0] == 0x8000000000000000LL )
  {
    v9 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           src[1],
           src[2],
           &off_1F80A0);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v11);
  }
  else
  {
    memcpy(dest, src, 0x100uLL);
    memcpy(v14, dest, 0x100uLL);
    if ( (v12 & 1) != 0 )
    {
      v23 = 0;
      LOBYTE(v21) = 0;
      v22 = 2;
      v15 = v21;
      v16 = 2;
    }
    if ( (v13 & 1) != 0 )
    {
      v24 = 1;
      v17 = 1;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
      v27,
      v11,
      anon_73fe86e94af803e79a7413c597bf8ca8_45_llvm_2470886751594806832,
      *(&uu_ls::options::PATHS + 1),
      &off_1F8070);
    core::option::Option<T>::map(v26, v27);
    core::option::Option<T>::unwrap_or_else((unsigned int)v25, (unsigned int)v26);
    v9 = uu_ls::list(v25, v14);
    core::ptr::drop_in_place<uu_ls::Config>((int)v14, (int)v14, (int)v2, v9, v3, v4, v2, v9);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v11);
  }
  return v9;
}
