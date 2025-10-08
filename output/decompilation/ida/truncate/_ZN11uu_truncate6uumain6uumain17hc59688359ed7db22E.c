__int64 __fastcall uu_truncate::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned int v3; // eax
  __int64 v5; // r14
  __int64 v6; // rbx
  unsigned __int8 flag; // bp
  unsigned __int8 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // r12
  unsigned __int8 v12; // r15
  unsigned __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rax
  unsigned __int8 v17; // [rsp+Fh] [rbp-679h]
  __int64 v18; // [rsp+10h] [rbp-678h]
  __int64 v19; // [rsp+18h] [rbp-670h] BYREF
  __int128 v20; // [rsp+20h] [rbp-668h]
  __int64 v21; // [rsp+30h] [rbp-658h]
  _BYTE v22[28]; // [rsp+38h] [rbp-650h] BYREF
  _BYTE v23[28]; // [rsp+54h] [rbp-634h]
  __int128 v24; // [rsp+70h] [rbp-618h]
  _QWORD v25[8]; // [rsp+80h] [rbp-608h] BYREF
  _BYTE src[24]; // [rsp+C0h] [rbp-5C8h] BYREF
  int v27; // [rsp+D8h] [rbp-5B0h]
  __int64 dest; // [rsp+390h] [rbp-2F8h] BYREF
  int v29; // [rsp+398h] [rbp-2F0h]
  __int128 v30; // [rsp+39Ch] [rbp-2ECh]
  _OWORD v31[45]; // [rsp+3ACh] [rbp-2DCh]

  uu_truncate::uu_app(src);
  clap_builder::builder::command::Command::after_help(&dest, src);
  clap_builder::builder::command::Command::try_get_matches_from(v22, &dest, a1, a2);
  if ( __OFSUB__(-*(_QWORD *)v22, 1LL) )
  {
    v3 = uu_truncate::uumain::uumain::{{closure}}(*(_QWORD *)&v22[8], &dest, v2, -*(_QWORD *)v22);
    return uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
  }
  v30 = *(_OWORD *)&v22[12];
  v31[0] = *(_OWORD *)v23;
  *(_OWORD *)((char *)v31 + 12) = *(_OWORD *)&v23[12];
  dest = *(_QWORD *)v22;
  v29 = *(_DWORD *)&v22[8];
  v5 = (__int64)*(&uu_truncate::options::ARG_FILES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, &dest, aFiles, v5);
  clap_builder::parser::error::MatchesError::unwrap(v25, aFiles, v5, src);
  if ( v25[0] )
  {
    core::iter::traits::iterator::Iterator::collect(src, v25);
    v20 = *(_OWORD *)&src[8];
    v19 = *(_QWORD *)src;
    v6 = *(_QWORD *)&src[16];
    if ( *(_QWORD *)&src[16] )
    {
      flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               &dest,
               aIoBlocks,
               *(&uu_truncate::options::IO_BLOCKS + 1));
      v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             &dest,
             aNoCreate,
             *(&uu_truncate::options::NO_CREATE + 1));
      v9 = (__int64)*(&uu_truncate::options::REFERENCE + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, &dest, aReference, v9);
      v10 = clap_builder::parser::error::MatchesError::unwrap(aReference, v9, src);
      v11 = 0x8000000000000000LL;
      v17 = flag;
      if ( v10 )
      {
        <alloc::string::String as core::clone::Clone>::clone(src, v10);
        v12 = v8;
        v18 = *(_QWORD *)&src[8];
        v13 = *(_QWORD *)src;
        v21 = *(_QWORD *)&src[16];
      }
      else
      {
        v12 = v8;
        v13 = 0x8000000000000000LL;
      }
      v15 = (__int64)*(&uu_truncate::options::SIZE + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, &dest, aSize_0, v15);
      v16 = clap_builder::parser::error::MatchesError::unwrap(aSize_0, v15, src);
      if ( v16 )
      {
        <alloc::string::String as core::clone::Clone>::clone(src, v16);
        v11 = *(_QWORD *)src;
        v24 = *(_OWORD *)&src[8];
      }
      *(_QWORD *)v22 = v13;
      *(_QWORD *)&v22[8] = v18;
      *(_QWORD *)&v22[16] = v21;
      *(_QWORD *)src = v11;
      *(_OWORD *)&src[8] = v24;
      v14 = uu_truncate::truncate(v12, v17, v22, src, v20, v6);
      goto LABEL_13;
    }
  }
  else
  {
    v19 = 0LL;
    v20 = 8uLL;
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v22, aMissingFileOpe, 20LL);
  *(_QWORD *)&src[16] = *(_QWORD *)&v22[16];
  *(_OWORD *)src = *(_OWORD *)v22;
  v27 = 1;
  v14 = alloc::boxed::Box<T>::new(src);
LABEL_13:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v19);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&dest);
  return v14;
}