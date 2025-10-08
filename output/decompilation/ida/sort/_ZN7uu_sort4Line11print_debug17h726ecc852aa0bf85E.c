__int64 __fastcall uu_sort::Line::print_debug(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 range; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  unsigned int v14; // r14d
  __int64 v15; // r15
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r13
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  char v22; // r15
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 leading_gen; // r14
  __int128 *v26; // rdi
  __int64 v27; // rsi
  unsigned int v28; // edx
  __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // r14
  __int64 v35; // r13
  __int64 v36; // rax
  unsigned __int64 v37; // r13
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // r13
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  char v61; // al
  __int64 v62; // rax
  char **v63; // r8
  bool v65; // zf
  __int64 v66; // rax
  __int128 v69; // [rsp+18h] [rbp-F0h] BYREF
  __int128 *v70; // [rsp+28h] [rbp-E0h]
  __int128 v71; // [rsp+30h] [rbp-D8h] BYREF
  char v72; // [rsp+40h] [rbp-C8h]
  int v73; // [rsp+48h] [rbp-C0h]
  __int16 v74; // [rsp+4Ch] [rbp-BCh]
  __int16 v75; // [rsp+4Eh] [rbp-BAh]
  __int128 v76; // [rsp+50h] [rbp-B8h] BYREF
  __int128 *v77; // [rsp+60h] [rbp-A8h]
  __int64 v78; // [rsp+68h] [rbp-A0h]
  __int128 *v79; // [rsp+70h] [rbp-98h] BYREF
  __int64 (__fastcall *v80)(); // [rsp+78h] [rbp-90h]
  __int64 v81; // [rsp+80h] [rbp-88h]
  __int64 v82; // [rsp+88h] [rbp-80h] BYREF
  __int64 v83; // [rsp+90h] [rbp-78h]
  __int64 v84; // [rsp+98h] [rbp-70h]
  __int64 v85; // [rsp+A0h] [rbp-68h]
  char v86[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v87; // [rsp+B0h] [rbp-58h]
  __int64 v88; // [rsp+B8h] [rbp-50h]
  __int64 v89; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v90; // [rsp+C8h] [rbp-40h]
  __int64 v91; // [rsp+D0h] [rbp-38h]

  v85 = a3;
  alloc::str::<impl str>::replace(v86, a1, a2);
  *(_QWORD *)&v76 = v86;
  *((_QWORD *)&v76 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v69 = &unk_18CE68;
  *((_QWORD *)&v69 + 1) = 2LL;
  v70 = &v76;
  v71 = 1uLL;
  v78 = a4;
  v5 = std::io::Write::write_fmt(a4, &v69);
  if ( !v5 )
  {
    v82 = 0LL;
    v83 = 8LL;
    v84 = 0LL;
    v6 = v85;
    uu_sort::tokenize(a1, a2, *(unsigned int *)(v85 + 120), &v82);
    v7 = *(_QWORD *)(v6 + 8);
    v8 = *(_QWORD *)(v6 + 16);
    v81 = v7 + 56 * v8;
    v89 = v8;
    if ( v8 )
    {
      v9 = v7 + 56;
      do
      {
        v91 = v9;
        range = uu_sort::FieldSelector::get_range(v7, a1, a2, v83, v84);
        v12 = range;
        v13 = v11;
        v14 = *(unsigned __int8 *)(v7 + 53);
        if ( v14 < 2 )
        {
          v15 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(range, v11);
          v31 = v30;
          v32 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                  v15,
                  v30,
                  a1,
                  a2);
          if ( !v32 )
          {
            v18 = a1;
            v38 = a2;
            v12 = v31;
            v63 = &off_18CE98;
            goto LABEL_50;
          }
          v90 = v31;
          BYTE8(v76) = (_BYTE)v14 == 1;
          *(_QWORD *)&v76 = 0x2E00110000LL;
          uu_sort::numeric_str_cmp::NumInfo::parse((__int64 *)&v69, v32, v33, &v76);
          v34 = (unsigned __int64)v70;
          v35 = v71;
          v36 = core::iter::traits::exact_size::ExactSizeIterator::len(v70, v71);
          v12 += v34;
          v13 = v12 + v36;
          if ( v34 | v35 )
          {
            if ( *(_BYTE *)(v7 + 53) == 1 )
            {
              v37 = v90;
              v18 = a1;
              v38 = a2;
              v39 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                      v12 + v36,
                      v90,
                      a1,
                      a2);
              if ( !v39 )
              {
                v15 = v13;
                v12 = v37;
                v63 = &off_18CEC8;
LABEL_50:
                core::str::slice_error_fail(v18, v38, v15, v12, v63);
              }
              v13 += (unsigned __int8)core::str::pattern::Pattern::is_prefix_of(v39, v40);
            }
            else
            {
              v38 = a2;
              v18 = a1;
            }
            v52 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                    v15,
                    v12,
                    v18,
                    v38);
            if ( !v52 )
            {
LABEL_49:
              v63 = &off_18CEE0;
              goto LABEL_50;
            }
            while ( (unsigned __int8)core::str::pattern::Pattern::is_suffix_of(v52, v53) )
            {
              v52 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                      v15,
                      --v12,
                      v18,
                      v38);
              if ( !v52 )
                goto LABEL_49;
            }
          }
          else
          {
            v15 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(v12, v12 + v36);
            v48 = v47;
            v18 = a1;
            v49 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                    v15,
                    v47,
                    a1,
                    a2);
            if ( !v49 )
            {
              v38 = a2;
              v12 = v48;
              v63 = &off_18CEB0;
              goto LABEL_50;
            }
            if ( (core::str::<impl str>::find(v49, v50) & 1) == 0 )
              v51 = 0LL;
            v12 += v51;
            v13 += v51;
          }
        }
        else
        {
          if ( v14 == 2 )
          {
            v15 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(range, v11);
            v42 = v41;
            v18 = a1;
            v43 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                    v15,
                    v41,
                    a1,
                    a2);
            if ( !v43 )
            {
              v38 = a2;
              v12 = v42;
              v63 = &off_18CEF8;
              goto LABEL_50;
            }
            leading_gen = uu_sort::get_leading_gen(v43, v44);
            v46 = core::iter::traits::exact_size::ExactSizeIterator::len(leading_gen, v45);
          }
          else
          {
            if ( v14 != 3 )
              goto LABEL_33;
            v15 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(range, v11);
            v17 = v16;
            v18 = a1;
            v19 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                    v15,
                    v16,
                    a1,
                    a2);
            if ( !v19 )
            {
              v38 = a2;
              v12 = v17;
              v63 = &off_18CF10;
              goto LABEL_50;
            }
            v21 = v20;
            *(_QWORD *)&v69 = v19;
            *((_QWORD *)&v69 + 1) = v20 + v19;
            v70 = 0LL;
            LOBYTE(v71) = 0;
            v22 = uu_sort::month_parse(v19, v20);
            v23 = core::iter::traits::iterator::Iterator::try_fold(&v69, &v71);
            leading_gen = v23;
            if ( v22 )
            {
              if ( v24 == 1114112 )
                core::option::unwrap_failed(&off_18CF28);
              v26 = &v69;
              v27 = 1114112LL;
              if ( !core::iter::traits::iterator::Iterator::advance_by(&v69) )
              {
                v26 = (__int128 *)core::iter::traits::iterator::Iterator::try_fold(&v69, &v71);
                v27 = v28;
              }
              v29 = core::option::Option<T>::map_or(v26, v27, v21);
            }
            else
            {
              leading_gen = core::option::Option<T>::map_or(v23, v24, v21, v21);
              v29 = v54;
            }
            v46 = core::iter::traits::exact_size::ExactSizeIterator::len(leading_gen, v29);
          }
          v12 += leading_gen;
          v13 = v12 + v46;
        }
