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
  __int128 v17; // rax
  __int128 v18; // rax
  char **v19; // rax
  __int128 v20; // rax
  _BYTE *v21; // rbx
  _BYTE *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  char v25; // dl
  _BYTE *v26; // rdx
  __int64 v27; // rax
  __int128 v28; // xmm0
  __int128 v29; // rax
  __int128 v31; // [rsp+0h] [rbp-268h] BYREF
  __int128 v32; // [rsp+10h] [rbp-258h]
  __int128 v33; // [rsp+20h] [rbp-248h]
  _BYTE *v34; // [rsp+38h] [rbp-230h]
  _BYTE v35[56]; // [rsp+40h] [rbp-228h] BYREF
  __int128 v36; // [rsp+78h] [rbp-1F0h]
  unsigned int v37; // [rsp+88h] [rbp-1E0h]
  _BYTE v38[20]; // [rsp+8Ch] [rbp-1DCh] BYREF
  __int128 v39; // [rsp+A0h] [rbp-1C8h] BYREF
  __int128 v40; // [rsp+B0h] [rbp-1B8h]
  __int64 v41; // [rsp+C0h] [rbp-1A8h]
  __int128 v42; // [rsp+C8h] [rbp-1A0h]
  __int64 v43; // [rsp+D8h] [rbp-190h]
  __int64 v44; // [rsp+E0h] [rbp-188h]
  __int128 v45; // [rsp+E8h] [rbp-180h]
  __int64 v46; // [rsp+F8h] [rbp-170h]
  __int128 v47; // [rsp+100h] [rbp-168h]
  __int128 v48; // [rsp+110h] [rbp-158h]
  __int128 v49; // [rsp+120h] [rbp-148h]
  __int128 v50; // [rsp+130h] [rbp-138h]
  _BYTE *v51; // [rsp+140h] [rbp-128h] BYREF
  __int128 v52; // [rsp+148h] [rbp-120h]
  __int128 v53; // [rsp+158h] [rbp-110h]
  __int128 v54; // [rsp+168h] [rbp-100h]
  __int64 v55; // [rsp+178h] [rbp-F0h]
  __int64 v56; // [rsp+180h] [rbp-E8h] BYREF
  __int64 v57; // [rsp+188h] [rbp-E0h]
  __int64 v58; // [rsp+190h] [rbp-D8h]
  _BYTE *v59; // [rsp+198h] [rbp-D0h]
  _QWORD v60[2]; // [rsp+1A0h] [rbp-C8h] BYREF
  __int128 v61; // [rsp+1B0h] [rbp-B8h]
  __int64 *v62; // [rsp+1C0h] [rbp-A8h] BYREF
  __int64 (__fastcall *v63)(); // [rsp+1C8h] [rbp-A0h]
  _BYTE *v64; // [rsp+1D0h] [rbp-98h]
  __int64 (__fastcall *v65)(); // [rsp+1D8h] [rbp-90h]
  __int64 v66; // [rsp+1E0h] [rbp-88h] BYREF
  _BYTE *v67; // [rsp+1E8h] [rbp-80h]
  _BYTE *v68; // [rsp+1F0h] [rbp-78h]
  char v69; // [rsp+1F8h] [rbp-70h]
  __int128 v70; // [rsp+200h] [rbp-68h]
  __int128 v71; // [rsp+210h] [rbp-58h]
  __int128 v72; // [rsp+220h] [rbp-48h]

  v7 = &v38[4];
  v8 = a1;
  std::path::Path::components(&v38[4], a1, a2);
  if ( BYTE2(v42) || (unsigned __int8)(v39 - 5) >= 2u )
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
          *(_QWORD *)&v18 = uucore::util_name(v7, v8, v9, v11);
          *(_OWORD *)v35 = v18;
          v51 = v35;
          *(_QWORD *)&v52 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v38[4] = &unk_127970;
          *(_QWORD *)&v38[12] = 2LL;
          *(_QWORD *)&v40 = 0LL;
          *(_QWORD *)&v39 = &v51;
          *((_QWORD *)&v39 + 1) = 1LL;
          std::io::stdio::_eprint(&v38[4]);
          *(_QWORD *)v35 = 1LL;
          *(_QWORD *)&v35[8] = a1;
          *(_QWORD *)&v35[16] = a2;
          v35[24] = 1;
          v51 = v35;
          *(_QWORD *)&v52 = <os_display::Quoted as core::fmt::Display>::fmt;
          v19 = &off_127A50;
        }
        else
        {
          *(_QWORD *)&v20 = uucore::util_name(v7, v8, v9, v11);
          *(_OWORD *)v35 = v20;
          v51 = v35;
          *(_QWORD *)&v52 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v38[4] = &unk_127970;
          *(_QWORD *)&v38[12] = 2LL;
          *(_QWORD *)&v40 = 0LL;
          *(_QWORD *)&v39 = &v51;
          *((_QWORD *)&v39 + 1) = 1LL;
          std::io::stdio::_eprint(&v38[4]);
          *(_QWORD *)v35 = 1LL;
          *(_QWORD *)&v35[8] = a1;
          *(_QWORD *)&v35[16] = a2;
          v35[24] = 1;
          v51 = v35;
          *(_QWORD *)&v52 = <os_display::Quoted as core::fmt::Display>::fmt;
          v19 = &off_127A30;
        }
        *(_QWORD *)&v38[4] = v19;
        *(_QWORD *)&v38[12] = 2LL;
        *(_QWORD *)&v40 = 0LL;
        *(_QWORD *)&v39 = &v51;
        *((_QWORD *)&v39 + 1) = 1LL;
        std::io::stdio::_eprint(&v38[4]);
        LOBYTE(v3) = 1;
        goto LABEL_55;
      }
