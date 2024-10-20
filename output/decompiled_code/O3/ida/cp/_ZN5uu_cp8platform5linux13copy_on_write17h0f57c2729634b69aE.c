        char a10)
{
  unsigned __int64 v13; // rdx
  char v14; // r15
  char v15; // r13
  char v16; // bp
  unsigned __int64 v17; // r14
  char v18; // r12
  unsigned __int64 v19; // rax
  void *v20; // rax
  char v21; // r12
  unsigned __int64 v22; // rax
  char v23; // r13
  unsigned __int64 v24; // rax
  char v25; // r13
  unsigned __int64 v26; // rax
  char v27; // r13
  unsigned __int64 v28; // rax
  char v29; // r12
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // r12
  char v33; // r12
  size_t v34; // rsi
  __int64 v35; // rax
  __int64 v36; // r12
  unsigned __int64 v37; // rbp
  unsigned __int64 v38; // rbp
  unsigned __int64 v39; // r13
  char v40; // r12
  unsigned __int64 v41; // r13
  char v42; // r12
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rbp
  unsigned __int64 v45; // r12
  __int64 v46; // r13
  __int64 v47; // rax
  void *v48; // r12
  unsigned __int64 v49; // r13
  size_t v50; // rsi
  unsigned __int64 v51; // rdx
  int v53; // ebp
  int v54; // ebp
  int v55; // ebp
  int v56; // ebp
  int v57; // ebp
  int v58; // ebp
  int v59; // eax
  unsigned __int64 v60; // r12
  unsigned __int64 v61; // r12
  void *v62; // rsi
  unsigned __int64 v63; // rcx
  bool v64; // r12
  unsigned __int64 v65; // r13
  char v66; // al
  void *v67; // rsi
  bool v68; // r12
  bool v69; // r13
  unsigned __int64 v70; // r12
  void *v71; // rsi
  bool v72; // r12
  bool v73; // r13
  void *v74; // rsi
  char v75; // r12
  void *v76; // rdi
  size_t v77; // rsi
  void *v78; // rdx
  size_t v79; // rcx
  char v80; // r8
  unsigned __int64 v81; // [rsp+0h] [rbp-128h]
  unsigned __int64 v82; // [rsp+0h] [rbp-128h]
  size_t v83; // [rsp+8h] [rbp-120h]
  void *v88; // [rsp+10h] [rbp-118h]
  int v93; // [rsp+1Ch] [rbp-10Ch] BYREF
  int v94; // [rsp+20h] [rbp-108h] BYREF
  int fd; // [rsp+24h] [rbp-104h]
  unsigned __int64 v96; // [rsp+28h] [rbp-100h]
  unsigned __int64 v97; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v98; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v99; // [rsp+40h] [rbp-E8h]
  __int64 dest; // [rsp+48h] [rbp-E0h] BYREF
  unsigned __int64 v101; // [rsp+50h] [rbp-D8h]
  unsigned __int64 v102; // [rsp+58h] [rbp-D0h]
  int v103; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v104; // [rsp+98h] [rbp-90h]
  unsigned __int64 v105; // [rsp+A8h] [rbp-80h]

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
            if ( !uu_cp::platform::linux::copy_fifo_contents((__int64)a2, a3, (__int64)a4, a5) )
            {
              v14 = 4;
              v15 = 1;
              v16 = 4;
LABEL_83:
              *(_BYTE *)(a1 + 8) = v16;
              *(_BYTE *)(a1 + 9) = v14;
              *(_BYTE *)(a1 + 10) = v15;
              *(_QWORD *)a1 = 13LL;
              return a1;
            }
            goto LABEL_28;
          }
          uu_cp::platform::linux::check_for_data((__int64)&dest, (__int64)a2, a3);
          v23 = v101;
          if ( (_BYTE)v101 == 2 )
          {
            v24 = dest;
LABEL_40:
            v81 = v24;
LABEL_41:
            v15 = 1;
            v16 = 0;
            v33 = 0;
LABEL_42:
            v34 = a3;
            v35 = uu_cp::platform::linux::clone(a2, a3, a4, a5, 1);
            goto LABEL_48;
          }
          v31 = dest;
          v32 = v102;
          dest = 0x1B600000000LL;
          LODWORD(v101) = 1;
          WORD2(v101) = 0;
          std::fs::OpenOptions::_open(&v94, &dest, a2, a3);
          if ( v94 )
          {
            v24 = v96;
            goto LABEL_40;
          }
          v81 = v31;
          v53 = fd;
          v93 = fd;
          std::fs::File::metadata(&dest, &v93);
          if ( (_DWORD)dest == 2 )
          {
            v81 = v101;
            close(v53);
            goto LABEL_41;
          }
          v99 = v32;
          v59 = v105;
          v60 = v104 >> 9;
          v97 = v105;
          LOBYTE(v59) = v105 < v104 >> 9;
          LODWORD(v98) = v59;
          close(v53);
          if ( v23 )
          {
            if ( v81 )
              v16 = 2;
            else
              v16 = 4;
            v74 = a4;
            if ( v97 >= v60 )
            {
              v15 = 1;
            }
            else
            {
              if ( v99 )
              {
                v15 = 3;
                v75 = 1;
                goto LABEL_152;
              }
              v16 = 4;
              v15 = 3;
            }
            v75 = 0;
            goto LABEL_152;
          }
          v16 = 2 * (v81 - 1 < 0x1FF);
          v15 = (2 * (v97 < v60)) | 1;
          v74 = a4;
          v75 = v98;
