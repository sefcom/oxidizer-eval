_QWORD *__fastcall uu_env::EnvAppData::process_all_string_arguments(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r14
  char v9; // bp
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 (__fastcall **v15)(); // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rbx
  __int128 v20; // rax
  __int128 v21; // rax
  unsigned __int8 v22; // al
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r13
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  _OWORD *v33; // rcx
  _QWORD *result; // rax
  __int128 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rbx
  __int64 v40; // [rsp+0h] [rbp-178h]
  __int128 v41; // [rsp+10h] [rbp-168h] BYREF
  _QWORD *v42; // [rsp+20h] [rbp-158h]
  __int64 v43; // [rsp+28h] [rbp-150h]
  __int64 v44; // [rsp+30h] [rbp-148h]
  __int64 v45; // [rsp+48h] [rbp-130h]
  __int128 v46; // [rsp+50h] [rbp-128h] BYREF
  _QWORD *v47; // [rsp+60h] [rbp-118h]
  __int128 v48; // [rsp+68h] [rbp-110h] BYREF
  __int64 v49; // [rsp+78h] [rbp-100h]
  char v50[8]; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v51; // [rsp+88h] [rbp-F0h]
  __int64 v52; // [rsp+90h] [rbp-E8h]
  _QWORD *v53; // [rsp+98h] [rbp-E0h]
  _QWORD v54[3]; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-C0h]
  _QWORD v56[2]; // [rsp+C0h] [rbp-B8h] BYREF
  _QWORD v57[10]; // [rsp+D0h] [rbp-A8h] BYREF
  __int128 v58; // [rsp+120h] [rbp-58h] BYREF
  __int128 v59; // [rsp+130h] [rbp-48h] BYREF
  _QWORD *v60; // [rsp+140h] [rbp-38h]

  v45 = a2;
  v53 = a1;
  *(_QWORD *)&v48 = 0LL;
  *((_QWORD *)&v48 + 1) = 8LL;
  v49 = 0LL;
  v57[0] = aArgv0;
  v57[1] = 5LL;
  v57[2] = aChdir_0;
  v57[3] = 5LL;
  v57[4] = aFile;
  v57[5] = 4LL;
  v57[6] = aIgnoreSignal;
  v57[7] = 13LL;
  v57[8] = aUnset;
  v57[9] = 5LL;
  v58 = xmmword_1C3A0;
  v3 = *(_QWORD *)(a3 + 8);
  v55 = a3;
  v4 = v3 + 24LL * *(_QWORD *)(a3 + 16);
  v54[0] = v3;
  v54[1] = v4;
  v54[2] = 0LL;
  v5 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v54);
  if ( v6 )
  {
    v7 = v5;
    v8 = v6;
    v9 = 0;
    while ( 1 )
    {
      alloc::string::String::from_utf8_lossy(v50, *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16));
      if ( !(v9 & 1 | (v7 == 0)) )
      {
        if ( (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(
                                *(_QWORD *)(v8 + 8),
                                *(_QWORD *)(v8 + 16),
                                asc_1EC91,
                                2LL)
          || (v10 = v51,
              v11 = v52,
              LODWORD(v41) = 0,
              v12 = core::char::methods::encode_utf8_raw(45LL, &v41),
              !(unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, v12, v13))
          && !(unsigned __int8)<char as core::str::pattern::Pattern>::is_contained_in(v10, v11) )
        {
          <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v41, *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16));
          v47 = v42;
          v46 = v41;
          alloc::vec::Vec<T,A>::push(&v48, &v46, &off_110A70);
          core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v50);
          v24 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v54);
          if ( v25 )
          {
            v26 = v24;
            v27 = v25;
            do
            {
              alloc::string::String::from_utf8_lossy(v50, *(_QWORD *)(v27 + 8), *(_QWORD *)(v27 + 16));
              if ( !(v9 & 1 | (v26 == 0))
                && !(unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(
                                       *(_QWORD *)(v27 + 8),
                                       *(_QWORD *)(v27 + 16),
                                       asc_1EC91,
                                       2LL) )
              {
                v28 = v51;
                v29 = v52;
                LODWORD(v41) = 0;
                v30 = core::char::methods::encode_utf8_raw(45LL, &v41);
                if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v28, v29, v30, v31) )
                  <char as core::str::pattern::Pattern>::is_contained_in(v28, v29);
              }
              <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v41, *(_QWORD *)(v27 + 8), *(_QWORD *)(v27 + 16));
              v47 = v42;
              v46 = v41;
              alloc::vec::Vec<T,A>::push(&v48, &v46, &off_110A70);
              core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v50);
              v26 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v54);
              v27 = v32;
            }
            while ( v32 );
          }
          goto LABEL_40;
        }
      }
      uu_env::check_and_handle_string_args(
        &v41,
        *(_QWORD *)(v8 + 8),
        *(_QWORD *)(v8 + 16),
        (__int64)aSplitString,
        14LL,
        (__int64)&v48,
        0LL);
      v15 = (__int64 (__fastcall **)())*((_QWORD *)&v41 + 1);
      v14 = v41;
      if ( (_QWORD)v41 )
        goto LABEL_43;
      if ( (BYTE8(v41) & 1) != 0 )
        break;
      uu_env::check_and_handle_string_args(
        &v41,
        *(_QWORD *)(v8 + 8),
        *(_QWORD *)(v8 + 16),
        (__int64)aS_0,
        2LL,
        (__int64)&v48,
        0LL);
      v15 = (__int64 (__fastcall **)())*((_QWORD *)&v41 + 1);
      v14 = v41;
      if ( (_QWORD)v41 )
        goto LABEL_43;
      if ( (BYTE8(v41) & 1) != 0 )
        break;
      uu_env::check_and_handle_string_args(
        &v41,
        *(_QWORD *)(v8 + 8),
        *(_QWORD *)(v8 + 16),
        (__int64)aVs,
        3LL,
        (__int64)&v48,
        0LL);
      v15 = (__int64 (__fastcall **)())*((_QWORD *)&v41 + 1);
      v14 = v41;
      if ( (_QWORD)v41 )
        goto LABEL_43;
      if ( (BYTE8(v41) & 1) != 0 )
      {
        *(_WORD *)v45 = 257;
        goto LABEL_12;
      }
      uu_env::check_and_handle_string_args(
        &v41,
        *(_QWORD *)(v8 + 8),
        *(_QWORD *)(v8 + 16),
        (__int64)aVvs,
        4LL,
        (__int64)&v48,
        v55);
      v15 = (__int64 (__fastcall **)())*((_QWORD *)&v41 + 1);
      v14 = v41;
      if ( (_QWORD)v41 )
        goto LABEL_43;
      if ( (BYTE8(v41) & 1) != 0 )
      {
        v17 = v45;
        *(_WORD *)v45 = 257;
        *(_BYTE *)(v17 + 2) = 0;
        goto LABEL_12;
      }
      v18 = v51;
      v19 = v52;
      *(_QWORD *)&v20 = <&str as core::str::pattern::Pattern>::strip_prefix_of(asc_1EC91, 2LL, v51, v52);
      if ( (_QWORD)v20 )
      {
        v41 = v20;
        v9 = <T as core::slice::cmp::SliceContains>::slice_contains(&v41, v57);
      }
      else
      {
        *(_QWORD *)&v21 = <&str as core::str::pattern::Pattern>::strip_prefix_of(asc_1E8A6, 1LL, v18, v19);
        if ( (_QWORD)v21
          && (*((_QWORD *)&v21 + 1) += v21,
              v41 = v21,
              v22 = core::str::validations::next_code_point(&v41),
              (v22 & (v23 != (_DWORD)&off_110000)) == 1) )
        {
          do
          {
            LODWORD(v46) = v23;
            v9 = <char as core::slice::cmp::SliceContains>::slice_contains(&v46, &v58, 4LL);
          }
          while ( (core::str::validations::next_code_point(&v41) & 1) != 0 && v23 != (_DWORD)&off_110000 );
        }
        else
        {
          v9 = 0;
        }
      }
      if ( (unsigned __int8)<char as core::str::pattern::Pattern>::is_contained_in(v18, v19)
        && (unsigned __int8)core::slice::<impl [T]>::starts_with(v18, v19, aU, 2LL)
        && !(unsigned __int8)core::slice::<impl [T]>::starts_with(v18, v19, asc_1EC91, 2LL) )
      {
        *(_QWORD *)&v35 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                            v18,
                            v19);
        if ( !(_QWORD)v35 )
          core::str::slice_error_fail(v18, v19, 2LL, v19, &off_110A88);
        v46 = v35;
        v56[0] = &v46;
        v56[1] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v41 = &off_110A50;
        *((_QWORD *)&v41 + 1) = 2LL;
        v44 = 0LL;
        v42 = v56;
        v43 = 1LL;
        core::option::Option<T>::map_or_else(&v59, &v41, *((_QWORD *)&v35 + 1), v36, v37, v38, v40);
        LODWORD(v43) = 125;
        v41 = v59;
        v42 = v60;
        v14 = alloc::boxed::Box<T>::new(&v41);
        v15 = &off_1108A8;
LABEL_43:
        v39 = v53;
        v53[1] = v14;
        v39[2] = v15;
        *v39 = 0x8000000000000000LL;
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v50);
        core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v48);
        return v39;
      }
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v41, *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16));
      v47 = v42;
      v46 = v41;
      alloc::vec::Vec<T,A>::push(&v48, &v46, &off_110AA0);
LABEL_13:
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v50);
      v7 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v54);
      v8 = v16;
      if ( !v16 )
        goto LABEL_40;
    }
    *(_BYTE *)(v45 + 1) = 1;
LABEL_12:
    v9 = 0;
    goto LABEL_13;
  }
LABEL_40:
  v33 = v53;
  v53[2] = v49;
  result = v33;
  *v33 = v48;
  return result;
}