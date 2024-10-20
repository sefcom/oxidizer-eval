        __int64 a7)
{
  __int64 *v7; // r14
  bool v8; // cf
  size_t v9; // rdx
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 *v16; // r13
  __int128 v17; // xmm0
  __int64 (__fastcall **v18)(); // rcx
  __int64 *v19; // r14
  __int64 v20; // r14
  __int64 v21; // r12
  void *v22; // rax
  void *v23; // r14
  __int64 *v24; // r14
  __int64 (__fastcall *v25)(); // r15
  __int64 v26; // rbx
  __int64 v27; // rsi
  __int64 v28; // rdi
  void *v29; // rax
  void *v30; // r14
  __int64 **v31; // r14
  __int64 (__fastcall *v32)(); // r15
  __int64 *v33; // rbx
  void *v34; // rax
  void *v35; // r15
  __int64 v36; // rbx
  __int64 **v37; // r14
  __int64 (__fastcall *v38)(); // r15
  __int64 *v39; // rbx
  __int64 v40; // rbx
  __int64 v43; // [rsp+8h] [rbp-140h] BYREF
  _BYTE v44[24]; // [rsp+10h] [rbp-138h]
  __int64 v45; // [rsp+28h] [rbp-120h]
  __int64 **v46; // [rsp+30h] [rbp-118h] BYREF
  __int64 (__fastcall *v47)(); // [rsp+38h] [rbp-110h]
  __int64 *v48; // [rsp+40h] [rbp-108h]
  __int64 (__fastcall *v49)(); // [rsp+48h] [rbp-100h]
  __int64 *v50; // [rsp+50h] [rbp-F8h] BYREF
  __int64 (__fastcall *v51)(); // [rsp+58h] [rbp-F0h]
  __int64 v52; // [rsp+60h] [rbp-E8h]
  char **v53; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v54; // [rsp+70h] [rbp-D8h]
  _QWORD *v55; // [rsp+78h] [rbp-D0h]
  __int128 v56; // [rsp+80h] [rbp-C8h]
  char *v57; // [rsp+90h] [rbp-B8h]
  size_t v58; // [rsp+98h] [rbp-B0h]
  __int128 v59; // [rsp+A0h] [rbp-A8h]
  __int64 v60; // [rsp+B0h] [rbp-98h]
  __int64 v61; // [rsp+B8h] [rbp-90h]
  __int128 v62; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v63; // [rsp+D0h] [rbp-78h]
  char *v64; // [rsp+D8h] [rbp-70h]
  __int64 v65; // [rsp+E0h] [rbp-68h]
  size_t v66; // [rsp+E8h] [rbp-60h]
  __int64 v67; // [rsp+F0h] [rbp-58h] BYREF
  _QWORD v68[2]; // [rsp+F8h] [rbp-50h] BYREF
  unsigned __int128 v69; // [rsp+108h] [rbp-40h]

  v7 = a1;
  v8 = a3 < a5;
  v9 = a3 - a5;
  if ( !v8 )
  {
    v66 = v9;
    v65 = a6;
    if ( !bcmp(a2, a4, a5) )
    {
      v64 = &a2[a5];
      if ( a7 )
      {
        v12 = *(_QWORD *)(a7 + 8);
        v13 = *(_QWORD *)(a7 + 16);
        v53 = &off_10C6A0;
        v54 = 1LL;
        v55 = (_QWORD *)&byte_8;
        v56 = 0LL;
        std::io::stdio::_eprint(&v53);
        if ( v13 )
        {
          v14 = 24 * v13;
          v15 = 0LL;
          v16 = 0LL;
          do
          {
            v50 = v16;
            v17 = *(_OWORD *)(v12 + v15 + 8);
            v43 = 1LL;
            *(_OWORD *)v44 = v17;
            v44[16] = 1;
            v46 = &v50;
            v47 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
            v48 = &v43;
            v49 = <os_display::Quoted as core::fmt::Display>::fmt;
            v53 = &off_10C6B0;
            v54 = 3LL;
            v55 = &v46;
            v56 = 2uLL;
            std::io::stdio::_eprint(&v53);
            v16 = (__int64 *)((char *)v16 + 1);
            v15 += 24LL;
          }
          while ( v14 != v15 );
        }
      }
      *(_QWORD *)&v56 = v64;
      *((_QWORD *)&v56 + 1) = v66;
      v57 = v64;
      v58 = v66;
      v59 = 0LL;
      v53 = 0LL;
      v54 = 1LL;
      v55 = 0LL;
      v60 = 8LL;
      v61 = 0LL;
      uu_env::split_iterator::SplitIterator::split(&v43, &v53);
      if ( (_DWORD)v43 == 8 )
      {
        v11 = *(_QWORD *)&v44[8];
        v18 = *(__int64 (__fastcall ***)())&v44[16];
        if ( *(_QWORD *)v44 != 0x8000000000000000LL )
        {
          v68[0] = *(_QWORD *)&v44[8];
          v68[1] = *(_QWORD *)&v44[8];
          v69 = __PAIR128__(*(_QWORD *)&v44[8] + 24LL * *(_QWORD *)&v44[16], *(unsigned __int64 *)v44);
          <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(v65, v68);
          LOBYTE(v11) = 1;
          v7 = a1;
          goto LABEL_4;
        }
        v19 = a1;
      }
      else
      {
        v20 = *(_QWORD *)&v44[8];
        switch ( (int)v43 )
        {
          case 0:
            v21 = 33LL;
            v22 = (void *)_rust_alloc(33LL, 1LL);
            if ( !v22 )
              goto LABEL_41;
            v23 = v22;
            qmemcpy(v22, "no terminating quote in -S string", 33);
            v11 = _rust_alloc(32LL, 8LL);
            if ( !v11 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            *(_QWORD *)v11 = 33LL;
            *(_QWORD *)(v11 + 8) = v23;
            *(_QWORD *)(v11 + 16) = 33LL;
            goto LABEL_25;
          case 1:
            v21 = 40LL;
            v34 = (void *)_rust_alloc(40LL, 1LL);
            if ( !v34 )
              goto LABEL_41;
            v35 = v34;
            qmemcpy(v34, "invalid backslash at end of string in -S", 40);
            v11 = _rust_alloc(32LL, 8LL);
            if ( !v11 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            *(_QWORD *)v11 = 40LL;
            *(_QWORD *)(v11 + 8) = v35;
            *(_QWORD *)(v11 + 16) = 40LL;
            *(_DWORD *)(v11 + 24) = 125;
            if ( v20 )
              goto LABEL_29;
            goto LABEL_31;
          case 2:
            v21 = 47LL;
            v29 = (void *)_rust_alloc(47LL, 1LL);
            if ( !v29 )
LABEL_41:
              alloc::raw_vec::handle_error(1LL, v21);
            v30 = v29;
            qmemcpy(v29, "'\\c' must not appear in double-quoted -S string", 47);
            v11 = _rust_alloc(32LL, 8LL);
            if ( !v11 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            *(_QWORD *)v11 = 47LL;
            *(_QWORD *)(v11 + 8) = v30;
            *(_QWORD *)(v11 + 16) = 47LL;
            goto LABEL_25;
          case 3:
            LODWORD(v62) = HIDWORD(v43);
            v50 = (__int64 *)&v62;
            v51 = <char as core::fmt::Display>::fmt;
            v53 = &off_10C650;
            v54 = 2LL;
            v55 = &v50;
            v56 = 1uLL;
            alloc::fmt::format::format_inner(&v46, &v53);
            v31 = v46;
            v32 = v47;
            v33 = v48;
            v11 = _rust_alloc(32LL, 8LL);
            if ( !v11 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            *(_QWORD *)v11 = v31;
            *(_QWORD *)(v11 + 8) = v32;
            *(_QWORD *)(v11 + 16) = v33;
LABEL_25:
            *(_DWORD *)(v11 + 24) = 125;
            goto LABEL_31;
          case 4:
            v67 = *(_QWORD *)v44;
            v63 = v45;
            v62 = *(_OWORD *)&v44[8];
            v46 = (__int64 **)&v67;
            v47 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
            v48 = (__int64 *)&v62;
            v49 = <alloc::string::String as core::fmt::Display>::fmt;
            v53 = &off_10C670;
            v54 = 2LL;
            v55 = &v46;
            v56 = 2uLL;
            alloc::fmt::format::format_inner(&v50, &v53);
            v24 = v50;
            v25 = v51;
            v26 = v52;
            v11 = _rust_alloc(32LL, 8LL);
            if ( !v11 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            *(_QWORD *)v11 = v24;
            *(_QWORD *)(v11 + 8) = v25;
            *(_QWORD *)(v11 + 16) = v26;
            *(_DWORD *)(v11 + 24) = 125;
            v27 = v62;
            if ( !(_QWORD)v62 )
              goto LABEL_31;
            v28 = *((_QWORD *)&v62 + 1);
            goto LABEL_30;
          default:
            v50 = &v43;
            v51 = <uu_env::parse_error::ParseError as core::fmt::Debug>::fmt;
            v53 = &off_10C690;
            v54 = 1LL;
            v55 = &v50;
            v56 = 1uLL;
            alloc::fmt::format::format_inner(&v46, &v53);
            v37 = v46;
            v38 = v47;
            v39 = v48;
            v11 = _rust_alloc(32LL, 8LL);
            if ( !v11 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            *(_QWORD *)v11 = v37;
            *(_QWORD *)(v11 + 8) = v38;
            *(_QWORD *)(v11 + 16) = v39;
            *(_DWORD *)(v11 + 24) = 125;
            if ( (_DWORD)v43 == 4 )
            {
              v19 = a1;
              if ( *(_QWORD *)&v44[8] )
              {
                v40 = v11;
                _rust_dealloc(*(_QWORD *)&v44[16], *(_QWORD *)&v44[8], 1LL);
                v11 = v40;
              }
            }
            else
            {
              if ( (_DWORD)v43 == 1 )
              {
                v20 = *(_QWORD *)&v44[8];
                if ( *(_QWORD *)&v44[8] )
                {
LABEL_29:
                  v28 = *(_QWORD *)&v44[16];
                  v27 = v20;
LABEL_30:
                  v36 = v11;
                  _rust_dealloc(v28, v27, 1LL);
                  v11 = v36;
                }
              }
LABEL_31:
              v19 = a1;
            }
            v18 = &off_10C5C0;
            break;
        }
      }
      *v19 = v11;
      v19[1] = (__int64)v18;
      return v11;
    }
  }
  LOBYTE(v11) = 0;
LABEL_4:
  *((_BYTE *)v7 + 8) = v11;
  *v7 = 0LL;
  return v11;
}