LABEL_152:
          std::sys::pal::unix::fs::stat(&dest);
          if ( (_DWORD)dest == 2 )
          {
            core::ptr::drop_in_place<std::io::error::Error>(v101, v74);
            if ( !v75 )
            {
LABEL_154:
              v33 = 1;
              goto LABEL_42;
            }
          }
          else if ( ((unsigned __int8)v75 & ((v103 & 0xF000) != 4096)) == 0 )
          {
            goto LABEL_154;
          }
          v76 = a2;
          v77 = a3;
          v78 = a4;
          v79 = a5;
          v80 = 3;
LABEL_157:
          v17 = uu_cp::platform::linux::clone(v76, v77, v78, v79, v80);
          v14 = 4;
          goto LABEL_66;
        }
        if ( !a10 )
        {
          uu_cp::platform::linux::check_for_data((__int64)&dest, (__int64)a2, a3);
          v21 = v101;
          if ( (_BYTE)v101 == 2 )
          {
            v22 = dest;
          }
          else
          {
            v41 = dest;
            dest = 0x1B600000000LL;
            LODWORD(v101) = 1;
            WORD2(v101) = 0;
            std::fs::OpenOptions::_open(&v94, &dest, a2, a3);
            if ( !v94 )
            {
              v56 = fd;
              v93 = fd;
              std::fs::File::metadata(&dest, &v93);
              if ( (_DWORD)dest != 2 )
              {
                v81 = v41;
                v69 = v105 < v104 >> 9;
                close(v56);
                v15 = (2 * v69) | 1;
                v16 = 3;
                if ( !v21 )
                  v16 = 3 * (v81 < 0x200);
                v42 = 1;
                goto LABEL_58;
              }
              v81 = v101;
              close(v56);
LABEL_57:
              v15 = 1;
              v42 = 0;
              v16 = 0;
LABEL_58:
              v34 = a3;
              v43 = uu_cp::platform::linux::clone(a2, a3, a4, a5, 1);
              goto LABEL_64;
            }
            v22 = v96;
          }
          v81 = v22;
          goto LABEL_57;
        }
        goto LABEL_27;
      }
      if ( a10 )
      {
        if ( !uu_cp::platform::linux::copy_fifo_contents((__int64)a2, a3, (__int64)a4, a5) )
        {
          v16 = 3;
          v14 = 4;
          v15 = 2;
          goto LABEL_83;
        }
        goto LABEL_28;
      }
      uu_cp::platform::linux::check_for_data((__int64)&dest, (__int64)a2, a3);
      v25 = v101;
      if ( (_BYTE)v101 == 2 )
      {
        v26 = dest;
LABEL_45:
        v81 = v26;
LABEL_46:
        v15 = 2;
        v16 = 0;
        v33 = 0;
LABEL_47:
        v34 = a3;
        v35 = uu_cp::platform::linux::clone(a2, a3, a4, a5, 2);
LABEL_48:
        v17 = v35;
        v14 = 4;
        if ( v33 )
        {
LABEL_66:
          if ( !v17 )
            goto LABEL_83;
LABEL_67:
          dest = v17;
          if ( n )
          {
            if ( n < 0 )
            {
              v46 = 0LL;
            }
            else
            {
              v46 = 1LL;
              v47 = _rust_alloc(n, 1LL);
              if ( v47 )
              {
                v48 = (void *)v47;
LABEL_72:
                memcpy(v48, src, n);
                *(_QWORD *)(a1 + 32) = v17;
                *(_QWORD *)(a1 + 8) = n;
                *(_QWORD *)(a1 + 16) = v48;
                *(_QWORD *)(a1 + 24) = n;
                *(_QWORD *)a1 = 3LL;
                return a1;
              }
            }
            alloc::raw_vec::handle_error(v46, n);
          }
          v48 = &dword_0 + 1;
          goto LABEL_72;
        }
LABEL_65:
        core::ptr::drop_in_place<std::io::error::Error>(v81, v34);
        goto LABEL_66;
      }
      v36 = dest;
      v37 = v102;
      dest = 0x1B600000000LL;
      LODWORD(v101) = 1;
      WORD2(v101) = 0;
      std::fs::OpenOptions::_open(&v94, &dest, a2, a3);
      if ( v94 )
      {
        v26 = v96;
        goto LABEL_45;
      }
      v81 = v37;
      v54 = fd;
      v93 = fd;
      std::fs::File::metadata(&dest, &v93);
      if ( (_DWORD)dest == 2 )
      {
        v81 = v101;
        close(v54);
        goto LABEL_46;
      }
      v97 = v36;
      v98 = v105;
      v61 = v104 >> 9;
      close(v54);
      if ( v98 >= v61 )
      {
        v62 = a4;
        v63 = v97;
        if ( v25 )
        {
          v64 = v81 == 0;
          v16 = 3;
          v15 = 2;
          goto LABEL_135;
        }
        v15 = 2;
      }
      else
      {
        v62 = a4;
        v63 = v97;
        if ( v25 )
        {
          v64 = v81 == 0;
          v16 = 3;
          v15 = 4;
          goto LABEL_135;
        }
        v15 = 3;
      }
      v16 = 3 * (v63 < 0x200);
      v64 = 0;
