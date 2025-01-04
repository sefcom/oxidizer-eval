__int64 __fastcall uu_sort::Line::print_debug(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 range; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r14
  unsigned int v16; // r15d
  __int64 v17; // rbp
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r14
  char v23; // bl
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // r13
  __int128 **v27; // rdi
  __int64 v28; // rsi
  unsigned int v29; // edx
  __int64 v30; // rsi
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r13
  __int64 v35; // rbx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  unsigned __int64 v41; // r13
  __int64 v42; // r15
  unsigned __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 leading_gen; // rbx
  __int64 v51; // rdx
  __int64 v52; // r14
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rbx
  unsigned __int64 v58; // r13
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  char v62; // al
  __int64 v63; // rdi
  __int64 v64; // rax
  char **v66; // rax
  __int64 v67; // [rsp+0h] [rbp-108h]
  unsigned __int64 v68; // [rsp+8h] [rbp-100h]
  char **v69; // [rsp+10h] [rbp-F8h]
  __int128 *v70; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v71; // [rsp+20h] [rbp-E8h]
  __int64 v72; // [rsp+28h] [rbp-E0h]
  __int128 v73; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v74; // [rsp+48h] [rbp-C0h] BYREF
  __int64 (__fastcall *v75)(); // [rsp+50h] [rbp-B8h]
  __int64 v76; // [rsp+60h] [rbp-A8h]
  __int64 *v77; // [rsp+68h] [rbp-A0h] BYREF
  __int64 (__fastcall *v78)(); // [rsp+70h] [rbp-98h]
  char v79[8]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v80; // [rsp+80h] [rbp-88h]
  unsigned __int64 v81; // [rsp+88h] [rbp-80h]
  unsigned __int64 v82; // [rsp+90h] [rbp-78h]
  __int64 v83; // [rsp+98h] [rbp-70h] BYREF
  __int64 v84; // [rsp+A0h] [rbp-68h]
  __int64 v85; // [rsp+A8h] [rbp-60h]
  __int64 v86; // [rsp+B0h] [rbp-58h]
  __int64 v87; // [rsp+B8h] [rbp-50h]
  __int64 v88; // [rsp+C0h] [rbp-48h]
  _QWORD v89[8]; // [rsp+C8h] [rbp-40h] BYREF

  v6 = a2;
  v67 = a1;
  alloc::str::<impl str>::replace(v79, a1, a2);
  v74 = (__int64)v79;
  v75 = <alloc::string::String as core::fmt::Display>::fmt;
  v70 = (__int128 *)&unk_1FF8F0;
  v71 = 2LL;
  v72 = (__int64)&v74;
  v73 = 1uLL;
  v76 = a4;
  v7 = std::io::Write::write_fmt(a4, &v70);
  if ( v7 )
    goto LABEL_61;
  v83 = 0LL;
  v84 = 8LL;
  v85 = 0LL;
  uu_sort::tokenize(a1, a2, *(unsigned int *)(a3 + 120), &v83);
  v8 = *(_QWORD *)(a3 + 8);
  v88 = a3;
  v86 = *(_QWORD *)(a3 + 16);
  v87 = v8;
  v89[0] = v8;
  v89[1] = v8 + 56 * v86;
  v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v89);
  if ( v9 )
  {
    v10 = v9;
    v11 = a1;
    v69 = &off_1FF980;
    v68 = v6;
    do
    {
      range = uu_sort::FieldSelector::get_range(v10, v11, v6, v84, v85);
      v14 = range;
      v15 = v13;
      v16 = *(unsigned __int8 *)(v10 + 53);
      if ( v16 < 2 )
      {
        v17 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(range, v13);
        v82 = v31;
        v32 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                v17,
                v31,
                v67,
                v68);
        if ( !v32 )
        {
          v14 = v82;
          v66 = &off_1FF920;
          goto LABEL_66;
        }
        LOBYTE(v75) = (_BYTE)v16 == 1;
        v74 = 0x2E00110000LL;
        uu_sort::numeric_str_cmp::NumInfo::parse(&v70, v32, v33, &v74);
        v34 = v72;
        v35 = v73;
        v14 += v72;
        v15 = v14 + core::iter::traits::exact_size::ExactSizeIterator::len(v72, v73);
        if ( v34 || !(unsigned __int8)core::cmp::impls::<impl core::cmp::PartialEq for usize>::eq(v35) )
        {
          if ( (_BYTE)v16 == 1 )
          {
            v41 = v82;
            v42 = v67;
            v43 = v68;
            v44 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                    v15,
                    v82,
                    v67,
                    v68);
            if ( v44 )
            {
              v15 += (unsigned __int8)core::str::pattern::Pattern::is_prefix_of(v44, v45);
              goto LABEL_28;
            }
            v17 = v15;
            v14 = v41;
            v66 = &off_1FF950;
          }
          else
          {
            v43 = v68;
            v42 = v67;
LABEL_28:
            while ( 1 )
            {
              v53 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                      v17,
                      v14,
                      v42,
                      v43);
              if ( !v53 )
                break;
              if ( !(unsigned __int8)core::str::pattern::Pattern::is_suffix_of(v53, v54) )
                goto LABEL_34;
              --v14;
            }
            v66 = &off_1FF968;
          }
LABEL_66:
          v69 = v66;
LABEL_67:
          core::str::slice_error_fail(v67, v68, v17, v14, v69);
        }
        v17 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(v14, v15);
        v37 = v36;
        v38 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                v17,
                v36,
                v67,
                v68);
        if ( !v38 )
        {
          v14 = v37;
          v66 = &off_1FF938;
          goto LABEL_66;
        }
        if ( !core::str::<impl str>::find(v38, v39) )
          v40 = 0LL;
        v14 += v40;
        v15 += v40;
      }
      else
      {
        if ( v16 == 2 )
        {
          v17 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(range, v13);
          v47 = v46;
          v48 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                  v17,
                  v46,
                  v67,
                  v68);
          if ( !v48 )
          {
            v14 = v47;
            goto LABEL_67;
          }
          leading_gen = uu_sort::get_leading_gen(v48, v49);
          v52 = core::iter::traits::exact_size::ExactSizeIterator::len(leading_gen, v51);
          v14 += leading_gen;
        }
        else
        {
          if ( v16 != 3 )
            goto LABEL_34;
          v17 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(range, v13);
          v19 = v18;
          v20 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                  v17,
                  v18,
                  v67,
                  v68);
          if ( !v20 )
          {
            v14 = v19;
            v66 = &off_1FF998;
            goto LABEL_66;
          }
          v22 = v21;
          v70 = (__int128 *)v20;
          v71 = v21 + v20;
          v72 = 0LL;
          LOBYTE(v73) = 0;
          v23 = uu_sort::month_parse(v20, v21);
          v24 = core::iter::traits::iterator::Iterator::try_fold(&v70, &v73);
          v26 = v24;
          if ( v23 )
          {
            if ( v25 == 1114112 )
              core::option::unwrap_failed(&off_1FF9B0);
            v27 = &v70;
            v28 = 1114112LL;
            if ( !core::iter::traits::iterator::Iterator::advance_by(&v70) )
            {
              v27 = (__int128 **)core::iter::traits::iterator::Iterator::try_fold(&v70, &v73);
              v28 = v29;
            }
            v30 = core::option::Option<T>::map_or(v27, v28, v22);
          }
          else
          {
            v26 = core::option::Option<T>::map_or(v24, v25, v22, v22);
            v30 = v55;
          }
          v52 = core::iter::traits::exact_size::ExactSizeIterator::len(v26, v30);
          v14 += v26;
        }
        v15 = v14 + v52;
      }
