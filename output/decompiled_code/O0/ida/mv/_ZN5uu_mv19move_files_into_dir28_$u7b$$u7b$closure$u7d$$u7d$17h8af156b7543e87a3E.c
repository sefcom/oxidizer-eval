__int64 __fastcall uu_mv::move_files_into_dir::{{closure}}(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  char v5; // [rsp+Fh] [rbp-89h] BYREF
  __int128 v6; // [rsp+10h] [rbp-88h] BYREF
  __int64 v7; // [rsp+20h] [rbp-78h]
  _BYTE v8[8]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v9; // [rsp+30h] [rbp-68h]
  __int64 v10; // [rsp+38h] [rbp-60h]
  _QWORD v11[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v12[7]; // [rsp+50h] [rbp-48h] BYREF
  char v13; // [rsp+88h] [rbp-10h]

  v2 = (unsigned __int8)(*a2 - 6);
  v3 = 0LL;
  if ( (unsigned __int8)v2 < 4u )
    v3 = v2 + 1;
  switch ( v3 )
  {
    case 0LL:
    case 1LL:
    case 2LL:
    case 3LL:
    case 4LL:
      std::sys::os_str::bytes::Slice::to_owned(v8);
      if ( !v9 || v10 < 0 )
        core::panicking::panic_nounwind(anon_e274cffadf33dbf508504243ff687348_19_llvm_17332325210196355997, 162LL);
      v11[0] = v9;
      v11[1] = v10;
      *(_QWORD *)&v6 = 0LL;
      *((_QWORD *)&v6 + 1) = 1LL;
      v7 = 0LL;
      v12[6] = 32LL;
      v13 = 3;
      v12[0] = 0LL;
      v12[2] = 0LL;
      v12[4] = &v6;
      v12[5] = &anon_447769264800e1b36145520fff97c7f2_4_llvm_3413629854620190702;
      if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(v11, v12) )
        core::result::unwrap_failed(
          anon_447769264800e1b36145520fff97c7f2_5_llvm_3413629854620190702,
          55LL,
          &v5,
          &anon_30ecf5788dc16ea493c1f299142c4ef1_19_llvm_10347183305587337279,
          &anon_447769264800e1b36145520fff97c7f2_7_llvm_3413629854620190702);
      *(_QWORD *)(a1 + 16) = v7;
      *(_OWORD *)a1 = v6;
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v8);
      return a1;
  }
}
