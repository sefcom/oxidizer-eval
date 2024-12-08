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
  __int128 v16; // rax
  char v17; // al
  _BYTE *v18; // rbx
  _BYTE *v19; // rax
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // rax
  char v23; // dl
  _BYTE *v24; // rdx
  __int64 v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // rax
  char **v28; // rax
  __int128 v29; // rax
  __int128 v30; // rax
  __int128 v32; // [rsp+0h] [rbp-268h] BYREF
  __int128 v33; // [rsp+10h] [rbp-258h]
  __int128 v34; // [rsp+20h] [rbp-248h]
  _BYTE *v35; // [rsp+30h] [rbp-238h]
  unsigned int v36; // [rsp+3Ch] [rbp-22Ch]
  _BYTE v37[56]; // [rsp+40h] [rbp-228h] BYREF
  __int128 v38; // [rsp+78h] [rbp-1F0h]
  _BYTE v39[20]; // [rsp+8Ch] [rbp-1DCh] BYREF
  __int128 v40; // [rsp+A0h] [rbp-1C8h] BYREF
  __int128 v41; // [rsp+B0h] [rbp-1B8h]
  __int64 v42; // [rsp+C0h] [rbp-1A8h]
  __int128 v43; // [rsp+C8h] [rbp-1A0h]
  __int64 v44; // [rsp+D8h] [rbp-190h]
  __int64 v45; // [rsp+E0h] [rbp-188h]
  __int128 v46; // [rsp+E8h] [rbp-180h]
  __int64 v47; // [rsp+F8h] [rbp-170h]
  __int128 v48; // [rsp+100h] [rbp-168h]
  __int128 v49; // [rsp+110h] [rbp-158h]
  __int128 v50; // [rsp+120h] [rbp-148h]
  __int128 v51; // [rsp+130h] [rbp-138h]
  _BYTE *v52; // [rsp+140h] [rbp-128h] BYREF
  __int128 v53; // [rsp+148h] [rbp-120h]
  __int128 v54; // [rsp+158h] [rbp-110h]
  __int128 v55; // [rsp+168h] [rbp-100h]
  __int64 v56; // [rsp+178h] [rbp-F0h]
  __int64 v57; // [rsp+180h] [rbp-E8h] BYREF
  __int64 v58; // [rsp+188h] [rbp-E0h]
  __int64 v59; // [rsp+190h] [rbp-D8h]
  _BYTE *v60; // [rsp+198h] [rbp-D0h]
  _QWORD v61[2]; // [rsp+1A0h] [rbp-C8h] BYREF
  __int128 v62; // [rsp+1B0h] [rbp-B8h]
  __int64 *v63; // [rsp+1C0h] [rbp-A8h] BYREF
  __int64 (__fastcall *v64)(); // [rsp+1C8h] [rbp-A0h]
  _BYTE *v65; // [rsp+1D0h] [rbp-98h]
  __int64 (__fastcall *v66)(); // [rsp+1D8h] [rbp-90h]
  __int64 v67; // [rsp+1E0h] [rbp-88h] BYREF
  _BYTE *v68; // [rsp+1E8h] [rbp-80h]
  _BYTE *v69; // [rsp+1F0h] [rbp-78h]
  char v70; // [rsp+1F8h] [rbp-70h]
  __int128 v71; // [rsp+200h] [rbp-68h]
  __int128 v72; // [rsp+210h] [rbp-58h]
  __int128 v73; // [rsp+220h] [rbp-48h]

  v7 = &v39[4];
  v8 = a1;
  std::path::Path::components(&v39[4], a1, a2);
  if ( BYTE2(v43) || (unsigned __int8)(v40 - 5) >= 2u )
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
        v17 = 0;
      }
      else
      {
        v17 = 1;
      }
      v10 = 0LL;
      if ( !a3[4] )
      {
LABEL_49:
        if ( v17 )
        {
          *(_QWORD *)&v27 = uucore::util_name(v7, v8, v9, v10);
          *(_OWORD *)v37 = v27;
          v52 = v37;
          *(_QWORD *)&v53 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v39[4] = &unk_127D88;
          *(_QWORD *)&v39[12] = 2LL;
          *(_QWORD *)&v41 = 0LL;
          *(_QWORD *)&v40 = &v52;
          *((_QWORD *)&v40 + 1) = 1LL;
          std::io::stdio::_eprint(&v39[4]);
          *(_QWORD *)v37 = 1LL;
          *(_QWORD *)&v37[8] = a1;
          *(_QWORD *)&v37[16] = a2;
          v37[24] = 1;
          v52 = v37;
          *(_QWORD *)&v53 = <os_display::Quoted as core::fmt::Display>::fmt;
          v28 = &off_127E60;
        }
        else
        {
          *(_QWORD *)&v29 = uucore::util_name(v7, v8, v9, v10);
          *(_OWORD *)v37 = v29;
          v52 = v37;
          *(_QWORD *)&v53 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v39[4] = &unk_127D88;
          *(_QWORD *)&v39[12] = 2LL;
          *(_QWORD *)&v41 = 0LL;
          *(_QWORD *)&v40 = &v52;
          *((_QWORD *)&v40 + 1) = 1LL;
          std::io::stdio::_eprint(&v39[4]);
          *(_QWORD *)v37 = 1LL;
          *(_QWORD *)&v37[8] = a1;
          *(_QWORD *)&v37[16] = a2;
          v37[24] = 1;
          v52 = v37;
          *(_QWORD *)&v53 = <os_display::Quoted as core::fmt::Display>::fmt;
          v28 = &off_127E80;
        }
        *(_QWORD *)&v39[4] = v28;
        *(_QWORD *)&v39[12] = 2LL;
        *(_QWORD *)&v41 = 0LL;
        *(_QWORD *)&v40 = &v52;
        *((_QWORD *)&v40 + 1) = 1LL;
        std::io::stdio::_eprint(&v39[4]);
        LOBYTE(v3) = 1;
        goto LABEL_58;
      }
