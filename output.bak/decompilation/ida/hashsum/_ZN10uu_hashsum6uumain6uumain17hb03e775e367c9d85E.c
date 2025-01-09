__int64 __fastcall uu_hashsum::uumain::uumain(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  __int128 v3; // xmm0
  __int64 v4; // rax
  __int64 v5; // rdx
  const char *v6; // rsi
  char v7; // bp
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r14
  char v11; // bp
  unsigned __int8 v12; // r12
  char v13; // r13
  unsigned __int8 v14; // r15
  unsigned __int8 v15; // r13
  unsigned __int8 v16; // al
  char v17; // bp
  char v18; // bp
  const char *v20; // rax
  const char *v21; // rcx
  char v22; // bp
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // r13
  char v27; // r12
  char **v28; // rax
  unsigned __int8 v29; // [rsp+Dh] [rbp-72Bh]
  char v30; // [rsp+Dh] [rbp-72Bh]
  char flag; // [rsp+Eh] [rbp-72Ah]
  unsigned __int8 v32; // [rsp+Fh] [rbp-729h]
  __int64 v33; // [rsp+10h] [rbp-728h]
  _OWORD v34[3]; // [rsp+18h] [rbp-720h] BYREF
  __int64 v35; // [rsp+48h] [rbp-6F0h]
  __int128 v36; // [rsp+50h] [rbp-6E8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-6D8h]
  _BYTE v38[8]; // [rsp+70h] [rbp-6C8h] BYREF
  __int64 v39; // [rsp+78h] [rbp-6C0h]
  __int64 v40; // [rsp+80h] [rbp-6B8h]
  __int128 v41; // [rsp+88h] [rbp-6B0h]
  __int64 v42; // [rsp+98h] [rbp-6A0h] BYREF
  __int128 v43; // [rsp+A0h] [rbp-698h]
  __int64 v44; // [rsp+B0h] [rbp-688h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-680h]
  __int128 v46; // [rsp+C0h] [rbp-678h] BYREF
  __int128 v47; // [rsp+D0h] [rbp-668h]
  __int64 v48; // [rsp+E0h] [rbp-658h]
  _OWORD v49[2]; // [rsp+108h] [rbp-630h] BYREF
  __int64 v50; // [rsp+128h] [rbp-610h]
  _BYTE src[712]; // [rsp+130h] [rbp-608h] BYREF
  char v52; // [rsp+3F8h] [rbp-340h]
  __int128 v53[4]; // [rsp+400h] [rbp-338h] BYREF
  _BYTE dest[760]; // [rsp+440h] [rbp-2F8h] BYREF

  v2 = 0x8000000000000000LL;
  v44 = a1;
  v45 = a2;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v46, &v44);
  if ( (_QWORD)v46 == 0x8000000000000000LL )
  {
    std::sys::os_str::bytes::Slice::to_owned(src, aHashsum, 7LL);
    v37 = *(_QWORD *)&src[16];
    v3 = *(_OWORD *)src;
  }
  else
  {
    v37 = v47;
    v3 = v46;
  }
  v36 = v3;
  v4 = std::path::Path::file_stem(*((_QWORD *)&v3 + 1), v37);
  v6 = aHashsum;
  if ( v4 )
    v6 = (const char *)v4;
  else
    v5 = 7LL;
  std::sys::os_str::bytes::Slice::to_string_lossy(v38, v6, v5);
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, &v36);
  *(_QWORD *)&v47 = *(_QWORD *)&src[16];
  v46 = *(_OWORD *)src;
  core::iter::traits::iterator::Iterator::chain(v49, &v46, v44, v45);
  uu_hashsum::uu_app(src, v39, v40);
  memcpy(dest, src, 0x2C8uLL);
  v7 = v52;
  v48 = v50;
  v47 = v49[1];
  v46 = v49[0];
  clap_builder::builder::command::Command::try_get_matches_from(src, dest, &v46);
  if ( *(_QWORD *)src == 0x8000000000000000LL )
  {
    v8 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&src[8]);