LABEL_135:
      std::sys::pal::unix::fs::stat(&dest);
      if ( (_DWORD)dest == 2 )
      {
        core::ptr::drop_in_place<std::io::error::Error>(v101, v62);
        if ( !v64 )
        {
LABEL_137:
          v33 = 1;
          goto LABEL_47;
        }
      }
      else if ( !v64 && (v103 & 0xF000) != 4096 )
      {
        goto LABEL_137;
      }
      v76 = a2;
      v77 = a3;
      v78 = a4;
      v79 = a5;
      v80 = 1;
      goto LABEL_157;
    }
    if ( a7 )
    {
      if ( a7 == 1 )
      {
        if ( !a10 )
        {
          v88 = a4;
          v83 = a5;
          uu_cp::platform::linux::check_for_data((__int64)&dest, (__int64)a2, a3);
          v18 = v101;
          if ( (_BYTE)v101 == 2 )
          {
            v19 = dest;
LABEL_52:
            v82 = v19;
LABEL_53:
            v15 = 1;
            v16 = 0;
            v40 = 0;
LABEL_77:
            v50 = a3;
            if ( std::sys::pal::unix::fs::copy(a2, a3, v88, v83) )
            {
              v17 = v51;
              if ( !v40 )
                core::ptr::drop_in_place<std::io::error::Error>(v82, v50);
              goto LABEL_67;
            }
            v14 = 1;
            if ( v40 )
              goto LABEL_83;
            core::ptr::drop_in_place<std::io::error::Error>(v82, a3);
            goto LABEL_82;
          }
          v38 = dest;
          v39 = v102;
          dest = 0x1B600000000LL;
          LODWORD(v101) = 1;
          WORD2(v101) = 0;
          std::fs::OpenOptions::_open(&v94, &dest, a2, a3);
          if ( v94 )
          {
            v19 = v96;
            goto LABEL_52;
          }
          v82 = v38;
          v55 = fd;
          v93 = fd;
          std::fs::File::metadata(&dest, &v93);
          if ( (_DWORD)dest == 2 )
          {
            v82 = v101;
            close(v55);
            goto LABEL_53;
          }
          v99 = v39;
          LOBYTE(v97) = v18 != 0;
          v98 = v105;
          v65 = v104 >> 9;
          close(v55);
          v66 = v97 | (v82 < 0x200);
          if ( v98 >= v65 )
          {
            v16 = 3 * (v66 != 0);
            v15 = 1;
            v68 = 0;
            v67 = v88;
          }
          else
          {
            v67 = v88;
            if ( v66 )
            {
              v68 = v18 == 0 || v99 != 0;
              v15 = 3;
              v16 = 3;
            }
            else
            {
              v68 = 1;
              v15 = 3;
              v16 = 0;
            }
          }
          std::sys::pal::unix::fs::stat(&dest);
          if ( (_DWORD)dest == 2 )
          {
            core::ptr::drop_in_place<std::io::error::Error>(v101, v67);
            if ( !v68 )
            {
LABEL_124:
              v40 = 1;
              goto LABEL_77;
            }
          }
          else if ( !v68 || (v103 & 0xF000) == 4096 )
          {
            goto LABEL_124;
          }
          v17 = uu_cp::platform::linux::sparse_copy_without_hole((__int64)a2, a3, (__int64)v88, v83);
          v14 = 1;
          goto LABEL_66;
        }
LABEL_27:
        if ( uu_cp::platform::linux::copy_fifo_contents((__int64)a2, a3, (__int64)a4, a5) )
        {
LABEL_28:
          v17 = v13;
          goto LABEL_67;
        }
        v16 = 3;
        v15 = 1;
LABEL_82:
        v14 = 1;
        goto LABEL_83;
      }
      if ( a10 )
        goto LABEL_27;
      v88 = a4;
      v83 = a5;
      uu_cp::platform::linux::check_for_data((__int64)&dest, (__int64)a2, a3);
      v29 = v101;
      if ( (_BYTE)v101 == 2 )
      {
        v30 = dest;
      }
      else
      {
        v49 = dest;
        dest = 0x1B600000000LL;
        LODWORD(v101) = 1;
        WORD2(v101) = 0;
        std::fs::OpenOptions::_open(&v94, &dest, a2, a3);
        if ( !v94 )
        {
          v58 = fd;
          v93 = fd;
          std::fs::File::metadata(&dest, &v93);
          if ( (_DWORD)dest != 2 )
          {
            v82 = v49;
            v73 = v105 < v104 >> 9;
            close(v58);
            v15 = (2 * v73) | 1;
            v16 = 3;
            if ( !v29 )
              v16 = 3 * (v82 < 0x200);
            v40 = 1;
            goto LABEL_77;
          }
          v82 = v101;
          close(v58);
          goto LABEL_76;
        }
        v30 = v96;
      }
      v82 = v30;
LABEL_76:
      v15 = 1;
      v40 = 0;
      v16 = 0;
      goto LABEL_77;
    }
    if ( a10 )
    {
      if ( !uu_cp::platform::linux::copy_fifo_contents((__int64)a2, a3, (__int64)a4, a5) )
      {
        v16 = 3;
        v14 = 1;
        v15 = 2;
        goto LABEL_83;
      }
      goto LABEL_28;
    }
    uu_cp::platform::linux::check_for_data((__int64)&dest, (__int64)a2, a3);
    v27 = v101;
    if ( (_BYTE)v101 == 2 )
    {
      v28 = dest;
LABEL_61:
      v81 = v28;
LABEL_62:
      v15 = 2;
      v16 = 0;
      v42 = 0;
LABEL_63:
      v34 = a3;
      v43 = uu_cp::platform::linux::sparse_copy((__int64)a2, a3, (__int64)a4, a5);
LABEL_64:
      v17 = v43;
      v14 = 1;
      if ( v42 )
        goto LABEL_66;
      goto LABEL_65;
    }
    v44 = dest;
    v45 = v102;
    dest = 0x1B600000000LL;
    LODWORD(v101) = 1;
    WORD2(v101) = 0;
    std::fs::OpenOptions::_open(&v94, &dest, a2, a3);
    if ( v94 )
    {
      v28 = v96;
      goto LABEL_61;
    }
    v81 = v44;
    v57 = fd;
    v93 = fd;
    std::fs::File::metadata(&dest, &v93);
    if ( (_DWORD)dest == 2 )
    {
      v81 = v101;
      close(v57);
      goto LABEL_62;
    }
    v97 = v45;
    v98 = v105;
    v70 = v104 >> 9;
    close(v57);
    if ( v98 >= v70 )
    {
      v71 = a4;
      if ( v27 )
      {
        v72 = v97 == 0;
        v16 = 3;
        v15 = 2;
      }
      else
      {
        v16 = 3 * (v81 < 0x200);
        v15 = 2;
        v72 = 0;
      }
    }
    else
    {
      v71 = a4;
      if ( v27 )
      {
        v72 = v97 == 0;
        v16 = 3;
        v15 = 4;
      }
      else
      {
        v72 = 0;
        v16 = 3 * (v81 < 0x200);
        if ( v97 )
          v16 = 0;
        v15 = 3;
      }
    }
    std::sys::pal::unix::fs::stat(&dest);
    if ( (_DWORD)dest == 2 )
    {
      core::ptr::drop_in_place<std::io::error::Error>(v101, v71);
      if ( !v72 )
      {
LABEL_146:
        v42 = 1;
        goto LABEL_63;
      }
    }
    else if ( !v72 && (v103 & 0xF000) != 4096 )
    {
      goto LABEL_146;
    }
    if ( std::sys::pal::unix::fs::copy(a2, a3, a4, a5) )
      goto LABEL_28;
    goto LABEL_82;
  }
  if ( a7 == 1 )
  {
    v16 = 0;
    v17 = uu_cp::platform::linux::clone(a2, a3, a4, a5, 0);
    v14 = 2;
    v15 = 1;
    goto LABEL_66;
  }
  v20 = (void *)_rust_alloc(54LL, 1LL);
  if ( !v20 )
    alloc::raw_vec::handle_error(1LL, 54LL);
  qmemcpy(v20, "`--reflink=always` can be used only with --sparse=auto", 54);
  *(_QWORD *)(a1 + 8) = 54LL;
  *(_QWORD *)(a1 + 16) = v20;
  *(_QWORD *)(a1 + 24) = 54LL;
  *(_QWORD *)a1 = 4LL;
  return a1;
}
