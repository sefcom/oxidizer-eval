__int64 __fastcall forc_tx::Command::try_parse_from_args(_QWORD *a1)
{
  __m256i *v1; // rsi
  __int64 v2; // rax
  _BYTE *v3; // r13
  __int64 v4; // rax
  _BYTE *v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rdx
  __int128 v15; // xmm0
  __m256i v16; // [rsp+8h] [rbp-430h] BYREF
  __int128 v17; // [rsp+28h] [rbp-410h]
  __int64 v18; // [rsp+38h] [rbp-400h]
  __int128 v19; // [rsp+40h] [rbp-3F8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-3E8h]
  __int128 v21; // [rsp+60h] [rbp-3D8h] BYREF
  __int64 v22; // [rsp+70h] [rbp-3C8h]
  __int128 v23; // [rsp+80h] [rbp-3B8h] BYREF
  __int64 v24; // [rsp+90h] [rbp-3A8h]
  unsigned __int64 v25; // [rsp+A0h] [rbp-398h]
  _BYTE v26[24]; // [rsp+A8h] [rbp-390h] BYREF
  __int128 v27; // [rsp+C0h] [rbp-378h]
  _BYTE v28[56]; // [rsp+D0h] [rbp-368h] BYREF
  _OWORD src[13]; // [rsp+108h] [rbp-330h] BYREF
  _BYTE v30[32]; // [rsp+1D8h] [rbp-260h] BYREF
  _QWORD v31[32]; // [rsp+1F8h] [rbp-240h] BYREF
  char v32; // [rsp+2F8h] [rbp-140h] BYREF
  _BYTE v33[7]; // [rsp+2F9h] [rbp-13Fh]
  __int128 v34; // [rsp+300h] [rbp-138h]
  __int128 v35; // [rsp+310h] [rbp-128h]
  __int128 v36; // [rsp+320h] [rbp-118h]
  __int128 v37; // [rsp+330h] [rbp-108h]
  __int64 v38; // [rsp+340h] [rbp-F8h]
  __int64 v39; // [rsp+348h] [rbp-F0h] BYREF
  __int128 v40; // [rsp+350h] [rbp-E8h]
  __int128 v41; // [rsp+360h] [rbp-D8h]
  __int128 v42; // [rsp+370h] [rbp-C8h]
  _BYTE v43[136]; // [rsp+380h] [rbp-B8h] BYREF

  core::iter::traits::iterator::Iterator::map(v28);
  core::iter::traits::iterator::Iterator::peekable(&v16, v28);
  v1 = &v16;
  clap_builder::derive::Parser::try_parse_from(v28);
  if ( *(_QWORD *)v28 == 2LL )
  {
    v2 = *(_QWORD *)&v28[8];
    a1[1] = 0x8000000000000000LL;
    a1[2] = v2;
    *a1 = 2LL;
    return core::ptr::drop_in_place<core::iter::adapters::peekable::Peekable<std::env::Args>>(&v16, v1);
  }
  v27 = *(_OWORD *)&v28[8];
  *(_OWORD *)&v31[3] = *(_OWORD *)&v28[24];
  *(_OWORD *)&v31[5] = *(_OWORD *)&v28[40];
  memcpy(&v31[7], src, 0xC8uLL);
  v31[0] = *(_QWORD *)v28;
  *(_OWORD *)&v31[1] = *(_OWORD *)&v28[8];
  v3 = v28;
  v25 = 0x8000000000000002LL;
  while ( 1 )
  {
    v4 = v16.m256i_i64[0];
    v16.m256i_i64[0] = 0x8000000000000001LL;
    if ( v4 == 0x8000000000000001LL )
    {
      <std::env::Args as core::iter::traits::iterator::Iterator>::next(v26, &v16.m256i_u64[3]);
      if ( *(_QWORD *)v26 == 0x8000000000000000LL )
        goto LABEL_16;
    }
    else
    {
      *(_OWORD *)&v26[8] = *(_OWORD *)&v16.m256i_u64[1];
      *(_QWORD *)v26 = v4;
      if ( v4 == 0x8000000000000000LL )
      {
LABEL_16:
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v26);
        core::option::Option<T>::get_or_insert_with(&v16, &v16.m256i_u64[3]);
        if ( v16.m256i_i64[0] == 0x8000000000000000LL )
        {
          v1 = (__m256i *)v31;
          memcpy(a1, v31, 0x100uLL);
          return core::ptr::drop_in_place<core::iter::adapters::peekable::Peekable<std::env::Args>>(&v16, v1);
        }
        core::option::Option<T>::get_or_insert_with(&v16, &v16.m256i_u64[3]);
        if ( v16.m256i_i64[0] == 0x8000000000000000LL )
          core::option::unwrap_failed(&off_1D1318);
        <alloc::string::String as core::clone::Clone>::clone(&v21, &v16);
        *(_QWORD *)&v28[48] = v18;
        *(_OWORD *)&v28[32] = v17;
        *(__m256i *)v28 = v16;
        core::iter::traits::iterator::Iterator::collect(&v23, v28);
        v9 = v21;
        *(_OWORD *)v28 = v21;
        *(_QWORD *)&v28[16] = v22;
        *(_OWORD *)&v28[24] = v23;
        *(_QWORD *)&v28[40] = v24;
        a1[5] = *((_QWORD *)&v23 + 1);
        a1[6] = *(_QWORD *)&v28[40];
        *(_OWORD *)(a1 + 3) = *(_OWORD *)&v28[16];
        *(_OWORD *)(a1 + 1) = v9;
        *a1 = 2LL;
        return core::ptr::drop_in_place<forc_tx::Command>(v31, v28);
      }
    }
    v20 = *(_QWORD *)&v26[16];
    v19 = *(_OWORD *)v26;
    v5 = v3;
    <alloc::string::String as core::clone::Clone>::clone(v3, &v19);
    v24 = *(_QWORD *)&v28[16];
    v23 = *(_OWORD *)v28;
    core::iter::traits::iterator::Iterator::chain(v30, &v23, &v16);
    v6 = *((_QWORD *)&v19 + 1);
    v7 = v20;
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                             *((_QWORD *)&v19 + 1),
                             v20,
                             aInput_0,
                             5LL) )
      break;
    v3 = v5;
    v1 = (__m256i *)v30;
    clap_builder::derive::Parser::try_parse_from(v5);
    if ( *(_QWORD *)v28 == v25 )
    {
      v12 = *(_QWORD *)&v28[8];
      v14 = a1;
      a1[1] = 0x8000000000000001LL;
      a1[2] = v12;
      goto LABEL_24;
    }
    v27 = *(_OWORD *)&v28[8];
    v41 = *(_OWORD *)&v28[24];
    v42 = *(_OWORD *)&v28[40];
    memcpy(v43, src, sizeof(v43));
    v39 = *(_QWORD *)v28;
    v40 = *(_OWORD *)&v28[8];
    v1 = (__m256i *)v31;
    forc_tx::Command::try_parse_from_args::push_input(v5, v31, &v39);
    v8 = *(_QWORD *)v28;
    if ( *(_QWORD *)v28 != 0x8000000000000005LL )
    {
      v14 = a1;
      a1[6] = *(_QWORD *)&v28[40];
      v15 = *(_OWORD *)&v28[8];
      *((_OWORD *)a1 + 2) = *(_OWORD *)&v28[24];
      *((_OWORD *)a1 + 1) = v15;
      a1[1] = v8;
      goto LABEL_24;
    }
