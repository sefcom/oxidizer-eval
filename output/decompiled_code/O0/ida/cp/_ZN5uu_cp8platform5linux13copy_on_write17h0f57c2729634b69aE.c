        char a10)
{
  unsigned __int64 v13; // rdx
  unsigned int v14; // ebp
  char *v15; // r14
  char v16; // bp
  char v17; // si
  unsigned int v18; // r14d
  unsigned __int8 v19; // bp
  __int64 v20; // r14
  void *v21; // r15
  __int64 v22; // rax
  char v23; // bp
  size_t v24; // rcx
  char v25; // bp
  int v26; // eax
  char v27; // bp
  unsigned __int64 v28; // rax
  int v29; // r14d
  char v30; // bp
  unsigned __int8 v31; // bp
  char v32; // bp
  unsigned __int64 v33; // rcx
  char v34; // al
  char v35; // cl
  unsigned __int64 v36; // rdx
  char v37; // si
  char v38; // r15
  int v39; // esi
  void *v40; // rdx
  int v41; // esi
  __int64 v42; // rax
  unsigned __int64 v43; // r15
  char *v44; // rsi
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm2
  unsigned __int8 v49; // al
  int v50; // eax
  unsigned __int8 v51; // al
  unsigned __int8 v52; // al
  bool v53; // cl
  unsigned __int8 v54; // r14
  bool v55; // bp
  unsigned __int8 v56; // al
  unsigned __int8 v57; // al
  unsigned __int8 v58; // cl
  unsigned int v59; // eax
  int v60; // [rsp+0h] [rbp-188h]
  unsigned __int64 v61; // [rsp+0h] [rbp-188h]
  bool v62; // [rsp+0h] [rbp-188h]
  unsigned __int64 v63; // [rsp+0h] [rbp-188h]
  char v64; // [rsp+0h] [rbp-188h]
  char *v65; // [rsp+8h] [rbp-180h]
  unsigned __int64 v66; // [rsp+8h] [rbp-180h]
  char v67; // [rsp+8h] [rbp-180h]
  char v68; // [rsp+8h] [rbp-180h]
  char v69; // [rsp+8h] [rbp-180h]
  int v70; // [rsp+8h] [rbp-180h]
  char v77; // [rsp+10h] [rbp-178h]
  char *v78; // [rsp+18h] [rbp-170h] BYREF
  char *v79; // [rsp+20h] [rbp-168h]
  unsigned __int64 v80; // [rsp+28h] [rbp-160h]
  char *v81; // [rsp+30h] [rbp-158h]
  char v82; // [rsp+38h] [rbp-150h] BYREF
  char v83; // [rsp+39h] [rbp-14Fh]
  char *v84; // [rsp+40h] [rbp-148h]
  char v85; // [rsp+48h] [rbp-140h]
  char v86; // [rsp+49h] [rbp-13Fh]
  char v87; // [rsp+4Ah] [rbp-13Eh]
  char v88; // [rsp+4Bh] [rbp-13Dh]
  char *v89; // [rsp+50h] [rbp-138h]
  char v90; // [rsp+58h] [rbp-130h]
  char v91; // [rsp+59h] [rbp-12Fh]
  char v92; // [rsp+5Ah] [rbp-12Eh]
  char v93; // [rsp+5Bh] [rbp-12Dh]
  char *v94; // [rsp+60h] [rbp-128h]
  __int128 dest; // [rsp+68h] [rbp-120h] BYREF
  __int128 v96; // [rsp+78h] [rbp-110h]
  __int128 v97; // [rsp+88h] [rbp-100h]
  __int128 v98; // [rsp+98h] [rbp-F0h]
  char v99; // [rsp+118h] [rbp-70h]
  unsigned int v100; // [rsp+119h] [rbp-6Fh]
  char *v101; // [rsp+120h] [rbp-68h]
  char v102; // [rsp+128h] [rbp-60h]
  int v103; // [rsp+129h] [rbp-5Fh]
  char *v104; // [rsp+130h] [rbp-58h]
  char v105; // [rsp+138h] [rbp-50h]
  int v106; // [rsp+139h] [rbp-4Fh]
  char *v107; // [rsp+140h] [rbp-48h]
  char v108; // [rsp+148h] [rbp-40h]
  int v109; // [rsp+149h] [rbp-3Fh]
  char *v110; // [rsp+150h] [rbp-38h]

  if ( a6 )
  {
    if ( a6 == 1 )
    {
      if ( a7 )
      {
        if ( a7 == 1 )
        {
          if ( a10 )
          {
            LOBYTE(v14) = 4;
            LOBYTE(v15) = 1;
            if ( !uu_cp::platform::linux::copy_fifo_contents((__int64)a2, a3, (__int64)a4, a5) )
            {
              LOBYTE(v60) = 4;
              goto LABEL_95;
            }
            LOBYTE(v60) = 4;
LABEL_92:
            if ( v13 && a8 )
            {
              v78 = a8;
              v79 = a9;
              v80 = v13;
              <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(&dest, &v78);
              v45 = dest;
              v46 = v96;
              v47 = v97;
              *(_OWORD *)(a1 + 48) = v98;
              *(_OWORD *)(a1 + 32) = v47;
              *(_OWORD *)(a1 + 16) = v46;
              *(_OWORD *)a1 = v45;
              return a1;
            }
LABEL_95:
            *(_BYTE *)(a1 + 8) = v60;
            *(_BYTE *)(a1 + 9) = v14;
            *(_BYTE *)(a1 + 10) = (_BYTE)v15;
            *(_QWORD *)a1 = 13LL;
            return a1;
          }
          uu_cp::platform::linux::check_for_data((__int64)&v78, (__int64)a2, a3);
          v25 = (char)v79;
          v15 = v78;
          if ( (_BYTE)v79 != 2 )
          {
            v63 = v80;
            uu_cp::platform::linux::check_sparse_detection((__int64)&v82, (__int64)a2, a3);
            if ( (v82 & 1) == 0 )
            {
              if ( (v25 & 1) != 0 )
              {
                if ( !v15 )
                {
                  v26 = 4;
                  goto LABEL_126;
                }
              }
              else
              {
                v26 = 0;
                if ( !v15 || (unsigned __int64)v15 >= 0x200 )
                  goto LABEL_126;
              }
              v26 = 2;
LABEL_126:
              v70 = v26;
              v53 = (v25 & 1) == 0 || v63 != 0;
              v64 = v83;
              v54 = 2;
              if ( (v83 & 1) != 0 )
                v54 = (2 * v53) | 1;
              v55 = v53 || (v83 & 1) == 0;
              std::sys::pal::unix::fs::stat(&dest);
              if ( (_QWORD)dest == 2LL )
              {
                std::io::error::repr_bitpacked::decode_repr(&dest, *((_QWORD *)&dest + 1));
                if ( (unsigned __int8)dest >= 3u )
                  core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&dest + 8);
              }
              else
              {
                v56 = v54;
                v54 = 1;
                if ( (WORD4(v98) & 0xF000) != 0x1000 )
                  v54 = v56;
              }
              v39 = 4;
              if ( v55 )
                v39 = v70;
              v57 = v54;
              v109 = v39 | (((v64 & 1) << 17) + (v54 << 24) + 66560);
              v108 = 0;
              LODWORD(v15) = (((v64 & 1) << 17) | 0x10400u) >> 16;
              if ( v57 == 3 )
              {
                LOBYTE(v60) = v39;
                v13 = uu_cp::platform::linux::clone(a2, a3, a4, a5, 3);
LABEL_148:
                LOBYTE(v14) = 4;
                goto LABEL_92;
              }
              v68 = 1;
              goto LABEL_65;
            }
            v15 = v84;
          }
          v81 = v15;
          v110 = v15;
          v108 = 1;
          LOBYTE(v15) = 1;
          v68 = 0;
          LOBYTE(v39) = 0;
LABEL_65:
          LOBYTE(v60) = v39;
          v13 = uu_cp::platform::linux::clone(a2, a3, a4, a5, 1);
          LOBYTE(v14) = 4;
          if ( v68 )
            goto LABEL_92;
          goto LABEL_88;
        }
        if ( !a10 )
        {
          uu_cp::platform::linux::check_for_data((__int64)&dest, (__int64)a2, a3);
          v23 = BYTE8(dest);
          v15 = (char *)dest;
          if ( BYTE8(dest) == 2 )
          {
            v24 = a5;
          }
          else
          {
            uu_cp::platform::linux::check_sparse_detection((__int64)&v78, (__int64)a2, a3);
            if ( ((unsigned __int8)v78 & 1) == 0 )
            {
              v24 = a5;
              v36 = (unsigned __int64)v15;
              LOBYTE(v15) = (2 * (BYTE1(v78) & 1)) | 1;
              v37 = 3;
              if ( (v23 & 1) == 0 )
                v37 = 3 * (v36 < 0x200);
              v91 = v37;
              v92 = 1;
              v93 = (2 * (BYTE1(v78) & 1)) | 1;
              v90 = 0;
              v38 = 1;
LABEL_76:
              LOBYTE(v60) = v37;
              v13 = uu_cp::platform::linux::clone(a2, a3, a4, v24, 1);
              LOBYTE(v14) = 1;
              if ( v38 )
                goto LABEL_92;
LABEL_77:
              v43 = v13;
              v44 = v65;
LABEL_89:
              std::io::error::repr_bitpacked::decode_repr(&dest, v44);
              if ( (unsigned __int8)dest >= 3u )
                core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&dest + 8);
              v13 = v43;
              goto LABEL_92;
            }
            v24 = a5;
            v15 = v79;
          }
          v65 = v15;
          v94 = v15;
          v90 = 1;
          LOBYTE(v15) = 1;
          v38 = 0;
          v37 = 0;
          goto LABEL_76;
        }
LABEL_34:
        LOBYTE(v60) = 3;
        LOBYTE(v15) = 1;
        LOBYTE(v14) = 1;
        if ( !uu_cp::platform::linux::copy_fifo_contents((__int64)a2, a3, (__int64)a4, a5) )
          goto LABEL_95;
        goto LABEL_92;
      }
      if ( a10 )
      {
        v22 = uu_cp::platform::linux::copy_fifo_contents((__int64)a2, a3, (__int64)a4, a5);
        LOBYTE(v60) = 3;
        LOBYTE(v14) = 4;
        goto LABEL_31;
      }
      uu_cp::platform::linux::check_for_data((__int64)&v78, (__int64)a2, a3);
      v27 = (char)v79;
      v15 = v78;
      if ( (_BYTE)v79 != 2 )
      {
        v65 = (char *)v80;
        uu_cp::platform::linux::check_sparse_detection((__int64)&v82, (__int64)a2, a3);
        if ( (v82 & 1) == 0 )
        {
          v28 = (unsigned __int64)v15;
          v29 = v83 & 1;
          if ( (v27 & 1) != 0 || v28 < 0x200 )
          {
            if ( (_BYTE)v29 )
            {
              v60 = 1027;
              if ( (v27 & 1) != 0 )
              {
                LOBYTE(v28) = 2 - (v65 == 0LL);
                LODWORD(v65) = v28;
                v15 = "PPPPPPPPPPPPPPPPPPPP";
              }
              else
              {
                v15 = (char *)&unk_30000;
                LOBYTE(v28) = 2;
                LODWORD(v65) = v28;
              }
            }
            else
            {
              LOBYTE(v28) = 2 - ((v65 == 0LL) & v27);
              LODWORD(v65) = v28;
              v15 = (char *)&unk_20000;
              v60 = 1027;
            }
          }
          else
          {
            LODWORD(v15) = (v29 | 2) << 16;
            LOBYTE(v28) = 2;
            LODWORD(v65) = v28;
            v60 = 1024;
          }
          std::sys::pal::unix::fs::stat(&dest);
          if ( (_QWORD)dest == 2LL )
          {
            std::io::error::repr_bitpacked::decode_repr(&dest, *((_QWORD *)&dest + 1));
            if ( (unsigned __int8)dest >= 3u )
              core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&dest + 8);
            v58 = (unsigned __int8)v65;
          }
          else
          {
            v58 = 1;
            if ( (WORD4(v98) & 0xF000) != 0x1000 )
              v58 = (unsigned __int8)v65;
          }
          v59 = (unsigned int)v15 | (v58 << 24);
          v106 = v60 | v59;
          v105 = 0;
          LODWORD(v15) = (unsigned int)v15 >> 16;
          v40 = a4;
          if ( (v59 & 0x7F000000) == 0x1000000 )
          {
            v13 = uu_cp::platform::linux::clone(a2, a3, a4, a5, 1);
            goto LABEL_148;
          }
          v77 = 1;
          goto LABEL_69;
        }
        v15 = v84;
      }
      v40 = a4;
      v65 = v15;
      v107 = v15;
      v105 = 1;
      LOBYTE(v15) = 2;
      v77 = 0;
      LOBYTE(v60) = 0;