LABEL_34:
      if ( v14 )
      {
        if ( v14 >= v81 )
        {
          if ( v14 != v81 )
          {
LABEL_68:
            v67 = v80;
            v68 = v81;
            v17 = 0LL;
            v66 = &off_1FF9C8;
            goto LABEL_66;
          }
        }
        else if ( *(char *)(v80 + v14) <= -65 )
        {
          goto LABEL_68;
        }
      }
      v56 = unicode_width::str_width(v80, v14, 0LL);
      alloc::str::<impl str>::repeat(&v74, asc_2EE65, 1LL, v56);
      v77 = &v74;
      v78 = <alloc::string::String as core::fmt::Display>::fmt;
      v70 = &xmmword_24B80;
      v71 = 1LL;
      v72 = (__int64)&v77;
      v73 = 1uLL;
      v7 = std::io::Write::write_fmt(v76, &v70);
      if ( v7 )
        goto LABEL_56;
      core::ptr::drop_in_place<alloc::string::String>(&v74);
      if ( v14 >= v15 )
      {
        v70 = (__int128 *)&off_1FF910;
        v71 = 1LL;
        v72 = 8LL;
        v73 = 0LL;
        v7 = std::io::Write::write_fmt(v76, &v70);
        if ( v7 )
          goto LABEL_60;
      }
      else
      {
        v57 = v80;
        v58 = v81;
        v59 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                v14,
                v15,
                v80,
                v81);
        if ( !v59 )
        {
          v67 = v57;
          v68 = v58;
          v17 = v14;
          v14 = v15;
          v66 = &off_1FF9E0;
          goto LABEL_66;
        }
        v61 = unicode_width::str_width(v59, v60, 0LL);
        alloc::str::<impl str>::repeat(&v74, asc_2EE64, 1LL, v61);
        v77 = &v74;
        v78 = <alloc::string::String as core::fmt::Display>::fmt;
        v70 = (__int128 *)&unk_1FF8F0;
        v71 = 2LL;
        v72 = (__int64)&v77;
        v73 = 1uLL;
        v7 = std::io::Write::write_fmt(v76, &v70);
        if ( v7 )
          goto LABEL_56;
        core::ptr::drop_in_place<alloc::string::String>(&v74);
      }
      v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v89);
      v6 = v68;
      v11 = v67;
    }
    while ( v10 );
  }
  v62 = *(_BYTE *)(v88 + 152);
  if ( v62 == 5 || *(_BYTE *)(v88 + 131) || *(_BYTE *)(v88 + 132) )
    goto LABEL_64;
  if ( !*(_DWORD *)(v88 + 125) && v62 == 6 )
  {
    v63 = 0LL;
    if ( v86 )
      v63 = 56 * (v86 - 1) + v87;
    if ( !(unsigned __int8)core::option::Option<T>::map_or(v63) )
      goto LABEL_64;
  }
  if ( !v6 )
  {
    v70 = (__int128 *)&off_1FF910;
    v71 = 1LL;
    v72 = 8LL;
    v73 = 0LL;
    v7 = std::io::Write::write_fmt(v76, &v70);
    if ( v7 )
      goto LABEL_60;
LABEL_64:
    core::ptr::drop_in_place<alloc::vec::Vec<core::ops::range::Range<usize>>>(&v83);
    core::ptr::drop_in_place<alloc::string::String>(v79);
    return 0LL;
  }
  v64 = unicode_width::str_width(v80, v81, 0LL);
  alloc::str::<impl str>::repeat(&v74, asc_2EE64, 1LL, v64);
  v77 = &v74;
  v78 = <alloc::string::String as core::fmt::Display>::fmt;
  v70 = (__int128 *)&unk_1FF8F0;
  v71 = 2LL;
  v72 = (__int64)&v77;
  v73 = 1uLL;
  v7 = std::io::Write::write_fmt(v76, &v70);
  if ( !v7 )
  {
    core::ptr::drop_in_place<alloc::string::String>(&v74);
    goto LABEL_64;
  }
LABEL_56:
  core::ptr::drop_in_place<alloc::string::String>(&v74);
LABEL_60:
  core::ptr::drop_in_place<alloc::vec::Vec<core::ops::range::Range<usize>>>(&v83);
LABEL_61:
  core::ptr::drop_in_place<alloc::string::String>(v79);
  return v7;
}
