__int64 __fastcall uu_readlink::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r14
  char flag; // bp
  char v5; // r12
  char v6; // bl
  char v7; // r15
  unsigned __int8 v8; // r13
  __int64 v10; // rbx
  unsigned __int8 v11; // al
  __int128 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // r13
  unsigned int v16; // ebx
  __int64 v17; // r15
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rbx
  unsigned int v21; // r13d
  __int64 v22; // rax
  __int64 v23; // r15
  char v24; // [rsp+7h] [rbp-411h]
  unsigned __int8 v25; // [rsp+8h] [rbp-410h]
  unsigned int v26; // [rsp+8h] [rbp-410h]
  char v27; // [rsp+Ch] [rbp-40Ch]
  unsigned int v28; // [rsp+Ch] [rbp-40Ch]
  __int128 v29; // [rsp+10h] [rbp-408h] BYREF
  __int64 v30; // [rsp+20h] [rbp-3F8h]
  __int64 v31; // [rsp+28h] [rbp-3F0h] BYREF
  __int128 v32; // [rsp+30h] [rbp-3E8h]
  __int128 v33; // [rsp+40h] [rbp-3D8h] BYREF
  __int128 v34; // [rsp+50h] [rbp-3C8h]
  __int128 v35; // [rsp+60h] [rbp-3B8h]
  __int64 v36; // [rsp+70h] [rbp-3A8h]
  _OWORD v37[3]; // [rsp+78h] [rbp-3A0h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-370h]
  _QWORD v39[3]; // [rsp+B0h] [rbp-368h] BYREF
  __int128 v40; // [rsp+C8h] [rbp-350h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-340h]
  _QWORD v42[8]; // [rsp+E0h] [rbp-338h] BYREF
  _BYTE dest[24]; // [rsp+120h] [rbp-2F8h] BYREF
  __int128 v44; // [rsp+138h] [rbp-2E0h]

  uu_readlink::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v33, dest, a1, a2);
  if ( !__OFSUB__(-(__int64)v33, 1LL) )
  {
    v38 = v36;
    v37[2] = v35;
    v37[1] = v34;
    v37[0] = v33;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aNoNewline, 10LL);
    v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aZero_0, 4LL);
    v5 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aSilent, 6LL) )
      v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aQuiet, 5LL);
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aVerbose, 7LL);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aCanonicalize, 12LL)
      || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aCanonicalizeEx, 21LL)
      || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aCanonicalizeMi, 20LL) )
    {
      v25 = 2;
      v7 = 0;
    }
    else
    {
      v7 = 1;
      v25 = 0;
    }
    v8 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aCanonicalizeEx, 21LL) )
      v8 = 2 * clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v37, aCanonicalizeMi, 20LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v37);
    clap_builder::parser::error::MatchesError::unwrap(v42, dest);
    if ( !v42[0]
      || (core::iter::traits::iterator::Iterator::collect(dest, v42),
          v33 = *(_OWORD *)&dest[8],
          *(_QWORD *)dest == 0x8000000000000000LL) )
    {
      v31 = 0LL;
      v32 = 8uLL;
LABEL_14:
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v33, aMissingOperand, 15LL);
      *(_QWORD *)&dest[16] = v34;
      *(_OWORD *)dest = v33;
      LODWORD(v44) = 1;
      v3 = alloc::boxed::Box<T>::new(dest);
LABEL_15:
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v31);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v37);
      return v3;
    }
    v24 = v6;
    v32 = v33;
    v31 = *(_QWORD *)dest;
    v10 = *((_QWORD *)&v33 + 1);
    if ( !*((_QWORD *)&v33 + 1) )
      goto LABEL_14;
    if ( flag )
    {
      v11 = 11;
      if ( (*((_QWORD *)&v33 + 1) == 1LL) | (unsigned __int8)v5 )
      {
LABEL_23:
        v13 = v32;
        v14 = 8 * v10;
        if ( v7 )
        {
          v15 = 3 * v14;
          v16 = v11;
          while ( 1 )
          {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
              dest,
              *(_QWORD *)(v13 + 8),
              *(_QWORD *)(v13 + 16));
            v29 = *(_OWORD *)dest;
            v30 = *(_QWORD *)&dest[16];
            std::fs::read_link(&v33, &v29);
            v17 = v33;
            if ( (_QWORD)v33 == 0x8000000000000000LL )
              break;
            v18 = *((_QWORD *)&v33 + 1);
            v19 = uu_readlink::show(*((_QWORD *)&v33 + 1), v34, v16);
            v3 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v19);
            if ( v3 )
              goto LABEL_37;
            core::mem::drop(v17, v18);
            core::mem::drop(v29, *((_QWORD *)&v29 + 1));
            v13 += 24LL;
            v15 -= 24LL;
            if ( !v15 )
              goto LABEL_34;
          }
        }
        else
        {
          v20 = 3 * v14;
          v28 = v8;
          v21 = v25;
          v26 = v11;
          while ( 1 )
          {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
              dest,
              *(_QWORD *)(v13 + 8),
              *(_QWORD *)(v13 + 16));
            v29 = *(_OWORD *)dest;
            v30 = *(_QWORD *)&dest[16];
            uucore::features::fs::canonicalize(&v33, &v29, v28, v21);
            v17 = v33;
            if ( (_QWORD)v33 == 0x8000000000000000LL )
              break;
            v18 = *((_QWORD *)&v33 + 1);
            v22 = uu_readlink::show(*((_QWORD *)&v33 + 1), v34, v26);
            v3 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v22);
            if ( v3 )
            {
LABEL_37:
              core::mem::drop(v17, v18);
              goto LABEL_39;
            }
            core::mem::drop(v17, v18);
            core::mem::drop(v29, *((_QWORD *)&v29 + 1));
            v13 += 24LL;
            v20 -= 24LL;
            if ( !v20 )
            {
LABEL_34:
              core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v31);
              core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v37);
              return 0LL;
            }
          }
        }
        v39[0] = *((_QWORD *)&v33 + 1);
        if ( v24 )
        {
          v23 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                  *((_QWORD *)&v33 + 1),
                  *(_QWORD *)(v13 + 8),
                  *(_QWORD *)(v13 + 16));
          <T as alloc::string::SpecToString>::spec_to_string(&v40, v23);
          LODWORD(v44) = 1;
          *(_OWORD *)dest = v40;
          *(_QWORD *)&dest[16] = v41;
          v3 = alloc::boxed::Box<T>::new(dest);
          core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v23);
        }
        else
        {
          v3 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
          core::ptr::drop_in_place<std::io::error::Error>(v39);
        }
LABEL_39:
        core::mem::drop(v29, *((_QWORD *)&v29 + 1));
        goto LABEL_15;
      }
      *(_QWORD *)&v12 = uucore::util_name();
      v33 = v12;
      v39[0] = &v33;
      v39[1] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &unk_E71E8;
      *(_QWORD *)&dest[8] = 2LL;
      *(_QWORD *)&dest[16] = v39;
      v44 = 1uLL;
      std::io::stdio::_eprint(dest);
      *(_QWORD *)dest = &off_E7260;
      *(_QWORD *)&dest[8] = 1LL;
      *(_QWORD *)&dest[16] = 8LL;
      v44 = 0LL;
      std::io::stdio::_eprint(dest);
    }
    v11 = 10;
    if ( v27 )
      v11 = 0;
    goto LABEL_23;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
           *((_QWORD *)&v33 + 1),
           dest,
           v2,
           -(__int64)v33);
}