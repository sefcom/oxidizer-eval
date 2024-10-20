__int64 __fastcall uu_tee::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rdx
  __int64 v6; // [rsp+0h] [rbp-5C8h]
  int v7; // [rsp+8h] [rbp-5C0h]
  struct _Unwind_Exception *v8; // [rsp+10h] [rbp-5B8h]
  char v9; // [rsp+15h] [rbp-5B3h]
  char v10; // [rsp+16h] [rbp-5B2h]
  char v11; // [rsp+17h] [rbp-5B1h]
  int v12; // [rsp+18h] [rbp-5B0h]
  __int64 v13; // [rsp+18h] [rbp-5B0h]
  __int64 v14; // [rsp+20h] [rbp-5A8h]
  char v15; // [rsp+2Fh] [rbp-599h]
  __int64 v16; // [rsp+40h] [rbp-588h]
  __int64 one; // [rsp+48h] [rbp-580h]
  char v18; // [rsp+55h] [rbp-573h]
  char v19; // [rsp+56h] [rbp-572h]
  char v20; // [rsp+57h] [rbp-571h]
  char flag; // [rsp+6Fh] [rbp-559h]
  __int64 v22; // [rsp+80h] [rbp-548h]
  _OWORD v23[6]; // [rsp+90h] [rbp-538h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-4D8h]
  __int128 v25; // [rsp+F8h] [rbp-4D0h] BYREF
  __int128 v26; // [rsp+108h] [rbp-4C0h]
  __int128 v27; // [rsp+118h] [rbp-4B0h]
  __int128 v28; // [rsp+128h] [rbp-4A0h]
  __int128 v29; // [rsp+138h] [rbp-490h]
  __int128 v30; // [rsp+148h] [rbp-480h]
  __int64 v31; // [rsp+158h] [rbp-470h]
  int v32[26]; // [rsp+160h] [rbp-468h] BYREF
  int dest[178]; // [rsp+1C8h] [rbp-400h] BYREF
  __int128 v34; // [rsp+490h] [rbp-138h]
  __int128 v35; // [rsp+4A0h] [rbp-128h]
  __int128 v36; // [rsp+4B0h] [rbp-118h]
  __int128 v37; // [rsp+4C0h] [rbp-108h]
  __int128 v38; // [rsp+4D0h] [rbp-F8h]
  __int128 v39; // [rsp+4E0h] [rbp-E8h]
  __int64 v40; // [rsp+4F0h] [rbp-D8h]
  __int128 v41; // [rsp+500h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+510h] [rbp-B8h]
  char v43; // [rsp+518h] [rbp-B0h]
  char v44; // [rsp+519h] [rbp-AFh]
  char v45; // [rsp+51Ah] [rbp-AEh]
  __int128 v46; // [rsp+520h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+530h] [rbp-98h]
  _BYTE v48[24]; // [rsp+538h] [rbp-90h] BYREF
  _BYTE v49[70]; // [rsp+550h] [rbp-78h] BYREF
  char v50; // [rsp+596h] [rbp-32h]
  char v51; // [rsp+597h] [rbp-31h]
  __int64 v52; // [rsp+598h] [rbp-30h]
  char v53; // [rsp+5A3h] [rbp-25h]
  char v54; // [rsp+5A4h] [rbp-24h]
  char v55; // [rsp+5A5h] [rbp-23h]
  char v56; // [rsp+5A6h] [rbp-22h]
  char v57; // [rsp+5A7h] [rbp-21h]
  __int64 v58; // [rsp+5A8h] [rbp-20h] BYREF
  char v59; // [rsp+5B7h] [rbp-11h]

  v59 = 1;
  uu_tee::uu_app(dest);
  v59 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v32, (int)dest, a1, a2, v2, v3, v6, v7, v8, v12);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v25, v32);
  if ( (_QWORD)v25 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v25 + 1),
             &off_108C60);
  v40 = v31;
  v39 = v30;
  v38 = v29;
  v37 = v28;
  v36 = v27;
  v35 = v26;
  v34 = v25;
  v24 = v31;
  v23[5] = v30;
  v23[4] = v29;
  v23[3] = v28;
  v23[2] = v27;
  v23[1] = v26;
  v23[0] = v25;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v23, aAppend, 6LL, &off_108BB8);
  v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v23, aIgnoreInterrup, 17LL, &off_108BD0);
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v49, v23, aFile, 4LL, &off_108BE8);
  core::option::Option<T>::map(v48, v49);
  core::option::Option<T>::unwrap_or_default(&v46, v48);
  v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v23, aIgnorePipeErro, 18LL, &off_108C00);
  if ( (v19 & 1) != 0 )
  {
    v51 = 1;
    v50 = 1;
  }
  else
  {
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v23, aOutputError, 12LL);
    if ( (v18 & 1) != 0 )
    {
      one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v23, aOutputError, 12LL, &off_108C18);
      v52 = one;
      if ( one != 0 )
      {
        v13 = alloc::string::String::as_str(v52);
        v14 = v4;
        v15 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(v13, v4, aWarn, 4LL);
        if ( (v15 & 1) != 0 )
        {
          v53 = 0;
          v50 = 0;
        }
        else
        {
          v11 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(v13, v14, aWarnNopipe, 11LL);
          if ( (v11 & 1) != 0 )
          {
            v54 = 1;
            v50 = 1;
          }
          else
          {
            v10 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(v13, v14, aExit_0, 4LL);
            if ( (v10 & 1) != 0 )
            {
              v55 = 2;
              v50 = 2;
            }
            else
            {
              v9 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(v13, v14, aExitNopipe, 11LL);
              if ( (v9 & 1) == 0 )
                core::panicking::panic(aInternalErrorE, 40LL, &off_108C30);
              v56 = 3;
              v50 = 3;
            }
          }
        }
      }
      else
      {
        v57 = 1;
        v50 = 1;
      }
    }
    else
    {
      v50 = 4;
    }
  }
  v43 = flag & 1;
  v44 = v20 & 1;
  v42 = v47;
  v41 = v46;
  v45 = v50;
  v16 = uu_tee::tee(&v41);
  v58 = v16;
  if ( v16 )
    v22 = <T as core::convert::Into<U>>::into(1LL, &off_108C48);
  else
    v22 = 0LL;
  core::ptr::drop_in_place<uu_tee::Options>(&v41);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v23);
  core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v58);
  return v22;
}
