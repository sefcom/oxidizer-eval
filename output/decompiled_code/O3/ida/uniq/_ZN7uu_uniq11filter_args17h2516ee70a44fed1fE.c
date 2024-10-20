__int64 __fastcall uu_uniq::filter_args(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, bool *a5, bool *a6)
{
  __int64 v10; // rdx
  bool v11; // r12
  bool v12; // bp
  int v13; // eax
  unsigned __int64 v14; // r12
  size_t v15; // r8
  unsigned __int64 v16; // rbp
  __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // ecx
  int v22; // edx
  int v23; // r8d
  int v24; // edi
  size_t v25; // r12
  size_t v26; // rdx
  char *v27; // r13
  const void *v28; // rsi
  size_t v29; // r12
  size_t v30; // rbx
  size_t v31; // rbx
  char *v32; // rbx
  unsigned __int8 *v33; // r12
  unsigned __int64 v34; // r12
  char *v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rsi
  size_t v40; // r12
  unsigned __int64 v41; // r13
  bool v42; // bp
  const void *v43; // rdi
  size_t v44; // rdx
  int *v45; // rsi
  int v46; // eax
  bool v47; // al
  size_t v48; // rbp
  int v49; // eax
  __int64 v50; // rax
  char *v51; // rbx
  int v52; // ebp
  int v53; // eax
  int v54; // edx
  int v55; // ecx
  unsigned __int8 v56; // bp
  __int64 v57; // rsi
  bool v58; // zf
  __int64 v59; // rsi
  size_t v60; // r12
  char v61; // [rsp+Fh] [rbp-F9h] BYREF
  _WORD *v62; // [rsp+10h] [rbp-F8h]
  size_t n; // [rsp+18h] [rbp-F0h]
  char v64; // [rsp+27h] [rbp-E1h] BYREF
  unsigned __int64 v65; // [rsp+28h] [rbp-E0h]
  __int64 v66; // [rsp+30h] [rbp-D8h]
  __int128 v67; // [rsp+38h] [rbp-D0h] BYREF
  char *v68; // [rsp+48h] [rbp-C0h]
  __int128 v69; // [rsp+50h] [rbp-B8h] BYREF
  char *v70; // [rsp+60h] [rbp-A8h]
  bool *v71; // [rsp+68h] [rbp-A0h]
  __int128 v72; // [rsp+70h] [rbp-98h] BYREF
  char *v73; // [rsp+80h] [rbp-88h]
  char *v74; // [rsp+88h] [rbp-80h]
  __int64 *v75; // [rsp+90h] [rbp-78h]
  bool *v76; // [rsp+98h] [rbp-70h]
  __int64 v77; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v78; // [rsp+A8h] [rbp-60h]
  __int64 v79; // [rsp+B0h] [rbp-58h]
  __int64 v80; // [rsp+B8h] [rbp-50h]
  __int64 v81; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v82; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v83; // [rsp+D0h] [rbp-38h]

  v71 = a6;
  v76 = a5;
  v10 = a2[2];
  v80 = a2[1];
  std::sys::os_str::bytes::Slice::to_str(&v72, v80, v10);
  if ( (_QWORD)v72 )
  {
    *(_QWORD *)(a1 + 16) = a2[2];
    *(_OWORD *)a1 = *(_OWORD *)a2;
    return a1;
  }
  v62 = (_WORD *)*((_QWORD *)&v72 + 1);
  v65 = (unsigned __int64)v73;
  if ( v73 )
  {
    v11 = *v76;
    v12 = *v71;
    v13 = *(unsigned __int8 *)v62;
    if ( v13 == 43 )
    {
      if ( uucore::mods::posix::posix_version() )
      {
        if ( v18 <= (unsigned __int64)&unk_30A29 && !v12 && !v11 )
        {
          v19 = *(unsigned __int8 *)v62;
          v20 = byte_1A8FD[v19];
          if ( v65 != v20 )
          {
            v21 = *((unsigned __int8 *)v62 + v20);
            if ( (v21 & 0x80u) != 0 )
            {
              v22 = v21 & 0x1F;
              v23 = *((_BYTE *)v62 + v20 + 1) & 0x3F;
              if ( (unsigned __int8)v21 <= 0xDFu )
              {
                v21 = v23 | (v22 << 6);
              }
              else
              {
                v24 = (v23 << 6) | *((_BYTE *)v62 + v20 + 2) & 0x3F;
                if ( (unsigned __int8)v21 < 0xF0u )
                  v21 = (v22 << 12) | v24;
                else
                  v21 = ((v21 & 7) << 18) | (v24 << 6) | *((_BYTE *)v62 + v20 + 3) & 0x3F;
              }
            }
            if ( (unsigned int)(v21 - 48) < 0xA )
            {
              v32 = (char *)v62;
              n = (size_t)v62 + v65;
              *(_QWORD *)&v67 = 0LL;
              *((_QWORD *)&v67 + 1) = 4LL;
              v68 = 0LL;
              if ( (v19 & 0x80u) != 0LL )
              {
                if ( (unsigned __int8)v19 <= 0xDFu )
                  v33 = (unsigned __int8 *)(v62 + 1);
                else
                  v33 = (unsigned __int8 *)((char *)v62 - ((unsigned __int8)v19 < 0xF0u) + 4);
              }
              else
              {
                v33 = (unsigned __int8 *)v62 + 1;
              }
              if ( v33 == (unsigned __int8 *)n )
              {
LABEL_113:
                std::sys::os_str::bytes::Slice::to_owned(&v72, v32, v65);
LABEL_114:
                v66 = *((_QWORD *)&v72 + 1);
                v16 = v72;
                v15 = (size_t)v73;
              }
              else
              {
                v50 = 0LL;
                v51 = 0LL;
                do
                {
                  v66 = v50;
                  v52 = *v33;
                  if ( (v52 & 0x80u) != 0 )
                  {
                    v53 = v52 & 0x1F;
                    v54 = v33[1] & 0x3F;
                    if ( (unsigned __int8)v52 <= 0xDFu )
                    {
                      v33 += 2;
                      v52 = v54 | (v53 << 6);
                    }
                    else
                    {
                      v55 = (v54 << 6) | v33[2] & 0x3F;
                      if ( (unsigned __int8)v52 < 0xF0u )
                      {
                        v33 += 3;
                        v52 = (v53 << 12) | v55;
                      }
                      else
                      {
                        v56 = v33[3];
                        v33 += 4;
                        v52 = ((v53 & 7) << 18) | (v55 << 6) | v56 & 0x3F;
                      }
                    }
                  }
                  else
                  {
                    ++v33;
                  }
                  if ( (unsigned int)(v52 - 48) >= 0xA )
                  {
                    v57 = *a4;
                    if ( *a4 != 0x8000000000000000LL && v57 )
                      _rust_dealloc(a4[1], v57, 1LL);
                    *a4 = 0x8000000000000000LL;
                    v32 = (char *)v62;
                    std::sys::os_str::bytes::Slice::to_owned(&v72, v62, v65);
                    goto LABEL_114;
                  }
                  if ( v51 == (char *)v67 )
                    alloc::raw_vec::RawVec<T,A>::grow_one(&v67);
                  *(_DWORD *)(*((_QWORD *)&v67 + 1) + 4LL * (_QWORD)v51++) = v52;
                  v68 = v51;
                  v50 = v66 - 4;
                }
                while ( v33 != (unsigned __int8 *)n );
                v58 = v51 == 0LL;
                v32 = (char *)v62;
                if ( v58 )
                  goto LABEL_113;
                <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(
                  &v72,
                  *((_QWORD *)&v67 + 1),
                  *((_QWORD *)&v67 + 1) - v50);
                v16 = 0x8000000000000000LL;
                v70 = v73;
                v69 = v72;
                v59 = *a4;
                if ( *a4 != 0x8000000000000000LL && v59 )
                  _rust_dealloc(a4[1], v59, 1LL);
                a4[2] = (__int64)v70;
                *(_OWORD *)a4 = v69;
              }
              if ( (_QWORD)v67 )
              {
                v60 = v15;
                _rust_dealloc(*((_QWORD *)&v67 + 1), 4 * v67, 4LL);
                v15 = v60;
              }
              v14 = v65;
              if ( v65 == 1 )
                goto LABEL_118;
              goto LABEL_70;
            }
          }
        }
      }
    }
    else if ( v13 == 45 )
    {
      if ( v65 == 1 )
      {
        if ( !v12 && !v11 )
          goto LABEL_8;
      }
      else if ( *v62 != 11565 && !v11 && !v12 && *v62 != 29485 && *v62 != 26157 && *v62 != 30509 )
      {
LABEL_8:
        v77 = 0LL;
        v78 = 4LL;
        v79 = 0LL;
        v64 = 0;
        v61 = 0;
        v14 = v65;
        *(_QWORD *)&v72 = v62;
        *((_QWORD *)&v72 + 1) = (char *)v62 + v65;
        v73 = &v61;
        v74 = &v64;
        v75 = &v77;
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v81, &v72);
        if ( v79 )
        {
          v16 = 0x8000000000000000LL;
          if ( v61 )
          {
            v17 = *a3;
            if ( *a3 != 0x8000000000000000LL && v17 )
              _rust_dealloc(a3[1], v17, 1LL);
            *a3 = 0x8000000000000000LL;
          }
          else
          {
            <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(
              &v67,
              v78,
              v78 + 4 * v79);
            if ( *a3 == 0x8000000000000000LL )
            {
              v70 = v68;
              v69 = v67;
            }
            else
            {
              v66 = *a3;
              v25 = a3[1];
              v26 = a3[2];
              v27 = v68;
              if ( (_QWORD)v67 - (_QWORD)v68 < v26 )
              {
                n = a3[2];
                alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v67, v68);
                v27 = v68;
                v26 = n;
              }
              n = v25;
              v28 = (const void *)v25;
              v29 = v26;
              memcpy(&v27[*((_QWORD *)&v67 + 1)], v28, v26);
              v68 = &v27[v29];
              v70 = &v27[v29];
              v69 = v67;
              v14 = v65;
              if ( v66 )
                _rust_dealloc(n, v66, 1LL);
            }
            a3[2] = (__int64)v70;
            *(_OWORD *)a3 = v69;
          }
          if ( v83 <= 1 )
          {
LABEL_40:
            if ( v81 )
            {
              v30 = v15;
              _rust_dealloc(v82, 4 * v81, 4LL);
              v15 = v30;
            }
            if ( v77 )
            {
              v31 = v15;
              _rust_dealloc(v78, 4 * v77, 4LL);
              v15 = v31;
            }
            v32 = (char *)v62;
            if ( v14 == 1 )
              goto LABEL_118;
LABEL_70:
            if ( *(_WORD *)v32 == 11565 )
            {
              v41 = v16;
              if ( v14 >= 3 )
              {
                if ( v32[2] <= -65 )
                  core::str::slice_error_fail(v32, v14, 2LL, v14, &off_F2CF0);
                v42 = 0;
                v43 = v32 + 2;
                v44 = v14 - 2;
                switch ( v14 )
                {
                  case 7uLL:
                    n = v15;
                    v45 = &anon_f9427813c0255ce4c25516664eb43cb9_17_llvm_11736109415790202195;
                    goto LABEL_85;
                  case 0xCuLL:
                    n = v15;
                    v45 = (int *)anon_f9427813c0255ce4c25516664eb43cb9_14_llvm_11736109415790202195;
LABEL_85:
                    v42 = bcmp(v43, v45, v44) == 0;
                    v15 = n;
                    goto LABEL_80;
                  case 0xDuLL:
                    n = v15;
                    v42 = 1;
                    if ( !bcmp(v43, anon_f9427813c0255ce4c25516664eb43cb9_13_llvm_11736109415790202195, v44) )
                    {
                      v32 = (char *)v62;
                      v14 = v65;
                      v15 = n;
                      goto LABEL_80;
                    }
                    v46 = bcmp(v43, anon_f9427813c0255ce4c25516664eb43cb9_9_llvm_11736109415790202195, v14 - 2);
                    v32 = (char *)v62;
                    v14 = v65;
                    v15 = n;
                    if ( !v46 )
                      goto LABEL_80;
                    break;
                  case 0xEuLL:
                    v48 = v15;
                    v49 = bcmp(v43, anon_f9427813c0255ce4c25516664eb43cb9_8_llvm_11736109415790202195, v44);
                    v15 = v48;
                    v42 = v49 == 0;
                    goto LABEL_80;
                  default:
                    goto LABEL_80;
                }
              }
              v42 = 0;
LABEL_80:
              *v76 = v42;
              v16 = v41;
              if ( v14 == 2 )
                goto LABEL_81;
            }
            else if ( v14 == 2 )
            {
LABEL_81:
              v47 = 1;
              if ( *(_WORD *)v32 != 29485 && *(_WORD *)v32 != 26157 )
                v47 = *(unsigned __int16 *)v32 == 30509;
LABEL_119:
              *v71 = v47;
              if ( *v32 == 45 )
                goto LABEL_55;
LABEL_54:
              *v71 = 0;
              *v76 = 0;
              goto LABEL_55;
            }
LABEL_118:
            v47 = 0;
            goto LABEL_119;
          }
          <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(
            &v69,
            v82,
            v82 + 4 * v83);
        }
        else
        {
          std::sys::os_str::bytes::Slice::to_owned(&v69, v62, v14);
        }
        v66 = *((_QWORD *)&v69 + 1);
        v16 = v69;
        v15 = (size_t)v70;
        goto LABEL_40;
      }
    }
  }
  v34 = v65;
  std::sys::os_str::bytes::Slice::to_owned(&v72, v62, v65);
  v66 = *((_QWORD *)&v72 + 1);
  v16 = v72;
  v15 = (size_t)v73;
  if ( v65 >= 2 )
  {
    v36 = (char *)v62;
    if ( *v62 == 26157 )
    {
      v37 = *a3;
      if ( *a3 != 0x8000000000000000LL && v37 )
      {
        v38 = a3[1];
        n = (size_t)v73;
        _rust_dealloc(v38, v37, 1LL);
        v15 = n;
      }
      *a3 = 0x8000000000000000LL;
      v36 = (char *)v62;
    }
    if ( *(_WORD *)v36 == 29485 )
    {
      v39 = *a4;
      if ( *a4 != 0x8000000000000000LL && v39 )
      {
        v40 = v15;
        _rust_dealloc(a4[1], v39, 1LL);
        v15 = v40;
      }
      *a4 = 0x8000000000000000LL;
      v32 = (char *)v62;
    }
    else
    {
      v32 = v36;
    }
    v14 = v65;
    goto LABEL_70;
  }
  *v71 = 0;
  if ( !v34 || *(_BYTE *)v62 != 45 )
    goto LABEL_54;
LABEL_55:
  *(_QWORD *)a1 = v16;
  *(_QWORD *)(a1 + 8) = v66;
  *(_QWORD *)(a1 + 16) = v15;
  if ( *a2 )
    _rust_dealloc(v80, *a2, 1LL);
  return a1;
}
