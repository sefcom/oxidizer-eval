// bad sp value at call has been detected, the output may be wrong!
__int64 uu_cut::uumain::uumain()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  unsigned __int8 flag; // bp
  __int64 v4; // rbx
  __int8 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rax
  _BYTE *v10; // rsi
  void (__fastcall __noreturn *v11)(); // rax
  const char *v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rdx
  char v16; // [rsp+Fh] [rbp-4B9h]
  __m256i v17; // [rsp+10h] [rbp-4B8h] BYREF
  __int128 v18; // [rsp+30h] [rbp-498h]
  __m256i v19; // [rsp+40h] [rbp-488h]
  __m256i v20; // [rsp+60h] [rbp-468h] BYREF
  __int128 v21; // [rsp+80h] [rbp-448h]
  __m256i v22; // [rsp+90h] [rbp-438h]
  __int128 v23; // [rsp+B8h] [rbp-410h]
  __m256i v24; // [rsp+C8h] [rbp-400h] BYREF
  __int128 v25; // [rsp+E8h] [rbp-3E0h]
  __int64 v26; // [rsp+F8h] [rbp-3D0h]
  __int64 v27; // [rsp+100h] [rbp-3C8h]
  __int128 v28; // [rsp+108h] [rbp-3C0h] BYREF
  __int64 v29; // [rsp+118h] [rbp-3B0h]
  __int128 v30; // [rsp+120h] [rbp-3A8h] BYREF
  __int128 v31; // [rsp+130h] [rbp-398h]
  __int128 v32; // [rsp+140h] [rbp-388h]
  _BYTE *v33; // [rsp+150h] [rbp-378h]
  __int64 v34; // [rsp+158h] [rbp-370h]
  _BYTE v35[24]; // [rsp+160h] [rbp-368h] BYREF
  _QWORD v36[2]; // [rsp+178h] [rbp-350h] BYREF
  __int128 v37; // [rsp+188h] [rbp-340h]
  __int64 v38; // [rsp+198h] [rbp-330h]
  __int128 v39; // [rsp+1A0h] [rbp-328h]
  __int64 v40; // [rsp+1B0h] [rbp-318h]
  __int128 v41; // [rsp+1B8h] [rbp-310h]
  __int64 v42; // [rsp+1C8h] [rbp-300h]
  _BYTE dest[48]; // [rsp+1D0h] [rbp-2F8h] BYREF
  __m256i v44; // [rsp+200h] [rbp-2C8h]

  v0 = core::iter::traits::iterator::Iterator::map();
  core::iter::traits::iterator::Iterator::collect(v35, v0);
  uu_cut::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v20, dest, v35);
  if ( __OFSUB__(-v20.m256i_i64[0], 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v20.m256i_i64[1],
             dest,
             v1,
             -v20.m256i_i64[0]);
  v26 = v22.m256i_i64[0];
  v25 = v21;
  v24 = v20;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, aComplement, 10LL);
  v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, aOnlyDelimited, 14LL);
  uu_cut::get_delimiters(dest, &v24);
  v4 = *(_QWORD *)&dest[8];
  if ( *(_DWORD *)dest != 1 )
  {
    v23 = *(_OWORD *)&dest[24];
    v27 = *(_QWORD *)&dest[16];
    v5 = 10;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v24, aZeroTerminated, 15LL) )
      v5 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v30, &v24, aBytes_0, 5LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v17, &v24, aCharacters, 10LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v20, &v24, aFields, 6LL);
    *(_QWORD *)&dest[16] = v31;
    *(_OWORD *)dest = v30;
    *(_OWORD *)&dest[24] = *(_OWORD *)v17.m256i_i8;
    *(_QWORD *)&dest[40] = v17.m256i_i64[2];
    *(_OWORD *)v44.m256i_i8 = *(_OWORD *)v20.m256i_i8;
    v44.m256i_i64[2] = v20.m256i_i64[2];
    v37 = v30;
    v41 = *(_OWORD *)v20.m256i_i8;
    v42 = v20.m256i_i64[2];
    v38 = v31;
    v39 = *(_OWORD *)v17.m256i_i8;
    v40 = v17.m256i_i64[2];
    v36[0] = 0LL;
    v36[1] = 3LL;
    v6 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::fold(v36);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, &v24, aBytes_0, 5LL);
    v7 = clap_builder::parser::error::MatchesError::unwrap(aBytes_0, 5LL, dest);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, &v24, aCharacters, 10LL);
    v8 = clap_builder::parser::error::MatchesError::unwrap(aCharacters, 10LL, dest);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, &v24, aFields, 6LL);
    v9 = clap_builder::parser::error::MatchesError::unwrap(aFields, 6LL, dest);
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, aInvalidUsageEx_0, 86LL);
LABEL_27:
        v17.m256i_i64[3] = *(_QWORD *)&dest[16];
        *(_OWORD *)&v17.m256i_u64[1] = *(_OWORD *)dest;
        v17.m256i_i64[0] = 3LL;
        goto LABEL_28;
      }
      if ( v7 )
      {
        if ( !(v9 | v8) )
        {
          uu_cut::list_to_ranges(dest, *(_QWORD *)(v7 + 8), *(_QWORD *)(v7 + 16), flag);
          if ( *(_DWORD *)dest != 1 )
          {
            v19.m256i_i64[3] = *(_QWORD *)&dest[24];
            *(_OWORD *)&v19.m256i_u64[1] = *(_OWORD *)&dest[8];
            *(_OWORD *)&v17.m256i_u64[1] = v23;
            BYTE8(v18) = 2;
            v19.m256i_i8[0] = v5;
            v17.m256i_i64[0] = 0LL;
            goto LABEL_21;
          }
          goto LABEL_20;
        }
        goto LABEL_26;
      }
      if ( v8 )
      {
        if ( !v9 )
        {
          uu_cut::list_to_ranges(dest, *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16), flag);
          if ( *(_DWORD *)dest != 1 )
          {
            v19.m256i_i64[3] = *(_QWORD *)&dest[24];
            *(_OWORD *)&v19.m256i_u64[1] = *(_OWORD *)&dest[8];
            *(_OWORD *)&v17.m256i_u64[1] = v23;
            BYTE8(v18) = 2;
            v19.m256i_i8[0] = v5;
            v17.m256i_i64[0] = 1LL;
            goto LABEL_21;
          }
          goto LABEL_20;
        }
      }
      else if ( v9 )
      {
        uu_cut::list_to_ranges(dest, *(_QWORD *)(v9 + 8), *(_QWORD *)(v9 + 16), flag);
        if ( *(_DWORD *)dest != 1 )
        {
          v19.m256i_i64[3] = *(_QWORD *)&dest[24];
          *(_OWORD *)&v19.m256i_u64[1] = *(_OWORD *)&dest[8];
          *(_OWORD *)&v17.m256i_u64[1] = v23;
          v17.m256i_i64[3] = v4;
          *(_QWORD *)&v18 = v27;
          BYTE8(v18) = v16;
          v19.m256i_i8[0] = v5;
          v17.m256i_i64[0] = 2LL;
LABEL_21:
          if ( v17.m256i_i64[0] )
          {
            if ( v17.m256i_i64[0] != 1 )
              goto LABEL_45;
            if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                                     &v24,
                                     aDelimiter,
                                     9LL) )
            {
              if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                       &v24,
                                       aWhitespaceDeli,
                                       20LL) )
              {
LABEL_42:
                if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                        &v24,
                                        aOnlyDelimited,
                                        14LL) )
                {
                  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, aInvalidInputTh_1, 96LL);
                  goto LABEL_44;
                }
