__int64 __fastcall uu_split::n_chunks_by_byte(_QWORD *a1, void *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  char input_size; // al
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  unsigned __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // r13
  _QWORD *v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // r15
  _QWORD *v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r14
  _QWORD *v23; // rax
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rbx
  char v30; // al
  _QWORD *v31; // rax
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbp
  void *v37; // r14
  size_t v38; // r15
  __int64 v39; // r13
  __int64 v40; // rdx
  __int64 v41; // rcx
  char v42; // al
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rdi
  void *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // [rsp+8h] [rbp-160h]
  __int64 v51; // [rsp+10h] [rbp-158h] BYREF
  void *src; // [rsp+18h] [rbp-150h]
  size_t n; // [rsp+20h] [rbp-148h]
  __int64 v54; // [rsp+28h] [rbp-140h] BYREF
  __int128 v55; // [rsp+30h] [rbp-138h] BYREF
  _QWORD *v56; // [rsp+40h] [rbp-128h]
  __int64 v57; // [rsp+48h] [rbp-120h]
  __int64 v58; // [rsp+50h] [rbp-118h]
  __int64 v59; // [rsp+60h] [rbp-108h] BYREF
  __int64 v60; // [rsp+68h] [rbp-100h]
  _QWORD *v61; // [rsp+70h] [rbp-F8h]
  unsigned __int64 v62; // [rsp+78h] [rbp-F0h]
  unsigned __int64 v63; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v64; // [rsp+88h] [rbp-E0h]
  _QWORD *v65; // [rsp+90h] [rbp-D8h]
  __int64 v66; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v68; // [rsp+A8h] [rbp-C0h]
  __int64 v69; // [rsp+B0h] [rbp-B8h]
  __int64 v70; // [rsp+B8h] [rbp-B0h]
  _QWORD *v71; // [rsp+C0h] [rbp-A8h]
  _QWORD v72[2]; // [rsp+C8h] [rbp-A0h] BYREF
  char v73; // [rsp+D8h] [rbp-90h]
  _QWORD v74[3]; // [rsp+E0h] [rbp-88h] BYREF
  char v75; // [rsp+F8h] [rbp-70h]
  _QWORD v76[4]; // [rsp+100h] [rbp-68h] BYREF
  __int128 v77; // [rsp+120h] [rbp-48h] BYREF
  _QWORD *v78; // [rsp+130h] [rbp-38h]

  v67 = 0LL;
  v68 = 1LL;
  v69 = 0LL;
  v8 = *a1;
  v65 = a1;
  v9 = a1[1];
  v71 = a1 + 14;
  input_size = uu_split::get_input_size((__int64)(a1 + 14), a2, (__int64)&v67, v8, v9);
  v13 = (unsigned __int64)v11;
  if ( (input_size & 1) == 0 )
  {
    v15 = v68;
    v74[0] = v68;
    v74[1] = v69;
    v74[2] = a2;
    v75 = 0;
    if ( a4 )
    {
      if ( !v11 || !a3 )
      {
LABEL_41:
        v14 = 0LL;
        goto LABEL_42;
      }
    }
    else
    {
      v16 = v11;
      if ( a3 < (unsigned __int64)v11 )
        v16 = (_QWORD *)a3;
      v12 = v65;
      if ( *((_BYTE *)v65 + 161) )
        a3 = (unsigned __int64)v16;
      if ( !a3 )
        goto LABEL_41;
    }
    *(_QWORD *)&v55 = std::io::stdio::stdout();
    v54 = std::io::stdio::Stdout::lock(&v55);
    v59 = 0LL;
    v60 = 8LL;
    v61 = 0LL;
    if ( (a3 | v13) >> 32 )
    {
      v17 = v13 / a3;
      v63 = v13 % a3;
    }
    else
    {
      v17 = (unsigned int)v13 / (unsigned int)a3;
      v63 = (unsigned int)v13 % (unsigned int)a3;
    }
    v62 = v17;
    v70 = a5;
    v64 = a3;
    if ( !a4 )
    {
      <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(&v55, a3, v65, 0LL);
      v14 = *((_QWORD *)&v55 + 1);
      v18 = v55;
      v19 = v56;
      if ( __OFSUB__(-(__int64)v55, 1LL) )
      {
LABEL_49:
        core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v59);
        core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v54);
        goto LABEL_42;
      }
      core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v59);
      v59 = v18;
      v60 = v14;
      v61 = v19;
      a3 = v64;
    }
    v50 = v15;
    v72[0] = 1LL;
    v72[1] = a3;
    v73 = 0;
    if ( (<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(v72) & 1) != 0 )
    {
      v22 = v20;
      if ( (a4 & 1) == 0 )
      {
        while ( 1 )
        {
          v51 = 0LL;
          src = &dword_0 + 1;
          n = 0LL;
          if ( !v13 )
            goto LABEL_38;
          v31 = (_QWORD *)((v22 - 1 < v63) + v62);
          if ( v22 == v64 )
            v31 = (_QWORD *)v13;
          *(_QWORD *)&v55 = v74;
          *((_QWORD *)&v55 + 1) = v31;
          v56 = v31;
          v32 = std::io::default_read_to_end(&v55, &v51);
          v29 = v33;
          if ( (v32 & 1) != 0 )
            break;
          <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(&v55, &v59, v22 - 1, v65);
          v36 = *((_QWORD *)&v55 + 1);
          v14 = v55;
          if ( (_QWORD)v55 )
          {
            v15 = v50;
            goto LABEL_48;
          }
          v37 = src;
          v38 = n;
          v39 = *(_QWORD *)(*((_QWORD *)&v55 + 1) + 16LL);
          if ( n >= **((_QWORD **)&v55 + 1) - v39 )
          {
            v43 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(*((_QWORD *)&v55 + 1), src, n);
            if ( v43 )
            {
              v15 = v50;
              v44 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v43);
LABEL_46:
              v14 = v44;
              goto LABEL_48;
            }
          }
          else
          {
            memcpy((void *)(v39 + *(_QWORD *)(*((_QWORD *)&v55 + 1) + 8LL)), src, n);
            *(_QWORD *)(v36 + 16) = v38 + v39;
          }
          v13 -= v29;
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v51, v37, v40, v41);
          v42 = <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(v72);
          v22 = v20;
          if ( (v42 & 1) == 0 )
            goto LABEL_40;
        }