LABEL_4:
    core::ptr::drop_in_place<alloc::string::String>(&v19);
  }
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, aOutput, 6LL) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v28, v6, v7);
    v22 = *(_QWORD *)&v28[16];
    v21 = *(_OWORD *)v28;
    *(_QWORD *)&v28[48] = v18;
    *(_OWORD *)&v28[32] = v17;
    *(__m256i *)v28 = v16;
    core::iter::traits::iterator::Iterator::collect(&v23, v28);
    v10 = v21;
    *(_OWORD *)v28 = v21;
    *(_QWORD *)&v28[16] = v22;
    *(_OWORD *)&v28[24] = v23;
    *(_QWORD *)&v28[40] = v24;
    a1[5] = *((_QWORD *)&v23 + 1);
    a1[6] = *(_QWORD *)&v28[40];
    *(_OWORD *)(a1 + 3) = *(_OWORD *)&v28[16];
    *(_OWORD *)(a1 + 1) = v10;
    *a1 = 2LL;
    core::ptr::drop_in_place<core::iter::adapters::chain::Chain<core::iter::sources::once::Once<alloc::string::String>,core::iter::sources::from_fn::FromFn<forc_tx::Command::try_parse_from_args<std::env::Args>::{{closure}}>>>(v30);
    core::ptr::drop_in_place<alloc::string::String>(&v19);
    return core::ptr::drop_in_place<forc_tx::Command>(v31, v28);
  }
  v3 = v5;
  v1 = (__m256i *)v30;
  clap_builder::derive::Parser::try_parse_from(v5, v30);
  if ( v28[0] != 5 )
  {
    *(_DWORD *)&v33[3] = *(_DWORD *)&v28[4];
    *(_DWORD *)v33 = *(_DWORD *)&v28[1];
    v36 = *(_OWORD *)&v28[40];
    v35 = *(_OWORD *)&v28[24];
    v37 = src[0];
    v38 = *(_QWORD *)&src[1];
    v32 = v28[0];
    v34 = *(_OWORD *)&v28[8];
    forc_tx::Command::try_parse_from_args::push_output(v31, &v32);
    goto LABEL_4;
  }
  v13 = *(_QWORD *)&v28[8];
  v14 = a1;
  a1[1] = v25;
  a1[2] = v13;
LABEL_24:
  *v14 = 2LL;
  core::ptr::drop_in_place<alloc::string::String>(&v19);
  core::ptr::drop_in_place<forc_tx::Command>(v31, v1);
  return core::ptr::drop_in_place<core::iter::adapters::peekable::Peekable<std::env::Args>>(&v16, v1);
}