LABEL_69:
      v13 = uu_cp::platform::linux::clone(a2, a3, v40, a5, 2);
      LOBYTE(v14) = 4;
      if ( v77 )
        goto LABEL_92;
      goto LABEL_77;
    }
    if ( a7 )
    {
      if ( a7 == 1 )
      {
        if ( a10 )
          goto LABEL_34;
        uu_cp::platform::linux::check_for_data((__int64)&v78, (__int64)a2, a3);
        v16 = (char)v79;
        v15 = v78;
        if ( (_BYTE)v79 != 2 )
        {
          v61 = v80;
          uu_cp::platform::linux::check_sparse_detection((__int64)&v82, (__int64)a2, a3);
          if ( (v82 & 1) == 0 )
          {
            v17 = 3;
            if ( (v16 & 1) != 0 )
              v17 = (2 * (v61 != 0)) | 1;
            v62 = (unsigned __int64)v15 >= 0x200 && (v16 & 1) == 0;
            v18 = ((v83 & 1) << 17) | 0x10000;
            v19 = 2;
            if ( (v83 & 1) != 0 )
              v19 = v17;
            std::sys::pal::unix::fs::stat(&dest);
            if ( (_QWORD)dest == 2LL )
            {
              std::io::error::repr_bitpacked::decode_repr(&dest, *((_QWORD *)&dest + 1));
              if ( (unsigned __int8)dest >= 3u )
                core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&dest + 8);
            }
            else
            {
              v49 = v19;
              v19 = 1;
              if ( (WORD4(v98) & 0xF000) != 0x1000 )
                v19 = v49;
            }
            v41 = 3 * !v62;
            v103 = v41 | v18 | (v19 << 24) | 0x100;
            v102 = 0;
            LODWORD(v15) = HIWORD(v18);
            if ( v19 == 3 )
            {
              LOBYTE(v60) = 3 * !v62;
              v13 = uu_cp::platform::linux::sparse_copy_without_hole((__int64)a2, a3, (__int64)a4, a5);
              LOBYTE(v14) = 1;
              goto LABEL_92;
            }
            v67 = 1;
            goto LABEL_73;
          }
          v15 = v84;
        }
        v81 = v15;
        v104 = v15;
        v102 = 1;
        LOBYTE(v15) = 1;
        v67 = 0;
        LOBYTE(v41) = 0;
LABEL_73:
        LOBYTE(v60) = v41;
        v42 = std::sys::pal::unix::fs::copy(a2, a3, a4, a5);
        goto LABEL_85;
      }
      if ( a10 )
        goto LABEL_34;
      uu_cp::platform::linux::check_for_data((__int64)&dest, (__int64)a2, a3);
      v32 = BYTE8(dest);
      v15 = (char *)dest;
      if ( BYTE8(dest) != 2 )
      {
        uu_cp::platform::linux::check_sparse_detection((__int64)&v78, (__int64)a2, a3);
        if ( ((unsigned __int8)v78 & 1) == 0 )
        {
          v33 = (unsigned __int64)v15;
          LOBYTE(v15) = (2 * (BYTE1(v78) & 1)) | 1;
          v34 = 3 * (v33 < 0x200);
          v35 = 3;
          if ( (v32 & 1) == 0 )
            v35 = v34;
          v86 = v35;
          v87 = 1;
          v88 = (2 * (BYTE1(v78) & 1)) | 1;
          v85 = 0;
          v67 = 1;
          goto LABEL_84;
        }
        v15 = v79;
      }
      v81 = v15;
      v89 = v15;
      v85 = 1;
      LOBYTE(v15) = 1;
      v67 = 0;
      v35 = 0;
