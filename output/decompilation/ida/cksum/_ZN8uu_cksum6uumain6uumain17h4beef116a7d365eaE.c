__int64 __fastcall uu_cksum::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  unsigned __int8 flag; // bp
  __int64 v5; // rax
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned __int8 v12; // al
  __int64 v13; // rdx
  char v15; // r12
  unsigned __int8 v16; // r15
  unsigned __int8 v17; // bp
  unsigned __int8 v18; // r13
  char v19; // r14
  char v20; // al
  int v21; // r15d
  int v22; // r12d
  int v23; // ecx
  int v24; // eax
  __int64 v25; // r14
  __int16 v26; // kr00_2
  __int64 v27; // r14
  __int64 v28; // r15
  char v29; // r13
  char v30; // bp
  __int64 v31; // rdx
  __int64 v32; // rax
  char v33; // [rsp+Eh] [rbp-3EAh]
  unsigned __int8 v34; // [rsp+10h] [rbp-3E8h]
  __int64 v35; // [rsp+10h] [rbp-3E8h]
  __int128 v36; // [rsp+18h] [rbp-3E0h] BYREF
  __int64 v37; // [rsp+28h] [rbp-3D0h]
  __int64 v38; // [rsp+30h] [rbp-3C8h]
  __int64 v39; // [rsp+38h] [rbp-3C0h]
  _QWORD v40[2]; // [rsp+40h] [rbp-3B8h] BYREF
  __int128 v41; // [rsp+50h] [rbp-3A8h]
  __int128 v42; // [rsp+60h] [rbp-398h]
  __int64 v43; // [rsp+70h] [rbp-388h]
  __int64 v44; // [rsp+78h] [rbp-380h]
  __int64 v45; // [rsp+80h] [rbp-378h] BYREF
  __int64 v46; // [rsp+88h] [rbp-370h]
  __int128 v47; // [rsp+90h] [rbp-368h]
  __int128 v48; // [rsp+A0h] [rbp-358h]
  __int64 v49; // [rsp+B0h] [rbp-348h]
  __int128 dest; // [rsp+C0h] [rbp-338h] BYREF
  __int64 v51; // [rsp+D0h] [rbp-328h]
  __int64 v52; // [rsp+D8h] [rbp-320h]
  __int64 v53; // [rsp+E0h] [rbp-318h]
  __int64 v54; // [rsp+E8h] [rbp-310h]
  __int64 v55; // [rsp+F0h] [rbp-308h]
  __int16 v56; // [rsp+F8h] [rbp-300h]
  char v57; // [rsp+FAh] [rbp-2FEh]
  char v58; // [rsp+FBh] [rbp-2FDh]
  __int64 v59[14]; // [rsp+388h] [rbp-70h] BYREF

  uu_cksum::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v45, &dest, a1, a2);
  if ( !__OFSUB__(-v45, 1LL) )
  {
    v43 = v49;
    v42 = v48;
    v41 = v47;
    v40[0] = v45;
    v40[1] = v46;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v40, aCheck, 5LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v40);
    v5 = clap_builder::parser::error::MatchesError::unwrap(&dest);
    if ( v5 )
    {
      v36 = *(_OWORD *)(v5 + 8);
    }
    else if ( flag )
    {
      v36 = 1uLL;
    }
    else
    {
      *(_QWORD *)&v36 = aCrc;
      *((_QWORD *)&v36 + 1) = 3LL;
    }
    v6 = v40;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v40);
    v7 = (_QWORD *)clap_builder::parser::error::MatchesError::unwrap(&dest);
    if ( v7 )
    {
      v8 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v36, *((_QWORD *)&v36 + 1), aBlake2b, 7LL);
      LOBYTE(v10) = 10;
      if ( !v8 )
      {
LABEL_15:
        v3 = alloc::boxed::Box<T>::new((unsigned __int8)v10);
        goto LABEL_16;
      }
      v6 = (_QWORD *)*v7;
      uucore::features::checksum::calculate_blake2b_length(&dest, *v7, v9, v10);
      v11 = *((_QWORD *)&dest + 1);
      if ( (dest & 1) != 0 )
      {
        v3 = *((_QWORD *)&dest + 1);
LABEL_16:
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v40);
        return v3;
      }
      v37 = v51;
    }
    else
    {
      v11 = 0LL;
    }
    v12 = <T as core::slice::cmp::SliceContains>::slice_contains(&v36);
    LOBYTE(v10) = 12;
    if ( (v12 & flag) == 0 )
    {
      if ( !flag )
      {
        std::env::args_os(&dest, v6, v13, v10);
        uu_cksum::handle_tag_text_binary_flags((__int64)&v45, &dest);
        v3 = v45;
        if ( !v45 )
        {
          v26 = v46;
          uucore::features::checksum::detect_algo(&dest, v36, *((_QWORD *)&v36 + 1), v11, v37);
          v3 = *((_QWORD *)&dest + 1);
          v27 = dest;
          v28 = v51;
          if ( (_QWORD)dest )
          {
            v35 = v52;
            v44 = v53;
            v29 = 10;
            if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v40, aZero_0, 4LL) )
              v29 = 0;
            v30 = 1;
            if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v40, aRaw, 3LL) )
              v30 = 2 * clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v40, aBase64, 6LL);
            v38 = (*(__int64 (__fastcall **)(__int64))(v35 + 40))(v28);
            v39 = v31;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v40);
            clap_builder::parser::error::MatchesError::unwrap(v59, &dest);
            *(_QWORD *)&dest = v11;
            *((_QWORD *)&dest + 1) = v37;
            v51 = v27;
            v52 = v3;
            v53 = v38;
            v54 = v39;
            v55 = v44;
            v56 = v26;
            v57 = v30;
            v58 = v29;
            if ( v59[0] )
              v32 = uu_cksum::cksum((__int64)&dest);
            else
              v32 = uu_cksum::cksum(&dest);
            v3 = v32;
            if ( !v32 )
            {
              core::ptr::drop_in_place<uu_cksum::Options>(v28, v35);
              core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v40);
              return 0LL;
            }
            core::ptr::drop_in_place<uu_cksum::Options>(v28, v35);
          }
        }
        goto LABEL_16;
      }
      v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v40, aText, 4LL);
      v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v40, aBinary_0, 6LL);
      v34 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v40, aStrict, 6LL);
      v33 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v40, aStatus, 6LL);
      v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v40, aWarn, 4LL);
      v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v40, aIgnoreMissing, 14LL);
      v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v40, aQuiet, 5LL);
      v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v40, aTag_0, 3LL);
      LOBYTE(v10) = 11;
      if ( !((unsigned __int8)(v20 | v15) | v16) )
      {
        v21 = DWORD2(v36);
        v22 = DWORD2(v36);
        if ( *((_QWORD *)&v36 + 1) )
          v22 = v36;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v40);
        clap_builder::parser::error::MatchesError::unwrap(&v45, &dest);
        core::option::Option<T>::map_or_else(&dest, &v45);
        v23 = 0x1000000;
        if ( !v19 )
          v23 = (v17 | 2) << 24;
        v24 = 0;
        if ( !v33 )
          v24 = v23;
        v25 = *((_QWORD *)&dest + 1);
        v3 = uucore::features::checksum::perform_checksum_validation(
               DWORD2(dest),
               DWORD2(dest) + 16 * (int)v51,
               v22,
               v21,
               v11,
               v37,
               v24 | (v34 << 16) | (v18 << 8));
        core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(dest, v25);
        goto LABEL_16;
      }
    }
    goto LABEL_15;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
           v46,
           &dest,
           v2,
           -v45);
}