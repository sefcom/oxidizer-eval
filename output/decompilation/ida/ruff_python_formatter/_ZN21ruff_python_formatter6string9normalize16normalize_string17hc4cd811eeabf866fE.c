__int64 __fastcall ruff_python_formatter::string::normalize::normalize_string(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        int a6)
{
  bool v9; // bp
  __int64 v10; // rax
  void *v11; // r15
  __int64 v12; // rbp
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // r15d
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r13
  int v29; // eax
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r13
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 result; // rax
  __int64 v42; // rcx
  char **v43; // r8
  __int64 v44; // [rsp+8h] [rbp-120h] BYREF
  _BYTE v45[20]; // [rsp+14h] [rbp-114h] BYREF
  __int64 v46; // [rsp+28h] [rbp-100h]
  __int128 v47; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v48; // [rsp+40h] [rbp-E8h]
  __int64 v49; // [rsp+48h] [rbp-E0h] BYREF
  int v50; // [rsp+50h] [rbp-D8h]
  __int64 v51; // [rsp+60h] [rbp-C8h] BYREF
  int v52; // [rsp+68h] [rbp-C0h]
  int v53; // [rsp+6Ch] [rbp-BCh]
  __int128 v54; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+80h] [rbp-A8h]
  __int64 v56; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+90h] [rbp-98h]
  __int64 *v58; // [rsp+98h] [rbp-90h]
  __int64 *v59; // [rsp+A0h] [rbp-88h]
  __int128 v60; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v61; // [rsp+B8h] [rbp-70h]
  unsigned int v62; // [rsp+C8h] [rbp-60h]
  __int64 v63; // [rsp+D0h] [rbp-58h]
  __int64 v64; // [rsp+D8h] [rbp-50h]
  __int128 v65; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v66; // [rsp+F0h] [rbp-38h]

  v53 = a6;
  *(_DWORD *)&v45[8] = 0;
  *(_QWORD *)&v45[12] = 1LL;
  v46 = 0LL;
  v9 = (a5 & 1) == 0;
  ruff_python_formatter::string::normalize::CharIndicesWithOffset::new(&v60);
  *(_QWORD *)v45 = 5 * (unsigned int)v9 + 34;
  v52 = 5 * (a5 & 1) + 34;
  v10 = v61;
  v48 = v61;
  v47 = v60;
  v11 = &unk_110001;
  v12 = 0LL;
  while ( 1 )
  {
    v50 = (int)&unk_110001;
    if ( (_DWORD)v11 == (_DWORD)&unk_110001 )
    {
      v10 = <ruff_python_formatter::string::normalize::CharIndicesWithOffset as core::iter::traits::iterator::Iterator>::next(&v47);
      LODWORD(v11) = v13;
    }
    if ( (_DWORD)v11 == (_DWORD)&unk_110000 )
      break;
    v44 = v10;
    if ( (_DWORD)v11 == 13 )
    {
      v20 = v10;
      v21 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
              v12,
              v10,
              a2,
              a3);
      if ( !v21 )
      {
        v42 = v20;
        v43 = &off_57F718;
        goto LABEL_70;
      }
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v45[4],
        v21,
        v21 + v22);
      core::option::Option<T>::get_or_insert_with(&v49, &v47);
      if ( v50 == 10 )
        v50 = (int)&unk_110001;
      else
        alloc::string::String::push(&v45[4], 10LL);
      goto LABEL_3;
    }
    if ( ((_DWORD)v11 == 123 || (_DWORD)v11 == 125) && (_BYTE)v53 )
    {
      *(_QWORD *)&v60 = v12;
      *((_QWORD *)&v60 + 1) = v10;
      LOBYTE(v61) = 0;
      v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeInclusive<usize>>::index(
              &v60,
              a2,
              a3);
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v45[4],
        v14,
        v14 + v15);
      alloc::string::String::push(&v45[4], (unsigned int)v11);