LABEL_84:
      LOBYTE(v60) = v35;
      v42 = std::sys::pal::unix::fs::copy(a2, a3, a4, a5);
LABEL_85:
      if ( !v42 )
        v13 = 0LL;
      LOBYTE(v14) = 1;
      if ( v67 )
        goto LABEL_92;
      goto LABEL_88;
    }
    if ( a10 )
    {
      v22 = uu_cp::platform::linux::copy_fifo_contents((__int64)a2, a3, (__int64)a4, a5);
      LOBYTE(v60) = 3;
      LOBYTE(v14) = 1;
LABEL_31:
      LOBYTE(v15) = 2;
      if ( !v22 )
        goto LABEL_95;
      goto LABEL_92;
    }
    uu_cp::platform::linux::check_for_data((__int64)&v78, (__int64)a2, a3);
    v30 = (char)v79;
    v15 = v78;
    if ( (_BYTE)v79 != 2 )
    {
      v66 = v80;
      uu_cp::platform::linux::check_sparse_detection((__int64)&v82, (__int64)a2, a3);
      if ( (v82 & 1) == 0 )
      {
        if ( (v30 & 1) != 0 || (unsigned __int64)v15 < 0x200 )
        {
          if ( (v83 & 1) == 0 )
          {
            v31 = (v66 == 0) & v30;
            v60 = 3;
            v15 = (char *)&unk_20100;
            goto LABEL_115;
          }
          v50 = 3;
          if ( (v30 & 1) != 0 )
          {
            v31 = v66 == 0;
            v60 = 3;
            v15 = (char *)&unk_40100;
            goto LABEL_115;
          }
        }
        else
        {
          v60 = 0;
          if ( (v83 & 1) == 0 )
          {
            v15 = (char *)&unk_20100;
            v31 = 0;
LABEL_115:
            std::sys::pal::unix::fs::stat(&dest);
            if ( (_QWORD)dest == 2LL )
            {
              std::io::error::repr_bitpacked::decode_repr(&dest, *((_QWORD *)&dest + 1));
              if ( (unsigned __int8)dest >= 3u )
                core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&dest + 8);
            }
            else
            {
              v51 = v31;
              v31 = 1;
              if ( (WORD4(v98) & 0xF000) != 0x1000 )
                v31 = v51;
            }
            v52 = v31;
            v100 = v60 | (unsigned int)v15 | (v31 << 24);
            v99 = 0;
            v14 = (unsigned int)v15 >> 8;
            LODWORD(v15) = (unsigned int)v15 >> 16;
            if ( v52 )
            {
              if ( !std::sys::pal::unix::fs::copy(a2, a3, a4, a5) )
                v13 = 0LL;
              goto LABEL_92;
            }
            v69 = 1;
            goto LABEL_80;
          }
          v50 = 0;
        }
        v31 = 0;
        if ( v66 )
          v50 = 0;
        v60 = v50;
        v15 = "ate.rs";
        goto LABEL_115;
      }
      v15 = v84;
    }
    v81 = v15;
    v101 = v15;
    v99 = 1;
    LOBYTE(v15) = 2;
    LOBYTE(v14) = 1;
    v69 = 0;
    LOBYTE(v60) = 0;
