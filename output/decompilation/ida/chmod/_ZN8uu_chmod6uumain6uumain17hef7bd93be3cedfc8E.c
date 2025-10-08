__int64 __fastcall uu_chmod::uumain::uumain(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rbx
  char v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // ebp
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  int v13; // r15d
  int v14; // ebp
  char v16; // [rsp+Ch] [rbp-70Ch]
  char v17; // [rsp+Dh] [rbp-70Bh]
  char v18; // [rsp+Eh] [rbp-70Ah]
  char flag; // [rsp+Fh] [rbp-709h]
  unsigned __int64 v20; // [rsp+10h] [rbp-708h]
  unsigned __int64 v21; // [rsp+18h] [rbp-700h]
  __int64 v22; // [rsp+20h] [rbp-6F8h] BYREF
  int v23; // [rsp+2Ch] [rbp-6ECh]
  unsigned __int64 v24; // [rsp+30h] [rbp-6E8h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-6E0h]
  __int64 v26; // [rsp+40h] [rbp-6D8h]
  __int64 v27; // [rsp+48h] [rbp-6D0h] BYREF
  _QWORD v28[6]; // [rsp+50h] [rbp-6C8h]
  _QWORD v29[2]; // [rsp+80h] [rbp-698h] BYREF
  __int128 v30; // [rsp+90h] [rbp-688h]
  __int128 v31; // [rsp+A0h] [rbp-678h]
  __int64 v32; // [rsp+B0h] [rbp-668h]
  __int64 v33; // [rsp+B8h] [rbp-660h]
  __int128 v34; // [rsp+C0h] [rbp-658h] BYREF
  __int64 v35; // [rsp+D0h] [rbp-648h]
  _QWORD v36[4]; // [rsp+D8h] [rbp-640h] BYREF
  __int128 v37; // [rsp+F8h] [rbp-620h] BYREF
  _QWORD *v38; // [rsp+108h] [rbp-610h]
  _BYTE src[24]; // [rsp+110h] [rbp-608h] BYREF
  __int128 v40; // [rsp+128h] [rbp-5F0h]
  __int64 v41; // [rsp+138h] [rbp-5E0h]
  int v42; // [rsp+148h] [rbp-5D0h]
  _QWORD v43[8]; // [rsp+3E0h] [rbp-338h] BYREF
  __int128 dest; // [rsp+420h] [rbp-2F8h] BYREF
  _QWORD *v45; // [rsp+430h] [rbp-2E8h]
  __int64 v46; // [rsp+438h] [rbp-2E0h]
  __int64 v47; // [rsp+440h] [rbp-2D8h]

  core::iter::traits::iterator::Iterator::skip(&dest, a1, a2);
  uu_chmod::extract_negative_modes((__int64)src, &dest);
  v2 = *(_QWORD *)&src[8];
  v3 = *(_QWORD *)src;
  v4 = *(_QWORD *)&src[16];
  v34 = v40;
  v35 = v41;
  uu_chmod::uu_app(src);
  clap_builder::builder::command::Command::after_help(&dest, src);
  clap_builder::builder::command::Command::try_get_matches_from(&v27, &dest, &v34);
  if ( v27 != 0x8000000000000000LL )
  {
    v32 = v28[5];
    v31 = *(_OWORD *)&v28[3];
    v30 = *(_OWORD *)&v28[1];
    v29[0] = v27;
    v29[1] = v28[0];
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             v29,
             "changesquietverbosepreserve-rootRFILEError flushing stdout: \v",
             7LL);
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v29,
            "quietverbosepreserve-rootRFILEError flushing stdout: \v",
            5LL);
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v29,
            "verbosepreserve-rootRFILEError flushing stdout: \v",
            7LL);
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v29,
            "preserve-rootRFILEError flushing stdout: \v",
            13LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, v29, "RFILEError flushing stdout: \v", 5LL);
    v7 = clap_builder::parser::error::MatchesError::unwrap("RFILEError flushing stdout: \v", 5LL, src);
    if ( v7 )
    {
      std::fs::metadata(src);
      if ( *(_DWORD *)src == 2 )
      {
        v22 = *(_QWORD *)&src[8];
        v8 = *(_QWORD *)(v7 + 8);
        v9 = *(_QWORD *)(v7 + 16);
        v27 = 0LL;
        v28[0] = v8;
        v28[1] = v9;
        LOBYTE(v28[2]) = 1;
        v36[0] = &v27;
        v36[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v36[2] = &v22;
        v36[3] = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &off_EAEA0;
        *((_QWORD *)&dest + 1) = 2LL;
        v47 = 0LL;
        v45 = v36;
        v46 = 2LL;
        core::option::Option<T>::map_or_else(&v37, &dest);
        LODWORD(v46) = 1;
        dest = v37;
        v45 = v38;
        v5 = alloc::boxed::Box<T>::new(&dest);
        core::ptr::drop_in_place<std::io::error::Error>(v22);
        v6 = 1;
LABEL_22:
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v29);
        goto LABEL_23;
      }
      v23 = v42 & 0xFFF;
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, v29, aMode, 4LL);
    v11 = clap_builder::parser::error::MatchesError::unwrap(aMode, 4LL, src);
    if ( v3 == 0x8000000000000000LL )
    {
      if ( !v11 )
        core::option::unwrap_failed(&off_EAEC0);
      v6 = 1;
      <alloc::string::String as core::clone::Clone>::clone(&v24, v11);
    }
    else
    {
      v24 = v3;
      v25 = v2;
      v26 = v4;
      v6 = 0;
    }
    v21 = v2;
    v20 = v3;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, v29);
    clap_builder::parser::error::MatchesError::unwrap(v43, src);
    if ( v43[0]
      && (core::iter::traits::iterator::Iterator::collect(src, v43),
          dest = *(_OWORD *)&src[8],
          *(_QWORD *)src != 0x8000000000000000LL) )
    {
      *(_OWORD *)v28 = dest;
      v27 = *(_QWORD *)src;
      if ( v7 )
      {
LABEL_15:
        alloc::vec::Vec<T,A>::push(&v27, &v24);
        v12 = 0x8000000000000000LL;
        if ( v28[1] )
          goto LABEL_16;
        goto LABEL_20;
      }
    }
    else
    {
      v27 = 0LL;
      *(_OWORD *)v28 = 8uLL;
      if ( v7 )
        goto LABEL_15;
    }
    v12 = v24;
    v3 = v25;
    v33 = v26;
    if ( v28[1] )
    {
LABEL_16:
      v13 = v10;
      uucore::features::perms::configure_symlink_and_recursion(src, v29, 1LL);
      v14 = *(_DWORD *)&src[8];
      v5 = *(_QWORD *)src;
      if ( !*(_QWORD *)src )
      {
        BYTE8(v40) = flag;
        BYTE9(v40) = v18;
        BYTE10(v40) = v17;
        BYTE11(v40) = v16;
        BYTE12(v40) = src[8] & 1;
        *(_QWORD *)&v40 = __PAIR64__(v23, v13);
        *(_QWORD *)src = v12;
        *(_QWORD *)&src[8] = v3;
        *(_QWORD *)&src[16] = v33;
        BYTE14(v40) = BYTE2(v14);
        BYTE13(v40) = BYTE1(v14) & 1;
        v5 = uu_chmod::Chmoder::chmod(src, v28[0], v28[1]);
        core::ptr::drop_in_place<uu_chmod::Chmoder>(v12, v3);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v27);
        v2 = v21;
        v3 = v20;
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v29);
        goto LABEL_23;
      }
      goto LABEL_21;
    }
LABEL_20:
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
      &dest,
      "missing operandEach MODE is of the form [ugoa]*([-+=]([rwxXst]*|[ugo]))+|[-+=]?[0-7]+.changesquietverbosepreserve-"
      "rootRFILEError flushing stdout: \v",
      15LL);
    *(_QWORD *)&src[16] = v45;
    *(_OWORD *)src = dest;
    LODWORD(v40) = 1;
    v5 = alloc::boxed::Box<T>::new(src);
LABEL_21:
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v12, v3);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v27);
    v2 = v21;
    v3 = v20;
    goto LABEL_22;
  }
  v5 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v28[0]);
  v6 = 1;
LABEL_23:
  if ( v3 != 0x8000000000000000LL && v6 )
    core::ptr::drop_in_place<alloc::string::String>(v3, v2);
  return v5;
}