LABEL_3:
      v12 = v44 + 1;
      goto LABEL_4;
    }
    if ( a5 < 0x40u )
    {
      if ( (_DWORD)v11 == 92 )
      {
        <core::iter::adapters::peekable::Peekable<I> as core::clone::Clone>::clone(&v60, &v47);
        v16 = v62;
        v62 = (unsigned int)&unk_110001;
        if ( v16 == (_DWORD)&unk_110001 )
        {
          <ruff_python_formatter::string::normalize::CharIndicesWithOffset as core::iter::traits::iterator::Iterator>::next(&v60);
          v16 = v17;
        }
        if ( v16 == 92 )
        {
          v26 = v50;
          v50 = (int)&unk_110001;
          if ( v26 != (_DWORD)&unk_110001 )
            goto LABEL_50;
          <ruff_python_formatter::string::normalize::CharIndicesWithOffset as core::iter::traits::iterator::Iterator>::next(&v47);
          if ( (a5 & 2) != 0 )
            goto LABEL_4;
LABEL_51:
          if ( v16 == v52 )
          {
            v29 = v50;
            v50 = (int)&unk_110001;
            if ( v29 == (_DWORD)&unk_110001 )
              <ruff_python_formatter::string::normalize::CharIndicesWithOffset as core::iter::traits::iterator::Iterator>::next(&v47);
            v30 = v44;
            v31 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                    v12,
                    v44,
                    a2,
                    a3);
            if ( !v31 )
            {
              v43 = &off_57F748;
              v42 = v30;
              goto LABEL_70;
            }
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
              &v45[4],
              v31,
              v31 + v32);
            goto LABEL_3;
          }
          if ( v16 == *(_DWORD *)v45 )
          {
            v33 = v50;
            v50 = (int)&unk_110001;
            if ( v33 == (_DWORD)&unk_110001 )
              <ruff_python_formatter::string::normalize::CharIndicesWithOffset as core::iter::traits::iterator::Iterator>::next(&v47);
          }
          goto LABEL_4;
        }
        if ( v16 == (_DWORD)&unk_110000 )
          goto LABEL_4;
        v18 = 2LL;
        v19 = 2LL;
        if ( v16 >= 0x80 )
        {
          v19 = 3LL;
          if ( v16 >= 0x800 )
            v19 = 5LL - (v16 < 0x10000);
        }
        v51 = v19;
        if ( (int)v16 > 116 )
        {
          if ( v16 != 120 )
          {
            if ( v16 != 117 || (a5 & 8) != 0 )
              goto LABEL_48;
            v18 = 4LL;
          }
LABEL_41:
          v27 = 0LL;
        }
        else
        {
          if ( v16 != 78 )
          {
            if ( v16 == 85 && (a5 & 8) == 0 )
            {
              v18 = 8LL;
              goto LABEL_41;
            }
LABEL_48:
            v56 = a2;
            v57 = a3;
            v58 = &v44;
            v59 = &v51;
            *(_QWORD *)&v65 = 0x8000000000000001LL;
LABEL_49:
            core::ptr::drop_in_place<core::option::Option<alloc::borrow::Cow<str>>>(&v65);
LABEL_50:
            if ( (a5 & 2) != 0 )
              goto LABEL_4;
            goto LABEL_51;
          }
          v27 = 1LL;
          if ( (a5 & 8) != 0 )
            goto LABEL_48;
        }
        v56 = a2;
        v57 = a3;
        v58 = &v44;
        v59 = &v51;
        ruff_python_formatter::string::normalize::normalize_string::{{closure}}(&v65, &v56, v27, v18);
        if ( (_QWORD)v65 == 0x8000000000000001LL )
          goto LABEL_49;
        v54 = v65;
        v55 = v66;
        v64 = a1;
        if ( (_QWORD)v65 == 0x8000000000000000LL )
        {
          v28 = v55;
          if ( v55 == -1 )
            goto LABEL_45;
        }
        else
        {
          v34 = v44 + v51;
          v35 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                  v12,
                  v44 + v51,
                  a2,
                  a3);
          if ( !v35 )
            core::str::slice_error_fail(a2, a3, v12, v34, &off_57F730);
          v63 = v34;
          <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
            &v45[4],
            v35,
            v35 + v36);
          v28 = v55;
          <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
            &v45[4],
            *((_QWORD *)&v54 + 1),
            *((_QWORD *)&v54 + 1) + v55);
          v12 = v28 + v63;
        }
        v37 = v28 + 1;
        do
        {
          v38 = v50;
          v50 = (int)&unk_110001;
          if ( v38 == (_DWORD)&unk_110001 )
            <ruff_python_formatter::string::normalize::CharIndicesWithOffset as core::iter::traits::iterator::Iterator>::next(&v47);
          --v37;
        }
        while ( v37 );
LABEL_45:
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v54);
        a1 = v64;
        if ( (a5 & 2) != 0 )
          goto LABEL_4;
        goto LABEL_51;
      }
      if ( (a5 & 2) == 0 && (_DWORD)v11 == *(_DWORD *)v45 )
      {
        v23 = v10;
        v24 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                v12,
                v10,
                a2,
                a3);
        if ( !v24 )
        {
          v43 = &off_57F760;
          v42 = v23;
          goto LABEL_70;
        }
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v45[4],
          v24,
          v24 + v25);
        alloc::string::String::push(&v45[4], 92LL);
        alloc::string::String::push(&v45[4], *(unsigned int *)v45);
        goto LABEL_3;
      }
    }
LABEL_4:
    LODWORD(v11) = v50;
    v10 = v49;
  }
  if ( v12 )
  {
    v39 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            v12,
            a2,
            a3);
    if ( !v39 )
    {
      v43 = &off_57F778;
      v42 = a3;
LABEL_70:
      core::str::slice_error_fail(a2, a3, v12, v42, v43);
    }
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v45[4],
      v39,
      v39 + v40);
    result = v46;
    *(_QWORD *)(a1 + 16) = v46;
    *(_OWORD *)a1 = *(_OWORD *)&v45[4];
  }
  else
  {
    *(_QWORD *)(a1 + 8) = a2;
    *(_QWORD *)(a1 + 16) = a3;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<alloc::string::String>(&v45[4]);
  }
  return result;
}