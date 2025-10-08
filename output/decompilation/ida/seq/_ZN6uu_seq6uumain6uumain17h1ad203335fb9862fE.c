// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_seq::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  const char *v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rdx
  const char *v12; // rsi
  unsigned __int8 flag; // bp
  __int64 v14; // rax
  __int64 v15; // r15
  _QWORD *v16; // rbx
  unsigned __int64 v17; // r13
  _QWORD *v18; // r14
  char v19; // bl
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  char v23; // bl
  bool v24; // cf
  __int64 v25; // r13
  char v26; // bl
  __int64 v27; // r12
  __int64 v28; // r15
  __int64 v29; // rdx
  char v30; // r13
  char v31; // r11
  char v32; // r9
  char v33; // cl
  char v34; // al
  __int64 v35; // rsi
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r10
  __int64 v43; // r10
  __int128 v44; // xmm0
  __int64 v45; // rbx
  __int64 v46; // r14
  bool v47; // di
  __int64 v48; // rax
  __int64 v49; // r14
  _QWORD *v50; // rbx
  char **v51; // rdx
  __int64 v52; // rdi
  __int16 v53; // [rsp+Ch] [rbp-51Ch]
  char v54; // [rsp+Eh] [rbp-51Ah]
  __int128 v55; // [rsp+10h] [rbp-518h] BYREF
  __int128 v56; // [rsp+20h] [rbp-508h]
  __int128 v57; // [rsp+30h] [rbp-4F8h]
  __int128 v58; // [rsp+40h] [rbp-4E8h]
  __int64 v59; // [rsp+50h] [rbp-4D8h]
  __int64 v60; // [rsp+58h] [rbp-4D0h]
  _QWORD *v61; // [rsp+60h] [rbp-4C8h]
  __int64 v62; // [rsp+68h] [rbp-4C0h] BYREF
  _QWORD *v63; // [rsp+70h] [rbp-4B8h]
  unsigned __int64 v64; // [rsp+78h] [rbp-4B0h]
  __int128 v65; // [rsp+80h] [rbp-4A8h] BYREF
  __int128 v66; // [rsp+90h] [rbp-498h]
  __int128 v67; // [rsp+A0h] [rbp-488h]
  __int128 v68; // [rsp+B0h] [rbp-478h]
  _OWORD v69[3]; // [rsp+C8h] [rbp-460h] BYREF
  __int64 v70; // [rsp+F8h] [rbp-430h]
  __int128 v71; // [rsp+100h] [rbp-428h] BYREF
  __int64 v72; // [rsp+110h] [rbp-418h]
  __int128 v73; // [rsp+118h] [rbp-410h]
  __int64 v74; // [rsp+128h] [rbp-400h]
  __int64 v75; // [rsp+130h] [rbp-3F8h]
  __int64 v76; // [rsp+138h] [rbp-3F0h]
  unsigned __int8 v77; // [rsp+140h] [rbp-3E8h]
  __int128 v78; // [rsp+150h] [rbp-3D8h] BYREF
  __int128 v79; // [rsp+160h] [rbp-3C8h]
  __int128 v80; // [rsp+170h] [rbp-3B8h]
  __int128 v81; // [rsp+180h] [rbp-3A8h]
  __int128 v82; // [rsp+190h] [rbp-398h] BYREF
  __int128 v83; // [rsp+1A0h] [rbp-388h]
  __int128 v84; // [rsp+1B0h] [rbp-378h]
  __int128 v85; // [rsp+1C0h] [rbp-368h]
  __int128 v86; // [rsp+1D8h] [rbp-350h] BYREF
  __int64 v87; // [rsp+1E8h] [rbp-340h]
  _BYTE dest[72]; // [rsp+1F0h] [rbp-338h] BYREF
  __int64 v89; // [rsp+238h] [rbp-2F0h]
  __int128 v90; // [rsp+240h] [rbp-2E8h]
  __int128 v91; // [rsp+250h] [rbp-2D8h]
  __int64 v92; // [rsp+260h] [rbp-2C8h]
  _QWORD v93[14]; // [rsp+4B8h] [rbp-70h] BYREF

  uu_seq::uu_app(dest);
  uu_seq::split_short_args_with_value((__int64)&v71, a1, a2);
  clap_builder::builder::command::Command::try_get_matches_from(&v55, dest, &v71);
  if ( __OFSUB__(-(__int64)v55, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v55 + 1),
             dest,
             v3,
             -(__int64)v55);
  v70 = v58;
  v69[2] = v57;
  v69[1] = v56;
  v69[0] = v55;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v69);
  clap_builder::parser::error::MatchesError::unwrap(v93, dest);
  if ( v93[0] )
  {
    core::iter::traits::iterator::Iterator::collect(&v62, v93);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v69, aSeparator, 9LL);
    v5 = clap_builder::parser::error::MatchesError::unwrap(aSeparator, 9LL, dest);
    v6 = core::option::Option<T>::map_or(v5);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, v6, v7);
    *(_QWORD *)&v66 = *(_QWORD *)&dest[16];
    v65 = *(_OWORD *)dest;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v69, aTerminator, 10LL);
    v8 = clap_builder::parser::error::MatchesError::unwrap(aTerminator, 10LL, dest);
    if ( v8 )
    {
      v9 = *(const char **)(v8 + 8);
      v8 = *(_QWORD *)(v8 + 16);
    }
    else
    {
      v9 = 0LL;
    }
    v11 = 1LL;
    if ( v9 )
      v11 = v8;
    v12 = asc_1B352;
    if ( v9 )
      v12 = v9;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, v12, v11);
    *(_QWORD *)&v56 = *(_QWORD *)&dest[16];
    v55 = *(_OWORD *)dest;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v69, aEqualWidth, 11LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v69, aFormat_0, 6LL);
    v14 = clap_builder::parser::error::MatchesError::unwrap(aFormat_0, 6LL, dest);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 8);
      v2 = *(_QWORD *)(v14 + 16);
    }
    else
    {
      v15 = 0LL;
    }
    v72 = v66;
    v71 = v65;
    v73 = v55;
    v74 = v56;
    v77 = flag;
    v75 = v15;
    v76 = v2;
    if ( ((v15 != 0) & flag) != 0 )
    {
      *(_QWORD *)dest = 0x8000000000000002LL;
      v10 = alloc::boxed::Box<T>::new(dest);
      v16 = v63;
LABEL_38:
      core::ptr::drop_in_place<uu_seq::SeqOptions>(&v71);
      core::ptr::drop_in_place<alloc::vec::Vec<u64>>(v62, v16);
      goto LABEL_39;
    }
    v17 = v64;
    if ( v64 <= 1 )
    {
      uu_seq::number::PreciseNumber::one(&v78);
    }
    else
    {
      v18 = v63;
      uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(
        dest,
        *(_QWORD *)(*v63 + 8LL),
        *(_QWORD *)(*v63 + 16LL));
      if ( *(_DWORD *)dest == 2 )
      {
        v19 = dest[8];
        <alloc::string::String as core::clone::Clone>::clone(&v65, *v18);
        *(_QWORD *)&v56 = v66;
        v55 = v65;
        BYTE8(v56) = v19;
        v10 = alloc::boxed::Box<T>::new(&v55);
        v16 = v18;
        goto LABEL_38;
      }
      v81 = *(_OWORD *)&dest[48];
      v80 = *(_OWORD *)&dest[32];
      v79 = *(_OWORD *)&dest[16];
      v78 = *(_OWORD *)dest;
      if ( v17 != 2 )
      {
        uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(
          dest,
          *(_QWORD *)(v18[1] + 8LL),
          *(_QWORD *)(v18[1] + 16LL));
        if ( *(_DWORD *)dest == 2 )
        {
          v23 = dest[8];
          <alloc::string::String as core::clone::Clone>::clone(&v65, v18[1]);
          *(_QWORD *)&v56 = v66;
          v55 = v65;
          BYTE8(v56) = v23;
          v10 = alloc::boxed::Box<T>::new(&v55);
          v16 = v18;
LABEL_37:
          core::ptr::drop_in_place<uu_seq::number::PreciseNumber>(v79, *((_QWORD *)&v79 + 1));
          goto LABEL_38;
        }
        v85 = *(_OWORD *)&dest[48];
        v84 = *(_OWORD *)&dest[32];
        v83 = *(_OWORD *)&dest[16];
        v82 = *(_OWORD *)dest;
LABEL_22:
        v20 = v83;
        v21 = 0LL;
        if ( (__int64)v83 < (__int64)0x8000000000000005LL )
          v21 = v83 - 0x7FFFFFFFFFFFFFFFLL;
        if ( v21 )
        {
          if ( v21 == 3 )
          {
LABEL_26:
            if ( v17 >= 2 )
            {
              v61 = v63;
              <alloc::string::String as core::clone::Clone>::clone(&v55, v63[1]);
              *(_QWORD *)&dest[24] = v56;
              *(_OWORD *)&dest[8] = v55;
              *(_QWORD *)dest = 0x8000000000000000LL;
              v22 = alloc::boxed::Box<T>::new(dest);
LABEL_35:
              v10 = v22;
LABEL_36:
              core::ptr::drop_in_place<uu_seq::number::PreciseNumber>(v20, *((_QWORD *)&v83 + 1));
              v16 = v61;
              goto LABEL_37;
            }
            v51 = &off_11A578;
            v52 = 1LL;
LABEL_65:
            core::panicking::panic_bounds_check(v52, v17, v51);
          }
        }
        else if ( BYTE8(v84) == 1 )
        {
          goto LABEL_26;
        }
        v24 = v17 == 0;
        v25 = v17 - 1;
        if ( v24 )
        {
          v51 = &off_11A590;
          v52 = v25;
          v17 = 0LL;
          goto LABEL_65;
        }
        v61 = v63;
        uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(
          dest,
          *(_QWORD *)(v63[v25] + 8LL),
          *(_QWORD *)(v63[v25] + 16LL));
        if ( *(_DWORD *)dest == 2 )
        {
          v26 = dest[8];
          <alloc::string::String as core::clone::Clone>::clone(&v86, v61[v25]);
          *(_QWORD *)&v56 = v87;
          v55 = v86;
          BYTE8(v56) = v26;
          v22 = alloc::boxed::Box<T>::new(&v55);
          goto LABEL_35;
        }
        v68 = *(_OWORD *)&dest[48];
        v67 = *(_OWORD *)&dest[32];
        v66 = *(_OWORD *)&dest[16];
        v65 = *(_OWORD *)dest;
        if ( v15 )
        {
          uucore::features::format::Format<F,T>::parse(dest, v15, v2);
          v28 = *(_QWORD *)&dest[8];
          v27 = *(_QWORD *)dest;
          v29 = *(_QWORD *)&dest[16];
          v30 = dest[24];
          v31 = dest[25];
          v32 = dest[26];
          v33 = dest[27];
          v34 = dest[28];
          LOWORD(v55) = *(_WORD *)&dest[29];
          BYTE2(v55) = dest[31];
          v35 = *(_QWORD *)&dest[40];
          v36 = *(_QWORD *)&dest[32];
          if ( *(_QWORD *)dest == 2LL )
          {
            dest[23] = BYTE2(v55);
            *(_WORD *)&dest[21] = v55;
            *(_QWORD *)dest = *(_QWORD *)&dest[8];
            *(_QWORD *)&dest[8] = v29;
            *(_DWORD *)&dest[16] = *(_DWORD *)&dest[24];
            dest[20] = dest[28];
            *(_OWORD *)&dest[24] = *(_OWORD *)&dest[32];
            v10 = alloc::boxed::Box<T>::new(dest);
            core::ptr::drop_in_place<uu_seq::number::PreciseNumber>(v66, *((_QWORD *)&v66 + 1));
            goto LABEL_36;
          }
          v44 = *(_OWORD *)&dest[48];
          v45 = *(_QWORD *)&dest[64];
          v46 = v89;
          v53 = v55;
          v54 = BYTE2(v55);
          v43 = 0LL;
          v47 = 0;
        }
        else
        {
          v37 = uu_seq::select_precision(&v78, &v82, &v65);
          v27 = v37;
          v28 = v38;
          if ( flag )
          {
            v39 = 0LL;
            if ( (v37 & 1) != 0 )
              v39 = v38;
            v40 = core::cmp::Ord::max(*((_QWORD *)&v81 + 1), *((_QWORD *)&v85 + 1));
            v41 = core::cmp::Ord::max(v40, *((_QWORD *)&v68 + 1));
            v42 = v39 + 1;
            if ( !v39 )
              v42 = 0LL;
            v43 = v41 + v42;
          }
          else
          {
            v43 = 0LL;
          }
          v54 = dest[2];
          v53 = *(_WORD *)dest;
          if ( (v27 & 1) != 0 )
          {
            v47 = v28 == 0;
            v33 = 2;
            v34 = 0;
            v29 = v43;
          }
          else
          {
            v34 = 2;
            v47 = 0;
            v33 = 0;
            v29 = 0LL;
            v27 = 0LL;
          }
          v44 = 0LL;
          v45 = 1LL;
          v46 = 0LL;
          v35 = 1LL;
          v36 = 0LL;
          v32 = 0;
          v31 = 0;
          v30 = 0;
        }
        *(_QWORD *)&v55 = v27;
        *((_QWORD *)&v55 + 1) = v28;
        *(_QWORD *)&v56 = v29;
        BYTE8(v56) = v30;
        BYTE9(v56) = v31;
        BYTE10(v56) = v32;
        BYTE11(v56) = v33;
        BYTE12(v56) = v34;
        *(_WORD *)((char *)&v56 + 13) = v53;
        HIBYTE(v56) = v54;
        *(_QWORD *)&v57 = v36;
        *((_QWORD *)&v57 + 1) = v35;
        v58 = v44;
        v59 = v45;
        v60 = v46;
        *(_QWORD *)&dest[32] = v81;
        *(_OWORD *)&dest[16] = v80;
        *(_OWORD *)dest = v79;
        *(_OWORD *)&dest[40] = v83;
        *(_OWORD *)&dest[56] = v84;
        v89 = v85;
        v90 = v66;
        v91 = v67;
        v92 = v68;
        v48 = uu_seq::print_seq(dest, *((_QWORD *)&v71 + 1), v72, *((_QWORD *)&v73 + 1), v74, &v55, v47, v43);
        v49 = v48;
        v50 = v61;
        if ( v48 )
        {
          if ( (unsigned __int8)std::io::error::Error::kind(v48) != 11 )
          {
            v10 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v49);
            goto LABEL_62;
          }
          core::ptr::drop_in_place<std::io::error::Error>(v49);
        }
        v10 = 0LL;
LABEL_62:
        core::ptr::drop_in_place<uucore::features::format::Format<uucore::features::format::num_format::Float,&uucore::features::extendedbigdecimal::ExtendedBigDecimal>>(&v55);
        core::ptr::drop_in_place<uu_seq::SeqOptions>(&v71);
        core::ptr::drop_in_place<alloc::vec::Vec<u64>>(v62, v50);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v69);
        return v10;
      }
    }
    uu_seq::number::PreciseNumber::one(&v82);
    goto LABEL_22;
  }
  *(_QWORD *)dest = 0x8000000000000001LL;
  v10 = alloc::boxed::Box<T>::new(dest);
LABEL_39:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v69);
  return v10;
}