LABEL_45:
                v22 = v19;
                v21 = v18;
                v20 = v17;
                goto LABEL_29;
              }
              goto LABEL_41;
            }
          }
          else if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                                        &v24,
                                        aDelimiter,
                                        9LL) )
          {
            if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                     &v24,
                                     aWhitespaceDeli,
                                     20LL) )
              goto LABEL_42;
LABEL_41:
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, aInvalidInputTh_0, 75LL);
            goto LABEL_44;
          }
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, aInvalidInputTh, 91LL);
LABEL_44:
          v20.m256i_i64[3] = *(_QWORD *)&dest[16];
          *(_OWORD *)&v20.m256i_u64[1] = *(_OWORD *)dest;
          v20.m256i_i64[0] = 3LL;
          core::ptr::drop_in_place<uu_cut::Mode>(&v17);
          goto LABEL_29;
        }
LABEL_20:
        v17.m256i_i64[3] = *(_QWORD *)&dest[24];
        *(_OWORD *)&v17.m256i_u64[1] = *(_OWORD *)&dest[8];
        v17.m256i_i64[0] = 3LL;
LABEL_28:
        v22 = v19;
        v21 = v18;
        v20 = v17;
LABEL_29:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, &v24);
        v10 = dest;
        clap_builder::parser::error::MatchesError::unwrap(&v30, dest);
        v11 = (void (__fastcall __noreturn *)())v30;
        if ( (_QWORD)v30 )
        {
          v12 = (const char *)*((_QWORD *)&v30 + 1);
          v13 = v31;
          v14 = v32;
          v10 = v33;
          v15 = v34;
        }
        else
        {
          v14 = 0LL;
          v13 = (unsigned __int64)<clap_builder::parser::matches::arg_matches::Indices as core::default::Default>::default::EMPTY;
          v12 = <clap_builder::parser::matches::arg_matches::Indices as core::default::Default>::default::EMPTY;
          v11 = core::ops::function::FnOnce::call_once;
          v15 = 0LL;
        }
        *(_QWORD *)dest = v11;
        *(_QWORD *)&dest[8] = v12;
        *(_OWORD *)&dest[16] = v13;
        *(_OWORD *)&dest[32] = v14;
        v44.m256i_i64[0] = (__int64)v10;
        v44.m256i_i64[1] = v15;
        core::iter::traits::iterator::Iterator::collect(&v28, dest);
        if ( v20.m256i_i32[0] == 3 )
        {
          *(_QWORD *)&dest[16] = v20.m256i_i64[3];
          *(_OWORD *)dest = *(_OWORD *)&v20.m256i_u64[1];
          *(_DWORD *)&dest[24] = 1;
          v4 = alloc::boxed::Box<T>::new(dest);
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v28);
        }
        else
        {
          v44 = v22;
          *(_OWORD *)&dest[32] = v21;
          *(__m256i *)dest = v20;
          *(_QWORD *)&v31 = v29;
          v30 = v28;
          uu_cut::cut_files(&v30, dest);
          core::ptr::drop_in_place<uu_cut::Mode>(&v20);
          v4 = 0LL;
        }
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v24);
        return v4;
      }
    }
LABEL_26:
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, aInvalidUsageEx, 73LL);
    goto LABEL_27;
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v24);
  return v4;
}