LABEL_30:
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v38);
    goto LABEL_31;
  }
  v35 = *(_QWORD *)&src[48];
  v34[2] = *(_OWORD *)&src[32];
  v34[1] = *(_OWORD *)&src[16];
  v34[0] = *(_OWORD *)src;
  if ( (unsigned __int8)alloc::string::<impl core::cmp::PartialEq<&str> for alloc::borrow::Cow<str>>::eq(v39, v40)
    && (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, v34, aLength, 6LL),
        (v9 = (_QWORD *)clap_builder::parser::error::MatchesError::unwrap(aLength, 6LL, src)) != 0LL) )
  {
    uucore::features::checksum::calculate_blake2b_length(src, *v9);
    v8 = *(_QWORD *)&src[8];
    v2 = *(_QWORD *)&src[16];
    if ( *(_QWORD *)src )
    {
LABEL_29:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v34);
      goto LABEL_30;
    }
    if ( v7 )
      goto LABEL_13;
  }
  else
  {
    v8 = 0LL;
    if ( v7 )
    {
LABEL_13:
      uu_hashsum::create_algorithm_from_flags((__int64)src, (__int64)v34);
      goto LABEL_16;
    }
  }
  uucore::features::checksum::detect_algo(src, v39, v40, v8, v2);
LABEL_16:
  v8 = *(_QWORD *)&src[8];
  v10 = *(_QWORD *)&src[16];
  if ( !*(_QWORD *)src )
    goto LABEL_29;
  v43 = *(_OWORD *)&src[24];
  v33 = *(_QWORD *)src;
  v41 = *(_OWORD *)src;
  v42 = *(_QWORD *)&src[16];
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v34, aBinary, 6LL);
  if ( !flag )
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v34, aText, 4LL);
  v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v34, aCheck, 5LL);
  v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v34, aStatus, 6LL);
  v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v34, aQuiet, 5LL);
  v29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v34, aStrict, 6LL);
  v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v34, aWarn, 4LL);
  v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v34, aIgnoreMissing, 14LL);
  v15 = v12 | v13;
  if ( v14 )
  {
    v16 = 1;
    if ( !v11 )
      goto LABEL_27;
    goto LABEL_23;
  }
  if ( v11 )
  {
LABEL_23:
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v34, aText, 4LL);
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v34, aBinary, 6LL) | v17;
    v16 = 11;
    if ( v18 != 1 )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, v34, "fileEDOMmode{", 4LL);
      clap_builder::parser::error::MatchesError::unwrap(&v46, "fileEDOMmode{", 4LL, src);
      core::option::Option<T>::map_or_else(src, &v46);
      v8 = uucore::features::checksum::perform_checksum_validation(
             *(_DWORD *)&src[8],
             *(_DWORD *)&src[8] + 16 * *(_DWORD *)&src[16],
             v33,
             v8,
             1,
             DWORD2(v43),
             (v14 << 8) | ((unsigned __int64)((v12 ^ 1u) & v32) << 40) | ((unsigned __int64)v29 << 32) | (v15 << 16) | (v12 << 24));
      core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(src);
LABEL_28:
      core::ptr::drop_in_place<uu_hashsum::Options>(v10, v43);
      goto LABEL_29;
    }
LABEL_27:
    v8 = alloc::boxed::Box<T>::new(v16);
    goto LABEL_28;
  }
  if ( v15 | v29 )
  {
    v16 = v15 | 2;
    goto LABEL_27;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, v34, "no-namescapacitys", 8LL);
  if ( *(_DWORD *)src == 2 )
    v20 = *(const char **)&src[8];
  else
    v20 = 0LL;
  v21 = "";
  if ( v20 )
    v21 = v20;
  v30 = *v21;
  v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v34, aZero_0, 4LL);
  v23 = <alloc::boxed::Box<F,A> as core::ops::function::Fn<Args>>::call(&v42);
  v25 = v24;
  v26 = *((_QWORD *)&v43 + 1);
  v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v34, aTag, 3LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, v34, "fileEDOMmode{", 4LL);
  clap_builder::parser::error::MatchesError::unwrap(v53, "fileEDOMmode{", 4LL, src);
  *(_QWORD *)src = v33;
  *(_QWORD *)&src[8] = v8;
  *(_QWORD *)&src[16] = v23;
  *(_QWORD *)&src[24] = v25;
  *(_QWORD *)&src[32] = v26;
  src[40] = flag;
  src[41] = v27;
  src[42] = v30;
  src[43] = v22;
  if ( *(_QWORD *)&v53[0] )
    v28 = uu_hashsum::hashsum((__int64)src, v53);
  else
    v28 = uu_hashsum::hashsum((__int64)src);
  v8 = (__int64)v28;
  core::ptr::drop_in_place<uu_hashsum::Options>(v42, v43);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v34);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v38);
LABEL_31:
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v36);
  return v8;
}
