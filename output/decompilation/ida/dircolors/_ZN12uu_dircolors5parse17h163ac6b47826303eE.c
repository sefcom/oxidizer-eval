__int64 __fastcall uu_dircolors::parse(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, __int64 a5)
{
  __int128 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // r12
  char v17; // r14
  __int64 v18; // r12
  __int64 v19; // r14
  char v20; // al
  void *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int128 v24; // rdi
  __int64 v26; // rcx
  _QWORD *v27; // rcx
  int v28; // [rsp+8h] [rbp-220h]
  char v29; // [rsp+Ch] [rbp-21Ch]
  __int64 v30; // [rsp+10h] [rbp-218h]
  __int64 v31; // [rsp+18h] [rbp-210h]
  __int64 v32; // [rsp+20h] [rbp-208h]
  __int128 v33; // [rsp+28h] [rbp-200h] BYREF
  __int64 v34; // [rsp+38h] [rbp-1F0h]
  __int128 v35; // [rsp+40h] [rbp-1E8h]
  __int64 v36; // [rsp+50h] [rbp-1D8h]
  __int64 v37; // [rsp+58h] [rbp-1D0h]
  __int64 v38; // [rsp+60h] [rbp-1C8h]
  __int128 v39; // [rsp+68h] [rbp-1C0h]
  __int64 v40; // [rsp+78h] [rbp-1B0h]
  __int128 v41; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v42; // [rsp+90h] [rbp-198h]
  __int64 v43; // [rsp+98h] [rbp-190h]
  _BYTE *v44; // [rsp+A0h] [rbp-188h]
  __int64 v45; // [rsp+A8h] [rbp-180h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-178h]
  __int64 v47; // [rsp+B8h] [rbp-170h]
  char v48; // [rsp+C0h] [rbp-168h]
  _BYTE v49[24]; // [rsp+C8h] [rbp-160h] BYREF
  __int64 v50; // [rsp+E0h] [rbp-148h]
  __int64 v51; // [rsp+E8h] [rbp-140h]
  __int64 v52; // [rsp+F0h] [rbp-138h]
  void *v53; // [rsp+100h] [rbp-128h] BYREF
  _BYTE v54[24]; // [rsp+108h] [rbp-120h]
  __int64 v55; // [rsp+120h] [rbp-108h]
  __int64 v56; // [rsp+130h] [rbp-F8h]
  __int64 v57; // [rsp+138h] [rbp-F0h]
  void *v58; // [rsp+140h] [rbp-E8h]
  __int64 v59; // [rsp+148h] [rbp-E0h]
  __int64 v60; // [rsp+150h] [rbp-D8h]
  __int64 v61; // [rsp+158h] [rbp-D0h]
  __int64 v62; // [rsp+160h] [rbp-C8h]
  _QWORD v63[3]; // [rsp+168h] [rbp-C0h] BYREF
  __int64 v64; // [rsp+180h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+188h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+190h] [rbp-98h]
  __int64 v67; // [rsp+198h] [rbp-90h]
  __int64 v68; // [rsp+1A0h] [rbp-88h] BYREF
  __int64 v69; // [rsp+1A8h] [rbp-80h]
  __int64 v70; // [rsp+1B0h] [rbp-78h]
  __int64 v71; // [rsp+1B8h] [rbp-70h]
  _QWORD v72[4]; // [rsp+1C0h] [rbp-68h] BYREF
  __int128 v73; // [rsp+1E0h] [rbp-48h] BYREF
  __int64 v74; // [rsp+1F0h] [rbp-38h]

  v56 = a2;
  *(_QWORD *)&v8 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(1790LL, 1LL, 1LL, &off_F4F30);
  v33 = v8;
  v34 = 0LL;
  uu_dircolors::get_colors_format_strings(v49, a3);
  v39 = *(_OWORD *)v49;
  v38 = v50;
  v62 = v52;
  v40 = v51;
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v33,
    *(_QWORD *)&v49[8],
    *(_QWORD *)&v49[8] + *(_QWORD *)&v49[16]);
  std::env::var(v49, aTerm_0, 4LL);
  if ( *(_DWORD *)v49 == 1 )
  {
    uu_dircolors::parse::{{closure}}(&v41, *(_QWORD *)&v49[8], *(_QWORD *)&v49[16]);
  }
  else
  {
    v42 = v50;
    v41 = *(_OWORD *)&v49[8];
  }
  v59 = a4;
  v60 = a5;
  v44 = a3;
  v37 = a1;
  std::env::var(v49, aColorterm_0, 9LL);
  core::result::Result<T,E>::unwrap_or_default(v63, v49);
  <I as core::iter::traits::collect::IntoIterator>::into_iter(&v53, a2);
  core::iter::traits::iterator::Iterator::enumerate(v49, &v53);
  v32 = v63[1];
  v43 = v63[2];
  v30 = *((_QWORD *)&v41 + 1);
  v61 = v42;
  v28 = 0;
  v29 = 0;
  while ( 1 )
  {
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v68, v49);
    v9 = v69;
    if ( v69 == 0x8000000000000000LL )
      break;
    v10 = v70;
    v64 = v68 + 1;
    v11 = alloc::str::<impl core::borrow::Borrow<str> for alloc::string::String>::borrow(v70, v71);
    v13 = <str as uu_dircolors::StrUtils>::purify(v11, v12);
    if ( v14 )
    {
      uu_dircolors::escape(&v65, v13);
      v36 = v66;
      <str as uu_dircolors::StrUtils>::split_two(&v53, v66, v67);
      if ( !*(_QWORD *)&v54[16] )
      {
        v45 = 0LL;
        v46 = v59;
        v47 = v60;
        v48 = 0;
        v72[0] = &v45;
        v72[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v72[2] = &v64;
        v72[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v53 = &unk_F4F00;
        *(_QWORD *)v54 = 3LL;
        v55 = 0LL;
        *(_QWORD *)&v54[8] = v72;
        *(_QWORD *)&v54[16] = 2LL;
        core::option::Option<T>::map_or_else(&v73, &v53);
        v26 = v37;
        *(_QWORD *)(v37 + 24) = v74;
        *(_OWORD *)(v26 + 8) = v73;
        *(_QWORD *)v26 = 1LL;
LABEL_36:
        core::ptr::drop_in_place<alloc::string::String>(v65, v36);
        core::ptr::drop_in_place<alloc::string::String>(v9, v10);
        core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map_while::MapWhile<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>,core::result::Result<alloc::string::String,std::io::error::Error>::ok>>>(v49);
        core::ptr::drop_in_place<alloc::string::String>(v63[0], v32);
        core::ptr::drop_in_place<alloc::string::String>(v41, v30);
        core::ptr::drop_in_place<alloc::string::String>(v38, v40);
        core::ptr::drop_in_place<alloc::string::String>(v39, *((_QWORD *)&v39 + 1));
        v24 = v33;
        return core::ptr::drop_in_place<alloc::string::String>(v24, *((_QWORD *)&v24 + 1));
      }
      v35 = *(_OWORD *)&v54[8];
      v58 = v53;
      v57 = *(_QWORD *)v54;
      alloc::str::<impl str>::to_lowercase(&v45);
      v15 = v46;
      v16 = v47;
      v31 = v46;
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v46, v47, aTerm, 4LL) )
      {
        v17 = 1;
        if ( !(unsigned __int8)<str as uu_dircolors::StrUtils>::fnmatch(v30, v61, v35, *((_QWORD *)&v35 + 1)) )
        {
          v17 = v29;
          if ( !v29 )
            v17 = 3;
        }
LABEL_29:
        LODWORD(v18) = v28;
        goto LABEL_30;
      }
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v15, v16, aColorterm, 9LL) )
      {
        v17 = v29;
        if ( v29 == 1 )
          v17 = 2;
        if ( v17 == 3 )
        {
          v17 = 3;
        }
        else
        {
          uu_dircolors::append_entry(
            (unsigned int)&v53,
            (unsigned int)&v33,
            (_DWORD)v44,
            (_DWORD)v58,
            v57,
            v31,
            v16,
            v35);
          v21 = v53;
          if ( v53 != (void *)0x8000000000000000LL )
          {
            v27 = (_QWORD *)v37;
            *(_OWORD *)(v37 + 16) = *(_OWORD *)v54;
            v27[1] = v21;
            *v27 = 1LL;
            core::ptr::drop_in_place<alloc::string::String>(v45, v31);
            goto LABEL_36;
          }
        }
        goto LABEL_29;
      }
      v19 = *((_QWORD *)&v35 + 1);
      v18 = v35;
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                              v35,
                              *((_QWORD *)&v35 + 1),
                              asc_1A54C,
                              2LL) )
      {
        v17 = 1;
        LOBYTE(v18) = 1;
        if ( v43 )
          goto LABEL_30;
      }
      else
      {
        v20 = <str as uu_dircolors::StrUtils>::fnmatch(v32, v43, v18, v19);
        v17 = 1;
        LOBYTE(v18) = 1;
        if ( v20 )
          goto LABEL_30;
      }
      v17 = 3;
      if ( v29 )
        v17 = v29;
      if ( (v28 & 1) != 0 )
        v17 = v29;
      LODWORD(v18) = v28;
LABEL_30:
      core::ptr::drop_in_place<alloc::string::String>(v45, v31);
      core::ptr::drop_in_place<alloc::string::String>(v65, v36);
      core::ptr::drop_in_place<alloc::string::String>(v9, v10);
      v28 = v18;
      v29 = v17;
    }
    else
    {
      core::ptr::drop_in_place<alloc::string::String>(v9, v10);
    }
  }
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map_while::MapWhile<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>,core::result::Result<alloc::string::String,std::io::error::Error>::ok>>>(v49);
  if ( *v44 == 2 )
    alloc::string::String::pop(&v33);
  v22 = v40;
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v33,
    v40,
    v40 + v62);
  v23 = v37;
  *(_QWORD *)(v37 + 24) = v34;
  *(_OWORD *)(v23 + 8) = v33;
  *(_QWORD *)v23 = 0LL;
  core::ptr::drop_in_place<alloc::string::String>(v63[0], v32);
  core::ptr::drop_in_place<alloc::string::String>(v41, v30);
  core::ptr::drop_in_place<alloc::string::String>(v38, v22);
  v24 = v39;
  return core::ptr::drop_in_place<alloc::string::String>(v24, *((_QWORD *)&v24 + 1));
}