LABEL_18:
      LOBYTE(v9) = a3[2] != 0;
      if ( ((unsigned __int8)v9 & (unsigned __int8)v11) == 0 )
      {
        v3 = uu_rm::remove_dir(a1, a2, a3);
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
  v34 = a1;
  v13 = a3[5];
  v14 = a3[6];
  if ( v14 == 2 || v13 )
  {
    v60[0] = 0LL;
    v61 = 0LL;
    v60[1] = 8LL;
    v56 = 0LL;
    v57 = 8LL;
    v58 = 0LL;
    v59 = a2;
    walkdir::WalkDir::new(v35, v34, a2);
    v49 = v36;
    v48 = *(_OWORD *)&v35[40];
    v47 = *(_OWORD *)&v35[24];
    v45 = *(_OWORD *)v35;
    v46 = *(_QWORD *)&v35[16];
    *(_DWORD *)&v38[8] = 0;
    *(_QWORD *)&v39 = 0LL;
    *((_QWORD *)&v39 + 1) = 8LL;
    v40 = 0LL;
    v41 = 8LL;
    v42 = 0LL;
    v43 = 8LL;
    v44 = 0LL;
    v50 = 0LL;
    v3 = 0;
    *(_QWORD *)v38 = v13;
    v37 = v14;
    v21 = v34;
    while ( 1 )
    {
      if ( v14 == 2 )
      {
LABEL_31:
        <walkdir::IntoIter as core::iter::traits::iterator::Iterator>::next(&v51, &v38[4]);
        v22 = v51;
        if ( v51 == (_BYTE *)&dword_0 + 3 )
        {
LABEL_45:
          core::ptr::drop_in_place<walkdir::IntoIter>(&v38[4]);
          alloc::collections::vec_deque::VecDeque<T,A>::iter(v35, v60);
          v39 = *(_OWORD *)&v35[16];
          *(_OWORD *)&v38[4] = *(_OWORD *)v35;
          while ( 1 )
          {
            v27 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v39);
            if ( !v27 )
            {
              v28 = *(_OWORD *)&v38[4];
              *(_OWORD *)&v38[4] = v39;
              v39 = v28;
              v27 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v39);
              if ( !v27 )
                break;
            }
            LOBYTE(v3) = (uu_rm::remove_dir(*(_QWORD *)(v27 + 8), *(_QWORD *)(v27 + 16), a3) | v3) & 1;
          }
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v56);
          core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<walkdir::dent::DirEntry>>(v60);
          goto LABEL_55;
        }
        v72 = v54;
        v71 = v53;
        v70 = v52;
        if ( (_DWORD)v51 != 2 )
          goto LABEL_43;
        v33 = v54;
        v32 = v53;
        v31 = v52;
        *(_QWORD *)v35 = v57;
        *(_QWORD *)&v35[8] = v57 + 24 * v58;
        while ( 1 )
        {
          v23 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v35);
          if ( !v23 )
            break;
          if ( (unsigned __int8)std::path::Path::starts_with(*((_QWORD *)&v31 + 1), v32, v23) )
          {
            core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v31);
            goto LABEL_31;
          }
        }
        if ( (WORD4(v33) & 0xF000) != 0x4000 )
        {
LABEL_41:
          LOBYTE(v3) = (uu_rm::remove_file(*((_QWORD *)&v31 + 1), v32, *(unsigned int *)v38, v37) | v3) & 1;
          goto LABEL_42;
        }
        std::fs::read_dir(v35, *((_QWORD *)&v31 + 1), v32);
        v24 = core::result::Result<T,E>::unwrap(*(_QWORD *)v35, *(unsigned int *)&v35[8]);
        if ( core::iter::traits::iterator::Iterator::fold(v24, v25 & 1)
          && !(unsigned __int8)uu_rm::prompt_descend(*((_QWORD *)&v31 + 1), v32) )
        {
          std::path::Path::to_path_buf(v35, *((_QWORD *)&v31 + 1), v32);
          alloc::vec::Vec<T,A>::push(&v56, v35);
LABEL_42:
          core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v31);
        }
        else
        {
LABEL_25:
          *(_OWORD *)&v35[32] = v33;
          *(_OWORD *)&v35[16] = v32;
          *(_OWORD *)v35 = v31;
          alloc::collections::vec_deque::VecDeque<T,A>::push_back(v60, v35);
        }
      }
      else
      {
        <walkdir::IntoIter as core::iter::traits::iterator::Iterator>::next(&v51, &v38[4]);
        v22 = v51;
        if ( v51 == (_BYTE *)&dword_0 + 3 )
          goto LABEL_45;
        v72 = v54;
        v71 = v53;
        v70 = v52;
        if ( (_DWORD)v51 == 2 )
        {
          v33 = v54;
          v32 = v53;
          v31 = v52;
          if ( (WORD4(v54) & 0xF000) != 0x4000 )
            goto LABEL_41;
          goto LABEL_25;
        }
LABEL_43:
        *(_QWORD *)v35 = v22;
        *(_OWORD *)&v35[40] = v72;
        *(_OWORD *)&v35[24] = v71;
        *(_OWORD *)&v35[8] = v70;
        *(_QWORD *)&v36 = v55;
        v66 = ((__int64 (*)(void))uucore::util_name)();
        v67 = v26;
        v62 = &v66;
        v63 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v31 = &unk_127970;
        *((_QWORD *)&v31 + 1) = 2LL;
        *(_QWORD *)&v33 = 0LL;
        *(_QWORD *)&v32 = &v62;
        *((_QWORD *)&v32 + 1) = 1LL;
        std::io::stdio::_eprint(&v31);
        v66 = 1LL;
        v67 = v21;
        v68 = v59;
        v69 = 1;
        v62 = &v66;
        v63 = <os_display::Quoted as core::fmt::Display>::fmt;
        v64 = v35;
        v65 = <walkdir::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v31 = &off_127A00;
        *((_QWORD *)&v31 + 1) = 3LL;
        *(_QWORD *)&v33 = 0LL;
        *(_QWORD *)&v32 = &v62;
        *((_QWORD *)&v32 + 1) = 2LL;
        std::io::stdio::_eprint(&v31);
        core::ptr::drop_in_place<walkdir::error::Error>(v35);
        LOBYTE(v3) = 1;
      }
    }
  }
  v15 = std::fs::remove_dir_all(v34, a2);
  if ( v15 )
  {
    v16 = v15;
    *(_QWORD *)&v31 = v15;
    *(_QWORD *)&v38[4] = std::fs::remove_dir(v34, a2);
    if ( *(_QWORD *)&v38[4] )
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v38[4]);
      if ( (unsigned __int8)std::io::error::Error::kind(v16) == 1 )
      {
        *(_QWORD *)&v17 = ((__int64 (*)(void))uucore::util_name)();
        *(_OWORD *)v35 = v17;
        v51 = v35;
        *(_QWORD *)&v52 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v38[4] = &unk_127970;
        *(_QWORD *)&v38[12] = 2LL;
        *(_QWORD *)&v40 = 0LL;
        *(_QWORD *)&v39 = &v51;
        *((_QWORD *)&v39 + 1) = 1LL;
        std::io::stdio::_eprint(&v38[4]);
        *(_QWORD *)v35 = 1LL;
        *(_QWORD *)&v35[8] = v34;
        *(_QWORD *)&v35[16] = a2;
        v35[24] = 1;
        v51 = v35;
        *(_QWORD *)&v52 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v38[4] = &off_1279B0;
        *(_QWORD *)&v38[12] = 2LL;
        *(_QWORD *)&v40 = 0LL;
        *(_QWORD *)&v39 = &v51;
        *((_QWORD *)&v39 + 1) = 1LL;
        std::io::stdio::_eprint(&v38[4]);
      }
      else
      {
        *(_QWORD *)&v29 = ((__int64 (*)(void))uucore::util_name)();
        *(_OWORD *)v35 = v29;
        v51 = v35;
        *(_QWORD *)&v52 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v38[4] = &unk_127970;
        *(_QWORD *)&v38[12] = 2LL;
        *(_QWORD *)&v40 = 0LL;
        *(_QWORD *)&v39 = &v51;
        *((_QWORD *)&v39 + 1) = 1LL;
        std::io::stdio::_eprint(&v38[4]);
        *(_QWORD *)v35 = 1LL;
        *(_QWORD *)&v35[8] = v34;
        *(_QWORD *)&v35[16] = a2;
        v35[24] = 1;
        v51 = v35;
        *(_QWORD *)&v52 = <os_display::Quoted as core::fmt::Display>::fmt;
        *((_QWORD *)&v52 + 1) = &v31;
        *(_QWORD *)&v53 = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v38[4] = &off_1279D0;
        *(_QWORD *)&v38[12] = 3LL;
        *(_QWORD *)&v40 = 0LL;
        *(_QWORD *)&v39 = &v51;
        *((_QWORD *)&v39 + 1) = 2LL;
        std::io::stdio::_eprint(&v38[4]);
      }
      LOBYTE(v3) = 1;
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v38[4]);
      v3 = 0;
    }
    core::ptr::drop_in_place<std::io::error::Error>(&v31);
  }
  else
  {
    v3 = 0;
  }
LABEL_55:
  LOBYTE(v3) = v3 & 1;
  return v3;
}
