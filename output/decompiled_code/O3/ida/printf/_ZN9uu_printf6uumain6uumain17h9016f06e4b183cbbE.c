__int64 __fastcall uu_printf::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  char v7; // bp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __m256i v19; // [rsp+0h] [rbp-4A8h] BYREF
  __int64 v20; // [rsp+28h] [rbp-480h] BYREF
  __int64 v21; // [rsp+30h] [rbp-478h]
  __int64 v22; // [rsp+38h] [rbp-470h]
  __int64 v23; // [rsp+40h] [rbp-468h] BYREF
  __int64 v24; // [rsp+48h] [rbp-460h]
  unsigned __int32 v25; // [rsp+50h] [rbp-458h] BYREF
  __int8 v26; // [rsp+54h] [rbp-454h]
  _BYTE v27[27]; // [rsp+55h] [rbp-453h]
  __int64 v28; // [rsp+70h] [rbp-438h]
  __int64 v29; // [rsp+78h] [rbp-430h]
  _QWORD v30[2]; // [rsp+80h] [rbp-428h] BYREF
  _QWORD v31[2]; // [rsp+90h] [rbp-418h] BYREF
  _BYTE v32[48]; // [rsp+A0h] [rbp-408h] BYREF
  __int128 v33; // [rsp+D0h] [rbp-3D8h]
  _BYTE v34[39]; // [rsp+E0h] [rbp-3C8h]
  _BYTE v35[39]; // [rsp+110h] [rbp-398h]
  _BYTE v36[56]; // [rsp+138h] [rbp-370h] BYREF
  _OWORD v37[4]; // [rsp+170h] [rbp-338h] BYREF
  _BYTE dest[760]; // [rsp+1B0h] [rbp-2F8h] BYREF

  uu_printf::uu_app(dest);
  clap_builder::builder::command::Command::get_matches_from(v36, dest, a1, a2);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v36, aFormat_0, 6LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(aFormat_0, 6LL, dest);
  if ( v2 )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v36, aArgument_0, 8LL);
    clap_builder::parser::error::MatchesError::unwrap(v32, aArgument_0, 8LL, dest);
    if ( *(_QWORD *)v32 )
    {
      v37[3] = v33;
      v37[2] = *(_OWORD *)&v32[32];
      v37[1] = *(_OWORD *)&v32[16];
      v37[0] = *(_OWORD *)v32;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v20, v37);
      v3 = v21;
      v4 = v22;
    }
    else
    {
      v20 = 0LL;
      v21 = 8LL;
      v22 = 0LL;
      v3 = 8LL;
      v4 = 0LL;
    }
    v31[0] = v3;
    v31[1] = v3 + 32 * v4;
    v30[0] = 0LL;
    v6 = *(_QWORD *)(v2 + 16);
    v29 = *(_QWORD *)(v2 + 8);
    v23 = v29;
    v28 = v6;
    v24 = v6;
    v7 = 0;
    while ( 1 )
    {
      uucore::features::format::parse_spec_and_escape::{{closure}}(v32, &v23);
      if ( v32[0] == 9 )
        break;
      *(_QWORD *)&v35[31] = *(_QWORD *)&v32[32];
      *(_OWORD *)&v35[16] = *(_OWORD *)&v32[17];
      *(_OWORD *)v35 = *(_OWORD *)&v32[1];
      if ( (unsigned __int8)(v32[0] - 7) >= 2u )
      {
        v7 = 1;
      }
      else if ( v32[0] == 8 )
      {
        v19 = *(__m256i *)&v35[7];
        v17 = ((__int64 (__fastcall *)(__m256i *, __int64 *, __int64, __int64, __int64, __int64))alloc::boxed::Box<T>::new)(
                &v19,
                &v23,
                v8,
                1LL,
                v9,
                v10);
        goto LABEL_27;
      }
      *(_QWORD *)&dest[32] = *(_QWORD *)&v32[32];
      *(_OWORD *)&dest[17] = *(_OWORD *)&v32[17];
      *(_OWORD *)&dest[1] = *(_OWORD *)&v32[1];
      dest[0] = v32[0];
      v11 = std::io::stdio::stdout();
      uucore::features::format::FormatItem<C>::write(&v25, dest, v11, v30);
      v15 = v25;
      if ( v25 != 14 )
      {
LABEL_17:
        *(_OWORD *)&v19.m256i_u64[2] = *(_OWORD *)&v27[11];
        *(_OWORD *)&v19.m256i_u8[5] = *(_OWORD *)v27;
        v19.m256i_i32[0] = v25;
        v19.m256i_i8[4] = v26;
        v17 = ((__int64 (__fastcall *)(__m256i *, _BYTE *, __int64, __int64, __int64, __int64))alloc::boxed::Box<T>::new)(
                &v19,
                dest,
                v12,
                v15,
                v13,
                v14);
LABEL_27:
        v5 = v17;
LABEL_28:
        core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(&v20);
        goto LABEL_29;
      }
      if ( v26 )
        goto LABEL_16;
    }
    if ( (v7 & 1) == 0 )
    {
LABEL_16:
      v5 = 0LL;
      goto LABEL_28;
    }
    if ( *(_QWORD *)core::option::Option<T>::get_or_insert_with(v30, v31) )
    {
      while ( 2 )
      {
        v23 = v29;
        v24 = v28;
        while ( 1 )
        {
          uucore::features::format::parse_spec_and_escape::{{closure}}(v32, &v23);
          if ( v32[0] == 9 )
            break;
          *(_QWORD *)&v34[31] = *(_QWORD *)&v32[32];
          *(_OWORD *)&v34[16] = *(_OWORD *)&v32[17];
          *(_OWORD *)v34 = *(_OWORD *)&v32[1];
          if ( v32[0] == 8 )
          {
            v19 = *(__m256i *)&v34[7];
            v17 = ((__int64 (__fastcall *)(__m256i *))alloc::boxed::Box<T>::new)(&v19);
            goto LABEL_27;
          }
          *(_QWORD *)&dest[32] = *(_QWORD *)&v32[32];
          *(_OWORD *)&dest[17] = *(_OWORD *)&v32[17];
          *(_OWORD *)&dest[1] = *(_OWORD *)&v32[1];
          dest[0] = v32[0];
          v16 = std::io::stdio::stdout();
          uucore::features::format::FormatItem<C>::write(&v25, dest, v16, v30);
          v15 = v25;
          if ( v25 != 14 )
            goto LABEL_17;
          if ( v26 )
            goto LABEL_16;
        }
        if ( *(_QWORD *)core::option::Option<T>::get_or_insert_with(v30, v31) )
          continue;
        break;
      }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(&v20);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v36);
    return 0LL;
  }
  else
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(v32, aMissingOperand, 15LL);
    *(_QWORD *)&dest[16] = *(_QWORD *)&v32[16];
    *(_OWORD *)dest = *(_OWORD *)v32;
    *(_DWORD *)&dest[24] = 1;
    v5 = alloc::boxed::Box<T>::new(dest);
LABEL_29:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v36);
  }
  return v5;
}
