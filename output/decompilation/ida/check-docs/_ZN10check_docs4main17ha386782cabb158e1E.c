__int64 check_docs::main()
{
  __int64 v0; // rbx
  __int64 v1; // r14
  __int64 v2; // r15
  char v3; // bp
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // r15
  __int128 v9; // [rsp+10h] [rbp-1E8h] BYREF
  __m256i v10; // [rsp+20h] [rbp-1D8h]
  __int128 v11; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-1A8h]
  __int128 v13; // [rsp+60h] [rbp-198h] BYREF
  __int64 v14; // [rsp+70h] [rbp-188h]
  __int128 v15; // [rsp+80h] [rbp-178h] BYREF
  __int64 v16; // [rsp+90h] [rbp-168h]
  __int128 v17; // [rsp+A0h] [rbp-158h] BYREF
  __int64 v18; // [rsp+B0h] [rbp-148h]
  __int128 v19; // [rsp+C0h] [rbp-138h] BYREF
  __int64 v20; // [rsp+D0h] [rbp-128h]
  __int64 v21; // [rsp+E0h] [rbp-118h]
  _BYTE v22[8]; // [rsp+E8h] [rbp-110h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-108h]
  __int64 v24; // [rsp+F8h] [rbp-100h]
  __int128 v25; // [rsp+100h] [rbp-F8h] BYREF
  __m256i v26; // [rsp+110h] [rbp-E8h]
  __int128 v27; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+140h] [rbp-B8h]
  __int128 v29; // [rsp+148h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+158h] [rbp-A0h]
  __int128 v31; // [rsp+160h] [rbp-98h] BYREF
  __int64 v32; // [rsp+170h] [rbp-88h]
  __int128 v33; // [rsp+178h] [rbp-80h] BYREF
  __int64 v34; // [rsp+188h] [rbp-70h]
  __int128 v35; // [rsp+190h] [rbp-68h] BYREF
  __int64 v36; // [rsp+1A0h] [rbp-58h]
  __int128 v37; // [rsp+1B0h] [rbp-48h] BYREF
  __int64 v38; // [rsp+1C0h] [rbp-38h]

  check_docs::search_for_pattern(&v9, aAnchor, 6LL, asc_437F6, 1LL);
  v0 = *((_QWORD *)&v9 + 1);
  v1 = v9;
  if ( !__OFSUB__(-(__int64)v9, 1LL) )
  {
    check_docs::extract_starts_and_ends(&v9, *((_QWORD *)&v9 + 1), v10.m256i_i64[0]);
    v2 = *((_QWORD *)&v9 + 1);
    if ( (_QWORD)v9 != 0x8000000000000000LL )
    {
      v37 = *(_OWORD *)&v10.m256i_u64[1];
      v38 = v10.m256i_i64[3];
      v33 = v9;
      v34 = v10.m256i_i64[0];
      check_docs::filter_valid_anchors(&v9, &v33, &v37);
      v20 = v10.m256i_i64[0];
      v19 = v9;
      v12 = v10.m256i_i64[3];
      v11 = *(_OWORD *)&v10.m256i_u64[1];
      check_docs::search_for_pattern(&v9, aInclude, 10LL, asc_437F6, 1LL);
      v2 = *((_QWORD *)&v9 + 1);
      v3 = 1;
      if ( (_QWORD)v9 != 0x8000000000000000LL )
      {
        v27 = v9;
        v28 = v10.m256i_i64[0];
        check_docs::parse_includes(&v9, &v27);
        v36 = v10.m256i_i64[0];
        v35 = v9;
        v14 = v10.m256i_i64[3];
        v13 = *(_OWORD *)&v10.m256i_u64[1];
        v26.m256i_i64[0] = v20;
        v25 = v19;
        check_docs::validate_includes(&v9, &v35, &v25);
        v16 = v10.m256i_i64[0];
        v15 = v9;
        v18 = v10.m256i_i64[3];
        v17 = *(_OWORD *)&v10.m256i_u64[1];
        check_docs::search_for_pattern(&v9, aMd, 3LL, aDocsSrcSummary, 21LL);
        v2 = *((_QWORD *)&v9 + 1);
        if ( (_QWORD)v9 != 0x8000000000000000LL )
        {
          v29 = v9;
          v30 = v10.m256i_i64[0];
          check_docs::parse_md_files(&v25, &v29, aDocsSrc, 11LL);
          check_docs::find_files(
            (unsigned int)&v9,
            (unsigned int)aMd_0,
            4,
            (unsigned int)aDocsSrc,
            11,
            (unsigned int)aSummaryMd,
            10LL);
          v2 = *((_QWORD *)&v9 + 1);
          if ( (_QWORD)v9 == 0x8000000000000000LL )
          {
            core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v25);
          }
          else
          {
            v31 = v9;
            v32 = v10.m256i_i64[0];
            v10 = v26;
            v9 = v25;
            check_docs::validate_md_files(v22, &v9, &v31);
            v21 = v18;
            check_docs::report_errors(aWarning, 7LL, *((_QWORD *)&v17 + 1));
            v5 = v14;
            check_docs::report_errors(aIncludePaths, 13LL, *((_QWORD *)&v13 + 1));
            v6 = v12;
            check_docs::report_errors(aAnchors, 7LL, *((_QWORD *)&v11 + 1));
            v7 = v16;
            check_docs::report_errors(aIncludes, 8LL, *((_QWORD *)&v15 + 1));
            v8 = v24;
            check_docs::report_errors(&unk_46750, 8LL, v23);
            if ( !v6 && !v7 && !v5 && !v21 && !v8 )
            {
              core::ptr::drop_in_place<alloc::vec::Vec<anyhow::Error>>(v22);
              core::ptr::drop_in_place<alloc::vec::Vec<anyhow::Error>>(&v17);
              core::ptr::drop_in_place<alloc::vec::Vec<anyhow::Error>>(&v15);
              core::ptr::drop_in_place<alloc::vec::Vec<anyhow::Error>>(&v13);
              core::ptr::drop_in_place<alloc::vec::Vec<anyhow::Error>>(&v11);
              core::ptr::drop_in_place<alloc::string::String>(v1, v0);
              return 0LL;
            }
            *(_QWORD *)&v9 = &off_1D28C8;
            *((_QWORD *)&v9 + 1) = 1LL;
            v10.m256i_i64[0] = 8LL;
            *(_OWORD *)&v10.m256i_u64[1] = 0LL;
            v2 = anyhow::__private::format_err(&v9);
            core::ptr::drop_in_place<alloc::vec::Vec<anyhow::Error>>(v22);
          }
        }
        core::ptr::drop_in_place<alloc::vec::Vec<anyhow::Error>>(&v17);
        core::ptr::drop_in_place<alloc::vec::Vec<anyhow::Error>>(&v15);
        core::ptr::drop_in_place<alloc::vec::Vec<anyhow::Error>>(&v13);
        v3 = 0;
      }
      core::ptr::drop_in_place<alloc::vec::Vec<anyhow::Error>>(&v11);
      if ( v3 )
        core::ptr::drop_in_place<alloc::vec::Vec<check_docs::Anchor>>(&v19);
    }
    core::ptr::drop_in_place<alloc::string::String>(v1, v0);
    return v2;
  }
  return v0;
}