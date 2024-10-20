__int64 __fastcall uu_echo::execute(int a1, char a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v6)(); // r12
  void *v7; // rbx
  __int64 v8; // rcx
  void *v9; // rbp
  __int64 (__fastcall *v10)(); // rbx
  __int64 v11; // r12
  __int64 result; // rax
  unsigned __int8 *v13; // rcx
  int v14; // eax
  unsigned __int8 *v15; // rdx
  int v16; // ecx
  int v17; // edi
  int v18; // esi
  unsigned __int8 *v19; // rcx
  int v20; // r13d
  int v21; // eax
  int v22; // esi
  int v23; // edx
  int v24; // eax
  unsigned __int8 *v25; // rcx
  int v26; // eax
  int v27; // esi
  int v28; // edx
  int v29; // eax
  int v30; // ecx
  __int64 v31; // r13
  __int64 v32; // r12
  __int64 v33; // rdi
  bool v34; // zf
  __int64 v35; // rbx
  __int64 v36; // rdi
  int v37; // [rsp+4h] [rbp-C4h] BYREF
  unsigned __int8 *v38; // [rsp+8h] [rbp-C0h] BYREF
  unsigned __int8 *v39; // [rsp+10h] [rbp-B8h]
  int v40; // [rsp+18h] [rbp-B0h]
  void *v41; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+28h] [rbp-A0h]
  int **v43; // [rsp+30h] [rbp-98h]
  __int128 v44; // [rsp+38h] [rbp-90h]
  __int64 v45; // [rsp+50h] [rbp-78h] BYREF
  __int64 v46; // [rsp+58h] [rbp-70h] BYREF
  int *v47; // [rsp+60h] [rbp-68h] BYREF
  __int64 (__fastcall *v48)(); // [rsp+68h] [rbp-60h]
  int v49; // [rsp+70h] [rbp-58h]
  int v50; // [rsp+74h] [rbp-54h] BYREF
  __int64 v51; // [rsp+78h] [rbp-50h]
  __int64 v52; // [rsp+80h] [rbp-48h]
  __int64 v53; // [rsp+88h] [rbp-40h]
  __int64 v54[7]; // [rsp+90h] [rbp-38h] BYREF

  v49 = a1;
  v54[0] = std::io::stdio::stdout();
  v45 = std::io::stdio::Stdout::lock(v54);
  if ( a4 )
  {
    if ( a2 )
    {
      v51 = a3 + 24 * a4;
      v6 = <char as core::fmt::Display>::fmt;
      v7 = &unk_F510;
      v8 = 0LL;
      while ( 1 )
      {
        v46 = a3;
        if ( v8 )
        {
          v9 = v7;
          v10 = v6;
          v11 = v8;
          v41 = &off_D7ED0;
          v42 = 1LL;
          v43 = (int **)&byte_8;
          v44 = 0LL;
          result = std::io::Write::write_fmt(&v45, &v41);
          v8 = v11;
          v6 = v10;
          v7 = v9;
          if ( result )
            goto LABEL_74;
        }
        v52 = a3 + 24;
        v53 = v8 + 1;
        v13 = (unsigned __int8 *)(*(_QWORD *)(a3 + 8) + *(_QWORD *)(a3 + 16));
        v38 = *(unsigned __int8 **)(a3 + 8);
        v39 = v13;
        v14 = 1114113;
        while ( 1 )
        {
          v40 = 1114113;
          if ( v14 != 1114113 )
            goto LABEL_13;
          v15 = v38;
          if ( v38 == v39 )
            goto LABEL_64;
          ++v38;
          v14 = *v15;
          if ( (v14 & 0x80u) != 0 )
            break;
LABEL_14:
          v50 = v14;
          if ( v14 != 92 )
          {
            v47 = &v50;
            v48 = v6;
            v41 = v7;
            v42 = 1LL;
            v43 = &v47;
            v44 = 1uLL;
            result = std::io::Write::write_fmt(&v45, &v41);
            goto LABEL_22;
          }
          v19 = v38;
          if ( v38 == v39 )
            goto LABEL_20;
          ++v38;
          v20 = *v19;
          if ( (v20 & 0x80u) != 0 )
          {
            v21 = v20 & 0x1F;
            v38 = v19 + 2;
            v22 = v19[1] & 0x3F;
            if ( (unsigned __int8)v20 < 0xE0u )
            {
              v20 = v22 | (v21 << 6);
            }
            else
            {
              v38 = v19 + 3;
              v23 = (v22 << 6) | v19[2] & 0x3F;
              if ( (unsigned __int8)v20 >= 0xF0u )
              {
                v38 = v19 + 4;
                v20 = ((v20 & 7) << 18) | (v23 << 6) | v19[3] & 0x3F;
                v40 = v20;
                if ( v20 == 1114112 )
                {
LABEL_20:
                  v40 = 1114113;
LABEL_39:
                  v41 = &off_D7EB0;
                  v42 = 1LL;
                  v43 = (int **)&byte_8;
                  v44 = 0LL;
                  result = std::io::Write::write_fmt(&v45, &v41);
                  goto LABEL_62;
                }
                goto LABEL_29;
              }
              v20 = (v21 << 12) | v23;
            }
          }
          v40 = v20;
LABEL_29:
          if ( (unsigned int)(v20 - 49) > 7 )
            goto LABEL_32;
          v24 = uu_echo::parse_code(&v38, 8u);
          if ( v24 == 1114112 )
          {
            v20 = v40;
LABEL_32:
            v40 = 1114113;
            if ( v20 == 1114113 )
            {
              v25 = v38;
              if ( v38 == v39 )
                goto LABEL_39;
              ++v38;
              v20 = *v25;
              if ( (v20 & 0x80u) == 0 )
                goto LABEL_43;
              v26 = v20 & 0x1F;
              v38 = v25 + 2;
              v27 = v25[1] & 0x3F;
              if ( (unsigned __int8)v20 < 0xE0u )
              {
                v20 = v27 | (v26 << 6);
                goto LABEL_43;
              }
              v38 = v25 + 3;
              v28 = (v27 << 6) | v25[2] & 0x3F;
              if ( (unsigned __int8)v20 < 0xF0u )
              {
                v20 = (v26 << 12) | v28;
                goto LABEL_43;
              }
              v38 = v25 + 4;
              v20 = ((v20 & 7) << 18) | (v28 << 6) | v25[3] & 0x3F;
            }
            if ( v20 == 1114112 )
              goto LABEL_39;
LABEL_43:
            switch ( v20 )
            {
              case '0':
                v29 = uu_echo::parse_code(&v38, 8u);
                if ( v29 == 1114112 )
                  v29 = 0;
                v37 = v29;
                break;
              case '\\':
                v37 = 92;
                break;
              case 'a':
                v37 = 7;
                break;
              case 'b':
                v37 = 8;
                break;
              case 'c':
                result = 0LL;
                goto LABEL_74;
              case 'e':
                v37 = 27;
                break;
              case 'f':
                v37 = 12;
                break;
              case 'n':
                v37 = 10;
                break;
              case 'r':
                v37 = 13;
                break;
              case 't':
                v37 = 9;
                break;
              case 'v':
                v37 = 11;
                break;
              case 'x':
                v30 = uu_echo::parse_code(&v38, 0x10u);
                if ( v30 == 1114112 )
                {
                  v41 = &off_D7EB0;
                  v42 = 1LL;
                  v43 = (int **)&byte_8;
                  v44 = 0LL;
                  result = std::io::Write::write_fmt(&v45, &v41);
                  v30 = 120;
                  if ( result )
                    goto LABEL_74;
                }
                v37 = v30;
                break;
              default:
                v41 = &off_D7EB0;
                v42 = 1LL;
                v43 = (int **)&byte_8;
                v44 = 0LL;
                result = std::io::Write::write_fmt(&v45, &v41);
                if ( result )
                  goto LABEL_74;
                v37 = v20;
                break;
            }
            v47 = &v37;
            v48 = v6;
            v41 = v7;
            v42 = 1LL;
            v43 = &v47;
            v44 = 1uLL;
            result = std::io::Write::write_fmt(&v45, &v41);
LABEL_62:
            if ( result )
              goto LABEL_74;
            v14 = v40;
          }
          else
          {
            v37 = v24;
            v47 = &v37;
            v48 = v6;
            v41 = v7;
            v42 = 1LL;
            v43 = &v47;
            v44 = 1uLL;
            result = std::io::Write::write_fmt(&v45, &v41);
LABEL_22:
            if ( result )
              goto LABEL_74;
            v14 = v40;
          }
        }
        v16 = v14 & 0x1F;
        v38 = v15 + 2;
        v17 = v15[1] & 0x3F;
        if ( (unsigned __int8)v14 < 0xE0u )
        {
          v14 = v17 | (v16 << 6);
          goto LABEL_14;
        }
        v38 = v15 + 3;
        v18 = (v17 << 6) | v15[2] & 0x3F;
        if ( (unsigned __int8)v14 < 0xF0u )
          break;
        v38 = v15 + 4;
        v14 = ((v14 & 7) << 18) | (v18 << 6) | v15[3] & 0x3F;
LABEL_13:
        if ( v14 != 1114112 )
          goto LABEL_14;
LABEL_64:
        a3 = v52;
        v8 = v53;
        if ( v52 == v51 )
          goto LABEL_72;
      }
      v14 = (v16 << 12) | v18;
      goto LABEL_14;
    }
    v46 = a3;
    v38 = (unsigned __int8 *)&v46;
    v39 = (unsigned __int8 *)<&T as core::fmt::Display>::fmt;
    v41 = &unk_F510;
    v42 = 1LL;
    v43 = (int **)&v38;
    v44 = 1uLL;
    result = std::io::Write::write_fmt(&v45, &v41);
    if ( result )
      goto LABEL_74;
    if ( a4 != 1 )
    {
      v31 = a3 + 24;
      v32 = 24 * a4 - 24;
      do
      {
        v46 = v31;
        v41 = &off_D7ED0;
        v42 = 1LL;
        v43 = (int **)&byte_8;
        v44 = 0LL;
        result = std::io::Write::write_fmt(&v45, &v41);
        if ( result )
          goto LABEL_74;
        v38 = (unsigned __int8 *)&v46;
        v39 = (unsigned __int8 *)<&T as core::fmt::Display>::fmt;
        v41 = &unk_F510;
        v42 = 1LL;
        v43 = (int **)&v38;
        v44 = 1uLL;
        result = std::io::Write::write_fmt(&v45, &v41);
        if ( result )
          goto LABEL_74;
        v31 += 24LL;
        v32 -= 24LL;
      }
      while ( v32 );
    }
  }
LABEL_72:
  if ( !(_BYTE)v49 )
  {
    v41 = &off_D7EC0;
    v42 = 1LL;
    v43 = (int **)&byte_8;
    v44 = 0LL;
    result = std::io::Write::write_fmt(&v45, &v41);
    if ( result )
    {
LABEL_74:
      v33 = v45;
      v34 = (*(_DWORD *)(v45 + 12))-- == 1;
      if ( v34 )
      {
        *(_QWORD *)v33 = 0LL;
        if ( _InterlockedExchange((volatile __int32 *)(v33 + 8), 0) == 2 )
        {
          v35 = result;
          std::sys::sync::mutex::futex::Mutex::wake(v33 + 8);
          return v35;
        }
      }
      return result;
    }
  }
  v36 = v45;
  v34 = (*(_DWORD *)(v45 + 12))-- == 1;
  if ( v34 )
  {
    *(_QWORD *)v36 = 0LL;
    if ( _InterlockedExchange((volatile __int32 *)(v36 + 8), 0) == 2 )
      std::sys::sync::mutex::futex::Mutex::wake(v36 + 8);
  }
  return 0LL;
}
