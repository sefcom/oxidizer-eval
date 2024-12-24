__int64 __fastcall uu_truncate::uumain::uumain(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r13
  unsigned int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // r14
  unsigned __int8 flag; // bl
  char v7; // bp
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  __int128 v13; // [rsp+0h] [rbp-668h] BYREF
  __int64 v14; // [rsp+10h] [rbp-658h]
  _BYTE v15[28]; // [rsp+20h] [rbp-648h] BYREF
  _BYTE v16[28]; // [rsp+3Ch] [rbp-62Ch]
  __int64 v17; // [rsp+58h] [rbp-610h] BYREF
  int v18; // [rsp+60h] [rbp-608h]
  __int128 v19; // [rsp+64h] [rbp-604h]
  _BYTE v20[28]; // [rsp+74h] [rbp-5F4h]
  __int128 v21; // [rsp+90h] [rbp-5D8h]
  __m256i src; // [rsp+A0h] [rbp-5C8h] BYREF
  __int128 v23; // [rsp+C0h] [rbp-5A8h]
  __int128 v24; // [rsp+D0h] [rbp-598h]
  __m256i dest; // [rsp+370h] [rbp-2F8h] BYREF
  __int128 v26; // [rsp+390h] [rbp-2D8h]
  __int128 v27; // [rsp+3A0h] [rbp-2C8h]

  v2 = 0x8000000000000000LL;
  uu_truncate::uu_app(&src);
  clap_builder::builder::command::Command::after_help(&dest, &src);
  clap_builder::builder::command::Command::try_get_matches_from(v15, &dest, a1, a2);
  if ( *(_QWORD *)v15 != 0x8000000000000000LL )
  {
    v19 = *(_OWORD *)&v15[12];
    *(_OWORD *)v20 = *(_OWORD *)v16;
    *(_OWORD *)&v20[12] = *(_OWORD *)&v16[12];
    v17 = *(_QWORD *)v15;
    v18 = *(_DWORD *)&v15[8];
    v5 = (__int64)*(&uu_truncate::options::ARG_FILES + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
      &src,
      &v17,
      anon_f677abd6b887a8662985b0b82bd88502_22_llvm_17520785404585662071,
      v5);
    clap_builder::parser::error::MatchesError::unwrap(
      &dest,
      anon_f677abd6b887a8662985b0b82bd88502_22_llvm_17520785404585662071,
      v5,
      &src);
    if ( dest.m256i_i64[0] )
    {
      v24 = v27;
      v23 = v26;
      src = dest;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v15, &src);
      v13 = *(_OWORD *)v15;
      v14 = *(_QWORD *)&v15[16];
      if ( *(_QWORD *)&v15[16] )
      {
        flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                 &v17,
                 anon_f677abd6b887a8662985b0b82bd88502_18_llvm_17520785404585662071,
                 *(&uu_truncate::options::IO_BLOCKS + 1));
        v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               &v17,
               anon_f677abd6b887a8662985b0b82bd88502_19_llvm_17520785404585662071,
               *(&uu_truncate::options::NO_CREATE + 1));
        v8 = (__int64)*(&uu_truncate::options::REFERENCE + 1);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
          &src,
          &v17,
          anon_f677abd6b887a8662985b0b82bd88502_20_llvm_17520785404585662071,
          v8);
        v9 = clap_builder::parser::error::MatchesError::unwrap(
               anon_f677abd6b887a8662985b0b82bd88502_20_llvm_17520785404585662071,
               v8,
               &src);
        if ( v9 )
        {
          core::ops::function::FnOnce::call_once(&src, v9);
          *(_QWORD *)&v15[16] = src.m256i_i64[2];
          *(_OWORD *)v15 = *(_OWORD *)src.m256i_i8;
        }
        else
        {
          *(_QWORD *)v15 = 0x8000000000000000LL;
        }
        v10 = (__int64)*(&uu_truncate::options::SIZE + 1);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
          &src,
          &v17,
          anon_f677abd6b887a8662985b0b82bd88502_21_llvm_17520785404585662071,
          v10);
        v11 = clap_builder::parser::error::MatchesError::unwrap(
                anon_f677abd6b887a8662985b0b82bd88502_21_llvm_17520785404585662071,
                v10,
                &src);
        if ( v11 )
        {
          core::ops::function::FnOnce::call_once(&src, v11);
          v2 = src.m256i_i64[0];
          v21 = *(_OWORD *)&src.m256i_u64[1];
        }
        dest.m256i_i64[2] = *(_QWORD *)&v15[16];
        *(_OWORD *)dest.m256i_i8 = *(_OWORD *)v15;
        src.m256i_i64[0] = v2;
        *(_OWORD *)&src.m256i_u64[1] = v21;
        v4 = uu_truncate::truncate(v7, flag, (__int128 *)dest.m256i_i8, src.m256i_i64, *((__int64 *)&v13 + 1), v14);
        goto LABEL_13;
      }
    }
    else
    {
      *(_QWORD *)&v13 = 0LL;
      *((_QWORD *)&v13 + 1) = 8LL;
      v14 = 0LL;
    }
    <T as alloc::slice::hack::ConvertVec>::to_vec(&dest);
    src.m256i_i64[2] = dest.m256i_i64[2];
    *(_OWORD *)src.m256i_i8 = *(_OWORD *)dest.m256i_i8;
    src.m256i_i32[6] = 1;
    v4 = alloc::boxed::Box<T>::new(&src);
LABEL_13:
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v13);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v17);
    return v4;
  }
  v3 = uu_truncate::uumain::uumain::{{closure}}(*(_QWORD *)&v15[8]);
  return uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
}
