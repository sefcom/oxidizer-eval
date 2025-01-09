__int64 __fastcall uu_rm::handle_dir(_BYTE *a1, _BYTE *a2, _BYTE *a3)
{
  unsigned int v3; // ebp
  _BYTE *v7; // rdi
  _BYTE *v8; // rsi
  __int64 v9; // rdx
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int8 v13; // bl
  unsigned __int8 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int128 v19; // rax
  __int128 v20; // rax
  char **v21; // rax
  __int128 v22; // rax
  __int128 v23; // rdi
  unsigned int v24; // eax
  _BYTE *v25; // rbx
  __int64 v26; // rdx
  _BYTE *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  char v30; // dl
  __int64 v31; // rdx
  __int64 v32; // rcx
  _BYTE *v33; // rdx
  __int64 v34; // rax
  __int128 v35; // xmm0
  __int128 v36; // rax
  __int128 v38; // [rsp+0h] [rbp-268h] BYREF
  __int128 v39; // [rsp+10h] [rbp-258h]
  __int128 v40; // [rsp+20h] [rbp-248h]
  _BYTE *v41; // [rsp+38h] [rbp-230h]
  _BYTE v42[56]; // [rsp+40h] [rbp-228h] BYREF
  __int128 v43; // [rsp+78h] [rbp-1F0h]
  int v44; // [rsp+88h] [rbp-1E0h]
  _BYTE v45[20]; // [rsp+8Ch] [rbp-1DCh] BYREF
  __int128 v46; // [rsp+A0h] [rbp-1C8h] BYREF
  __int128 v47; // [rsp+B0h] [rbp-1B8h]
  __int64 v48; // [rsp+C0h] [rbp-1A8h]
  __int128 v49; // [rsp+C8h] [rbp-1A0h]
  __int64 v50; // [rsp+D8h] [rbp-190h]
  __int64 v51; // [rsp+E0h] [rbp-188h]
  __int128 v52; // [rsp+E8h] [rbp-180h]
  __int64 v53; // [rsp+F8h] [rbp-170h]
  __int128 v54; // [rsp+100h] [rbp-168h]
  __int128 v55; // [rsp+110h] [rbp-158h]
  __int128 v56; // [rsp+120h] [rbp-148h]
  __int128 v57; // [rsp+130h] [rbp-138h]
  _BYTE *v58; // [rsp+140h] [rbp-128h] BYREF
  __int128 v59; // [rsp+148h] [rbp-120h]
  __int128 v60; // [rsp+158h] [rbp-110h]
  __int128 v61; // [rsp+168h] [rbp-100h]
  __int64 v62; // [rsp+178h] [rbp-F0h]
  __int64 v63; // [rsp+180h] [rbp-E8h] BYREF
  __int64 v64; // [rsp+188h] [rbp-E0h]
  __int64 v65; // [rsp+190h] [rbp-D8h]
  _BYTE *v66; // [rsp+198h] [rbp-D0h]
  _QWORD v67[2]; // [rsp+1A0h] [rbp-C8h] BYREF
  __int128 v68; // [rsp+1B0h] [rbp-B8h]
  __int64 *v69; // [rsp+1C0h] [rbp-A8h] BYREF
  __int64 (__fastcall *v70)(); // [rsp+1C8h] [rbp-A0h]
  _BYTE *v71; // [rsp+1D0h] [rbp-98h]
  __int64 (__fastcall *v72)(); // [rsp+1D8h] [rbp-90h]
  __int64 v73; // [rsp+1E0h] [rbp-88h] BYREF
  _BYTE *v74; // [rsp+1E8h] [rbp-80h]
  _BYTE *v75; // [rsp+1F0h] [rbp-78h]
  char v76; // [rsp+1F8h] [rbp-70h]
  __int128 v77; // [rsp+200h] [rbp-68h]
  __int128 v78; // [rsp+210h] [rbp-58h]
  __int128 v79; // [rsp+220h] [rbp-48h]

  v7 = &v45[4];
  v8 = a1;
  std::path::Path::components(&v45[4], a1, a2);
  if ( BYTE2(v49) || (unsigned __int8)(v46 - 5) >= 2u )
  {
    v7 = a1;
    v8 = a2;
    v12 = std::path::Path::parent(a1, a2);
    LOBYTE(v11) = v12 == 0;
    if ( !a3[3] )
    {
      v10 = 1;
      if ( !a3[4] )
      {
LABEL_19:
        if ( v10 )
        {
          *(_QWORD *)&v20 = uucore::util_name(v7, v8, v9, v11);
          *(_OWORD *)v42 = v20;
          v58 = v42;
          *(_QWORD *)&v59 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v45[4] = &unk_127970;
          *(_QWORD *)&v45[12] = 2LL;
          *(_QWORD *)&v47 = 0LL;
          *(_QWORD *)&v46 = &v58;
          *((_QWORD *)&v46 + 1) = 1LL;
          std::io::stdio::_eprint(&v45[4]);
          *(_QWORD *)v42 = 1LL;
          *(_QWORD *)&v42[8] = a1;
          *(_QWORD *)&v42[16] = a2;
          v42[24] = 1;
          v58 = v42;
          *(_QWORD *)&v59 = <os_display::Quoted as core::fmt::Display>::fmt;
          v21 = &off_127A50;
        }
        else
        {
          *(_QWORD *)&v22 = uucore::util_name(v7, v8, v9, v11);
          *(_OWORD *)v42 = v22;
          v58 = v42;
          *(_QWORD *)&v59 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v45[4] = &unk_127970;
          *(_QWORD *)&v45[12] = 2LL;
          *(_QWORD *)&v47 = 0LL;
          *(_QWORD *)&v46 = &v58;
          *((_QWORD *)&v46 + 1) = 1LL;
          std::io::stdio::_eprint(&v45[4]);
          *(_QWORD *)v42 = 1LL;
          *(_QWORD *)&v42[8] = a1;
          *(_QWORD *)&v42[16] = a2;
          v42[24] = 1;
          v58 = v42;
          *(_QWORD *)&v59 = <os_display::Quoted as core::fmt::Display>::fmt;
          v21 = &off_127A30;
        }
        *(_QWORD *)&v45[4] = v21;
        *(_QWORD *)&v45[12] = 2LL;
        *(_QWORD *)&v47 = 0LL;
        *(_QWORD *)&v46 = &v58;
        *((_QWORD *)&v46 + 1) = 1LL;
        std::io::stdio::_eprint(&v45[4]);
        LOBYTE(v3) = 1;
        goto LABEL_55;
      }
LABEL_18:
      LOBYTE(v9) = a3[2] != 0;
      if ( ((unsigned __int8)v9 & (unsigned __int8)v11) == 0 )
      {
        *(_QWORD *)&v23 = a1;
        *((_QWORD *)&v23 + 1) = a2;
        LOBYTE(v24) = uu_rm::remove_dir(v23, (__int64)a3);
        v3 = v24;
        goto LABEL_55;
      }
      goto LABEL_19;
    }
    if ( !v12 && a3[2] )
    {
      v10 = 0;
      LOBYTE(v11) = 1;
      if ( !a3[4] )
        goto LABEL_19;
      goto LABEL_18;
    }
  }
  else if ( !a3[3] )
  {
    v10 = 1;
    v11 = 0LL;
    if ( !a3[4] )
      goto LABEL_19;
    goto LABEL_18;
  }
  v41 = a1;
  v13 = a3[5];
  v14 = a3[6];
  if ( v14 == 2 || v13 )
  {
    v67[0] = 0LL;
    v68 = 0LL;
    v67[1] = 8LL;
    v63 = 0LL;
    v64 = 8LL;
    v65 = 0LL;
    v66 = a2;
    walkdir::WalkDir::new(v42, v41, a2);
    v56 = v43;
    v55 = *(_OWORD *)&v42[40];
    v54 = *(_OWORD *)&v42[24];
    v52 = *(_OWORD *)v42;
    v53 = *(_QWORD *)&v42[16];
    *(_DWORD *)&v45[8] = 0;
    *(_QWORD *)&v46 = 0LL;
    *((_QWORD *)&v46 + 1) = 8LL;
    v47 = 0LL;
    v48 = 8LL;
    v49 = 0LL;
    v50 = 8LL;
    v51 = 0LL;
    v57 = 0LL;
    v3 = 0;
    *(_QWORD *)v45 = v13;
    v44 = v14;
    v25 = v41;
    while ( 1 )
    {
      if ( v14 == 2 )
      {
LABEL_31:
        <walkdir::IntoIter as core::iter::traits::iterator::Iterator>::next(&v58, &v45[4]);
        v27 = v58;
        if ( v58 == (_BYTE *)&dword_0 + 3 )
        {
LABEL_45:
          core::ptr::drop_in_place<walkdir::IntoIter>(&v45[4]);
          alloc::collections::vec_deque::VecDeque<T,A>::iter(v42, v67);
          v46 = *(_OWORD *)&v42[16];
          *(_OWORD *)&v45[4] = *(_OWORD *)v42;
          while ( 1 )
          {
            v34 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v46);
            if ( !v34 )
            {
              v35 = *(_OWORD *)&v45[4];
              *(_OWORD *)&v45[4] = v46;
              v46 = v35;
              v34 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v46);
              if ( !v34 )
                break;
            }
            LOBYTE(v3) = (uu_rm::remove_dir(*(_OWORD *)(v34 + 8), (__int64)a3) | v3) & 1;
          }
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v63);
          core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<walkdir::dent::DirEntry>>(v67);
          goto LABEL_55;
        }
        v79 = v61;
        v78 = v60;
        v77 = v59;
        if ( (_DWORD)v58 != 2 )
          goto LABEL_43;
        v40 = v61;
        v39 = v60;
        v38 = v59;
        *(_QWORD *)v42 = v64;
        *(_QWORD *)&v42[8] = v64 + 24 * v65;
        while ( 1 )
        {
          v28 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v42);
          if ( !v28 )
            break;
          if ( (unsigned __int8)std::path::Path::starts_with(*((_QWORD *)&v38 + 1), v39, v28) )
          {
            core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v38);
            goto LABEL_31;
          }
        }
        if ( (WORD4(v40) & 0xF000) != 0x4000 )
        {
LABEL_41:
          LOBYTE(v3) = (uu_rm::remove_file(*((__int64 (__fastcall **)())&v38 + 1), (__int64 *)v39, v45[0], v44) | v3) & 1;
          goto LABEL_42;
        }
        std::fs::read_dir(v42, *((_QWORD *)&v38 + 1), v39);
        v29 = core::result::Result<T,E>::unwrap(*(_QWORD *)v42, *(unsigned int *)&v42[8]);
        if ( core::iter::traits::iterator::Iterator::fold(v29, v30 & 1)
          && !(unsigned __int8)uu_rm::prompt_descend(*((__int64 (__fastcall **)())&v38 + 1), v39, v31, v32) )
        {
          std::path::Path::to_path_buf(v42, *((_QWORD *)&v38 + 1), v39);
          alloc::vec::Vec<T,A>::push(&v63, v42);
LABEL_42:
          core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v38);
        }
        else
        {
LABEL_25:
          *(_OWORD *)&v42[32] = v40;
          *(_OWORD *)&v42[16] = v39;
          *(_OWORD *)v42 = v38;
          alloc::collections::vec_deque::VecDeque<T,A>::push_back(v67, v42);
        }
      }
      else
      {
        <walkdir::IntoIter as core::iter::traits::iterator::Iterator>::next(&v58, &v45[4]);
        v27 = v58;
        if ( v58 == (_BYTE *)&dword_0 + 3 )
          goto LABEL_45;
        v79 = v61;
        v78 = v60;
        v77 = v59;
        if ( (_DWORD)v58 == 2 )
        {
          v40 = v61;
          v39 = v60;
          v38 = v59;
          if ( (WORD4(v61) & 0xF000) != 0x4000 )
            goto LABEL_41;
          goto LABEL_25;
        }
LABEL_43:
        *(_QWORD *)v42 = v27;
        *(_OWORD *)&v42[40] = v79;
        *(_OWORD *)&v42[24] = v78;
        *(_OWORD *)&v42[8] = v77;
        *(_QWORD *)&v43 = v62;
        v73 = uucore::util_name(&v58, &v45[4], v26, v62);
        v74 = v33;
        v69 = &v73;
        v70 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v38 = &unk_127970;
        *((_QWORD *)&v38 + 1) = 2LL;
        *(_QWORD *)&v40 = 0LL;
        *(_QWORD *)&v39 = &v69;
        *((_QWORD *)&v39 + 1) = 1LL;
        std::io::stdio::_eprint(&v38);
        v73 = 1LL;
        v74 = v25;
        v75 = v66;
        v76 = 1;
        v69 = &v73;
        v70 = <os_display::Quoted as core::fmt::Display>::fmt;
        v71 = v42;
        v72 = <walkdir::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v38 = &off_127A00;
        *((_QWORD *)&v38 + 1) = 3LL;
        *(_QWORD *)&v40 = 0LL;
        *(_QWORD *)&v39 = &v69;
        *((_QWORD *)&v39 + 1) = 2LL;
        std::io::stdio::_eprint(&v38);
        core::ptr::drop_in_place<walkdir::error::Error>(v42);
        LOBYTE(v3) = 1;
      }
    }
  }
  v15 = std::fs::remove_dir_all(v41, a2);
  if ( v15 )
  {
    v16 = v15;
    *(_QWORD *)&v38 = v15;
    *(_QWORD *)&v45[4] = std::fs::remove_dir(v41, a2);
    if ( *(_QWORD *)&v45[4] )
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v45[4]);
      if ( (unsigned __int8)std::io::error::Error::kind(v16) == 1 )
      {
        *(_QWORD *)&v19 = uucore::util_name(v16, a2, v17, v18);
        *(_OWORD *)v42 = v19;
        v58 = v42;
        *(_QWORD *)&v59 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v45[4] = &unk_127970;
        *(_QWORD *)&v45[12] = 2LL;
        *(_QWORD *)&v47 = 0LL;
        *(_QWORD *)&v46 = &v58;
        *((_QWORD *)&v46 + 1) = 1LL;
        std::io::stdio::_eprint(&v45[4]);
        *(_QWORD *)v42 = 1LL;
        *(_QWORD *)&v42[8] = v41;
        *(_QWORD *)&v42[16] = a2;
        v42[24] = 1;
        v58 = v42;
        *(_QWORD *)&v59 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v45[4] = &off_1279B0;
        *(_QWORD *)&v45[12] = 2LL;
        *(_QWORD *)&v47 = 0LL;
        *(_QWORD *)&v46 = &v58;
        *((_QWORD *)&v46 + 1) = 1LL;
        std::io::stdio::_eprint(&v45[4]);
      }
      else
      {
        *(_QWORD *)&v36 = uucore::util_name(v16, a2, v17, v18);
        *(_OWORD *)v42 = v36;
        v58 = v42;
        *(_QWORD *)&v59 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v45[4] = &unk_127970;
        *(_QWORD *)&v45[12] = 2LL;
        *(_QWORD *)&v47 = 0LL;
        *(_QWORD *)&v46 = &v58;
        *((_QWORD *)&v46 + 1) = 1LL;
        std::io::stdio::_eprint(&v45[4]);
        *(_QWORD *)v42 = 1LL;
        *(_QWORD *)&v42[8] = v41;
        *(_QWORD *)&v42[16] = a2;
        v42[24] = 1;
        v58 = v42;
        *(_QWORD *)&v59 = <os_display::Quoted as core::fmt::Display>::fmt;
        *((_QWORD *)&v59 + 1) = &v38;
        *(_QWORD *)&v60 = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v45[4] = &off_1279D0;
        *(_QWORD *)&v45[12] = 3LL;
        *(_QWORD *)&v47 = 0LL;
        *(_QWORD *)&v46 = &v58;
        *((_QWORD *)&v46 + 1) = 2LL;
        std::io::stdio::_eprint(&v45[4]);
      }
      LOBYTE(v3) = 1;
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v45[4]);
      v3 = 0;
    }
    core::ptr::drop_in_place<std::io::error::Error>(&v38);
  }
  else
  {
    v3 = 0;
  }
LABEL_55:
  LOBYTE(v3) = v3 & 1;
  return v3;
}
