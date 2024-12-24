__int64 __fastcall uu_rm::handle_dir(_BYTE *a1, _BYTE *a2, _BYTE *a3)
{
  unsigned int v3; // ebp
  _BYTE *v7; // rdi
  _BYTE *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int8 v12; // bl
  unsigned __int8 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int128 v18; // rax
  char v19; // al
  _BYTE *v20; // rbx
  __int64 v21; // rdx
  _BYTE *v22; // rax
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // rax
  char v26; // dl
  __int64 v27; // rdx
  __int64 v28; // rcx
  _BYTE *v29; // rdx
  __int64 v30; // rax
  __int128 v31; // xmm0
  __int128 v32; // rdi
  unsigned int v33; // eax
  __int128 v34; // rax
  char **v35; // rax
  __int128 v36; // rax
  __int128 v37; // rax
  __int128 v39; // [rsp+0h] [rbp-268h] BYREF
  __int128 v40; // [rsp+10h] [rbp-258h]
  __int128 v41; // [rsp+20h] [rbp-248h]
  _BYTE *v42; // [rsp+30h] [rbp-238h]
  int v43; // [rsp+3Ch] [rbp-22Ch]
  _BYTE v44[56]; // [rsp+40h] [rbp-228h] BYREF
  __int128 v45; // [rsp+78h] [rbp-1F0h]
  _BYTE v46[20]; // [rsp+8Ch] [rbp-1DCh] BYREF
  __int128 v47; // [rsp+A0h] [rbp-1C8h] BYREF
  __int128 v48; // [rsp+B0h] [rbp-1B8h]
  __int64 v49; // [rsp+C0h] [rbp-1A8h]
  __int128 v50; // [rsp+C8h] [rbp-1A0h]
  __int64 v51; // [rsp+D8h] [rbp-190h]
  __int64 v52; // [rsp+E0h] [rbp-188h]
  __int128 v53; // [rsp+E8h] [rbp-180h]
  __int64 v54; // [rsp+F8h] [rbp-170h]
  __int128 v55; // [rsp+100h] [rbp-168h]
  __int128 v56; // [rsp+110h] [rbp-158h]
  __int128 v57; // [rsp+120h] [rbp-148h]
  __int128 v58; // [rsp+130h] [rbp-138h]
  _BYTE *v59; // [rsp+140h] [rbp-128h] BYREF
  __int128 v60; // [rsp+148h] [rbp-120h]
  __int128 v61; // [rsp+158h] [rbp-110h]
  __int128 v62; // [rsp+168h] [rbp-100h]
  __int64 v63; // [rsp+178h] [rbp-F0h]
  __int64 v64; // [rsp+180h] [rbp-E8h] BYREF
  __int64 v65; // [rsp+188h] [rbp-E0h]
  __int64 v66; // [rsp+190h] [rbp-D8h]
  _BYTE *v67; // [rsp+198h] [rbp-D0h]
  _QWORD v68[2]; // [rsp+1A0h] [rbp-C8h] BYREF
  __int128 v69; // [rsp+1B0h] [rbp-B8h]
  __int64 *v70; // [rsp+1C0h] [rbp-A8h] BYREF
  __int64 (__fastcall *v71)(); // [rsp+1C8h] [rbp-A0h]
  _BYTE *v72; // [rsp+1D0h] [rbp-98h]
  __int64 (__fastcall *v73)(); // [rsp+1D8h] [rbp-90h]
  __int64 v74; // [rsp+1E0h] [rbp-88h] BYREF
  _BYTE *v75; // [rsp+1E8h] [rbp-80h]
  _BYTE *v76; // [rsp+1F0h] [rbp-78h]
  char v77; // [rsp+1F8h] [rbp-70h]
  __int128 v78; // [rsp+200h] [rbp-68h]
  __int128 v79; // [rsp+210h] [rbp-58h]
  __int128 v80; // [rsp+220h] [rbp-48h]

  v7 = &v46[4];
  v8 = a1;
  std::path::Path::components(&v46[4], a1, a2);
  if ( BYTE2(v50) || (unsigned __int8)(v47 - 5) >= 2u )
  {
    v7 = a1;
    v8 = a2;
    v11 = std::path::Path::parent(a1, a2);
    v10 = (unsigned __int8)a3[3];
    if ( !v11 )
    {
      if ( (_BYTE)v10 )
      {
        if ( !a3[2] )
          goto LABEL_7;
        v19 = 0;
      }
      else
      {
        v19 = 1;
      }
      v10 = 0LL;
      if ( !a3[4] )
      {
LABEL_49:
        if ( v19 )
        {
          *(_QWORD *)&v34 = uucore::util_name(v7, v8, v9, v10);
          *(_OWORD *)v44 = v34;
          v59 = v44;
          *(_QWORD *)&v60 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v46[4] = &unk_127D88;
          *(_QWORD *)&v46[12] = 2LL;
          *(_QWORD *)&v48 = 0LL;
          *(_QWORD *)&v47 = &v59;
          *((_QWORD *)&v47 + 1) = 1LL;
          std::io::stdio::_eprint(&v46[4]);
          *(_QWORD *)v44 = 1LL;
          *(_QWORD *)&v44[8] = a1;
          *(_QWORD *)&v44[16] = a2;
          v44[24] = 1;
          v59 = v44;
          *(_QWORD *)&v60 = <os_display::Quoted as core::fmt::Display>::fmt;
          v35 = &off_127E60;
        }
        else
        {
          *(_QWORD *)&v36 = uucore::util_name(v7, v8, v9, v10);
          *(_OWORD *)v44 = v36;
          v59 = v44;
          *(_QWORD *)&v60 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v46[4] = &unk_127D88;
          *(_QWORD *)&v46[12] = 2LL;
          *(_QWORD *)&v48 = 0LL;
          *(_QWORD *)&v47 = &v59;
          *((_QWORD *)&v47 + 1) = 1LL;
          std::io::stdio::_eprint(&v46[4]);
          *(_QWORD *)v44 = 1LL;
          *(_QWORD *)&v44[8] = a1;
          *(_QWORD *)&v44[16] = a2;
          v44[24] = 1;
          v59 = v44;
          *(_QWORD *)&v60 = <os_display::Quoted as core::fmt::Display>::fmt;
          v35 = &off_127E80;
        }
        *(_QWORD *)&v46[4] = v35;
        *(_QWORD *)&v46[12] = 2LL;
        *(_QWORD *)&v48 = 0LL;
        *(_QWORD *)&v47 = &v59;
        *((_QWORD *)&v47 + 1) = 1LL;
        std::io::stdio::_eprint(&v46[4]);
        LOBYTE(v3) = 1;
        goto LABEL_58;
      }
LABEL_47:
      LOBYTE(v9) = a3[2] == 0;
      LOBYTE(v10) = v9 | v10;
      if ( (_BYTE)v10 == 1 )
      {
        *(_QWORD *)&v32 = a1;
        *((_QWORD *)&v32 + 1) = a2;
        LOBYTE(v33) = uu_rm::remove_dir(v32, (__int64)a3);
        v3 = v33;
        goto LABEL_58;
      }
      goto LABEL_49;
    }
    if ( !(_BYTE)v10 )
      goto LABEL_16;
  }
  else if ( !a3[3] )
  {
LABEL_16:
    v19 = 1;
    LOBYTE(v10) = 1;
    if ( !a3[4] )
      goto LABEL_49;
    goto LABEL_47;
  }
LABEL_7:
  v42 = a2;
  v12 = a3[5];
  v13 = a3[6];
  if ( v13 == 2 || v12 )
  {
    v68[0] = 0LL;
    v69 = 0LL;
    v68[1] = 8LL;
    v64 = 0LL;
    v65 = 8LL;
    v66 = 0LL;
    v67 = a1;
    walkdir::WalkDir::new(v44, a1, v42);
    v57 = v45;
    v56 = *(_OWORD *)&v44[40];
    v55 = *(_OWORD *)&v44[24];
    v53 = *(_OWORD *)v44;
    v54 = *(_QWORD *)&v44[16];
    *(_DWORD *)&v46[8] = 0;
    *(_QWORD *)&v47 = 0LL;
    *((_QWORD *)&v47 + 1) = 8LL;
    v48 = 0LL;
    v49 = 8LL;
    v50 = 0LL;
    v51 = 8LL;
    v52 = 0LL;
    v58 = 0LL;
    v3 = 0;
    v43 = v12;
    *(_QWORD *)v46 = v13;
    v20 = v42;
    while ( 1 )
    {
      if ( v13 == 2 )
      {
LABEL_25:
        <walkdir::IntoIter as core::iter::traits::iterator::Iterator>::next(&v59, &v46[4]);
        v22 = v59;
        if ( v59 == (_BYTE *)&dword_0 + 3 )
        {
LABEL_40:
          core::ptr::drop_in_place<walkdir::IntoIter>(&v46[4]);
          alloc::collections::vec_deque::VecDeque<T,A>::iter(v44, v68);
          v47 = *(_OWORD *)&v44[16];
          *(_OWORD *)&v46[4] = *(_OWORD *)v44;
          while ( 1 )
          {
            v30 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v47);
            if ( !v30 )
            {
              v31 = *(_OWORD *)&v46[4];
              *(_OWORD *)&v46[4] = v47;
              v47 = v31;
              v30 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v47);
              if ( !v30 )
                break;
            }
            LOBYTE(v3) = (uu_rm::remove_dir(*(_OWORD *)(v30 + 8), (__int64)a3) | v3) & 1;
          }
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v64);
          core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<walkdir::dent::DirEntry>>(v68);
          goto LABEL_58;
        }
        v80 = v62;
        v79 = v61;
        v78 = v60;
        if ( (_DWORD)v59 != 2 )
          goto LABEL_35;
        v41 = v62;
        v40 = v61;
        v39 = v60;
        *(_QWORD *)v44 = v65;
        *(_QWORD *)&v44[8] = v65 + 24 * v66;
        while ( 1 )
        {
          v24 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v44);
          if ( !v24 )
            break;
          if ( (unsigned __int8)std::path::Path::starts_with(*((_QWORD *)&v39 + 1), v40, v24) )
          {
            core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v39);
            goto LABEL_25;
          }
        }
        if ( (WORD4(v41) & 0xF000) != 0x4000 )
        {
          v23 = uu_rm::remove_file(*((__int64 (__fastcall **)())&v39 + 1), (__int64 *)v40, v43, 2);
          goto LABEL_37;
        }
        std::fs::read_dir(v44, *((_QWORD *)&v39 + 1), v40);
        v25 = core::result::Result<T,E>::unwrap(*(_QWORD *)v44, *(unsigned int *)&v44[8]);
        if ( core::iter::traits::iterator::Iterator::fold(v25, v26 & 1)
          && !(unsigned __int8)uu_rm::prompt_descend(*((__int64 (__fastcall **)())&v39 + 1), v40, v27, v28) )
        {
          std::path::Path::to_path_buf(v44, *((_QWORD *)&v39 + 1), v40);
          alloc::vec::Vec<T,A>::push(&v64, v44);
LABEL_38:
          core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v39);
        }
        else
        {
LABEL_19:
          *(_OWORD *)&v44[32] = v41;
          *(_OWORD *)&v44[16] = v40;
          *(_OWORD *)v44 = v39;
          alloc::collections::vec_deque::VecDeque<T,A>::push_back(v68, v44);
        }
      }
      else
      {
        <walkdir::IntoIter as core::iter::traits::iterator::Iterator>::next(&v59, &v46[4]);
        v22 = v59;
        if ( v59 == (_BYTE *)&dword_0 + 3 )
          goto LABEL_40;
        v80 = v62;
        v79 = v61;
        v78 = v60;
        if ( (_DWORD)v59 == 2 )
        {
          v41 = v62;
          v40 = v61;
          v39 = v60;
          if ( (WORD4(v62) & 0xF000) != 0x4000 )
          {
            v23 = uu_rm::remove_file(*((__int64 (__fastcall **)())&v39 + 1), (__int64 *)v40, v43, v46[0]);
LABEL_37:
            LOBYTE(v3) = (v23 | v3) & 1;
            goto LABEL_38;
          }
          goto LABEL_19;
        }
LABEL_35:
        *(_QWORD *)v44 = v22;
        *(_OWORD *)&v44[40] = v80;
        *(_OWORD *)&v44[24] = v79;
        *(_OWORD *)&v44[8] = v78;
        *(_QWORD *)&v45 = v63;
        v74 = uucore::util_name(&v59, &v46[4], v21, v63);
        v75 = v29;
        v70 = &v74;
        v71 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v39 = &unk_127D88;
        *((_QWORD *)&v39 + 1) = 2LL;
        *(_QWORD *)&v41 = 0LL;
        *(_QWORD *)&v40 = &v70;
        *((_QWORD *)&v40 + 1) = 1LL;
        std::io::stdio::_eprint(&v39);
        v74 = 1LL;
        v75 = v67;
        v76 = v20;
        v77 = 1;
        v70 = &v74;
        v71 = <os_display::Quoted as core::fmt::Display>::fmt;
        v72 = v44;
        v73 = <walkdir::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v39 = &off_127E30;
        *((_QWORD *)&v39 + 1) = 3LL;
        *(_QWORD *)&v41 = 0LL;
        *(_QWORD *)&v40 = &v70;
        *((_QWORD *)&v40 + 1) = 2LL;
        std::io::stdio::_eprint(&v39);
        core::ptr::drop_in_place<walkdir::error::Error>(v44);
        LOBYTE(v3) = 1;
      }
    }
  }
  v14 = std::fs::remove_dir_all(a1, v42);
  if ( v14 )
  {
    v15 = v14;
    *(_QWORD *)&v39 = v14;
    *(_QWORD *)&v46[4] = std::fs::remove_dir(a1, v42);
    if ( *(_QWORD *)&v46[4] )
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v46[4]);
      if ( (unsigned __int8)std::io::error::Error::kind(v15) == 1 )
      {
        *(_QWORD *)&v18 = uucore::util_name(v15, v42, v16, v17);
        *(_OWORD *)v44 = v18;
        v59 = v44;
        *(_QWORD *)&v60 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v46[4] = &unk_127D88;
        *(_QWORD *)&v46[12] = 2LL;
        *(_QWORD *)&v48 = 0LL;
        *(_QWORD *)&v47 = &v59;
        *((_QWORD *)&v47 + 1) = 1LL;
        std::io::stdio::_eprint(&v46[4]);
        *(_QWORD *)v44 = 1LL;
        *(_QWORD *)&v44[8] = a1;
        *(_QWORD *)&v44[16] = v42;
        v44[24] = 1;
        v59 = v44;
        *(_QWORD *)&v60 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v46[4] = &off_127DC8;
        *(_QWORD *)&v46[12] = 2LL;
        *(_QWORD *)&v48 = 0LL;
        *(_QWORD *)&v47 = &v59;
        *((_QWORD *)&v47 + 1) = 1LL;
        std::io::stdio::_eprint(&v46[4]);
      }
      else
      {
        *(_QWORD *)&v37 = uucore::util_name(v15, v42, v16, v17);
        *(_OWORD *)v44 = v37;
        v59 = v44;
        *(_QWORD *)&v60 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v46[4] = &unk_127D88;
        *(_QWORD *)&v46[12] = 2LL;
        *(_QWORD *)&v48 = 0LL;
        *(_QWORD *)&v47 = &v59;
        *((_QWORD *)&v47 + 1) = 1LL;
        std::io::stdio::_eprint(&v46[4]);
        *(_QWORD *)v44 = 1LL;
        *(_QWORD *)&v44[8] = a1;
        *(_QWORD *)&v44[16] = v42;
        v44[24] = 1;
        v59 = v44;
        *(_QWORD *)&v60 = <os_display::Quoted as core::fmt::Display>::fmt;
        *((_QWORD *)&v60 + 1) = &v39;
        *(_QWORD *)&v61 = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v46[4] = &off_127DE8;
        *(_QWORD *)&v46[12] = 3LL;
        *(_QWORD *)&v48 = 0LL;
        *(_QWORD *)&v47 = &v59;
        *((_QWORD *)&v47 + 1) = 2LL;
        std::io::stdio::_eprint(&v46[4]);
      }
      LOBYTE(v3) = 1;
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v46[4]);
      v3 = 0;
    }
    core::ptr::drop_in_place<std::io::error::Error>(&v39);
  }
  else
  {
    v3 = 0;
  }
LABEL_58:
  LOBYTE(v3) = v3 & 1;
  return v3;
}
