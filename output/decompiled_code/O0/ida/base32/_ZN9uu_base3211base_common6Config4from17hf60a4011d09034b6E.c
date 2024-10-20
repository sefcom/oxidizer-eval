__int64 __fastcall uu_base32::base_common::Config::from(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  _OWORD *v7; // rax
  __int128 v8; // xmm0
  __int64 (__fastcall **v9)(); // rax
  _BYTE *v10; // r15
  __int64 v11; // r12
  __int64 one; // rax
  __int64 v13; // r15
  __int64 v14; // r12
  _OWORD *v15; // rax
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdx
  char *v19; // rax
  char v20; // bp
  _BYTE *v21; // rax
  char v22; // al
  __int128 v24; // [rsp+0h] [rbp-248h] BYREF
  __int64 v25; // [rsp+10h] [rbp-238h]
  const char *v26; // [rsp+20h] [rbp-228h] BYREF
  __int64 v27; // [rsp+28h] [rbp-220h]
  _QWORD v28[2]; // [rsp+30h] [rbp-218h] BYREF
  __int128 dest; // [rsp+40h] [rbp-208h] BYREF
  __int128 v30; // [rsp+50h] [rbp-1F8h]
  __int64 v31; // [rsp+60h] [rbp-1E8h]
  _QWORD v32[2]; // [rsp+F8h] [rbp-150h] BYREF
  _QWORD v33[2]; // [rsp+108h] [rbp-140h] BYREF
  _QWORD v34[3]; // [rsp+118h] [rbp-130h] BYREF
  char v35; // [rsp+130h] [rbp-118h]
  _QWORD v36[3]; // [rsp+138h] [rbp-110h] BYREF
  char v37; // [rsp+150h] [rbp-F8h]
  __int128 v38; // [rsp+158h] [rbp-F0h] BYREF
  __int64 v39; // [rsp+168h] [rbp-E0h]
  __int128 v40; // [rsp+170h] [rbp-D8h] BYREF
  __int64 v41; // [rsp+180h] [rbp-C8h]
  __int128 v42; // [rsp+188h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+198h] [rbp-B0h]
  _OWORD v44[4]; // [rsp+1A0h] [rbp-A8h] BYREF
  _OWORD v45[6]; // [rsp+1E0h] [rbp-68h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
    v45,
    a2,
    anon_fab1997b4aa932db2117a172ac34a10e_52_llvm_952428305046595287,
    4LL,
    &off_12C448);
  if ( !*(_QWORD *)&v45[0] )
    goto LABEL_13;
  v44[3] = v45[3];
  v44[2] = v45[2];
  v44[1] = v45[1];
  v44[0] = v45[0];
  v2 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v44);
  if ( !v2 )
    core::option::unwrap_failed(&off_12C460);
  v3 = v2;
  v4 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v44);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v4 + 16);
      if ( v6 >= 0 )
      {
        v34[0] = 0LL;
        v34[1] = v5;
        v34[2] = v6;
        v35 = 1;
        v32[0] = v34;
        v32[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &off_12C478;
        *((_QWORD *)&dest + 1) = 1LL;
        *(_QWORD *)&v30 = v32;
        *((_QWORD *)&v30 + 1) = 1LL;
        v31 = 0LL;
        alloc::fmt::format::format_inner(&v38, &dest);
        *(_QWORD *)&v30 = v39;
        dest = v38;
        DWORD2(v30) = 1;
        v7 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v7 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v8 = dest;
        v7[1] = v30;
        *v7 = v8;
        *(_QWORD *)(a1 + 8) = v7;
        v9 = &anon_fab1997b4aa932db2117a172ac34a10e_48_llvm_952428305046595287;
LABEL_8:
        *(_QWORD *)(a1 + 16) = v9;
        *(_QWORD *)a1 = 2LL;
        return a1;
      }
    }
