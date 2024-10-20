__int64 __fastcall uu_hashsum::create_algorithm_from_flags(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 *one; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 *v24; // [rsp+0h] [rbp-448h] BYREF
  __int64 v25; // [rsp+8h] [rbp-440h] BYREF
  __int128 v26; // [rsp+10h] [rbp-438h]
  __int128 v27; // [rsp+20h] [rbp-428h]
  _QWORD v28[5]; // [rsp+30h] [rbp-418h] BYREF
  _QWORD v29[5]; // [rsp+58h] [rbp-3F0h] BYREF
  _QWORD v30[5]; // [rsp+80h] [rbp-3C8h] BYREF
  _QWORD v31[5]; // [rsp+A8h] [rbp-3A0h] BYREF
  _QWORD v32[5]; // [rsp+D0h] [rbp-378h] BYREF
  _QWORD v33[5]; // [rsp+F8h] [rbp-350h] BYREF
  _QWORD v34[3]; // [rsp+120h] [rbp-328h] BYREF
  __int128 v35; // [rsp+138h] [rbp-310h]
  __int64 v36; // [rsp+148h] [rbp-300h] BYREF
  __int64 v37; // [rsp+150h] [rbp-2F8h]
  __int64 v38; // [rsp+158h] [rbp-2F0h]
  __int128 v39; // [rsp+160h] [rbp-2E8h]
  _QWORD v40[3]; // [rsp+170h] [rbp-2D8h] BYREF
  __int128 v41; // [rsp+188h] [rbp-2C0h]
  __int64 v42; // [rsp+198h] [rbp-2B0h] BYREF
  __int64 v43; // [rsp+1A0h] [rbp-2A8h]
  __int64 v44; // [rsp+1A8h] [rbp-2A0h]
  __int128 v45; // [rsp+1B0h] [rbp-298h]
  _QWORD v46[3]; // [rsp+1C0h] [rbp-288h] BYREF
  __int128 v47; // [rsp+1D8h] [rbp-270h]
  __int64 v48; // [rsp+1E8h] [rbp-260h] BYREF
  __int64 v49; // [rsp+1F0h] [rbp-258h]
  __int64 v50; // [rsp+1F8h] [rbp-250h]
  __int128 v51; // [rsp+200h] [rbp-248h]
  _QWORD v52[3]; // [rsp+210h] [rbp-238h] BYREF
  __int128 v53; // [rsp+228h] [rbp-220h]
  __int64 v54; // [rsp+238h] [rbp-210h] BYREF
  __int64 v55; // [rsp+240h] [rbp-208h]
  __int64 v56; // [rsp+248h] [rbp-200h]
  __int128 v57; // [rsp+250h] [rbp-1F8h]
  _QWORD v58[3]; // [rsp+260h] [rbp-1E8h] BYREF
  __int128 v59; // [rsp+278h] [rbp-1D0h]
  __int64 v60; // [rsp+288h] [rbp-1C0h] BYREF
  __int64 v61; // [rsp+290h] [rbp-1B8h]
  __int64 v62; // [rsp+298h] [rbp-1B0h]
  __int128 v63; // [rsp+2A0h] [rbp-1A8h]
  _QWORD v64[3]; // [rsp+2B0h] [rbp-198h] BYREF
  __int128 v65; // [rsp+2C8h] [rbp-180h]
  __int64 v66; // [rsp+2D8h] [rbp-170h] BYREF
  __int64 v67; // [rsp+2E0h] [rbp-168h]
  __int64 v68; // [rsp+2E8h] [rbp-160h]
  __int128 v69; // [rsp+2F0h] [rbp-158h]
  _QWORD v70[3]; // [rsp+300h] [rbp-148h] BYREF
  __int128 v71; // [rsp+318h] [rbp-130h]
  __int64 v72; // [rsp+328h] [rbp-120h] BYREF
  __int64 v73; // [rsp+330h] [rbp-118h]
  __int64 v74; // [rsp+338h] [rbp-110h]
  __int128 v75; // [rsp+340h] [rbp-108h]
  _QWORD v76[3]; // [rsp+350h] [rbp-F8h] BYREF
  __int128 v77; // [rsp+368h] [rbp-E0h]
  __int64 v78; // [rsp+378h] [rbp-D0h] BYREF
  __int64 v79; // [rsp+380h] [rbp-C8h]
  __int64 v80; // [rsp+388h] [rbp-C0h]
  __int128 v81; // [rsp+390h] [rbp-B8h]
  _QWORD v82[3]; // [rsp+3A0h] [rbp-A8h] BYREF
  __int128 v83; // [rsp+3B8h] [rbp-90h]
  __int64 v84; // [rsp+3C8h] [rbp-80h] BYREF
  __int64 v85; // [rsp+3D0h] [rbp-78h]
  __int64 v86; // [rsp+3D8h] [rbp-70h]
  __int128 v87; // [rsp+3E0h] [rbp-68h]
  unsigned __int64 v88[3]; // [rsp+3F0h] [rbp-58h] BYREF
  unsigned __int64 v89[3]; // [rsp+408h] [rbp-40h] BYREF
  unsigned __int64 v90[5]; // [rsp+420h] [rbp-28h] BYREF

  v25 = 0LL;
  v24 = &v25;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aMd5, 3LL, &off_2FC520) )
    goto LABEL_58;
  uucore::features::checksum::detect_algo(&v36, aMd5sum, 6LL, 0LL, v3);
  v4 = v37;
  v5 = v38;
  if ( v36 )
  {
    v35 = v39;
    v34[0] = v36;
    v34[1] = v37;
    v34[2] = v38;
    v4 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v24, v34);
    if ( !v4 )
    {
LABEL_58:
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                               a2,
                               aSha1,
                               4LL,
                               &off_2FC538) )
        goto LABEL_59;
      uucore::features::checksum::detect_algo(&v42, aSha1sum, 7LL, 0LL, v6);
      v4 = v43;
      v5 = v44;
      if ( v42 )
      {
        v41 = v45;
        v40[0] = v42;
        v40[1] = v43;
        v40[2] = v44;
        v4 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v24, v40);
        if ( !v4 )
        {
LABEL_59:
          if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                   a2,
                                   aSha224,
                                   6LL,
                                   &off_2FC550) )
            goto LABEL_60;
          uucore::features::checksum::detect_algo(&v48, aSha224sum, 9LL, 0LL, v7);
          v4 = v49;
          v5 = v50;
          if ( v48 )
          {
            v47 = v51;
            v46[0] = v48;
            v46[1] = v49;
            v46[2] = v50;
            v4 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v24, v46);
            if ( !v4 )
            {
LABEL_60:
              if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                       a2,
                                       aSha256,
                                       6LL,
                                       &off_2FC568) )
                goto LABEL_61;
              uucore::features::checksum::detect_algo(&v54, aSha256sum, 9LL, 0LL, v8);
              v4 = v55;
              v5 = v56;
              if ( v54 )
              {
                v53 = v57;
                v52[0] = v54;
                v52[1] = v55;
                v52[2] = v56;
                v4 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v24, v52);
                if ( !v4 )
                {
LABEL_61:
                  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                           a2,
                                           aSha384,
                                           6LL,
                                           &off_2FC580) )
                    goto LABEL_62;
                  uucore::features::checksum::detect_algo(&v60, aSha384sum, 9LL, 0LL, v9);
                  v4 = v61;
                  v5 = v62;
                  if ( v60 )
                  {
                    v59 = v63;
                    v58[0] = v60;
                    v58[1] = v61;
                    v58[2] = v62;
                    v4 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v24, v58);
                    if ( !v4 )
                    {
LABEL_62:
                      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                               a2,
                                               aSha512,
                                               6LL,
                                               &off_2FC598) )
                        goto LABEL_63;
                      uucore::features::checksum::detect_algo(&v66, aSha512sum, 9LL, 0LL, v10);
                      v4 = v67;
                      v5 = v68;
                      if ( v66 )
                      {
                        v65 = v69;
                        v64[0] = v66;
                        v64[1] = v67;
                        v64[2] = v68;
                        v4 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v24, v64);
                        if ( !v4 )
                        {
LABEL_63:
                          if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                                   a2,
                                                   aB2sum_0,
                                                   5LL,
                                                   &off_2FC5B0) )
                            goto LABEL_64;
                          uucore::features::checksum::detect_algo(&v72, aB2sum_0, 5LL, 0LL, v11);
                          v4 = v73;
                          v5 = v74;
                          if ( v72 )
                          {
                            v71 = v75;
                            v70[0] = v72;
                            v70[1] = v73;
                            v70[2] = v74;
                            v4 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v24, v70);
                            if ( !v4 )
                            {
LABEL_64:
                              if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                                       a2,
                                                       aB3sum,
                                                       5LL,
                                                       &off_2FC5C8) )
                                goto LABEL_65;
                              uucore::features::checksum::detect_algo(&v78, aB3sum, 5LL, 0LL, v12);
                              v4 = v79;
                              v5 = v80;
                              if ( v78 )
                              {
                                v77 = v81;
                                v76[0] = v78;
                                v76[1] = v79;
                                v76[2] = v80;
                                v4 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v24, v76);
                                if ( !v4 )
                                {
LABEL_65:
                                  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                                           a2,
                                                           "sha3[",
                                                           4LL,
                                                           &off_2FC5E0) )
                                    goto LABEL_66;
                                  one = (__int64 *)clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
                                                     a2,
                                                     aBits,
                                                     4LL,
                                                     &off_2FC5F8);
                                  if ( one )
                                  {
                                    v14 = *one;
                                    v15 = 1LL;
                                  }
                                  else
                                  {
                                    v15 = 0LL;
                                  }
                                  uucore::features::checksum::create_sha3(&v84, v15, v14);
                                  v4 = v85;
                                  v5 = v86;
                                  if ( v84 )
                                  {
                                    v83 = v87;
                                    v82[0] = v84;
                                    v82[1] = v85;
                                    v82[2] = v86;
                                    v4 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v24, v82);
                                    if ( !v4 )
                                    {
LABEL_66:
                                      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                                               a2,
                                                               "sha3-224",
                                                               8LL,
                                                               &off_2FC610)
                                        || (v28[0] = aSha3224_0,
                                            v28[1] = 8LL,
                                            v28[2] = 1LL,
                                            v28[3] = &unk_2FC628,
                                            v28[4] = 224LL,
                                            (v4 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v24, v28)) == 0) )
                                      {
                                        if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                                                 a2,
                                                                 aSha3256_0,
                                                                 8LL,
                                                                 &off_2FC658)
                                          || (v29[0] = aSha3256_1,
                                              v29[1] = 8LL,
                                              v29[2] = 1LL,
                                              v29[3] = &unk_2FC670,
                                              v29[4] = 256LL,
                                              (v4 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v24, v29)) == 0) )
                                        {
                                          if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                                                   a2,
                                                                   aSha3384_0,
                                                                   8LL,
                                                                   &off_2FC6A0)
                                            || (v30[0] = aSha3384,
                                                v30[1] = 8LL,
                                                v30[2] = 1LL,
                                                v30[3] = &unk_2FC6B8,
                                                v30[4] = 384LL,
                                                (v4 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v24, v30)) == 0) )
                                          {
                                            if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                                                     a2,
                                                                     aSha3512_0,
                                                                     8LL,
                                                                     &off_2FC6E8)
                                              || (v31[0] = aSha3512,
                                                  v31[1] = 8LL,
                                                  v31[2] = 1LL,
                                                  v31[3] = &unk_2FC700,
                                                  v31[4] = 512LL,
                                                  (v4 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v24, v31)) == 0) )
                                            {
                                              if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                                                      a2,
                                                                      aShake128,
                                                                      8LL,
                                                                      &off_2FC730) )
                                              {
                                                v16 = (__int64 *)clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
                                                                   a2,
                                                                   aBits,
                                                                   4LL,
                                                                   &off_2FC748);
                                                if ( !v16 )
                                                {
                                                  v88[0] = 0x8000000000000006LL;
                                                  v4 = <T as core::convert::Into<U>>::into(v88, &off_2FC760);
                                                  goto LABEL_50;
                                                }
                                                v17 = *v16;
                                                v32[0] = aShake128_0;
                                                v32[1] = 8LL;
                                                v32[2] = 1LL;
                                                v32[3] = &unk_2FC778;
                                                v32[4] = v17;
                                                v4 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v24, v32);
                                                if ( v4 )
                                                  goto LABEL_50;
                                              }
                                              if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                                                      a2,
                                                                      aShake256,
                                                                      8LL,
                                                                      &off_2FC7A8) )
                                              {
                                                v18 = (__int64 *)clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
                                                                   a2,
                                                                   aBits,
                                                                   4LL,
                                                                   &off_2FC7C0);
                                                if ( !v18 )
                                                {
                                                  v89[0] = 0x8000000000000007LL;
                                                  v4 = <T as core::convert::Into<U>>::into(v89, &off_2FC7D8);
                                                  goto LABEL_50;
                                                }
                                                v19 = *v18;
                                                v33[0] = aShake256_0;
                                                v33[1] = 8LL;
                                                v33[2] = 1LL;
                                                v33[3] = &unk_2FC7F0;
                                                v33[4] = v19;
                                                v4 = uu_hashsum::create_algorithm_from_flags::{{closure}}(&v24, v33);
                                                if ( v4 )
                                                  goto LABEL_50;
                                              }
                                              if ( v25 )
                                              {
                                                *(_QWORD *)a1 = v25;
                                                v20 = v27;
                                                *(_OWORD *)(a1 + 8) = v26;
                                                *(_OWORD *)(a1 + 24) = v20;
                                                return a1;
                                              }
                                              v90[0] = 0x800000000000000ELL;
                                              v4 = <T as core::convert::Into<U>>::into(v90, &off_2FC820);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_50:
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)a1 = 0LL;
  if ( v25 )
  {
    v21 = v27;
    if ( *(_QWORD *)v27 )
    {
      (*(void (__fastcall **)(_QWORD))v27)(*((_QWORD *)&v26 + 1));
      v21 = v27;
    }
    v22 = *(_QWORD *)(v21 + 8);
    if ( v22 )
      _rust_dealloc(*((_QWORD *)&v26 + 1), v22, *(_QWORD *)(v21 + 16));
  }
  return a1;
}
