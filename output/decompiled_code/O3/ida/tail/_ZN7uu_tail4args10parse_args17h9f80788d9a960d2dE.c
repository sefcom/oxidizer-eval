__int64 __fastcall uu_tail::args::parse_args(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int128 v11; // kr00_16
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  _BYTE v19[8]; // [rsp+8h] [rbp-400h] BYREF
  __int64 v20; // [rsp+10h] [rbp-3F8h]
  unsigned __int64 v21; // [rsp+18h] [rbp-3F0h]
  __int128 v22; // [rsp+20h] [rbp-3E8h] BYREF
  _BYTE v23[64]; // [rsp+30h] [rbp-3D8h]
  _OWORD v24[3]; // [rsp+70h] [rbp-398h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-368h]
  __int128 v26; // [rsp+B0h] [rbp-358h]
  __int128 v27; // [rsp+C0h] [rbp-348h]
  __int128 v28; // [rsp+D0h] [rbp-338h]
  __int64 v29; // [rsp+E0h] [rbp-328h]
  _OWORD v30[3]; // [rsp+F0h] [rbp-318h] BYREF
  __int64 v31; // [rsp+120h] [rbp-2E8h]
  __int128 v32; // [rsp+128h] [rbp-2E0h] BYREF
  __int64 v33; // [rsp+138h] [rbp-2D0h]
  __int128 v34; // [rsp+140h] [rbp-2C8h]
  __int128 v35; // [rsp+150h] [rbp-2B8h]
  __int128 v36; // [rsp+160h] [rbp-2A8h]
  __int64 v37; // [rsp+170h] [rbp-298h]

  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v19);
  uu_tail::args::uu_app(&v32);
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v22, v19);
  clap_builder::builder::command::Command::try_get_matches_from(v30, &v32, &v22);
  if ( *(_QWORD *)&v30[0] == 0x8000000000000000LL )
  {
    *((_QWORD *)&v22 + 1) = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v30[0] + 1));
    *(_QWORD *)v23 = v1;
    *(_QWORD *)&v22 = 5LL;
  }
  else
  {
    v25 = v31;
    v24[2] = v30[2];
    v24[1] = v30[1];
    v24[0] = v30[0];
    uu_tail::args::Settings::from(&v32, v24);
    v2 = v33;
    if ( (_QWORD)v32 == 5LL )
    {
      *(_QWORD *)(a1 + 8) = *((_QWORD *)&v32 + 1);
      *(_QWORD *)(a1 + 16) = v2;
      *(_QWORD *)a1 = 5LL;
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v24);
LABEL_21:
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v19);
      goto LABEL_22;
    }
    *(_QWORD *)&v23[56] = v37;
    *(_OWORD *)&v23[40] = v36;
    *(_OWORD *)&v23[24] = v35;
    *(_OWORD *)&v23[8] = v34;
    v22 = v32;
    *(_QWORD *)v23 = v33;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v24);
  }
  v3 = v21;
  if ( (v21 & 0xFFFFFFFFFFFFFFFELL) != 2 )
  {
LABEL_20:
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v23[48];
    v13 = v22;
    v14 = *(_OWORD *)v23;
    v15 = *(_OWORD *)&v23[16];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v23[32];
    *(_OWORD *)(a1 + 32) = v15;
    *(_OWORD *)(a1 + 16) = v14;
    *(_OWORD *)a1 = v13;
    goto LABEL_21;
  }
  v4 = v20;
  v5 = v20;
  if ( (_DWORD)v22 == 5 )
    goto LABEL_12;
  std::sys::os_str::bytes::Slice::to_string_lossy(&v32, *(_QWORD *)(v20 + 32), *(_QWORD *)(v20 + 40), v20);
  v6 = v33;
  LODWORD(v24[0]) = 43;
  if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(*((void **)&v32 + 1)) )
  {
    if ( (_QWORD)v32 != 0x8000000000000000LL )
    {
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v32, v6, v7, v32);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v32);
    }
    goto LABEL_20;
  }
  if ( (_QWORD)v32 != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v32, v6, v7, v32);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v32);
  }
  v5 = v20;
  v3 = v21;
LABEL_12:
  v8 = v4 + 24;
  v9 = v5 + 48;
  v10 = 0LL;
  if ( v3 >= 3 )
    v10 = v9;
  uu_tail::args::parse_obsolete(&v32, v8, v10);
  v11 = v32;
  v12 = v33;
  if ( (_QWORD)v32 != 6LL )
  {
    v29 = v37;
    v28 = v36;
    v27 = v35;
    v26 = v34;
    if ( (_DWORD)v32 != 5 )
    {
      *(_QWORD *)(a1 + 72) = v29;
      v17 = v26;
      v18 = v27;
      *(_OWORD *)(a1 + 56) = v28;
      *(_OWORD *)(a1 + 40) = v18;
      *(_OWORD *)(a1 + 24) = v17;
      *(_OWORD *)a1 = v11;
      *(_QWORD *)(a1 + 16) = v12;
      core::ptr::drop_in_place<core::result::Result<uu_tail::args::Settings,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v22);
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  *(_QWORD *)(a1 + 8) = *((_QWORD *)&v32 + 1);
  *(_QWORD *)(a1 + 16) = v12;
  *(_QWORD *)a1 = 5LL;
  core::ptr::drop_in_place<core::result::Result<uu_tail::args::Settings,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v22);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v19);
LABEL_22:
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v19);
  return a1;
}
