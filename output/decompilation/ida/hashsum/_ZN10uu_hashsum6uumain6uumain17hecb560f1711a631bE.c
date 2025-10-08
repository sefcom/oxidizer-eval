__int64 __fastcall uu_hashsum::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  const char *v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rbp
  char v11; // r14
  __int64 v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // r12
  char v15; // bl
  unsigned __int8 v16; // r14
  char v17; // bp
  unsigned __int8 v18; // bp
  unsigned __int8 v19; // al
  char v20; // bl
  char v21; // bl
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rbx
  const char *v26; // rax
  const char *v27; // rcx
  char v28; // r14
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rbx
  char v32; // bp
  __int64 v33; // rax
  unsigned __int8 v34; // [rsp+Dh] [rbp-70Bh]
  char v35; // [rsp+Dh] [rbp-70Bh]
  char flag; // [rsp+Eh] [rbp-70Ah]
  unsigned __int8 v37; // [rsp+Fh] [rbp-709h]
  unsigned __int8 v38; // [rsp+10h] [rbp-708h]
  __int64 v39; // [rsp+10h] [rbp-708h]
  __int64 v40; // [rsp+18h] [rbp-700h]
  __int64 v41; // [rsp+20h] [rbp-6F8h]
  __int64 v42; // [rsp+28h] [rbp-6F0h]
  __int64 v43; // [rsp+30h] [rbp-6E8h]
  __int64 v44; // [rsp+38h] [rbp-6E0h]
  _OWORD v45[3]; // [rsp+40h] [rbp-6D8h] BYREF
  __int64 v46; // [rsp+70h] [rbp-6A8h]
  __int64 v47; // [rsp+78h] [rbp-6A0h] BYREF
  __int64 v48; // [rsp+80h] [rbp-698h]
  _QWORD v49[3]; // [rsp+88h] [rbp-690h] BYREF
  __int128 v50; // [rsp+A0h] [rbp-678h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-668h]
  _BYTE v52[40]; // [rsp+E8h] [rbp-630h] BYREF
  _BYTE src[712]; // [rsp+110h] [rbp-608h] BYREF
  char v54; // [rsp+3D8h] [rbp-340h]
  _QWORD v55[8]; // [rsp+3E0h] [rbp-338h] BYREF
  _BYTE dest[760]; // [rsp+420h] [rbp-2F8h] BYREF

  v47 = a1;
  v48 = a2;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v50, &v47);
  v3 = v50;
  if ( __OFSUB__(-(__int64)v50, 1LL) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, "hashsum", 7LL);
    v4 = *(_QWORD *)&src[8];
    v3 = *(_QWORD *)src;
    v5 = *(_QWORD *)&src[16];
  }
  else
  {
    v4 = *((_QWORD *)&v50 + 1);
    v5 = v51;
  }
  v44 = v3;
  v43 = v4;
  v6 = std::path::Path::file_stem(v4, v5);
  if ( !v6 )
    v7 = 7LL;
  v8 = "hashsum";
  if ( v6 )
    v8 = (const char *)v6;
  alloc::string::String::from_utf8_lossy(v49, v8, v7);
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, v4, v5);
  v51 = *(_QWORD *)&src[16];
  v50 = *(_OWORD *)src;
  core::iter::traits::iterator::Iterator::chain(v52, &v50, v47, v48);
  v9 = v49[1];
  v10 = v49[2];
  uu_hashsum::uu_app(src);
  memcpy(dest, src, 0x2C8uLL);
  v11 = v54;
  clap_builder::builder::command::Command::try_get_matches_from(src, dest, v52);
  if ( *(_QWORD *)src == 0x8000000000000000LL )
  {
    v12 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&src[8]);