LABEL_43:
        v66 = v29;
        v76[0] = v71;
        v76[1] = <alloc::string::String as core::fmt::Display>::fmt;
        v76[2] = &v66;
        v76[3] = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v55 = &unk_10B040;
        *((_QWORD *)&v55 + 1) = 2LL;
        v58 = 0LL;
        v56 = v76;
        v57 = 2LL;
        v15 = v50;
        core::option::Option<T>::map_or_else(&v77, 0LL, &v55, v26, v27, v28);
        LODWORD(v57) = 1;
        v55 = v77;
        v56 = v78;
        v14 = alloc::boxed::Box<T>::new(&v55);
        core::ptr::drop_in_place<std::io::error::Error>(&v66);
LABEL_48:
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v51, src, v34, v35);
        goto LABEL_49;
      }
      while ( 1 )
      {
        v51 = 0LL;
        src = &dword_0 + 1;
        n = 0LL;
        if ( !v13 )
          break;
        v23 = (_QWORD *)((v22 - 1 < v63) + v62);
        if ( v22 == v64 )
          v23 = (_QWORD *)v13;
        *(_QWORD *)&v55 = v74;
        *((_QWORD *)&v55 + 1) = v23;
        v56 = v23;
        v24 = std::io::default_read_to_end(&v55, &v51);
        v29 = v25;
        if ( (v24 & 1) != 0 )
          goto LABEL_43;
        if ( v22 == v70 )
        {
          v48 = src;
          v49 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v54, src, n);
          if ( v49 )
          {
            v44 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v49);
            goto LABEL_46;
          }
          v46 = v51;
          v45 = (__int64)v48;
          goto LABEL_39;
        }
        v13 -= v25;
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v51, src, v25, v26);
        v30 = <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(v72);
        v22 = v20;
        if ( (v30 & 1) == 0 )
          goto LABEL_40;
      }
LABEL_38:
      v45 = 1LL;
      v46 = 0LL;
LABEL_39:
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v46, v45, v20, v21);
    }
LABEL_40:
    v15 = v50;
    core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v59);
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v54);
    goto LABEL_41;
  }
  v14 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
  v15 = v68;
LABEL_42:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v67, v15, v11, v12);
  return v14;
}