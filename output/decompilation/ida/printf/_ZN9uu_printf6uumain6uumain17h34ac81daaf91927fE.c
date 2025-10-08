__int64 __fastcall uu_printf::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  char v8; // bl
  __int64 v9; // rax
  __int8 v10; // al
  __int64 v11; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int128 v15; // rax
  char v16; // [rsp+8h] [rbp-460h] BYREF
  __int64 v17; // [rsp+10h] [rbp-458h] BYREF
  __int64 v18; // [rsp+18h] [rbp-450h]
  unsigned __int64 v19; // [rsp+20h] [rbp-448h]
  __int64 v20; // [rsp+28h] [rbp-440h] BYREF
  __int64 v21; // [rsp+30h] [rbp-438h]
  _BYTE v22[48]; // [rsp+38h] [rbp-430h] BYREF
  _BYTE *v23; // [rsp+68h] [rbp-400h] BYREF
  __m256i v24; // [rsp+70h] [rbp-3F8h]
  _BYTE *v25; // [rsp+90h] [rbp-3D8h] BYREF
  __int8 v26; // [rsp+98h] [rbp-3D0h]
  _BYTE v27[31]; // [rsp+99h] [rbp-3CFh]
  _QWORD v28[2]; // [rsp+B8h] [rbp-3B0h] BYREF
  __int64 v29; // [rsp+C8h] [rbp-3A0h]
  unsigned __int64 v30; // [rsp+D0h] [rbp-398h]
  __int128 v31; // [rsp+D8h] [rbp-390h]
  __int64 v32; // [rsp+E8h] [rbp-380h]
  __int64 v33; // [rsp+F0h] [rbp-378h]
  _BYTE v34[56]; // [rsp+F8h] [rbp-370h] BYREF
  _QWORD v35[8]; // [rsp+130h] [rbp-338h] BYREF
  _BYTE dest[720]; // [rsp+170h] [rbp-2F8h] BYREF

  uu_printf::uu_app(dest);
  clap_builder::builder::command::Command::get_matches_from(v34, dest, a1, a2);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v34);
  v2 = clap_builder::parser::error::MatchesError::unwrap(dest);
  if ( !v2 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v22, aMissingOperand, 15LL);
    *(_QWORD *)&dest[16] = *(_QWORD *)&v22[16];
    *(_OWORD *)dest = *(_OWORD *)v22;
    *(_DWORD *)&dest[24] = 1;
    v7 = alloc::boxed::Box<T>::new(dest);
    goto LABEL_18;
  }
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(_QWORD *)(v2 + 16);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v34);
  clap_builder::parser::error::MatchesError::unwrap(v35, dest);
  if ( v35[0] )
  {
    core::iter::traits::iterator::Iterator::collect(&v17, v35);
    v5 = v18;
    v6 = v19;
  }
  else
  {
    v17 = 0LL;
    v18 = 8LL;
    v19 = 0LL;
    v5 = 8LL;
    v6 = 0LL;
  }
  v29 = v5;
  v30 = v6;
  v28[0] = 0LL;
  v31 = 0LL;
  v33 = v3;
  v20 = v3;
  v32 = v4;
  v21 = v4;
  v8 = 0;
  while ( 1 )
  {
    uucore::features::format::parse_spec_and_escape::{{closure}}(v22, &v20);
    if ( v22[0] == 7 )
      goto LABEL_11;
    if ( v22[0] == 8 )
    {
LABEL_15:
      v11 = alloc::boxed::Box<T>::new(&v22[8]);
LABEL_16:
      v7 = v11;
LABEL_17:
      core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(&v17);
      goto LABEL_18;
    }
    if ( v22[0] == 9 )
      break;
    v8 = 1;
LABEL_11:
    *(_OWORD *)&dest[32] = *(_OWORD *)&v22[32];
    *(_OWORD *)&dest[17] = *(_OWORD *)&v22[17];
    *(_OWORD *)&dest[1] = *(_OWORD *)&v22[1];
    dest[0] = v22[0];
    v9 = std::io::stdio::stdout();
    uucore::features::format::FormatItem<C>::write(&v25, dest, v9, v28);
    v10 = v26;
    if ( v25 != (_BYTE *)0x8000000000000016LL )
    {
LABEL_14:
      *(_OWORD *)&v24.m256i_u64[2] = *(_OWORD *)&v27[15];
      *(_OWORD *)&v24.m256i_i8[1] = *(_OWORD *)v27;
      v23 = v25;
      v24.m256i_i8[0] = v10;
      v11 = alloc::boxed::Box<T>::new(&v23);
      goto LABEL_16;
    }
    if ( (v26 & 1) != 0 )
      goto LABEL_13;
  }
  uucore::features::format::argument::FormatArguments::start_next_batch(v28);
  if ( (v8 & 1) == 0 )
  {
    if ( *((_QWORD *)&v31 + 1) < v30 )
    {
      if ( (unsigned __int64)v31 >= v30 || (v14 = (_QWORD *)(v29 + 40 * v31), *v14 != 0x800000000000000ALL) )
      {
        *(_QWORD *)dest = &off_1149F8;
        *(_QWORD *)&dest[8] = 1LL;
        *(_QWORD *)&dest[16] = &v16;
        *(_OWORD *)&dest[24] = 0LL;
        core::panicking::panic_fmt(dest, &off_114AD0);
      }
      v25 = v14 + 1;
      *(_QWORD *)&v15 = uucore::util_name();
      *(_OWORD *)v22 = v15;
      v23 = v22;
      v24.m256i_i64[0] = (__int64)<&T as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &unk_114A08;
      *(_QWORD *)&dest[8] = 2LL;
      *(_QWORD *)&dest[16] = &v23;
      *(_OWORD *)&dest[24] = 1uLL;
      std::io::stdio::_eprint(dest);
      *(_QWORD *)v22 = &v25;
      *(_QWORD *)&v22[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)dest = &off_114A28;
      *(_QWORD *)&dest[8] = 2LL;
      *(_QWORD *)&dest[16] = v22;
      *(_OWORD *)&dest[24] = 1uLL;
      std::io::stdio::_eprint(dest);
    }
LABEL_13:
    v7 = 0LL;
    goto LABEL_17;
  }
  while ( *((_QWORD *)&v31 + 1) < v30 )
  {
    v20 = v33;
    v21 = v32;
    while ( 1 )
    {
      uucore::features::format::parse_spec_and_escape::{{closure}}(v22, &v20);
      if ( v22[0] == 9 )
        break;
      if ( v22[0] == 8 )
        goto LABEL_15;
      *(_OWORD *)&dest[32] = *(_OWORD *)&v22[32];
      *(_OWORD *)&dest[17] = *(_OWORD *)&v22[17];
      *(_OWORD *)&dest[1] = *(_OWORD *)&v22[1];
      dest[0] = v22[0];
      v13 = std::io::stdio::stdout();
      uucore::features::format::FormatItem<C>::write(&v25, dest, v13, v28);
      v10 = v26;
      if ( v25 != (_BYTE *)0x8000000000000016LL )
        goto LABEL_14;
      if ( (v26 & 1) != 0 )
        goto LABEL_13;
    }
    uucore::features::format::argument::FormatArguments::start_next_batch(v28);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(&v17);
  v7 = 0LL;
LABEL_18:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v34);
  return v7;
}