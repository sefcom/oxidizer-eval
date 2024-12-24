__int64 __fastcall uu_split::n_chunks_by_byte(__int64 a1, void *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r14
  __int64 input_size; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r15
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rbx
  size_t v27; // r13
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v33; // [rsp+8h] [rbp-160h] BYREF
  void *src; // [rsp+10h] [rbp-158h]
  size_t n; // [rsp+18h] [rbp-150h]
  __int64 v36; // [rsp+20h] [rbp-148h] BYREF
  __int64 v37; // [rsp+28h] [rbp-140h] BYREF
  __int64 v38; // [rsp+30h] [rbp-138h]
  _QWORD *v39; // [rsp+38h] [rbp-130h]
  __int128 v40; // [rsp+40h] [rbp-128h] BYREF
  _QWORD *v41; // [rsp+50h] [rbp-118h]
  __int64 v42; // [rsp+58h] [rbp-110h]
  __int64 v43; // [rsp+60h] [rbp-108h]
  unsigned __int64 v44; // [rsp+78h] [rbp-F0h]
  unsigned __int64 v45; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v46; // [rsp+88h] [rbp-E0h]
  __int64 v47; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v48; // [rsp+98h] [rbp-D0h]
  __int64 v49; // [rsp+A0h] [rbp-C8h]
  __int64 v50; // [rsp+A8h] [rbp-C0h] BYREF
  __int128 v51; // [rsp+B0h] [rbp-B8h]
  __int64 v52; // [rsp+C0h] [rbp-A8h]
  _QWORD v53[2]; // [rsp+C8h] [rbp-A0h] BYREF
  char v54; // [rsp+D8h] [rbp-90h]
  __int128 v55; // [rsp+E0h] [rbp-88h] BYREF
  void *v56; // [rsp+F0h] [rbp-78h]
  char v57; // [rsp+F8h] [rbp-70h]
  _QWORD v58[4]; // [rsp+100h] [rbp-68h] BYREF
  __int128 v59; // [rsp+120h] [rbp-48h] BYREF
  _QWORD *v60; // [rsp+130h] [rbp-38h]

  v52 = a5;
  v50 = 0LL;
  v51 = 1uLL;
  v7 = a1 + 112;
  input_size = uu_split::get_input_size(a1 + 112, a2, (__int64)&v50, *(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  v10 = v9;
  if ( input_size )
  {
    v11 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
LABEL_45:
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v50);
    return v11;
  }
  v55 = v51;
  v56 = a2;
  v57 = 0;
  if ( a4 == 1 )
  {
    if ( v9 && a3 )
      goto LABEL_6;
LABEL_13:
    v11 = 0LL;
    goto LABEL_45;
  }
  v13 = a3;
  if ( v9 < a3 )
    v13 = v9;
  if ( *(_BYTE *)(a1 + 161) )
    a3 = v13;
  if ( !a3 )
    goto LABEL_13;
LABEL_6:
  *(_QWORD *)&v40 = std::io::stdio::stdout();
  v36 = std::io::stdio::Stdout::lock(&v40);
  v37 = 0LL;
  v38 = 8LL;
  v39 = 0LL;
  if ( (a3 | v10) >> 32 )
  {
    v12 = v10 / a3;
    v45 = v10 % a3;
  }
  else
  {
    v12 = (unsigned int)v10 / (unsigned int)a3;
    v45 = (unsigned int)v10 % (unsigned int)a3;
  }
  v44 = v12;
  v46 = a3;
  if ( a4 != 1 )
  {
    <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(&v40, a3, a1, 0LL);
    v11 = *((_QWORD *)&v40 + 1);
    v14 = v41;
    v48 = v40;
    if ( (_QWORD)v40 == 0x8000000000000000LL )
    {
LABEL_44:
      core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v37);
      core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v36);
      goto LABEL_45;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v37);
    v37 = v48;
    v38 = v11;
    v39 = v14;
    a3 = v46;
  }
  v53[0] = 1LL;
  v53[1] = a3;
  v54 = 0;
  if ( <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(v53) )
  {
    v16 = v15;
    if ( !a4 )
    {
      v49 = a1 + 112;
      while ( 1 )
      {
        v33 = 0LL;
        src = &dword_0 + 1;
        n = 0LL;
        if ( !v10 )
          goto LABEL_40;
        v23 = (v16 - 1 < v45) + v44;
        if ( v16 == v46 )
          v23 = v10;
        *(_QWORD *)&v40 = &v55;
        *((_QWORD *)&v40 + 1) = v23;
        v24 = std::io::default_read_to_end(&v40, &v33, 0LL);
        v20 = v25;
        if ( v24 )
          break;
        <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(&v40, &v37, v16 - 1, a1);
        v26 = *((_QWORD *)&v40 + 1);
        v11 = v40;
        if ( (_QWORD)v40 )
          goto LABEL_43;
        v27 = n;
        v28 = *(_QWORD *)(*((_QWORD *)&v40 + 1) + 16LL);
        if ( n >= **((_QWORD **)&v40 + 1) - v28 )
        {
          v29 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(*((_QWORD *)&v40 + 1), src, n);
          v7 = v49;
          if ( v29 )
          {
LABEL_42:
            v11 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v29);
            goto LABEL_43;
          }
        }
        else
        {
          memcpy((void *)(v28 + *(_QWORD *)(*((_QWORD *)&v40 + 1) + 8LL)), src, n);
          *(_QWORD *)(v26 + 16) = v27 + v28;
          v7 = v49;
        }
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v33);
        v10 -= v20;
        v30 = <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(v53);
        v16 = v31;
        if ( !v30 )
          goto LABEL_41;
      }
LABEL_38:
      v47 = v20;
      v58[0] = v7;
      v58[1] = <alloc::string::String as core::fmt::Display>::fmt;
      v58[2] = &v47;
      v58[3] = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&v40 = &unk_148AA0;
      *((_QWORD *)&v40 + 1) = 2LL;
      v43 = 0LL;
      v41 = v58;
      v42 = 2LL;
      core::option::Option<T>::map_or_else(&v59, 0LL, &v40);
      LODWORD(v42) = 1;
      v40 = v59;
      v41 = v60;
      v11 = alloc::boxed::Box<T>::new(&v40);
      core::ptr::drop_in_place<std::io::error::Error>(v47);
LABEL_43:
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v33);
      goto LABEL_44;
    }
    while ( 1 )
    {
      v33 = 0LL;
      src = &dword_0 + 1;
      n = 0LL;
      if ( !v10 )
        break;
      v17 = (v16 - 1 < v45) + v44;
      if ( v16 == v46 )
        v17 = v10;
      *(_QWORD *)&v40 = &v55;
      *((_QWORD *)&v40 + 1) = v17;
      v18 = std::io::default_read_to_end(&v40, &v33, 0LL);
      v20 = v19;
      if ( v18 )
        goto LABEL_38;
      if ( v16 == v52 )
      {
        v29 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v36, src, n);
        if ( v29 )
          goto LABEL_42;
        break;
      }
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v33);
      v10 -= v20;
      v21 = <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(v53);
      v16 = v22;
      if ( !v21 )
        goto LABEL_41;
    }
LABEL_40:
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v33);
  }
LABEL_41:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v37);
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v36);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v50);
  return 0LL;
}