LABEL_33:
        v18 = v87;
        v38 = v88;
        v55 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
                v12,
                v87,
                v88);
        if ( !v55 )
        {
          v15 = 0LL;
          v63 = &off_18CF40;
          goto LABEL_50;
        }
        v57 = core::iter::traits::double_ended::DoubleEndedIterator::rfold(v55, v55 + v56);
        alloc::slice::<impl [T]>::repeat(&v69, asc_2AC20, v57);
        v77 = v70;
        v76 = v69;
        v79 = &v76;
        v80 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v69 = asc_275D0;
        *((_QWORD *)&v69 + 1) = 1LL;
        v70 = (__int128 *)&v79;
        v71 = 1uLL;
        v5 = std::io::Write::write_fmt(v78, &v69);
        core::ptr::drop_in_place<alloc::string::String>(&v76);
        if ( v5 )
          goto LABEL_54;
        if ( v12 >= v13 )
        {
          *(_QWORD *)&v69 = &off_18CE88;
          *((_QWORD *)&v69 + 1) = 1LL;
          v70 = (_OWORD *)&byte_8;
          v71 = 0LL;
          v5 = std::io::Write::write_fmt(v78, &v69);
          if ( v5 )
            goto LABEL_54;
        }
        else
        {
          v18 = v87;
          v38 = v88;
          v58 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                  v12,
                  v13,
                  v87,
                  v88);
          if ( !v58 )
          {
            v15 = v12;
            v12 = v13;
            v63 = &off_18CF58;
            goto LABEL_50;
          }
          v60 = core::iter::traits::double_ended::DoubleEndedIterator::rfold(v58, v58 + v59);
          alloc::slice::<impl [T]>::repeat(&v69, asc_2AC34, v60);
          v77 = v70;
          v76 = v69;
          v79 = &v76;
          v80 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v69 = &unk_18CE68;
          *((_QWORD *)&v69 + 1) = 2LL;
          v70 = (__int128 *)&v79;
          v71 = 1uLL;
          v5 = std::io::Write::write_fmt(v78, &v69);
          core::ptr::drop_in_place<alloc::string::String>(&v76);
          if ( v5 )
            goto LABEL_54;
        }
        v9 = v91 + 56;
        v7 = v91;
      }
      while ( v91 != v81 );
    }
    v61 = *(_BYTE *)(v85 + 152);
    if ( v61 == 5 )
      goto LABEL_53;
    if ( *(_BYTE *)(v85 + 131) )
      goto LABEL_53;
    if ( *(_BYTE *)(v85 + 132) )
      goto LABEL_53;
    if ( !*(_BYTE *)(v85 + 127)
      && *(_BYTE *)(v85 + 125) != 1
      && !*(_BYTE *)(v85 + 126)
      && v61 == 6
      && !*(_BYTE *)(v85 + 128) )
    {
      v65 = v81 == 56;
      v81 -= 56LL;
      if ( v89 != 0 && !v65 )
      {
        v66 = <uu_sort::KeySettings as core::default::Default>::default();
        *(_QWORD *)&v71 = 1LL;
        *((_QWORD *)&v71 + 1) = 1LL;
        v72 = 0;
        LOBYTE(v70) = 2;
        v73 = v66;
        v74 = (v66 & 0xFFFFFFFFFFFFuLL) >> 32;
        v75 = 0;
        if ( (unsigned __int8)<uu_sort::FieldSelector as core::cmp::PartialEq>::eq(v81, &v69) )
          goto LABEL_53;
      }
    }
    if ( a2 )
    {
      v62 = core::iter::traits::double_ended::DoubleEndedIterator::rfold(v87, v87 + v88);
      alloc::slice::<impl [T]>::repeat(&v69, asc_2AC34, v62);
      v77 = v70;
      v76 = v69;
      v79 = &v76;
      v80 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v69 = &unk_18CE68;
      *((_QWORD *)&v69 + 1) = 2LL;
      v70 = (__int128 *)&v79;
      v71 = 1uLL;
      v5 = std::io::Write::write_fmt(v78, &v69);
      core::ptr::drop_in_place<alloc::string::String>(&v76);
    }
    else
    {
      *(_QWORD *)&v69 = &off_18CE88;
      *((_QWORD *)&v69 + 1) = 1LL;
      v70 = (_OWORD *)&byte_8;
      v71 = 0LL;
      v5 = std::io::Write::write_fmt(v78, &v69);
    }
    if ( !v5 )
LABEL_53:
      v5 = 0LL;
LABEL_54:
    core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpmc::array::Slot<uu_sort::chunks::Chunk>>>(v82, v83);
  }
  core::ptr::drop_in_place<alloc::string::String>(v86);
  return v5;
}