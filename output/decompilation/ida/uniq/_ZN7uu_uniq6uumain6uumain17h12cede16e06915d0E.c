__int64 __fastcall uu_uniq::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r13
  __int64 v7; // r14
  __int128 v8; // kr20_16
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbp
  char v13; // al
  __int64 v14; // rbp
  __int64 v15; // rbx
  char v16; // [rsp+3h] [rbp-415h]
  char v17; // [rsp+4h] [rbp-414h]
  unsigned __int8 v18; // [rsp+5h] [rbp-413h]
  char delimiter; // [rsp+6h] [rbp-412h]
  char flag; // [rsp+7h] [rbp-411h]
  __int64 v21; // [rsp+8h] [rbp-410h]
  __int64 v22; // [rsp+8h] [rbp-410h]
  __int64 v23; // [rsp+10h] [rbp-408h]
  char v24; // [rsp+10h] [rbp-408h]
  __int64 v25; // [rsp+18h] [rbp-400h]
  __int64 v26; // [rsp+18h] [rbp-400h]
  __int128 v27; // [rsp+20h] [rbp-3F8h] BYREF
  _QWORD v28[5]; // [rsp+30h] [rbp-3E8h]
  __int128 v29; // [rsp+58h] [rbp-3C0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-3B0h]
  __int128 v31; // [rsp+70h] [rbp-3A8h]
  __int128 v32; // [rsp+80h] [rbp-398h]
  __int128 v33; // [rsp+90h] [rbp-388h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-378h]
  __int64 v35; // [rsp+A8h] [rbp-370h]
  __int64 v36; // [rsp+B0h] [rbp-368h]
  __int64 v37; // [rsp+B8h] [rbp-360h]
  __int128 v38; // [rsp+C0h] [rbp-358h]
  __int64 v39; // [rsp+D0h] [rbp-348h]
  __int64 v40; // [rsp+E0h] [rbp-338h] BYREF
  __int128 v41; // [rsp+E8h] [rbp-330h]
  __int128 v42; // [rsp+F8h] [rbp-320h]
  __int128 v43; // [rsp+108h] [rbp-310h]
  __int64 v44; // [rsp+118h] [rbp-300h]
  _BYTE v45[40]; // [rsp+120h] [rbp-2F8h] BYREF
  __int128 v46; // [rsp+148h] [rbp-2D0h]
  __int64 v47; // [rsp+158h] [rbp-2C0h]

  uu_uniq::handle_obsolete((__int64)v45, a1, a2);
  v39 = *(_QWORD *)&v45[32];
  v38 = *(_OWORD *)&v45[16];
  v2 = *(_QWORD *)&v45[8];
  v3 = *(_QWORD *)v45;
  v5 = *((_QWORD *)&v46 + 1);
  v4 = v46;
  uu_uniq::uu_app(v45);
  v34 = v39;
  v33 = v38;
  clap_builder::builder::command::Command::try_get_matches_from(&v27, v45, &v33);
  if ( (_QWORD)v27 == 0x8000000000000000LL )
    return core::ops::function::FnOnce::call_once(*((_QWORD *)&v27 + 1));
  v31 = *(_OWORD *)&v28[1];
  v32 = *(_OWORD *)&v28[3];
  v29 = v27;
  v30 = v28[0];
  v7 = (__int64)*(&uu_uniq::ARG_FILES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v45, &v29, aFiles, v7);
  clap_builder::parser::error::MatchesError::unwrap(&v40, aFiles, v7, v45);
  if ( v40 )
  {
    v47 = v44;
    v46 = v43;
    *(_OWORD *)&v45[24] = v42;
    *(_OWORD *)&v45[8] = v41;
    *(_QWORD *)v45 = v40;
    uu_uniq::uumain::uumain::{{closure}}(&v27, v45);
    *(_OWORD *)v45 = v27;
    *(_OWORD *)&v45[16] = *(_OWORD *)v28;
  }
  else
  {
    core::tuple::<impl core::default::Default for (U,T)>::default(v45);
  }
  v8 = *(_OWORD *)v45;
  v36 = *(_QWORD *)&v45[24];
  v37 = *(_QWORD *)&v45[16];
  uu_uniq::opt_parsed(
    (__int64 *)v45,
    (__int64)anon_1708af35b9ec7e9011d0766e7edd8c0d_15_llvm_2960996753993589651,
    (__int64)*(&uu_uniq::options::SKIP_FIELDS + 1),
    (__int64)&v29);
  if ( *(_QWORD *)v45
    || (v23 = *(_QWORD *)&v45[8],
        v25 = *(_QWORD *)&v45[16],
        uu_uniq::opt_parsed(
          (__int64 *)v45,
          (__int64)anon_1708af35b9ec7e9011d0766e7edd8c0d_16_llvm_2960996753993589651,
          (__int64)*(&uu_uniq::options::SKIP_CHARS + 1),
          (__int64)&v29),
        *(_QWORD *)v45) )
  {
    v6 = *(_QWORD *)&v45[8];
  }
  else
  {
    v35 = *(_QWORD *)&v45[8];
    v21 = *(_QWORD *)&v45[16];
    v17 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             &v29,
                             &anon_1708af35b9ec7e9011d0766e7edd8c0d_14_llvm_2960996753993589651,
                             *(&uu_uniq::options::REPEATED + 1)) )
      v17 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
              &v29,
              anon_1708af35b9ec7e9011d0766e7edd8c0d_10_llvm_2960996753993589651,
              *(&uu_uniq::options::ALL_REPEATED + 1));
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             &v29,
             anon_1708af35b9ec7e9011d0766e7edd8c0d_17_llvm_2960996753993589651,
             *(&uu_uniq::options::UNIQUE + 1));
    v16 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                             &v29,
                             anon_1708af35b9ec7e9011d0766e7edd8c0d_10_llvm_2960996753993589651,
                             *(&uu_uniq::options::ALL_REPEATED + 1)) )
      v16 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
              &v29,
              anon_1708af35b9ec7e9011d0766e7edd8c0d_19_llvm_2960996753993589651,
              *(&uu_uniq::options::GROUP + 1));
    delimiter = uu_uniq::get_delimiter((__int64)&v29);
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            &v29,
            anon_1708af35b9ec7e9011d0766e7edd8c0d_12_llvm_2960996753993589651,
            *(&uu_uniq::options::COUNT + 1));
    if ( v23 )
      v3 = 1LL;
    v10 = v25;
    if ( !v23 )
      v10 = v2;
    v26 = v10;
    if ( v35 )
      v4 = 1LL;
    v11 = v21;
    if ( !v35 )
      v11 = v5;
    v22 = v11;
    uu_uniq::opt_parsed(
      (__int64 *)&v27,
      (__int64)anon_1708af35b9ec7e9011d0766e7edd8c0d_11_llvm_2960996753993589651,
      (__int64)*(&uu_uniq::options::CHECK_CHARS + 1),
      (__int64)&v29);
    v6 = *((_QWORD *)&v27 + 1);
    v12 = v28[0];
    if ( !(_QWORD)v27 )
    {
      v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
              &v29,
              anon_1708af35b9ec7e9011d0766e7edd8c0d_13_llvm_2960996753993589651,
              *(&uu_uniq::options::IGNORE_CASE + 1));
      v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
              &v29,
              anon_1708af35b9ec7e9011d0766e7edd8c0d_18_llvm_2960996753993589651,
              *(&uu_uniq::options::ZERO_TERMINATED + 1));
      BYTE8(v46) = v17;
      BYTE9(v46) = flag;
      BYTE10(v46) = v16;
      BYTE14(v46) = delimiter;
      BYTE11(v46) = v18;
      *(_QWORD *)v45 = v3;
      *(_QWORD *)&v45[8] = v26;
      *(_QWORD *)&v45[16] = v4;
      *(_QWORD *)&v45[24] = v22;
      *(_QWORD *)&v45[32] = v6;
      *(_QWORD *)&v46 = v12;
      BYTE12(v46) = v24;
      BYTE13(v46) = v13;
      if ( (v18 & (unsigned __int8)v16) != 0 )
      {
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v33);
        v28[0] = v34;
        v27 = v33;
        LODWORD(v28[1]) = 1;
        v6 = alloc::boxed::Box<T>::new(&v27);
      }
      else
      {
        uu_uniq::open_input_file((__int64 *)&v27, v8, *((__int64 *)&v8 + 1));
        v6 = *((_QWORD *)&v27 + 1);
        v14 = v28[0];
        if ( !(_QWORD)v27 )
        {
          uu_uniq::open_output_file((__int64 *)&v27, v37, v36);
          v15 = *((_QWORD *)&v27 + 1);
          if ( (_QWORD)v27 )
          {
            core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Write>>(v6, v14);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v29);
            return v15;
          }
          v6 = uu_uniq::Uniq::print_uniq(v45, v6, v14, *((__int64 *)&v27 + 1), v28[0]);
        }
      }
    }
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v29);
  return v6;
}