LABEL_80:
    v13 = uu_cp::platform::linux::sparse_copy((__int64)a2, a3, (__int64)a4, a5);
    if ( v69 )
      goto LABEL_92;
LABEL_88:
    v43 = v13;
    v44 = v81;
    goto LABEL_89;
  }
  if ( a7 == 1 )
  {
    LOBYTE(v60) = 0;
    v13 = uu_cp::platform::linux::clone(a2, a3, a4, a5, 0);
    LOBYTE(v14) = 2;
    LOBYTE(v15) = 1;
    goto LABEL_92;
  }
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&dest, 54LL, 0LL);
  v20 = *((_QWORD *)&dest + 1);
  if ( (_QWORD)dest )
    alloc::raw_vec::handle_error(*((_QWORD *)&dest + 1), v96);
  v21 = (void *)v96;
  core::intrinsics::copy_nonoverlapping::precondition_check(&xmmword_2FF26, v96, 1LL, 1LL, 54LL);
  qmemcpy(v21, "`--reflink=always` can be used only with --sparse=auto", 54);
  *(_QWORD *)a1 = 4LL;
  *(_QWORD *)(a1 + 8) = v20;
  *(_QWORD *)(a1 + 16) = v21;
  *(_QWORD *)(a1 + 24) = 54LL;
  return a1;
}
