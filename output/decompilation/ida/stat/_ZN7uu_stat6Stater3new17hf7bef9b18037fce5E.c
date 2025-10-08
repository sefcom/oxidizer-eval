__int64 __fastcall uu_stat::Stater::new(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rcx
  char v7; // r15
  unsigned __int8 flag; // r13
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // r13
  char v13; // al
  bool v14; // zf
  unsigned __int8 v15; // [rsp+Fh] [rbp-149h]
  __int128 v16; // [rsp+10h] [rbp-148h] BYREF
  __int64 v17; // [rsp+20h] [rbp-138h]
  __int64 v18; // [rsp+28h] [rbp-130h]
  __int64 v19; // [rsp+30h] [rbp-128h]
  __int64 v20; // [rsp+38h] [rbp-120h]
  __int64 v21; // [rsp+40h] [rbp-118h]
  unsigned __int64 v22; // [rsp+48h] [rbp-110h]
  _BYTE v23[24]; // [rsp+50h] [rbp-108h] BYREF
  int v24; // [rsp+68h] [rbp-F0h]
  _BYTE v25[24]; // [rsp+98h] [rbp-C0h] BYREF
  __int128 v26; // [rsp+B0h] [rbp-A8h]
  __int64 v27; // [rsp+C0h] [rbp-98h]
  __int128 v28; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v29; // [rsp+E0h] [rbp-78h]
  _QWORD v30[14]; // [rsp+E8h] [rbp-70h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v23);
  clap_builder::parser::error::MatchesError::unwrap(v30, v23);
  if ( v30[0] )
  {
    core::iter::traits::iterator::Iterator::collect(v23, v30);
    v16 = *(_OWORD *)&v23[8];
    if ( *(_QWORD *)v23 != 0x8000000000000000LL )
    {
      *(_OWORD *)&v25[8] = v16;
      *(_QWORD *)v25 = *(_QWORD *)v23;
      if ( !*((_QWORD *)&v16 + 1) )
        goto LABEL_4;
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aPrintf, 6LL) )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v23, a2, aPrintf);
        v3 = clap_builder::parser::error::MatchesError::unwrap(aPrintf, v23);
        if ( !v3 )
          core::option::expect_failed(aInvalidFormatS, 21LL, &off_119F80);
        v4 = *(_QWORD *)(v3 + 8);
        v22 = *(_QWORD *)(v3 + 16);
      }
      else
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v23, a2, &unk_1D654);
        v5 = clap_builder::parser::error::MatchesError::unwrap(&unk_1D654, v23);
        if ( v5 )
        {
          v6 = *(_QWORD *)(v5 + 8);
          v5 = *(_QWORD *)(v5 + 16);
        }
        else
        {
          v6 = 0LL;
        }
        if ( !v6 )
          v5 = 0LL;
        v22 = v5;
        v4 = 1LL;
        if ( v6 )
          v4 = v6;
      }
      v7 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a2, aPrintf, 6LL);
      flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aTerse, 5LL);
      v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aFileSystem, 11LL);
      if ( v22 )
      {
        uu_stat::Stater::generate_tokens(v23, v4, v22, v7);
        v9 = *(_QWORD *)&v23[16];
        v19 = *(_QWORD *)v23;
        if ( *(_QWORD *)v23 == 0x8000000000000000LL )
        {
          *(_QWORD *)(a1 + 8) = *(_QWORD *)&v23[8];
          *(_QWORD *)(a1 + 16) = v9;
          goto LABEL_5;
        }
        v18 = *(_QWORD *)&v23[8];
      }
      else
      {
        uu_stat::Stater::default_format(v23, v15, flag, 0LL);
        uu_stat::Stater::generate_tokens(&v16, *(__int64 *)&v23[8], *(unsigned __int64 *)&v23[16], v7);
        v9 = v17;
        v19 = v16;
        if ( (_QWORD)v16 == 0x8000000000000000LL )
        {
          *(_QWORD *)(a1 + 8) = *((_QWORD *)&v16 + 1);
          *(_QWORD *)(a1 + 16) = v9;
          *(_QWORD *)a1 = 0x8000000000000000LL;
          core::ptr::drop_in_place<alloc::string::String>(v23);
          goto LABEL_6;
        }
        v18 = *((_QWORD *)&v16 + 1);
        core::ptr::drop_in_place<alloc::string::String>(v23);
      }
      uu_stat::Stater::default_format(v23, v15, flag, 1LL);
      uu_stat::Stater::generate_tokens(&v16, *(__int64 *)&v23[8], *(unsigned __int64 *)&v23[16], v7);
      v10 = v17;
      v21 = v16;
      if ( (_QWORD)v16 == 0x8000000000000000LL )
      {
        *(_QWORD *)(a1 + 8) = *((_QWORD *)&v16 + 1);
        *(_QWORD *)(a1 + 16) = v10;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        core::ptr::drop_in_place<alloc::string::String>(v23);
LABEL_28:
        core::ptr::drop_in_place<alloc::vec::Vec<uu_stat::Token>>(v19, v18);
        goto LABEL_6;
      }
      v20 = *((_QWORD *)&v16 + 1);
      core::ptr::drop_in_place<alloc::string::String>(v23);
      if ( v15 )
      {
        *(_QWORD *)&v26 = 0x8000000000000000LL;
      }
      else
      {
        uucore::features::fsext::read_fs_list(&v28);
        if ( (_QWORD)v28 == 0x8000000000000000LL )
        {
          *(_QWORD *)(a1 + 8) = uu_stat::Stater::new::{{closure}}(*((_QWORD *)&v28 + 1), v29);
          *(_QWORD *)(a1 + 16) = &off_119A38;
          *(_QWORD *)a1 = 0x8000000000000000LL;
          core::ptr::drop_in_place<alloc::vec::Vec<uu_stat::Token>>(v21, v20);
          goto LABEL_28;
        }
        *(_OWORD *)v23 = v28;
        *(_QWORD *)&v23[16] = v29;
        core::iter::traits::iterator::Iterator::collect(&v16, *((_QWORD *)&v28 + 1), *((_QWORD *)&v28 + 1) + 152 * v29);
        core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::fsext::MountInfo>>(v23);
        v11 = *((_QWORD *)&v16 + 1);
        v12 = v17;
        alloc::slice::stable_sort(*((_QWORD *)&v16 + 1), v17);
        core::slice::<impl [T]>::reverse(v11, v12);
        v27 = v17;
        v26 = v16;
      }
      v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aDereference, 11LL);
      v14 = v22 == 0;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)&v25[16];
      *(_OWORD *)a1 = *(_OWORD *)v25;
      *(_OWORD *)(a1 + 72) = v26;
      *(_QWORD *)(a1 + 88) = v27;
      *(_QWORD *)(a1 + 24) = v19;
      *(_QWORD *)(a1 + 32) = v18;
      *(_QWORD *)(a1 + 40) = v9;
      *(_QWORD *)(a1 + 48) = v21;
      *(_QWORD *)(a1 + 56) = v20;
      *(_QWORD *)(a1 + 64) = v10;
      *(_BYTE *)(a1 + 96) = v13;
      *(_BYTE *)(a1 + 97) = v15;
      *(_BYTE *)(a1 + 98) = !v14;
      return a1;
    }
  }
  *(_QWORD *)v25 = 0LL;
  *(_QWORD *)&v25[8] = 8LL;
  *(_QWORD *)&v25[16] = 0LL;
LABEL_4:
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v16, aMissingOperand, 55LL);
  *(_QWORD *)&v23[16] = v17;
  *(_OWORD *)v23 = v16;
  v24 = 1;
  *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(v23);
  *(_QWORD *)(a1 + 16) = &off_119A38;
LABEL_5:
  *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_6:
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v25);
  return a1;
}