LABEL_47:
      LOBYTE(v9) = a3[2] == 0;
      LOBYTE(v10) = v9 | v10;
      if ( (_BYTE)v10 == 1 )
      {
        v3 = uu_rm::remove_dir(a1, a2, a3);
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
    v17 = 1;
    LOBYTE(v10) = 1;
    if ( !a3[4] )
      goto LABEL_49;
    goto LABEL_47;
  }
LABEL_7:
  v35 = a2;
  v12 = a3[5];
  v13 = a3[6];
  if ( v13 == 2 || v12 )
  {
    v61[0] = 0LL;
    v62 = 0LL;
    v61[1] = 8LL;
    v57 = 0LL;
    v58 = 8LL;
    v59 = 0LL;
    v60 = a1;
    walkdir::WalkDir::new(v37, a1, v35);
    v50 = v38;
    v49 = *(_OWORD *)&v37[40];
    v48 = *(_OWORD *)&v37[24];
    v46 = *(_OWORD *)v37;
    v47 = *(_QWORD *)&v37[16];
    *(_DWORD *)&v39[8] = 0;
    *(_QWORD *)&v40 = 0LL;
    *((_QWORD *)&v40 + 1) = 8LL;
    v41 = 0LL;
    v42 = 8LL;
    v43 = 0LL;
    v44 = 8LL;
    v45 = 0LL;
    v51 = 0LL;
    v3 = 0;
    v36 = v12;
    *(_QWORD *)v39 = v13;
    v18 = v35;
    while ( 1 )
    {
      if ( v13 == 2 )
      {
LABEL_25:
        <walkdir::IntoIter as core::iter::traits::iterator::Iterator>::next(&v52, &v39[4]);
        v19 = v52;
        if ( v52 == (_BYTE *)&dword_0 + 3 )
        {
LABEL_40:
          core::ptr::drop_in_place<walkdir::IntoIter>(&v39[4]);
          alloc::collections::vec_deque::VecDeque<T,A>::iter(v37, v61);
          v40 = *(_OWORD *)&v37[16];
          *(_OWORD *)&v39[4] = *(_OWORD *)v37;
          while ( 1 )
          {
            v25 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v40);
            if ( !v25 )
            {
              v26 = *(_OWORD *)&v39[4];
              *(_OWORD *)&v39[4] = v40;
              v40 = v26;
              v25 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v40);
              if ( !v25 )
                break;
            }
            LOBYTE(v3) = (uu_rm::remove_dir(*(_QWORD *)(v25 + 8), *(_QWORD *)(v25 + 16), a3) | v3) & 1;
          }
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v57);
          core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<walkdir::dent::DirEntry>>(v61);
          goto LABEL_58;
        }
        v73 = v55;
        v72 = v54;
        v71 = v53;
        if ( (_DWORD)v52 != 2 )
          goto LABEL_35;
        v34 = v55;
        v33 = v54;
        v32 = v53;
        *(_QWORD *)v37 = v58;
        *(_QWORD *)&v37[8] = v58 + 24 * v59;
        while ( 1 )
        {
          v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v37);
          if ( !v21 )
            break;
          if ( (unsigned __int8)std::path::Path::starts_with(*((_QWORD *)&v32 + 1), v33, v21) )
          {
            core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v32);
            goto LABEL_25;
          }
        }
        if ( (WORD4(v34) & 0xF000) != 0x4000 )
        {
          v20 = uu_rm::remove_file(*((_QWORD *)&v32 + 1), v33, v36, 2LL);
          goto LABEL_37;
        }
        std::fs::read_dir(v37, *((_QWORD *)&v32 + 1), v33);
        v22 = core::result::Result<T,E>::unwrap(*(_QWORD *)v37, *(unsigned int *)&v37[8]);
        if ( core::iter::traits::iterator::Iterator::fold(v22, v23 & 1)
          && !(unsigned __int8)uu_rm::prompt_descend(*((_QWORD *)&v32 + 1), v33) )
        {
          std::path::Path::to_path_buf(v37, *((_QWORD *)&v32 + 1), v33);
          alloc::vec::Vec<T,A>::push(&v57, v37);
LABEL_38:
          core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v32);
        }
        else
        {
LABEL_19:
          *(_OWORD *)&v37[32] = v34;
          *(_OWORD *)&v37[16] = v33;
          *(_OWORD *)v37 = v32;
          alloc::collections::vec_deque::VecDeque<T,A>::push_back(v61, v37);
        }
      }
      else
      {
        <walkdir::IntoIter as core::iter::traits::iterator::Iterator>::next(&v52, &v39[4]);
        v19 = v52;
        if ( v52 == (_BYTE *)&dword_0 + 3 )
          goto LABEL_40;
        v73 = v55;
        v72 = v54;
        v71 = v53;
        if ( (_DWORD)v52 == 2 )
        {
          v34 = v55;
          v33 = v54;
          v32 = v53;
          if ( (WORD4(v55) & 0xF000) != 0x4000 )
          {
            v20 = uu_rm::remove_file(*((_QWORD *)&v32 + 1), v33, v36, *(unsigned int *)v39);
LABEL_37:
            LOBYTE(v3) = (v20 | v3) & 1;
            goto LABEL_38;
          }
          goto LABEL_19;
        }
LABEL_35:
        *(_QWORD *)v37 = v19;
        *(_OWORD *)&v37[40] = v73;
        *(_OWORD *)&v37[24] = v72;
        *(_OWORD *)&v37[8] = v71;
        *(_QWORD *)&v38 = v56;
        v67 = ((__int64 (*)(void))uucore::util_name)();
        v68 = v24;
        v63 = &v67;
        v64 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v32 = &unk_127D88;
        *((_QWORD *)&v32 + 1) = 2LL;
        *(_QWORD *)&v34 = 0LL;
        *(_QWORD *)&v33 = &v63;
        *((_QWORD *)&v33 + 1) = 1LL;
        std::io::stdio::_eprint(&v32);
        v67 = 1LL;
        v68 = v60;
        v69 = v18;
        v70 = 1;
        v63 = &v67;
        v64 = <os_display::Quoted as core::fmt::Display>::fmt;
        v65 = v37;
        v66 = <walkdir::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v32 = &off_127E30;
        *((_QWORD *)&v32 + 1) = 3LL;
        *(_QWORD *)&v34 = 0LL;
        *(_QWORD *)&v33 = &v63;
        *((_QWORD *)&v33 + 1) = 2LL;
        std::io::stdio::_eprint(&v32);
        core::ptr::drop_in_place<walkdir::error::Error>(v37);
        LOBYTE(v3) = 1;
      }
    }
  }
  v14 = std::fs::remove_dir_all(a1, v35);
  if ( v14 )
  {
    v15 = v14;
    *(_QWORD *)&v32 = v14;
    *(_QWORD *)&v39[4] = std::fs::remove_dir(a1, v35);
    if ( *(_QWORD *)&v39[4] )
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v39[4]);
      if ( (unsigned __int8)std::io::error::Error::kind(v15) == 1 )
      {
        *(_QWORD *)&v16 = ((__int64 (*)(void))uucore::util_name)();
        *(_OWORD *)v37 = v16;
        v52 = v37;
        *(_QWORD *)&v53 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v39[4] = &unk_127D88;
        *(_QWORD *)&v39[12] = 2LL;
        *(_QWORD *)&v41 = 0LL;
        *(_QWORD *)&v40 = &v52;
        *((_QWORD *)&v40 + 1) = 1LL;
        std::io::stdio::_eprint(&v39[4]);
        *(_QWORD *)v37 = 1LL;
        *(_QWORD *)&v37[8] = a1;
        *(_QWORD *)&v37[16] = v35;
        v37[24] = 1;
        v52 = v37;
        *(_QWORD *)&v53 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v39[4] = &off_127DC8;
        *(_QWORD *)&v39[12] = 2LL;
        *(_QWORD *)&v41 = 0LL;
        *(_QWORD *)&v40 = &v52;
        *((_QWORD *)&v40 + 1) = 1LL;
        std::io::stdio::_eprint(&v39[4]);
      }
      else
      {
        *(_QWORD *)&v30 = ((__int64 (*)(void))uucore::util_name)();
        *(_OWORD *)v37 = v30;
        v52 = v37;
        *(_QWORD *)&v53 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v39[4] = &unk_127D88;
        *(_QWORD *)&v39[12] = 2LL;
        *(_QWORD *)&v41 = 0LL;
        *(_QWORD *)&v40 = &v52;
        *((_QWORD *)&v40 + 1) = 1LL;
        std::io::stdio::_eprint(&v39[4]);
        *(_QWORD *)v37 = 1LL;
        *(_QWORD *)&v37[8] = a1;
        *(_QWORD *)&v37[16] = v35;
        v37[24] = 1;
        v52 = v37;
        *(_QWORD *)&v53 = <os_display::Quoted as core::fmt::Display>::fmt;
        *((_QWORD *)&v53 + 1) = &v32;
        *(_QWORD *)&v54 = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v39[4] = &off_127DE8;
        *(_QWORD *)&v39[12] = 3LL;
        *(_QWORD *)&v41 = 0LL;
        *(_QWORD *)&v40 = &v52;
        *((_QWORD *)&v40 + 1) = 2LL;
        std::io::stdio::_eprint(&v39[4]);
      }
      LOBYTE(v3) = 1;
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v39[4]);
      v3 = 0;
    }
    core::ptr::drop_in_place<std::io::error::Error>(&v32);
  }
  else
  {
    v3 = 0;
  }
LABEL_58:
  LOBYTE(v3) = v3 & 1;
  return v3;
}
