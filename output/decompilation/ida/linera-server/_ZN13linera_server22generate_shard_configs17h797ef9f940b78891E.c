__int64 __fastcall linera_server::generate_shard_configs(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // r14
  __int64 v8; // rdi
  unsigned int v9; // eax
  _QWORD *v10; // rcx
  __int16 v11; // bx
  __int64 v12; // rdx
  __int128 *v13; // r14
  __int64 v14; // rbx
  __int64 v15; // r13
  __int128 *v16; // rbp
  unsigned int v17; // eax
  __int16 v18; // r14
  __int16 v19; // cx
  __int16 v20; // ax
  _OWORD *v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v24; // rcx
  __int16 v25; // [rsp+Eh] [rbp-1AAh] BYREF
  __int64 v26; // [rsp+10h] [rbp-1A8h]
  __int64 v27; // [rsp+18h] [rbp-1A0h]
  _WORD v28[2]; // [rsp+22h] [rbp-196h] BYREF
  char v29; // [rsp+26h] [rbp-192h]
  __int64 v30; // [rsp+28h] [rbp-190h]
  _QWORD *v31; // [rsp+30h] [rbp-188h]
  __int64 *v32; // [rsp+38h] [rbp-180h]
  unsigned __int64 v33; // [rsp+40h] [rbp-178h]
  __int128 v34; // [rsp+48h] [rbp-170h] BYREF
  __int64 v35; // [rsp+58h] [rbp-160h]
  __int128 v36; // [rsp+60h] [rbp-158h]
  __int128 v37; // [rsp+78h] [rbp-140h] BYREF
  __int64 v38; // [rsp+88h] [rbp-130h]
  __int16 *v39; // [rsp+90h] [rbp-128h] BYREF
  __int64 (__fastcall *v40)(); // [rsp+98h] [rbp-120h]
  __int64 v41; // [rsp+A0h] [rbp-118h]
  __int16 v42; // [rsp+A8h] [rbp-110h]
  __int128 v43; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-F8h]
  __int128 v45; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v46; // [rsp+E0h] [rbp-D8h]
  __int64 v47; // [rsp+E8h] [rbp-D0h]
  __int64 v48; // [rsp+F0h] [rbp-C8h]
  __int64 v49; // [rsp+F8h] [rbp-C0h]
  __int64 v50; // [rsp+100h] [rbp-B8h]
  __int64 v51; // [rsp+108h] [rbp-B0h]
  __int64 v52; // [rsp+110h] [rbp-A8h]
  __int64 v53; // [rsp+118h] [rbp-A0h]
  __int128 v54; // [rsp+120h] [rbp-98h] BYREF
  __int16 **v55; // [rsp+130h] [rbp-88h]
  __int64 v56; // [rsp+138h] [rbp-80h]
  void *v57; // [rsp+140h] [rbp-78h]
  __int64 v58; // [rsp+148h] [rbp-70h]
  __int128 v59; // [rsp+150h] [rbp-68h] BYREF
  __int16 **v60; // [rsp+160h] [rbp-58h]
  __int16 v61; // [rsp+168h] [rbp-50h]
  __int16 v62; // [rsp+16Ah] [rbp-4Eh]
  __int16 v63; // [rsp+16Ch] [rbp-4Ch]
  __int128 v64; // [rsp+170h] [rbp-48h] BYREF
  __int64 v65; // [rsp+180h] [rbp-38h]

  v32 = a5;
  v7 = a2;
  v31 = a1;
  *(_QWORD *)&v37 = 0LL;
  *((_QWORD *)&v37 + 1) = 8LL;
  v38 = 0LL;
  v8 = *(_QWORD *)(a2 + 8);
  v33 = *(_QWORD *)(a2 + 16);
  v9 = <core::num::nonzero::NonZero<u16> as core::str::traits::FromStr>::from_str(v8);
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v34, v9);
  if ( (_BYTE)v34 == 1 )
  {
    v10 = v31;
    v31[1] = *((_QWORD *)&v34 + 1);
    *v10 = 0x8000000000000000LL;
    goto LABEL_16;
  }
  v11 = WORD1(v34);
  alloc::slice::<impl [T]>::repeat(&v34, v33);
  v26 = a4;
  v27 = a3;
  v30 = a2;
  v44 = v35;
  v43 = v34;
  v28[0] = 1;
  v28[1] = v11;
  v29 = 0;
  if ( (<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(v28) & 1) == 0 )
  {
LABEL_13:
    v21 = v31;
    v31[2] = v38;
    *v21 = v37;
    core::ptr::drop_in_place<alloc::string::String>(&v43);
    v7 = v30;
    a3 = v27;
    a4 = v26;
    goto LABEL_17;
  }
  if ( v33 > 0xFFFF )
  {
    v25 = v12;
    *(_QWORD *)&v34 = &off_2339590;
    *((_QWORD *)&v34 + 1) = 1LL;
    v35 = 8LL;
    v36 = 0LL;
    core::panicking::panic_fmt(&v34, &off_23395B8);
  }
  v53 = *(_QWORD *)(v27 + 8);
  v52 = *(_QWORD *)(v27 + 16);
  v51 = *(_QWORD *)(v26 + 8);
  v50 = *(_QWORD *)(v26 + 16);
  v49 = *v32;
  v48 = v32[1];
  v47 = v32[2];
  v13 = &v54;
  while ( 1 )
  {
    v25 = v12;
    v39 = &v25;
    v40 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v41 = 0LL;
    v42 = v33;
    *(_QWORD *)&v54 = asc_3124D0;
    *((_QWORD *)&v54 + 1) = 1LL;
    v57 = &unk_344600;
    v58 = 1LL;
    v55 = &v39;
    v56 = 2LL;
    core::option::Option<T>::map_or_else(&v64, 0LL, v12, v13);
    v45 = v64;
    v14 = v65;
    v46 = v65;
    v15 = *((_QWORD *)&v64 + 1);
    v16 = v13;
    alloc::str::<impl str>::replacen(v13, v53, v52, &v43, *((_QWORD *)&v64 + 1), v65);
    alloc::str::<impl str>::replacen(&v34, v51, v50, &v43, v15, v14);
    v17 = core::num::<impl u16>::from_ascii_radix(*((_QWORD *)&v34 + 1), v35);
    anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(
      &v39,
      v17,
      aFailedToDecode,
      38LL);
    if ( (_BYTE)v39 == 1 )
    {
      v22 = v31;
      v31[1] = v40;
      *v22 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::string::String>(&v34);
      goto LABEL_15;
    }
    v18 = WORD1(v39);
    core::ptr::drop_in_place<alloc::string::String>(&v34);
    if ( v49 != 0x8000000000000000LL )
    {
      linera_server::generate_shard_configs::{{closure}}(&v34, &v43, v15, v14, v48, v47);
      if ( (_WORD)v34 != 2 )
        break;
    }
    v20 = 0;
LABEL_12:
    v60 = v55;
    v59 = v54;
    v63 = v18;
    v61 = v20;
    v62 = v19;
    alloc::vec::Vec<T,A>::push(&v37, &v59, &off_23395A0);
    core::ptr::drop_in_place<alloc::string::String>(&v45);
    v13 = v16;
    if ( (<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(v28) & 1) == 0 )
      goto LABEL_13;
  }
  if ( (v34 & 1) == 0 )
  {
    v19 = WORD1(v34);
    v20 = 1;
    goto LABEL_12;
  }
  v24 = v31;
  v31[1] = *((_QWORD *)&v34 + 1);
  *v24 = 0x8000000000000000LL;
LABEL_15:
  core::ptr::drop_in_place<alloc::string::String>(&v54);
  core::ptr::drop_in_place<alloc::string::String>(&v45);
  core::ptr::drop_in_place<alloc::string::String>(&v43);
  v7 = v30;
  a3 = v27;
  a4 = v26;
LABEL_16:
  core::ptr::drop_in_place<alloc::vec::Vec<linera_rpc::config::ShardConfig>>(&v37);
LABEL_17:
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v32);
  core::ptr::drop_in_place<alloc::string::String>(a4);
  core::ptr::drop_in_place<alloc::string::String>(a3);
  return core::ptr::drop_in_place<alloc::string::String>(v7);
}