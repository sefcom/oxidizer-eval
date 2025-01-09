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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __m256i v22; // [rsp+0h] [rbp-4A8h] BYREF
  __int64 v23; // [rsp+28h] [rbp-480h] BYREF
  __int64 v24; // [rsp+30h] [rbp-478h]
  __int64 v25; // [rsp+38h] [rbp-470h]
  __int64 v26; // [rsp+40h] [rbp-468h] BYREF
  __int64 v27; // [rsp+48h] [rbp-460h]
  unsigned __int32 v28; // [rsp+50h] [rbp-458h] BYREF
  __int8 v29; // [rsp+54h] [rbp-454h]
  _BYTE v30[27]; // [rsp+55h] [rbp-453h]
  __int64 v31; // [rsp+70h] [rbp-438h]
  __int64 v32; // [rsp+78h] [rbp-430h]
  _QWORD v33[2]; // [rsp+80h] [rbp-428h] BYREF
  _QWORD v34[2]; // [rsp+90h] [rbp-418h] BYREF
  _BYTE v35[48]; // [rsp+A0h] [rbp-408h] BYREF
  __int128 v36; // [rsp+D0h] [rbp-3D8h]
  _BYTE v37[39]; // [rsp+E0h] [rbp-3C8h]
  _BYTE v38[39]; // [rsp+110h] [rbp-398h]
  _BYTE v39[56]; // [rsp+138h] [rbp-370h] BYREF
  _OWORD v40[4]; // [rsp+170h] [rbp-338h] BYREF
  _BYTE dest[760]; // [rsp+1B0h] [rbp-2F8h] BYREF

  uu_printf::uu_app(dest);
  clap_builder::builder::command::Command::get_matches_from(v39, dest, a1, a2);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v39, aFormat_0, 6LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(aFormat_0, 6LL, dest);
  if ( v2 )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v39, aArgument_0, 8LL);
    clap_builder::parser::error::MatchesError::unwrap(v35, aArgument_0, 8LL, dest);
    if ( *(_QWORD *)v35 )
    {
      v40[3] = v36;
      v40[2] = *(_OWORD *)&v35[32];
      v40[1] = *(_OWORD *)&v35[16];
      v40[0] = *(_OWORD *)v35;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v23, v40);
      v3 = v24;
      v4 = v25;
    }
    else
    {
      v23 = 0LL;
      v24 = 8LL;
      v25 = 0LL;
      v3 = 8LL;
      v4 = 0LL;
    }
    v34[0] = v3;
    v34[1] = v3 + 32 * v4;
    v33[0] = 0LL;
    v6 = *(_QWORD *)(v2 + 16);
    v32 = *(_QWORD *)(v2 + 8);
    v26 = v32;
    v31 = v6;
    v27 = v6;
    v7 = 0;
    while ( 1 )
    {
      uucore::features::format::parse_spec_and_escape::{{closure}}(v35, &v26);
      if ( v35[0] == 9 )
        break;
      *(_QWORD *)&v38[31] = *(_QWORD *)&v35[32];
      *(_OWORD *)&v38[16] = *(_OWORD *)&v35[17];
      *(_OWORD *)v38 = *(_OWORD *)&v35[1];
      if ( (unsigned __int8)(v35[0] - 7) >= 2u )
      {
        v7 = 1;
      }
      else if ( v35[0] == 8 )
      {
        v22 = *(__m256i *)&v38[7];
        v20 = ((__int64 (__fastcall *)(__m256i *, __int64 *, __int64, __int64, __int64, __int64))alloc::boxed::Box<T>::new)(
                &v22,
                &v26,
                v8,
                1LL,
                v9,
                v10);
        goto LABEL_27;
      }
      *(_QWORD *)&dest[32] = *(_QWORD *)&v35[32];
      *(_OWORD *)&dest[17] = *(_OWORD *)&v35[17];
      *(_OWORD *)&dest[1] = *(_OWORD *)&v35[1];
      dest[0] = v35[0];
      v11 = std::io::stdio::stdout();
      uucore::features::format::FormatItem<C>::write(&v28, dest, v11, v33);
      v15 = v28;
      if ( v28 != 14 )
      {
LABEL_17:
        *(_OWORD *)&v22.m256i_u64[2] = *(_OWORD *)&v30[11];
        *(_OWORD *)&v22.m256i_u8[5] = *(_OWORD *)v30;
        v22.m256i_i32[0] = v28;
        v22.m256i_i8[4] = v29;
        v20 = ((__int64 (__fastcall *)(__m256i *, _BYTE *, __int64, __int64, __int64, __int64))alloc::boxed::Box<T>::new)(
                &v22,
                dest,
                v12,
                v15,
                v13,
                v14);
LABEL_27:
        v5 = v20;
LABEL_28:
        core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(&v23);
        goto LABEL_29;
      }
      if ( v29 )
        goto LABEL_16;
    }
    if ( (v7 & 1) == 0 )
    {
LABEL_16:
      v5 = 0LL;
      goto LABEL_28;
    }
    if ( *(_QWORD *)core::option::Option<T>::get_or_insert_with(v33, v34) )
    {
      while ( 2 )
      {
        v26 = v32;
        v27 = v31;
        while ( 1 )
        {
          uucore::features::format::parse_spec_and_escape::{{closure}}(v35, &v26);
          if ( v35[0] == 9 )
            break;
          *(_QWORD *)&v37[31] = *(_QWORD *)&v35[32];
          *(_OWORD *)&v37[16] = *(_OWORD *)&v35[17];
          *(_OWORD *)v37 = *(_OWORD *)&v35[1];
          if ( v35[0] == 8 )
          {
            v22 = *(__m256i *)&v37[7];
            v20 = ((__int64 (__fastcall *)(__m256i *, __int64 *, __int64, _QWORD, __int64, __int64))alloc::boxed::Box<T>::new)(
                    &v22,
                    &v26,
                    v16,
                    *(_QWORD *)&v35[32],
                    v17,
                    v18);
            goto LABEL_27;
          }
          *(_QWORD *)&dest[32] = *(_QWORD *)&v35[32];
          *(_OWORD *)&dest[17] = *(_OWORD *)&v35[17];
          *(_OWORD *)&dest[1] = *(_OWORD *)&v35[1];
          dest[0] = v35[0];
          v19 = std::io::stdio::stdout();
          uucore::features::format::FormatItem<C>::write(&v28, dest, v19, v33);
          v15 = v28;
          if ( v28 != 14 )
            goto LABEL_17;
          if ( v29 )
            goto LABEL_16;
        }
        if ( *(_QWORD *)core::option::Option<T>::get_or_insert_with(v33, v34) )
          continue;
        break;
      }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(&v23);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v39);
    return 0LL;
  }
  else
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(v35, aMissingOperand, 15LL);
    *(_QWORD *)&dest[16] = *(_QWORD *)&v35[16];
    *(_OWORD *)dest = *(_OWORD *)v35;
    *(_DWORD *)&dest[24] = 1;
    v5 = alloc::boxed::Box<T>::new(dest);
LABEL_29:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v39);
  }
  return v5;
}
