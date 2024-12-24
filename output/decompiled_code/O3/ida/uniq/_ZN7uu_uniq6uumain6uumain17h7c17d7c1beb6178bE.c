__int64 __fastcall uu_uniq::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // r15
  __int64 v7; // r14
  __int128 v8; // kr10_16
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // r15
  char v13; // al
  __int64 v14; // r12
  __int64 v15; // rbx
  char v16; // [rsp+Bh] [rbp-41Dh]
  char v17; // [rsp+Ch] [rbp-41Ch]
  unsigned __int8 v18; // [rsp+Dh] [rbp-41Bh]
  char delimiter; // [rsp+Eh] [rbp-41Ah]
  char flag; // [rsp+Fh] [rbp-419h]
  __int64 v21; // [rsp+10h] [rbp-418h]
  __int64 v22; // [rsp+10h] [rbp-418h]
  __int64 v23; // [rsp+18h] [rbp-410h]
  __int64 v24; // [rsp+18h] [rbp-410h]
  _BYTE v25[40]; // [rsp+20h] [rbp-408h] BYREF
  __int128 v26; // [rsp+48h] [rbp-3E0h]
  __int128 v27; // [rsp+58h] [rbp-3D0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-3C0h]
  __int128 v29; // [rsp+70h] [rbp-3B8h]
  __int128 v30; // [rsp+80h] [rbp-3A8h]
  __int128 v31; // [rsp+90h] [rbp-398h]
  __int128 v32; // [rsp+A0h] [rbp-388h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-378h]
  __int64 v34; // [rsp+B8h] [rbp-370h]
  __int64 v35; // [rsp+C0h] [rbp-368h]
  __int64 v36; // [rsp+C8h] [rbp-360h]
  __int128 v37; // [rsp+D0h] [rbp-358h]
  __int64 v38; // [rsp+E0h] [rbp-348h]
  __int64 v39; // [rsp+F0h] [rbp-338h] BYREF
  __int128 v40; // [rsp+F8h] [rbp-330h]
  __int128 v41; // [rsp+108h] [rbp-320h]
  __int128 v42; // [rsp+118h] [rbp-310h]
  __int64 v43; // [rsp+128h] [rbp-300h]
  _BYTE v44[56]; // [rsp+130h] [rbp-2F8h] BYREF
  __int64 v45; // [rsp+168h] [rbp-2C0h]

  uu_uniq::handle_obsolete((__int64)v44, a1, a2);
  v38 = *(_QWORD *)&v44[32];
  v37 = *(_OWORD *)&v44[16];
  v2 = *(_QWORD *)&v44[8];
  v3 = *(_QWORD *)v44;
  v4 = *(_QWORD *)&v44[40];
  v5 = *(_QWORD *)&v44[48];
  uu_uniq::uu_app(v44);
  v33 = v38;
  v32 = v37;
  clap_builder::builder::command::Command::try_get_matches_from(v25, v44, &v32);
  if ( *(_QWORD *)v25 == 0x8000000000000000LL )
    return core::ops::function::FnOnce::call_once(*(_QWORD *)&v25[8]);
  v29 = *(_OWORD *)&v25[24];
  v30 = v26;
  v27 = *(_OWORD *)v25;
  v28 = *(_QWORD *)&v25[16];
  v7 = (__int64)*(&uu_uniq::ARG_FILES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v44, &v27, aFiles, v7);
  clap_builder::parser::error::MatchesError::unwrap(&v39, aFiles, v7, v44);
  if ( v39 )
  {
    v45 = v43;
    *(_OWORD *)&v44[40] = v42;
    *(_OWORD *)&v44[24] = v41;
    *(_OWORD *)&v44[8] = v40;
    *(_QWORD *)v44 = v39;
    uu_uniq::uumain::uumain::{{closure}}(v25, v44);
    *(_OWORD *)v44 = *(_OWORD *)v25;
    *(_OWORD *)&v44[16] = *(_OWORD *)&v25[16];
  }
  else
  {
    core::tuple::<impl core::default::Default for (U,T)>::default(v44);
  }
  v8 = *(_OWORD *)v44;
  v35 = *(_QWORD *)&v44[24];
  v36 = *(_QWORD *)&v44[16];
  uu_uniq::opt_parsed(
    (__int64 *)v44,
    (__int64)anon_1f49cec9ceddeb89d2d8f6d9badf249a_7_llvm_9614704736168780173,
    (__int64)*(&uu_uniq::options::SKIP_FIELDS + 1),
    (__int64)&v27);
  if ( *(_QWORD *)v44
    || (*(_QWORD *)&v31 = *(_QWORD *)&v44[8],
        v23 = *(_QWORD *)&v44[16],
        uu_uniq::opt_parsed(
          (__int64 *)v44,
          (__int64)anon_1f49cec9ceddeb89d2d8f6d9badf249a_8_llvm_9614704736168780173,
          (__int64)*(&uu_uniq::options::SKIP_CHARS + 1),
          (__int64)&v27),
        *(_QWORD *)v44) )
  {
    v6 = *(_QWORD *)&v44[8];
  }
  else
  {
    v34 = *(_QWORD *)&v44[8];
    v21 = *(_QWORD *)&v44[16];
    v17 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             &v27,
                             &anon_1f49cec9ceddeb89d2d8f6d9badf249a_6_llvm_9614704736168780173,
                             *(&uu_uniq::options::REPEATED + 1)) )
      v17 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
              &v27,
              anon_1f49cec9ceddeb89d2d8f6d9badf249a_2_llvm_9614704736168780173,
              *(&uu_uniq::options::ALL_REPEATED + 1));
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             &v27,
             anon_1f49cec9ceddeb89d2d8f6d9badf249a_9_llvm_9614704736168780173,
             *(&uu_uniq::options::UNIQUE + 1));
    v16 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                             &v27,
                             anon_1f49cec9ceddeb89d2d8f6d9badf249a_2_llvm_9614704736168780173,
                             *(&uu_uniq::options::ALL_REPEATED + 1)) )
      v16 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
              &v27,
              anon_1f49cec9ceddeb89d2d8f6d9badf249a_11_llvm_9614704736168780173,
              *(&uu_uniq::options::GROUP + 1));
    delimiter = uu_uniq::get_delimiter((__int64)&v27);
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            &v27,
            anon_1f49cec9ceddeb89d2d8f6d9badf249a_4_llvm_9614704736168780173,
            *(&uu_uniq::options::COUNT + 1));
    v10 = v23;
    if ( !(_QWORD)v31 )
      v10 = v2;
    v24 = v10;
    if ( (_QWORD)v31 )
      v3 = 1LL;
    if ( v34 )
      v4 = 1LL;
    v11 = v21;
    if ( !v34 )
      v11 = v5;
    v22 = v11;
    uu_uniq::opt_parsed(
      (__int64 *)v25,
      (__int64)anon_1f49cec9ceddeb89d2d8f6d9badf249a_3_llvm_9614704736168780173,
      (__int64)*(&uu_uniq::options::CHECK_CHARS + 1),
      (__int64)&v27);
    if ( *(_QWORD *)v25 )
    {
      v6 = *(_QWORD *)&v25[8];
    }
    else
    {
      v31 = *(_OWORD *)&v25[8];
      v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
              &v27,
              anon_1f49cec9ceddeb89d2d8f6d9badf249a_5_llvm_9614704736168780173,
              *(&uu_uniq::options::IGNORE_CASE + 1));
      v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
              &v27,
              anon_1f49cec9ceddeb89d2d8f6d9badf249a_10_llvm_9614704736168780173,
              *(&uu_uniq::options::ZERO_TERMINATED + 1));
      v44[48] = v17;
      v44[49] = flag;
      v44[50] = v16;
      v44[54] = delimiter;
      v44[51] = v18;
      *(_QWORD *)v44 = v3;
      *(_QWORD *)&v44[8] = v24;
      *(_QWORD *)&v44[16] = v4;
      *(_QWORD *)&v44[24] = v22;
      *(_OWORD *)&v44[32] = v31;
      v44[52] = v12;
      v44[53] = v13;
      if ( (v18 & (unsigned __int8)v16) != 0 )
      {
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v32);
        *(_QWORD *)&v25[16] = v33;
        *(_OWORD *)v25 = v32;
        *(_DWORD *)&v25[24] = 1;
        v6 = alloc::boxed::Box<T>::new(v25);
      }
      else
      {
        uu_uniq::open_input_file((__int64 *)v25, v8, *((__int64 *)&v8 + 1));
        v6 = *(_QWORD *)&v25[8];
        v14 = *(_QWORD *)&v25[16];
        if ( !*(_QWORD *)v25 )
        {
          uu_uniq::open_output_file((__int64 *)v25, v36, v35);
          v15 = *(_QWORD *)&v25[8];
          if ( *(_QWORD *)v25 )
          {
            core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Write>>(v6, v14);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v27);
            return v15;
          }
          v6 = uu_uniq::Uniq::print_uniq(v44, v6, v14, *(__int64 *)&v25[8], *(__int64 *)&v25[16]);
        }
      }
    }
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v27);
  return v6;
}