LABEL_34:
    core::panicking::panic_nounwind(anon_fab1997b4aa932db2117a172ac34a10e_28_llvm_952428305046595287, 162LL);
  }
  v10 = *(_BYTE **)(v3 + 8);
  if ( !v10 )
    goto LABEL_34;
  v11 = *(_QWORD *)(v3 + 16);
  if ( v11 < 0 )
    goto LABEL_34;
  if ( v11 == 1 && *v10 == 45 )
  {
LABEL_13:
    *(_QWORD *)&v24 = 0x8000000000000000LL;
  }
  else
  {
    core::slice::raw::from_raw_parts::precondition_check(v10, 1LL, 1LL, v11);
    std::sys::pal::unix::fs::stat(&dest);
    if ( (_QWORD)dest == 2LL )
    {
      std::io::error::repr_bitpacked::decode_repr(&dest, *((_QWORD *)&dest + 1));
      if ( (unsigned __int8)dest >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&dest + 8);
      v36[0] = 1LL;
      v36[1] = v10;
      v36[2] = v11;
      v37 = 0;
      v33[0] = v36;
      v33[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &unk_12C488;
      *((_QWORD *)&dest + 1) = 2LL;
      *(_QWORD *)&v30 = v33;
      *((_QWORD *)&v30 + 1) = 1LL;
      v31 = 0LL;
      alloc::fmt::format::format_inner(&v40, &dest);
      *(_QWORD *)&v30 = v41;
      dest = v40;
      DWORD2(v30) = 1;
      v15 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      if ( !v15 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v16 = dest;
      v15[1] = v30;
      *v15 = v16;
      *(_QWORD *)(a1 + 8) = v15;
      v9 = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
      goto LABEL_8;
    }
    std::path::Path::to_path_buf(&v42, v10, v11);
    v25 = v43;
    v24 = v42;
  }
  one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
          a2,
          anon_fab1997b4aa932db2117a172ac34a10e_50_llvm_952428305046595287,
          4LL,
          &off_12C4A8);
  v13 = one;
  if ( !one )
  {
    v14 = 0LL;
    goto LABEL_29;
  }
  if ( !*(_QWORD *)(one + 8) || *(__int64 *)(one + 16) < 0 )
    goto LABEL_34;
  core::num::<impl core::str::traits::FromStr for usize>::from_str(&dest);
  if ( (dest & 1) == 0 )
  {
    v13 = *((_QWORD *)&dest + 1);
LABEL_28:
    v14 = 1LL;
LABEL_29:
    v26 = anon_fab1997b4aa932db2117a172ac34a10e_49_llvm_952428305046595287;
    v27 = 6LL;
    v19 = (char *)clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
                    a2,
                    anon_fab1997b4aa932db2117a172ac34a10e_49_llvm_952428305046595287,
                    6LL,
                    &off_12C4C0);
    if ( !v19
      || (v20 = *v19,
          v26 = anon_fab1997b4aa932db2117a172ac34a10e_51_llvm_952428305046595287,
          v27 = 14LL,
          (v21 = (_BYTE *)clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
                            a2,
                            anon_fab1997b4aa932db2117a172ac34a10e_51_llvm_952428305046595287,
                            14LL,
                            &off_12C4D8)) == 0LL) )
    {
      v28[0] = &v26;
      v28[1] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_411_llvm_13186119769495240950;
      *((_QWORD *)&dest + 1) = 2LL;
      v31 = 0LL;
      *(_QWORD *)&v30 = v28;
      *((_QWORD *)&v30 + 1) = 1LL;
      core::panicking::panic_fmt(&dest, &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_412_llvm_13186119769495240950);
    }
    v22 = *v21 & 1;
    *(_QWORD *)a1 = v14;
    *(_QWORD *)(a1 + 8) = v13;
    *(_OWORD *)(a1 + 16) = v24;
    *(_QWORD *)(a1 + 32) = v25;
    *(_BYTE *)(a1 + 40) = v20 & 1;
    *(_BYTE *)(a1 + 41) = v22;
    return a1;
  }
  v17 = uu_base32::base_common::Config::from::{{closure}}::{{closure}}(v13);
  v13 = v18;
  if ( !v17 )
    goto LABEL_28;
  *(_QWORD *)(a1 + 8) = v17;
  *(_QWORD *)(a1 + 16) = v18;
  *(_QWORD *)a1 = 2LL;
  if ( (_QWORD)v24 != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v24);
  return a1;
}
