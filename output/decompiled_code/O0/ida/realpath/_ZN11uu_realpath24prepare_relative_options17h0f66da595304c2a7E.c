        unsigned __int8 a4)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int128 v8; // kr00_16
  __int64 v9; // r15
  __int64 v10; // r12
  __int128 *v11; // rdi
  __int64 v12; // r12
  __int128 v14; // [rsp+10h] [rbp-218h] BYREF
  __int64 v15; // [rsp+20h] [rbp-208h]
  __int128 v16; // [rsp+28h] [rbp-200h] BYREF
  __int64 v17; // [rsp+38h] [rbp-1F0h]
  const char *v18; // [rsp+40h] [rbp-1E8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-1E0h]
  const char **v20; // [rsp+50h] [rbp-1D8h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+58h] [rbp-1D0h]
  __int128 *v22; // [rsp+60h] [rbp-1C8h]
  __int64 (__fastcall *v23)(); // [rsp+68h] [rbp-1C0h]
  __int128 v24; // [rsp+70h] [rbp-1B8h]
  __int64 v25; // [rsp+80h] [rbp-1A8h]
  __int128 v26; // [rsp+88h] [rbp-1A0h] BYREF
  __int64 v27; // [rsp+98h] [rbp-190h]
  char **v28; // [rsp+A0h] [rbp-188h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-180h]
  const char ***v30; // [rsp+B0h] [rbp-178h]
  __int64 v31; // [rsp+B8h] [rbp-170h]
  __int64 v32; // [rsp+C0h] [rbp-168h]
  __int128 v33; // [rsp+D0h] [rbp-158h]
  __int64 v34; // [rsp+E0h] [rbp-148h]
  __int128 v35; // [rsp+E8h] [rbp-140h]
  __int64 v36; // [rsp+F8h] [rbp-130h]
  __int128 v37; // [rsp+108h] [rbp-120h] BYREF
  __int64 v38; // [rsp+118h] [rbp-110h]
  __int128 v39; // [rsp+120h] [rbp-108h] BYREF
  __int64 v40; // [rsp+130h] [rbp-F8h]
  _BYTE v41[24]; // [rsp+138h] [rbp-F0h] BYREF
  __int128 v42; // [rsp+150h] [rbp-D8h]
  __int128 v43; // [rsp+160h] [rbp-C8h]
  __int128 v44; // [rsp+170h] [rbp-B8h]
  __int128 v45; // [rsp+180h] [rbp-A8h] BYREF
  __int128 v46; // [rsp+190h] [rbp-98h]
  __int128 v47; // [rsp+1A0h] [rbp-88h]
  __int128 v48; // [rsp+1B0h] [rbp-78h]
  __int128 v49; // [rsp+1C0h] [rbp-68h] BYREF
  __int64 v50; // [rsp+1D0h] [rbp-58h]
  __int128 v51; // [rsp+1E0h] [rbp-48h] BYREF
  __int64 v52; // [rsp+1F0h] [rbp-38h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v41, a2, aRelativeTo, 11LL);
  v18 = aRelativeTo;
  v19 = 11LL;
  if ( *(_QWORD *)v41 )
  {
    v48 = v44;
    v47 = v43;
    v46 = v42;
    v45 = *(_OWORD *)&v41[8];
    v20 = &v18;
    v21 = <&T as core::fmt::Display>::fmt;
    v22 = &v45;
    v23 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v28 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v29 = 2LL;
    v32 = 0LL;
    v30 = &v20;
    v31 = 2LL;
    core::panicking::panic_fmt(&v28, &off_10E0B0);
  }
  v7 = 0x8000000000000000LL;
  if ( *(_QWORD *)&v41[8] )
  {
    if ( !*(_QWORD *)(*(_QWORD *)&v41[8] + 8LL) )
      goto LABEL_34;
    v6 = *(_QWORD *)(*(_QWORD *)&v41[8] + 16LL);
    if ( v6 < 0 )
      goto LABEL_34;
    std::sys::os_str::bytes::Slice::to_owned(v41);
    v25 = *(_QWORD *)&v41[16];
    v24 = *(_OWORD *)v41;
  }
  else
  {
    *(_QWORD *)&v24 = 0x8000000000000000LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v41, a2, aRelativeBase, 13LL);
  v18 = aRelativeBase;
  v19 = 13LL;
  if ( *(_QWORD *)v41 )
  {
    v48 = v44;
    v47 = v43;
    v46 = v42;
    v45 = *(_OWORD *)&v41[8];
    v20 = &v18;
    v21 = <&T as core::fmt::Display>::fmt;
    v22 = &v45;
    v23 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v28 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v29 = 2LL;
    v32 = 0LL;
    v30 = &v20;
    v31 = 2LL;
    core::panicking::panic_fmt(&v28, &off_10E0C8);
  }
  if ( *(_QWORD *)&v41[8] )
  {
    if ( !*(_QWORD *)(*(_QWORD *)&v41[8] + 8LL) )
      goto LABEL_34;
    v6 = *(_QWORD *)(*(_QWORD *)&v41[8] + 16LL);
    if ( v6 < 0 )
      goto LABEL_34;
    std::sys::os_str::bytes::Slice::to_owned(v41);
    v15 = *(_QWORD *)&v41[16];
    v14 = *(_OWORD *)v41;
  }
  else
  {
    *(_QWORD *)&v14 = 0x8000000000000000LL;
  }
  v49 = v24;
  v50 = v25;
  uu_realpath::canonicalize_relative_option(&v37, &v49, a3, a4);
  v8 = v37;
  v9 = v38;
  if ( (_QWORD)v37 == 0x8000000000000001LL )
  {
    v10 = a1;
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v37 + 1);
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)a1 = 0x8000000000000001LL;
    if ( (_QWORD)v14 != 0x8000000000000000LL )
    {
      v11 = &v14;
LABEL_20:
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v11);
      return v10;
    }
    return v10;
  }
  v16 = v37;
  v17 = v38;
  v51 = v14;
  v52 = v15;
  uu_realpath::canonicalize_relative_option(&v39, &v51, a3, a4);
  v6 = *((_QWORD *)&v39 + 1);
  v12 = v39;
  v7 = v40;
  if ( (_QWORD)v39 == 0x8000000000000001LL )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v39 + 1);
    *(_QWORD *)(a1 + 16) = v7;
    *(_QWORD *)a1 = 0x8000000000000001LL;
    goto LABEL_18;
  }
  v26 = v39;
  v27 = v40;
  if ( (_QWORD)v39 == 0x8000000000000000LL )
  {
    v6 = 0LL;
  }
  else if ( !*((_QWORD *)&v39 + 1) || v40 < 0 )
  {
    goto LABEL_34;
  }
  if ( (_QWORD)v8 == 0x8000000000000000LL )
  {
LABEL_30:
    v34 = v17;
    v33 = v16;
    v36 = v27;
    v35 = v26;
    v10 = a1;
    *(_OWORD *)a1 = v16;
    *(_QWORD *)(a1 + 16) = v34;
    *(_OWORD *)(a1 + 24) = v35;
    *(_QWORD *)(a1 + 40) = v36;
    return v10;
  }
  if ( !*((_QWORD *)&v8 + 1) || v9 < 0 )
LABEL_34:
    core::panicking::panic_nounwind(anon_3f82f01e3ba563847365fa446bc88cdd_30_llvm_12311298718025117761, 162LL, v6, v7);
  if ( !v6 || (unsigned __int8)std::path::Path::_starts_with(*((_QWORD *)&v8 + 1), v9, v6, v40) )
    goto LABEL_30;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
  if ( v12 != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v26);
LABEL_18:
  v10 = a1;
  if ( (_QWORD)v16 != 0x8000000000000000LL )
  {
    v11 = &v16;
    goto LABEL_20;
  }
  return v10;
}
