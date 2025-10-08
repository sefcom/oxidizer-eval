__int64 __fastcall uu_od::parse_inputs::parse_inputs(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  __int64 v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v12; // [rsp+8h] [rbp-70h] BYREF
  _QWORD *v13; // [rsp+10h] [rbp-68h]
  __int64 v14; // [rsp+18h] [rbp-60h]
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]
  _QWORD v17[8]; // [rsp+38h] [rbp-40h] BYREF

  <clap_builder::parser::matches::arg_matches::ArgMatches as uu_od::parse_inputs::CommandLineOpts>::inputs(&v12);
  if ( !(unsigned __int8)<clap_builder::parser::matches::arg_matches::ArgMatches as uu_od::parse_inputs::CommandLineOpts>::opts_present(
                           a2,
                           &off_102680,
                           1LL) )
  {
    v5 = v14;
    v6 = v14 - 1;
    if ( (unsigned __int64)(v14 - 1) >= 2 )
    {
      if ( !v14 )
      {
        alloc::vec::Vec<T,A>::push(&v12);
        v5 = v14;
      }
    }
    else if ( !(unsigned __int8)<clap_builder::parser::matches::arg_matches::ArgMatches as uu_od::parse_inputs::CommandLineOpts>::opts_present(
                                  a2,
                                  &off_102690,
                                  6LL) )
    {
      v2 = v13;
      uu_od::parse_inputs::parse_offset_operand(v17, v13[2 * v6], v13[2 * v6 + 1]);
      if ( !v17[0] )
      {
        v7 = v17[1];
        v8 = *v2;
        v9 = v2[1];
        if ( v5 != 1 )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v15, *v2, v2[1]);
          goto LABEL_15;
        }
        LODWORD(v15) = 0;
        v10 = core::char::methods::encode_utf8_raw(43LL, &v15);
        if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v8, v9, v10, 1LL) )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v15, asc_1CFEE, 1LL);
LABEL_15:
          *(_QWORD *)(a1 + 16) = v16;
          *(_OWORD *)a1 = v15;
          *(_QWORD *)(a1 + 24) = v7;
          *(_QWORD *)(a1 + 32) = 0LL;
          goto LABEL_3;
        }
      }
    }
    core::iter::traits::iterator::Iterator::collect(&v15, v13, &v13[2 * v5]);
    *(_QWORD *)(a1 + 16) = v16;
    *(_OWORD *)a1 = v15;
    *(_QWORD *)(a1 + 32) = 2LL;
    v3 = v12;
    v4 = v13;
    return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v3, v4);
  }
  v2 = v13;
  uu_od::parse_inputs::parse_inputs_traditional(a1, v13, v14);
LABEL_3:
  v3 = v12;
  v4 = v2;
  return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v3, v4);
}