__int64 __fastcall uu_csplit::patterns::extract_patterns(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v4; // rax
  char i; // al
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbx
  bool v9; // zf
  __int64 v10; // r14
  __int64 v11; // rbx
  __int128 v12; // kr00_16
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbp
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int128 v27; // xmm0
  int v28; // [rsp+4h] [rbp-1F4h]
  __int64 v29; // [rsp+8h] [rbp-1F0h]
  __int128 v30; // [rsp+20h] [rbp-1D8h] BYREF
  __int128 v31; // [rsp+30h] [rbp-1C8h] BYREF
  __int128 v32; // [rsp+40h] [rbp-1B8h]
  __int128 v33; // [rsp+50h] [rbp-1A8h]
  __int64 v34; // [rsp+60h] [rbp-198h]
  __int64 v35; // [rsp+68h] [rbp-190h] BYREF
  __int128 v36; // [rsp+70h] [rbp-188h]
  __int128 v37; // [rsp+80h] [rbp-178h]
  __int64 v38; // [rsp+90h] [rbp-168h]
  __int64 v39; // [rsp+98h] [rbp-160h]
  __int128 v40; // [rsp+A0h] [rbp-158h]
  __int128 v41; // [rsp+B0h] [rbp-148h]
  __int64 v42; // [rsp+C0h] [rbp-138h] BYREF
  __int64 v43; // [rsp+C8h] [rbp-130h]
  __int64 v44; // [rsp+D0h] [rbp-128h] BYREF
  __int64 v45; // [rsp+D8h] [rbp-120h]
  __int128 v46; // [rsp+E0h] [rbp-118h] BYREF
  __int64 v47; // [rsp+F0h] [rbp-108h]
  __int128 v48; // [rsp+F8h] [rbp-100h] BYREF
  __int128 v49; // [rsp+108h] [rbp-F0h]
  __int128 v50; // [rsp+118h] [rbp-E0h] BYREF
  __int128 v51; // [rsp+128h] [rbp-D0h]
  __int128 v52; // [rsp+138h] [rbp-C0h]
  __int128 v53; // [rsp+148h] [rbp-B0h]
  __int64 v54; // [rsp+158h] [rbp-A0h]
  __int128 v55; // [rsp+160h] [rbp-98h]
  __int128 v56; // [rsp+170h] [rbp-88h]
  _BYTE v57[32]; // [rsp+188h] [rbp-70h] BYREF
  _BYTE v58[80]; // [rsp+1A8h] [rbp-50h] BYREF

  *(_QWORD *)&v4 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(a3, 8LL, 56LL, &off_242B10);
  v46 = v4;
  v47 = 0LL;
  regex::regex::string::Regex::new(&v30, aPUptoPSkiptoPO, 57LL);
  core::result::Result<T,E>::unwrap(v57, &v30, &off_242B28);
  regex::regex::string::Regex::new(&v30, aPTimesD, 23LL);
  core::result::Result<T,E>::unwrap(v58, &v30, &off_242B40);
  v44 = a2;
  v45 = a2 + 24 * a3;
  for ( i = 0; ; i = v42 )
  {
    while ( 1 )
    {
      v6 = v43;
      v42 = 0LL;
      if ( (i & 1) != 0 )
      {
        if ( !v43 )
          goto LABEL_38;
      }
      else
      {
        v6 = v44;
        if ( v44 == v45 )
        {
LABEL_38:
          *(_QWORD *)(a1 + 24) = v47;
          *(_OWORD *)(a1 + 8) = v46;
          *(_QWORD *)a1 = 13LL;
          core::ptr::drop_in_place<regex::regex::string::Regex>(v58);
          return core::ptr::drop_in_place<regex::regex::string::Regex>(v57);
        }
        v44 += 24LL;
      }
      v7 = *(_QWORD *)core::option::Option<T>::get_or_insert_with(&v42, &v44);
      if ( v7 )
      {
        regex::regex::string::Regex::captures_at(&v50, v58, *(_QWORD *)(v7 + 8), *(_QWORD *)(v7 + 16));
        v8 = 1LL;
        v29 = 1LL;
        if ( (_DWORD)v50 != 2 )
        {
          v34 = v54;
          v33 = v53;
          v32 = v52;
          v31 = v51;
          v30 = v50;
          v9 = (v42 & 1) == 0;
          v42 = 0LL;
          if ( v9 && v44 != v45 )
            v44 += 24LL;
          regex_automata::util::captures::Captures::get_group_by_name(&v35, &v31, aTimes, 5LL);
          if ( (v35 & 1) != 0 )
          {
            v10 = *((_QWORD *)&v33 + 1);
            v11 = v34;
            v12 = v36;
            v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                    v36,
                    *((_QWORD *)&v36 + 1),
                    *((_QWORD *)&v33 + 1),
                    v34);
            if ( !v13 )
              core::str::slice_error_fail(v10, v11, v12, *((_QWORD *)&v12 + 1), &off_242B58);
            core::num::<impl usize>::from_ascii_radix(&v35, v13);
            v8 = core::result::Result<T,E>::unwrap(&v35) + 1;
            v29 = 1LL;
          }
          else
          {
            v29 = 0LL;
          }
          core::ptr::drop_in_place<regex::regex::string::Captures>(&v30);
        }
      }
      else
      {
        v8 = 1LL;
        v29 = 1LL;
      }
      regex::regex::string::Regex::captures_at(&v50, v57, *(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16));
      if ( (_DWORD)v50 != 2 )
        break;
      core::ptr::drop_in_place<core::option::Option<regex::regex::string::Captures>>(&v50);
      core::num::<impl usize>::from_ascii_radix(&v50, *(_QWORD *)(v6 + 8));
      if ( (_BYTE)v50 == 1 )
      {
        <alloc::string::String as core::clone::Clone>::clone(&v30, v6);
        *(_QWORD *)(a1 + 24) = v31;
        *(_OWORD *)(a1 + 8) = v30;
        *(_QWORD *)a1 = 7LL;
        goto LABEL_41;
      }
      *((_QWORD *)&v30 + 1) = *((_QWORD *)&v50 + 1);
      *(_QWORD *)&v31 = v29;
      *((_QWORD *)&v31 + 1) = v8;
      LODWORD(v30) = 0;
      alloc::vec::Vec<T,A>::push(&v46, &v30, &off_242BD0);
      i = v42;
    }
    v34 = v54;
    v33 = v53;
    v32 = v52;
    v31 = v51;
    v30 = v50;
    regex_automata::util::captures::Captures::get_group_by_name(&v35, &v31, aOffset, 6LL);
    if ( (v35 & 1) != 0 )
    {
      v14 = *((_QWORD *)&v33 + 1);
      v15 = v34;
      v17 = *((_QWORD *)&v36 + 1);
      v16 = v36;
      v18 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
              v36,
              *((_QWORD *)&v36 + 1),
              *((_QWORD *)&v33 + 1),
              v34);
      if ( !v18 )
        goto LABEL_42;
      v20 = core::num::<impl i32>::from_ascii_radix(v18, v19);
      v28 = core::result::Result<T,E>::unwrap(v20);
    }
    else
    {
      v28 = 0;
    }
    regex_automata::util::captures::Captures::get_group_by_name(&v35, &v31, aUpto, 4LL);
    if ( (_DWORD)v35 != 1 )
      break;
    v14 = *((_QWORD *)&v33 + 1);
    v15 = v34;
    v17 = *((_QWORD *)&v36 + 1);
    v16 = v36;
    v21 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
            v36,
            *((_QWORD *)&v36 + 1),
            *((_QWORD *)&v33 + 1),
            v34);
    if ( !v21 )
      goto LABEL_42;
    regex::regex::string::Regex::new(&v48, v21, v22);
    if ( (_QWORD)v48 )
    {
      v41 = v49;
      v40 = v48;
    }
    else
    {
      uu_csplit::patterns::extract_patterns::{{closure}}(&v35, v6, (char *)&v48 + 8);
      v25 = v35;
      v40 = v36;
      v41 = v37;
      if ( v35 != 13 )
        goto LABEL_40;
    }
    v56 = v41;
    v55 = v40;
    v37 = v41;
    v36 = v40;
    HIDWORD(v35) = v28;
    v38 = v29;
    v39 = v8;
    LODWORD(v35) = 1;
    alloc::vec::Vec<T,A>::push(&v46, &v35, &off_242BA0);
