__int64 __fastcall forc_fmt::display_file_diff(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v8; // rbp
  __int128 *v9; // r14
  __int128 *v10; // r13
  __int128 *v11; // rax
  int v12; // eax
  __int128 *v13; // r13
  __int128 *v14; // rax
  int v15; // eax
  __int128 *v16; // r13
  __int128 *v17; // rax
  unsigned __int8 v18; // al
  __int128 *v19; // r15
  char *v20; // rbx
  __int64 v21; // rax
  void *v22; // r12
  __int128 v23; // xmm0
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rbp
  __int128 *v27; // rdi
  char *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r9
  int v31; // eax
  __int128 *v32; // r12
  __int64 v33; // r15
  __int128 *v34; // r13
  __int128 *v35; // rax
  int v36; // eax
  __int128 *v37; // r15
  __int128 *v38; // rax
  int v39; // eax
  __int128 v40; // [rsp+0h] [rbp-1C8h] BYREF
  __int128 v41; // [rsp+10h] [rbp-1B8h]
  __int64 v42; // [rsp+20h] [rbp-1A8h]
  __int128 *v43; // [rsp+38h] [rbp-190h] BYREF
  __int128 *v44; // [rsp+40h] [rbp-188h]
  void *v45; // [rsp+48h] [rbp-180h]
  __int128 v46; // [rsp+50h] [rbp-178h] BYREF
  __int128 v47; // [rsp+60h] [rbp-168h]
  __int64 v48; // [rsp+70h] [rbp-158h]
  __int64 v49; // [rsp+78h] [rbp-150h]
  __int128 v50; // [rsp+80h] [rbp-148h] BYREF
  __int128 v51; // [rsp+90h] [rbp-138h]
  __int64 v52; // [rsp+A0h] [rbp-128h]
  __int64 v53; // [rsp+A8h] [rbp-120h]
  __int128 *v54; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-110h] BYREF
  __int128 *v56; // [rsp+C0h] [rbp-108h]
  __int64 v57; // [rsp+C8h] [rbp-100h]
  __int128 *v58; // [rsp+D0h] [rbp-F8h]
  __int64 v59; // [rsp+D8h] [rbp-F0h]
  __int128 **v60; // [rsp+E0h] [rbp-E8h] BYREF
  __int64 (__fastcall *v61)(); // [rsp+E8h] [rbp-E0h]
  char *v62; // [rsp+F0h] [rbp-D8h]
  _BYTE v63[24]; // [rsp+F8h] [rbp-D0h] BYREF
  _QWORD v64[2]; // [rsp+110h] [rbp-B8h] BYREF
  _BYTE v65[32]; // [rsp+120h] [rbp-A8h] BYREF
  _BYTE v66[136]; // [rsp+140h] [rbp-88h] BYREF

  prettydiff::text::diff_lines(v66, a1, a2, a3, a4);
  prettydiff::text::LineChangeset::diff(&v40, v66);
  v4 = &v40;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v65, &v40);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v55, v65);
  v6 = v55;
  if ( v55 != 4 )
  {
    v8 = 0LL;
    do
    {
      if ( (int)v8 >= 100 )
        break;
      v9 = v56;
      switch ( v6 )
      {
        case 0LL:
          v8 = (unsigned int)(v8 + 1);
          if ( v57 )
          {
            v10 = &v56[v57];
            v11 = v56 + 1;
            do
            {
              v43 = v9;
              v9 = v11;
              *(_QWORD *)&v50 = &v43;
              *((_QWORD *)&v50 + 1) = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v40 = &off_80A460;
              *((_QWORD *)&v40 + 1) = 1LL;
              v42 = 0LL;
              *(_QWORD *)&v41 = &v50;
              *((_QWORD *)&v41 + 1) = 1LL;
              core::option::Option<T>::map_or_else(&v46, 0LL, v5, v4);
              v40 = v46;
              *(_QWORD *)&v41 = v47;
              forc_tracing::println_green(*((_QWORD *)&v46 + 1));
              core::ptr::drop_in_place<alloc::string::String>(v4);
              v12 = 0;
              if ( v9 == v10 )
                break;
              LOBYTE(v12) = 1;
              v11 = (__int128 *)((char *)v9 + (unsigned int)(16 * v12));
            }
            while ( v9 );
          }
          goto LABEL_5;
        case 1LL:
          v32 = v58;
          v33 = v59;
          if ( v57 )
          {
            v34 = &v56[v57];
            v35 = v56 + 1;
            do
            {
              v43 = v9;
              v9 = v35;
              *(_QWORD *)&v50 = &v43;
              *((_QWORD *)&v50 + 1) = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v40 = &off_80A470;
              *((_QWORD *)&v40 + 1) = 1LL;
              v42 = 0LL;
              *(_QWORD *)&v41 = &v50;
              *((_QWORD *)&v41 + 1) = 1LL;
              core::option::Option<T>::map_or_else(&v46, 0LL, v5, v4);
              v40 = v46;
              *(_QWORD *)&v41 = v47;
              forc_tracing::println_red(*((_QWORD *)&v46 + 1));
              core::ptr::drop_in_place<alloc::string::String>(v4);
              v36 = 0;
              if ( v9 == v34 )
                break;
              LOBYTE(v36) = 1;
              v35 = (__int128 *)((char *)v9 + (unsigned int)(16 * v36));
            }
            while ( v9 );
          }
          v8 = (unsigned int)(v8 + 1);
          if ( v33 )
          {
            v37 = &v32[v33];
            v38 = v32 + 1;
            do
            {
              v43 = v32;
              v32 = v38;
              *(_QWORD *)&v50 = &v43;
              *((_QWORD *)&v50 + 1) = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v40 = &off_80A460;
              *((_QWORD *)&v40 + 1) = 1LL;
              v42 = 0LL;
              *(_QWORD *)&v41 = &v50;
              *((_QWORD *)&v41 + 1) = 1LL;
              core::option::Option<T>::map_or_else(&v46, 0LL, v5, v4);
              v40 = v46;
              *(_QWORD *)&v41 = v47;
              forc_tracing::println_green(*((_QWORD *)&v46 + 1));
              core::ptr::drop_in_place<alloc::string::String>(v4);
              v39 = 0;
              if ( v32 == v37 )
                break;
              LOBYTE(v39) = 1;
              v38 = (__int128 *)((char *)v32 + (unsigned int)(16 * v39));
            }
            while ( v32 );
          }
          goto LABEL_5;
        case 2LL:
          v8 = (unsigned int)(v8 + 1);
          if ( v57 )
          {
            v13 = &v56[v57];
            v14 = v56 + 1;
            do
            {
              v43 = v9;
              v9 = v14;
              *(_QWORD *)&v50 = &v43;
              *((_QWORD *)&v50 + 1) = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v40 = &off_80A470;
              *((_QWORD *)&v40 + 1) = 1LL;
              v42 = 0LL;
              *(_QWORD *)&v41 = &v50;
              *((_QWORD *)&v41 + 1) = 1LL;
              core::option::Option<T>::map_or_else(&v46, 0LL, v5, v4);
              v40 = v46;
              *(_QWORD *)&v41 = v47;
              forc_tracing::println_red(*((_QWORD *)&v46 + 1));
              core::ptr::drop_in_place<alloc::string::String>(v4);
              v15 = 0;
              if ( v9 == v13 )
                break;
              LOBYTE(v15) = 1;
              v14 = (__int128 *)((char *)v9 + (unsigned int)(16 * v15));
            }
            while ( v9 );
          }
          goto LABEL_5;
        case 3LL:
          if ( !v57 )
            goto LABEL_5;
          v53 = v8;
          v16 = &v56[v57];
          v17 = v56 + 1;
          break;
      }
      do
      {
        v54 = v9;
        v9 = v17;
        if ( (unsigned __int64)core::sync::atomic::atomic_load(&tracing_core::metadata::MAX_LEVEL) <= 2
          && (v18 = tracing_core::callsite::DefaultCallsite::interest(&forc_fmt::display_file_diff::__CALLSITE)) != 0
          && (unsigned __int8)tracing::__macro_support::__is_enabled(forc_fmt::display_file_diff::__CALLSITE, v18) )
        {
          v19 = v4;
          v20 = (char *)forc_fmt::display_file_diff::__CALLSITE;
          v21 = *((_QWORD *)forc_fmt::display_file_diff::__CALLSITE + 7);
          v46 = *((_OWORD *)forc_fmt::display_file_diff::__CALLSITE + 3);
          v47 = *((_OWORD *)forc_fmt::display_file_diff::__CALLSITE + 4);
          v48 = 0LL;
          v49 = v21;
          <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(v19, &v46);
          if ( !(_QWORD)v40 )
            goto LABEL_42;
          v52 = v42;
          v51 = v41;
          v50 = v40;
          v60 = &v54;
          v61 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v40 = &unk_166A30;
          *((_QWORD *)&v40 + 1) = 1LL;
          v42 = 0LL;
          *(_QWORD *)&v41 = &v60;
          *((_QWORD *)&v41 + 1) = 1LL;
          v43 = &v50;
          v44 = v19;
          v45 = &unk_80A3A8;
          *(_QWORD *)&v46 = &v43;
          *((_QWORD *)&v46 + 1) = 1LL;
          *(_QWORD *)&v47 = v20 + 48;
          forc_fmt::display_file_diff::{{closure}}(&v46);
          v4 = v19;
        }
        else if ( !(unsigned __int8)core::sync::atomic::atomic_load(&tracing_core::dispatcher::EXISTS)
               && (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) >= 3 )
        {
          v22 = forc_fmt::display_file_diff::__CALLSITE;
          v23 = *((_OWORD *)forc_fmt::display_file_diff::__CALLSITE + 2);
          *(_QWORD *)v63 = 3LL;
          *(_OWORD *)&v63[8] = v23;
          v24 = log::logger();
          v26 = v25;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *))(v25 + 24))(v24, v63) )
          {
            v27 = v4;
            v28 = (char *)forc_fmt::display_file_diff::__CALLSITE;
            v29 = *((_QWORD *)forc_fmt::display_file_diff::__CALLSITE + 7);
            v46 = *((_OWORD *)forc_fmt::display_file_diff::__CALLSITE + 3);
            v47 = *((_OWORD *)forc_fmt::display_file_diff::__CALLSITE + 4);
            v48 = 0LL;
            v49 = v29;
            <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(v27, &v46);
            if ( !(_QWORD)v40 )
LABEL_42:
              core::option::expect_failed(aFieldsetCorrup, 34LL, &off_80A480);
            v52 = v42;
            v51 = v41;
            v50 = v40;
            v64[0] = &v54;
            v64[1] = <&T as core::fmt::Display>::fmt;
            v43 = &v50;
            v44 = &v40;
            v45 = &unk_80A3A8;
            v60 = &v43;
            v61 = (__int64 (__fastcall *)())(&dword_0 + 1);
            v62 = v28 + 48;
            *(_QWORD *)&v47 = *(_QWORD *)&v63[16];
            v46 = *(_OWORD *)v63;
            tracing::__macro_support::__tracing_log(v22, v24, v26, &v46, &v60, v30, &unk_166A30, 1LL, v64, 1LL, 0LL);
            v4 = &v40;
          }
        }
        v31 = 0;
        if ( v9 == v16 )
          break;
        LOBYTE(v31) = 1;
        v17 = (__int128 *)((char *)v9 + (unsigned int)(16 * v31));
      }
      while ( v9 );
      v8 = v53;
LABEL_5:
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v55, v65);
      v6 = v55;
    }
    while ( v55 != 4 );
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<prettydiff::basic::DiffOp<&str>>>(v65);
  return core::ptr::drop_in_place<prettydiff::text::LineChangeset>(v66);
}