LABEL_35:
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v49[0], v9);
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v44, v43);
    return v12;
  }
  v46 = *(_QWORD *)&src[48];
  v45[2] = *(_OWORD *)&src[32];
  v45[1] = *(_OWORD *)&src[16];
  v45[0] = *(_OWORD *)src;
  if ( (unsigned __int8)alloc::string::<impl core::cmp::PartialEq<&str> for alloc::borrow::Cow<str>>::eq(v9, v10)
    && (clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, v45),
        (v13 = (_QWORD *)clap_builder::parser::error::MatchesError::unwrap(src)) != 0LL) )
  {
    uucore::features::checksum::calculate_blake2b_length(src, *v13);
    v12 = *(_QWORD *)&src[8];
    v2 = *(_QWORD *)&src[16];
    if ( (src[0] & 1) != 0 )
    {
LABEL_34:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v45);
      goto LABEL_35;
    }
    if ( v11 )
      goto LABEL_14;
  }
  else
  {
    v12 = 0LL;
    if ( v11 )
    {
LABEL_14:
      uu_hashsum::create_algorithm_from_flags(src, v45);
      goto LABEL_17;
    }
  }
  uucore::features::checksum::detect_algo(src, v9, v10, v12, v2);
LABEL_17:
  v12 = *(_QWORD *)&src[8];
  v14 = *(_QWORD *)&src[16];
  if ( !*(_QWORD *)src )
    goto LABEL_34;
  v41 = *(_QWORD *)src;
  v40 = *(_QWORD *)&src[24];
  v42 = *(_QWORD *)&src[32];
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v45, aBinary, 6LL);
  if ( !flag )
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v45, aText, 4LL);
  v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v45, aCheck, 5LL);
  v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v45, aStatus, 6LL);
  v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v45, aQuiet, 5LL);
  v34 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v45, aStrict, 6LL);
  v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v45, aWarn, 4LL);
  v38 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v45, aIgnoreMissing, 14LL);
  v18 = v16 | v17;
  if ( v38 )
  {
    v19 = 1;
    if ( !v15 )
      goto LABEL_32;
    goto LABEL_24;
  }
  if ( v15 )
  {
LABEL_24:
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v45, aText, 4LL);
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v45, aBinary, 6LL) | v20;
    v19 = 11;
    if ( v21 != 1 )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, v45);
      clap_builder::parser::error::MatchesError::unwrap(&v50, src);
      core::option::Option<T>::map_or_else(src, &v50);
      v22 = 0x1000000;
      if ( !v18 )
        v22 = ((v16 ^ 1) & v37 | 2) << 24;
      v23 = 0;
      if ( !v16 )
        v23 = v22;
      v24 = *(_QWORD *)&src[8];
      v12 = uucore::features::checksum::perform_checksum_validation(
              *(_QWORD *)&src[8],
              *(_QWORD *)&src[8] + 16LL * *(_QWORD *)&src[16],
              v41,
              v12,
              v42,
              v23 | (v34 << 16) | (v38 << 8));
      core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(*(_QWORD *)src, v24);
      goto LABEL_33;
    }
LABEL_32:
    v12 = alloc::boxed::Box<T>::new(v19);
LABEL_33:
    core::ptr::drop_in_place<uu_hashsum::Options>(v14, v40);
    goto LABEL_34;
  }
  if ( v18 | v34 )
  {
    v19 = v18 | 2;
    goto LABEL_32;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, v45);
  if ( *(_DWORD *)src == 2 )
    v26 = *(const char **)&src[8];
  else
    v26 = 0LL;
  v27 = "";
  if ( v26 )
    v27 = v26;
  v28 = *v27;
  v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v45, aZero_0, 4LL);
  v29 = (*(__int64 (__fastcall **)(__int64))(v40 + 40))(v14);
  v39 = v30;
  v31 = v29;
  v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v45, aTag, 3LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, v45);
  clap_builder::parser::error::MatchesError::unwrap(v55, src);
  *(_QWORD *)src = v41;
  *(_QWORD *)&src[8] = v12;
  *(_QWORD *)&src[16] = v31;
  *(_QWORD *)&src[24] = v39;
  *(_QWORD *)&src[32] = v42;
  src[40] = flag;
  src[41] = v32;
  src[42] = v28;
  src[43] = v35;
  if ( v55[0] )
    v33 = uu_hashsum::hashsum(src, v55);
  else
    v33 = uu_hashsum::hashsum(src);
  v12 = v33;
  core::ptr::drop_in_place<uu_hashsum::Options>(v14, v40);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v45);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v49[0], v9);
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v44, v43);
  return v12;
}