LABEL_37:
    core::ptr::drop_in_place<regex::regex::string::Captures>(&v30);
  }
  regex_automata::util::captures::Captures::get_group_by_name(&v35, &v31, aSkipto, 6LL);
  if ( (v35 & 1) == 0 )
    goto LABEL_37;
  v14 = *((_QWORD *)&v33 + 1);
  v15 = v34;
  v17 = *((_QWORD *)&v36 + 1);
  v16 = v36;
  v23 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          v36,
          *((_QWORD *)&v36 + 1),
          *((_QWORD *)&v33 + 1),
          v34);
  if ( !v23 )
LABEL_42:
    core::str::slice_error_fail(v14, v15, v16, v17, &off_242B58);
  regex::regex::string::Regex::new(&v48, v23, v24);
  if ( (_QWORD)v48 )
  {
    v41 = v49;
    v40 = v48;
LABEL_36:
    v56 = v41;
    v55 = v40;
    v37 = v41;
    v36 = v40;
    HIDWORD(v35) = v28;
    v38 = v29;
    v39 = v8;
    LODWORD(v35) = 2;
    alloc::vec::Vec<T,A>::push(&v46, &v35, &off_242BB8);
    goto LABEL_37;
  }
  uu_csplit::patterns::extract_patterns::{{closure}}(&v35, v6, (char *)&v48 + 8);
  v25 = v35;
  v40 = v36;
  v41 = v37;
  if ( v35 == 13 )
    goto LABEL_36;
LABEL_40:
  v27 = v40;
  v56 = v41;
  v55 = v40;
  *(_OWORD *)(a1 + 24) = v41;
  *(_OWORD *)(a1 + 8) = v27;
  *(_QWORD *)a1 = v25;
  core::ptr::drop_in_place<regex::regex::string::Captures>(&v30);
LABEL_41:
  core::ptr::drop_in_place<regex::regex::string::Regex>(v58);
  core::ptr::drop_in_place<regex::regex::string::Regex>(v57);
  return core::ptr::drop_in_place<alloc::vec::Vec<uu_csplit::patterns::Pattern>>(&v46);
}