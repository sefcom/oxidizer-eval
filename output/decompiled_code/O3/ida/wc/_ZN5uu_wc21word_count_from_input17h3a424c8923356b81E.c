__int64 __fastcall uu_wc::word_count_from_input(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  char v7; // si
  __int64 v8; // rcx
  char v9; // di
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 result; // rax
  char v13; // cl
  char v14; // al
  char v15; // dl
  char v16; // r8
  char v17; // di
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rdi
  int v25; // r14d
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // r14
  int v32; // edi
  __int16 v33; // bp
  __int64 v34; // r14
  __int64 v35; // r15
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  int v38; // r14d
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rbp
  __int128 v42; // xmm0
  __int64 v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // ebp
  __int64 v48; // rsi
  __int64 v49; // rax
  char **v50; // rdi
  int v51[2]; // [rsp+8h] [rbp-4150h] BYREF
  int v52; // [rsp+14h] [rbp-4144h] BYREF
  int fd[2]; // [rsp+18h] [rbp-4140h] BYREF
  unsigned __int8 *v54; // [rsp+20h] [rbp-4138h]
  __int64 v55; // [rsp+28h] [rbp-4130h]
  _BYTE v56[40]; // [rsp+30h] [rbp-4128h] BYREF
  __int64 v57; // [rsp+58h] [rbp-4100h]
  int v58[2]; // [rsp+68h] [rbp-40F0h] BYREF
  __int128 v59; // [rsp+70h] [rbp-40E8h] BYREF
  __int128 v60; // [rsp+80h] [rbp-40D8h]
  __int64 v61; // [rsp+90h] [rbp-40C8h]
  __int64 v62; // [rsp+A8h] [rbp-40B0h]
  __int64 v63; // [rsp+B0h] [rbp-40A8h]
  __int64 v64; // [rsp+110h] [rbp-4048h] BYREF
  __int64 v65; // [rsp+118h] [rbp-4040h]
  _OWORD s[1027]; // [rsp+120h] [rbp-4038h] BYREF

  *((_QWORD *)&s[768] + 1) = 0LL;
  *((_QWORD *)&s[512] + 1) = 0LL;
  *((_QWORD *)&s[256] + 1) = 0LL;
  *((_QWORD *)&s[0] + 1) = 0LL;
  if ( *a2 == 0x8000000000000001LL )
  {
    *(_QWORD *)v58 = std::io::stdio::stdin();
    v5 = std::io::stdio::Stdin::lock(v58);
    v64 = v5;
    LOBYTE(v6) = v6 & 1;
    LOBYTE(v65) = v6;
    v7 = a3[28];
    v8 = (unsigned __int8)a3[27];
    v9 = v7 | a3[27];
    v10 = (unsigned __int8)a3[25];
    v11 = (unsigned __int8)a3[26];
    if ( a3[24] )
    {
      if ( (_BYTE)v10 )
      {
        if ( (_BYTE)v11 )
        {
          if ( !v9 )
          {
            uu_wc::count_fast::count_bytes_chars_and_lines_fast(v56, &v64, v6, v8, v11, v10);
            goto LABEL_188;
          }
          goto LABEL_12;
        }
        if ( !v9 )
        {
          uu_wc::count_fast::count_bytes_chars_and_lines_fast(v56, &v64, v6, v8, v11, v10);
          goto LABEL_188;
        }
LABEL_66:
        if ( v7 )
        {
          if ( (_BYTE)v8 )
          {
            memset(s, 0, 40);
            *(_QWORD *)&v59 = v5;
            BYTE8(v59) = v6;
            *(_QWORD *)&v60 = 0LL;
            DWORD2(v60) = 0;
            BYTE12(v60) = 0;
            LOBYTE(v52) = 0;
            *(_QWORD *)v51 = 0LL;
            while ( 1 )
            {
              uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, &v59, v6, v8, v11, v10, 0.0);
              if ( *(_QWORD *)fd == 2LL )
                goto LABEL_211;
              v6 = v55;
              if ( *(_QWORD *)fd )
              {
                if ( v54 )
                {
                  *(_QWORD *)&s[0] += v55;
                }
                else if ( v55 )
                {
                  goto LABEL_206;
                }
              }
              else
              {
                uu_wc::process_chunk(s, v54, v55, (unsigned __int64 *)v51, (char *)&v52);
              }
            }
          }
          memset(s, 0, 40);
          *(_QWORD *)&v59 = v5;
          BYTE8(v59) = v6;
          *(_QWORD *)&v60 = 0LL;
          DWORD2(v60) = 0;
          BYTE12(v60) = 0;
          *(_QWORD *)v51 = 0LL;
          while ( 1 )
          {
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, &v59, v6, v8, v11, v10, 0.0);
            if ( *(_QWORD *)fd == 2LL )
              break;
            v6 = v55;
            if ( *(_QWORD *)fd )
            {
              if ( v54 )
              {
                *(_QWORD *)&s[0] += v55;
              }
              else if ( v55 )
              {
                goto LABEL_173;
              }
            }
            else
            {
              uu_wc::process_chunk(s, v54, v55, (unsigned __int64 *)v51);
            }
          }
        }
        else
        {
          memset(s, 0, 40);
          *(_QWORD *)&v59 = v5;
          BYTE8(v59) = v6;
          *(_QWORD *)&v60 = 0LL;
          DWORD2(v60) = 0;
          BYTE12(v60) = 0;
          LOBYTE(v51[0]) = 0;
          while ( 1 )
          {
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, &v59, v6, v8, v11, v10, 0.0);
            if ( *(_QWORD *)fd == 2LL )
              break;
            v6 = v55;
            if ( *(_QWORD *)fd )
            {
              if ( v54 )
              {
                *(_QWORD *)&s[0] += v55;
              }
              else if ( v55 )
              {
                goto LABEL_206;
              }
            }
            else
            {
              uu_wc::process_chunk(s, v54, v55, (char *)v51);
            }
          }
        }
        goto LABEL_174;
      }
      if ( (_BYTE)v11 )
      {
        if ( !v9 )
        {
          uu_wc::count_fast::count_bytes_chars_and_lines_fast(v56, &v64, v6, v8, v11, v10);
          goto LABEL_188;
        }
LABEL_34:
        if ( v7 )
        {
          if ( (_BYTE)v8 )
          {
            memset(s, 0, 40);
            *(_QWORD *)&v59 = v5;
            BYTE8(v59) = v6;
            *(_QWORD *)&v60 = 0LL;
            DWORD2(v60) = 0;
            BYTE12(v60) = 0;
            LOBYTE(v52) = 0;
            *(_QWORD *)v51 = 0LL;
            while ( 1 )
            {
              uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, &v59, v6, v8, v11, v10, 0.0);
              if ( *(_QWORD *)fd == 2LL )
                goto LABEL_211;
              v6 = v55;
              if ( *(_QWORD *)fd )
              {
                if ( v54 )
                {
                  *(_QWORD *)&s[0] += v55;
                }
                else if ( v55 )
                {
                  goto LABEL_206;
                }
              }
              else
              {
                uu_wc::process_chunk(s, v54, v55, (unsigned __int64 *)v51, (char *)&v52);
              }
            }
          }
          memset(s, 0, 40);
          *(_QWORD *)&v59 = v5;
          BYTE8(v59) = v6;
          *(_QWORD *)&v60 = 0LL;
          DWORD2(v60) = 0;
          BYTE12(v60) = 0;
          *(_QWORD *)v51 = 0LL;
          while ( 1 )
          {
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, &v59, v6, v8, v11, v10, 0.0);
            if ( *(_QWORD *)fd == 2LL )
              break;
            v6 = v55;
            if ( *(_QWORD *)fd )
            {
              if ( v54 )
              {
                *(_QWORD *)&s[0] += v55;
              }
              else if ( v55 )
              {
                goto LABEL_173;
              }
            }
            else
            {
              uu_wc::process_chunk(s, v54, v55, (unsigned __int64 *)v51);
            }
          }
        }
        else
        {
          memset(s, 0, 40);
          *(_QWORD *)&v59 = v5;
          BYTE8(v59) = v6;
          *(_QWORD *)&v60 = 0LL;
          DWORD2(v60) = 0;
          BYTE12(v60) = 0;
          LOBYTE(v51[0]) = 0;
          while ( 1 )
          {
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, &v59, v6, v8, v11, v10, 0.0);
            if ( *(_QWORD *)fd == 2LL )
              break;
            v6 = v55;
            if ( *(_QWORD *)fd )
            {
              if ( v54 )
              {
                *(_QWORD *)&s[0] += v55;
              }
              else if ( v55 )
              {
                goto LABEL_206;
              }
            }
            else
            {
              uu_wc::process_chunk(s, v54, v55, (char *)v51);
            }
          }
        }
        goto LABEL_174;
      }
      if ( !v9 )
      {
        nix::sys::stat::fstat(&v59);
        if ( (_DWORD)v59 || (v61 & 0x1000) == 0 )
          goto LABEL_84;
        *(_QWORD *)&s[0] = 0x1B600000000LL;
        DWORD2(s[0]) = 256;
        WORD6(s[0]) = 0;
        std::fs::OpenOptions::_open(fd, s, aDevNull, 9LL);
        if ( fd[0] )
        {
          core::ptr::drop_in_place<std::io::error::Error>(v54, s);
LABEL_84:
          v19 = 0LL;
          goto LABEL_85;
        }
        v38 = fd[1];
        v52 = fd[1];
        v39 = (unsigned int)fd[1];
        nix::sys::stat::fstat(s);
        if ( !LODWORD(s[0]) )
        {
          v19 = 0LL;
          if ( ((LODWORD(s[3]) >> 8) & 0xFFF | DWORD1(s[3]) & 0xFFFFF000) != 1
            || (LOBYTE(s[3]) | (*(_QWORD *)&s[3] >> 12) & 0xFFFFFF00) != 3 )
          {
            goto LABEL_302;
          }
          v40 = uucore::features::pipes::pipe(s, v39);
          if ( (_DWORD)v40 != -1 )
          {
            fd[0] = HIDWORD(v40);
            v51[0] = v40;
            v41 = 0LL;
            while ( 1 )
            {
              nix::fcntl::splice(s, &v64, 0LL, fd, 0LL, &unk_20000, 0);
              if ( LODWORD(s[0]) )
              {
LABEL_310:
                close(fd[0]);
                close(v51[0]);
                v38 = v52;
                v19 = v41;
                goto LABEL_302;
              }
              if ( !*((_QWORD *)&s[0] + 1) )
                break;
              v41 += *((_QWORD *)&s[0] + 1);
              if ( (unsigned int)uucore::features::pipes::splice_exact(v51, &v52, *((_QWORD *)&s[0] + 1)) != 134 )
                goto LABEL_310;
            }
            close(fd[0]);
            close(v51[0]);
            close(v52);
            v22 = 0LL;
            v19 = v41;
            goto LABEL_91;
          }
        }
        v19 = 0LL;
LABEL_302:
        close(v38);
LABEL_85:
        memset(s, 0, 0x4000uLL);
        do
        {
          while ( 1 )
          {
            v20 = <std::io::stdio::StdinLock as std::io::Read>::read(&v64, s, 0x4000LL);
            v22 = v21;
            if ( !v20 )
              break;
            if ( (unsigned __int8)std::io::error::Error::kind(v21) != 35 )
              goto LABEL_91;
            core::ptr::drop_in_place<std::io::error::Error>(v22, s);
          }
          v23 = v19;
          v19 += v21;
        }
        while ( v21 );
        v22 = 0LL;
        v19 = v23;
LABEL_91:
        *(_QWORD *)v56 = v19;
        memset(&v56[8], 0, 32);
        v57 = v22;
        goto LABEL_188;
      }
LABEL_120:
      if ( !v7 )
      {
        memset(s, 0, 40);
        *(_QWORD *)&v59 = v5;
        BYTE8(v59) = v6;
        *(_QWORD *)&v60 = 0LL;
        DWORD2(v60) = 0;
        BYTE12(v60) = 0;
        LOBYTE(v51[0]) = 0;
        while ( 1 )
        {
          uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, &v59, v6, v8, v11, v10, 0.0);
          if ( *(_QWORD *)fd == 2LL )
            goto LABEL_174;
          v6 = v55;
          if ( *(_QWORD *)fd )
          {
            if ( v54 )
            {
              *(_QWORD *)&s[0] += v55;
            }
            else if ( v55 )
            {
LABEL_206:
              *(_QWORD *)&v56[32] = *(_QWORD *)&s[2];
              *(_OWORD *)&v56[16] = s[1];
              *(_OWORD *)v56 = s[0];
              v57 = v6;
              goto LABEL_207;
            }
          }
          else
          {
            uu_wc::process_chunk(s, v54, v55, (char *)v51);
          }
        }
      }
      if ( !(_BYTE)v8 )
      {
        memset(s, 0, 40);
        *(_QWORD *)&v59 = v5;
        BYTE8(v59) = v6;
        *(_QWORD *)&v60 = 0LL;
        DWORD2(v60) = 0;
        BYTE12(v60) = 0;
        *(_QWORD *)v51 = 0LL;
        while ( 1 )
        {
          uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, &v59, v6, v8, v11, v10, 0.0);
          if ( *(_QWORD *)fd == 2LL )
            goto LABEL_211;
          v6 = v55;
          if ( *(_QWORD *)fd )
          {
            if ( v54 )
            {
              *(_QWORD *)&s[0] += v55;
            }
            else if ( v55 )
            {
              goto LABEL_206;
            }
          }
          else
          {
            uu_wc::process_chunk(s, v54, v55, (unsigned __int64 *)v51);
          }
        }
      }
      memset(s, 0, 40);
      *(_QWORD *)&v59 = v5;
      BYTE8(v59) = v6;
      *(_QWORD *)&v60 = 0LL;
      DWORD2(v60) = 0;
      BYTE12(v60) = 0;
      LOBYTE(v52) = 0;
      *(_QWORD *)v51 = 0LL;
      while ( 1 )
      {
        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, &v59, v6, v8, v11, v10, 0.0);
        if ( *(_QWORD *)fd == 2LL )
          break;
        v6 = v55;
        if ( *(_QWORD *)fd )
        {
          if ( v54 )
          {
            *(_QWORD *)&s[0] += v55;
          }
          else if ( v55 )
          {
LABEL_173:
            *(_QWORD *)&v56[32] = *(_QWORD *)&s[2];
            *(_OWORD *)&v56[16] = s[1];
            *(_OWORD *)v56 = s[0];
            v57 = v6;
            goto LABEL_212;
          }
        }
        else
        {
          uu_wc::process_chunk(s, v54, v55, (unsigned __int64 *)v51, (char *)&v52);
        }
      }
LABEL_174:
      *(_OWORD *)v56 = s[0];
      *(_OWORD *)&v56[16] = s[1];
      *(_QWORD *)&v56[32] = *(_QWORD *)&s[2];
      v57 = 0LL;
LABEL_207:
      v31 = v59;
      if ( !BYTE8(v59)
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
      {
        *(_BYTE *)(v31 + 4) = 1;
      }
      if ( _InterlockedExchange((volatile __int32 *)v31, 0) == 2 )
        std::sys::sync::mutex::futex::Mutex::wake(v31);
      goto LABEL_317;
    }
    if ( (_BYTE)v10 )
    {
      if ( (_BYTE)v11 )
      {
        if ( v9 )
        {
LABEL_12:
          if ( v7 )
          {
            if ( (_BYTE)v8 )
            {
              memset(s, 0, 40);
              *(_QWORD *)&v59 = v5;
              BYTE8(v59) = v6;
              *(_QWORD *)&v60 = 0LL;
              DWORD2(v60) = 0;
              BYTE12(v60) = 0;
              LOBYTE(v52) = 0;
              *(_QWORD *)v51 = 0LL;
              while ( 1 )
              {
                uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, &v59, v6, v8, v11, v10, 0.0);
                if ( *(_QWORD *)fd == 2LL )
                  goto LABEL_174;
                v6 = v55;
                if ( *(_QWORD *)fd )
                {
                  if ( v54 )
                  {
                    *(_QWORD *)&s[0] += v55;
                  }
                  else if ( v55 )
                  {
                    goto LABEL_206;
                  }
                }
                else
                {
                  uu_wc::process_chunk(s, v54, v55, (unsigned __int64 *)v51, (char *)&v52);
                }
              }
            }
            memset(s, 0, 40);
            *(_QWORD *)&v59 = v5;
            BYTE8(v59) = v6;
            *(_QWORD *)&v60 = 0LL;
            DWORD2(v60) = 0;
            BYTE12(v60) = 0;
            *(_QWORD *)v51 = 0LL;
            while ( 1 )
            {
              uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, &v59, v6, v8, v11, v10, 0.0);
              if ( *(_QWORD *)fd == 2LL )
                break;
              v6 = v55;
              if ( *(_QWORD *)fd )
              {
                if ( v54 )
                {
                  *(_QWORD *)&s[0] += v55;
                }
                else if ( v55 )
                {
                  goto LABEL_206;
                }
              }
              else
              {
                uu_wc::process_chunk(s, v54, v55, (unsigned __int64 *)v51);
              }
            }
LABEL_211:
            *(_OWORD *)v56 = s[0];
            *(_OWORD *)&v56[16] = s[1];
            *(_QWORD *)&v56[32] = *(_QWORD *)&s[2];
            v57 = 0LL;
LABEL_212:
            v24 = v59;
            if ( BYTE8(v59) )
              goto LABEL_214;
            goto LABEL_213;
          }
          memset(s, 0, 40);
          *(_QWORD *)&v59 = v5;
          BYTE8(v59) = v6;
          *(_QWORD *)&v60 = 0LL;
          DWORD2(v60) = 0;
          BYTE12(v60) = 0;
          LOBYTE(v51[0]) = 0;
          while ( 1 )
          {
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, &v59, v6, v8, v11, v10, 0.0);
            if ( *(_QWORD *)fd == 2LL )
              goto LABEL_174;
            v6 = v55;
            if ( *(_QWORD *)fd )
            {
              if ( v54 )
              {
                *(_QWORD *)&s[0] += v55;
              }
              else if ( v55 )
              {
                goto LABEL_206;
              }
            }
            else
            {
              uu_wc::process_chunk(s, v54, v55, (char *)v51);
            }
          }
        }
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(v56, &v64, v6, v8, v11, v10);
      }
      else
      {
        if ( v9 )
          goto LABEL_66;
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(v56, &v64, v6, v8, v11, v10);
      }
    }
    else
    {
      if ( !(_BYTE)v11 )
      {
        if ( !v9 )
          core::panicking::panic(aInternalErrorE_3, 40LL, &off_F3298);
        goto LABEL_120;
      }
      if ( v9 )
        goto LABEL_34;
      uu_wc::count_fast::count_bytes_chars_and_lines_fast(v56, &v64, v6, v8, v11, v10);
    }
LABEL_188:
    v24 = v64;
    if ( (_BYTE)v65 )
    {
LABEL_214:
      if ( _InterlockedExchange((volatile __int32 *)v24, 0) == 2 )
        std::sys::sync::mutex::futex::Mutex::wake(v24);
      goto LABEL_317;
    }
LABEL_213:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
    {
      *(_BYTE *)(v24 + 4) = 1;
    }
    goto LABEL_214;
  }
  *(_QWORD *)&s[0] = 0x1B600000000LL;
  DWORD2(s[0]) = 1;
  WORD6(s[0]) = 0;
  std::fs::OpenOptions::_open(&v64, s, a2[1], a2[2]);
  if ( (_DWORD)v64 )
  {
    result = v65;
    *(_QWORD *)(a1 + 8) = v65;
    *(_QWORD *)a1 = 2LL;
    return result;
  }
  v52 = HIDWORD(v64);
  v13 = a3[28];
  v14 = a3[27];
  v15 = v13 | v14;
  v16 = a3[25];
  v17 = a3[26];
  if ( !a3[24] )
  {
    if ( v16 )
    {
      if ( v17 )
      {
        if ( !v15 )
        {
          uu_wc::count_fast::count_bytes_chars_and_lines_fast(v56, &v52);
          goto LABEL_315;
        }
        goto LABEL_47;
      }
      if ( !v15 )
      {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(v56, &v52);
        goto LABEL_315;
      }
      goto LABEL_177;
    }
    if ( v17 )
    {
      if ( !v15 )
      {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(v56, &v52);
        goto LABEL_315;
      }
LABEL_132:
      if ( v13 )
      {
        if ( v14 )
        {
          v60 = 0LL;
          v59 = 0LL;
          v61 = 0LL;
          <std::fs::File as uu_wc::countable::WordCountable>::buffered(s);
          *(_QWORD *)&s[3] = 0LL;
          DWORD2(s[3]) = 0;
          BYTE12(s[3]) = 0;
          LOBYTE(v58[0]) = 0;
          *(_QWORD *)v51 = 0LL;
          while ( 1 )
          {
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, s, 0.0);
            if ( *(_QWORD *)fd == 2LL )
              break;
            v18 = v55;
            if ( *(_QWORD *)fd )
            {
              if ( v54 )
              {
                *(_QWORD *)&v59 = v55 + v59;
              }
              else if ( v55 )
              {
                goto LABEL_289;
              }
            }
            else
            {
              uu_wc::process_chunk(&v59, v54, v55, (unsigned __int64 *)v51, (char *)v58);
            }
          }
        }
        else
        {
          v60 = 0LL;
          v59 = 0LL;
          v61 = 0LL;
          <std::fs::File as uu_wc::countable::WordCountable>::buffered(s);
          *(_QWORD *)&s[3] = 0LL;
          DWORD2(s[3]) = 0;
          BYTE12(s[3]) = 0;
          *(_QWORD *)v51 = 0LL;
          while ( 1 )
          {
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, s, 0.0);
            if ( *(_QWORD *)fd == 2LL )
              break;
            v18 = v55;
            if ( *(_QWORD *)fd )
            {
              if ( v54 )
              {
                *(_QWORD *)&v59 = v55 + v59;
              }
              else if ( v55 )
              {
                goto LABEL_289;
              }
            }
            else
            {
              uu_wc::process_chunk(&v59, v54, v55, (unsigned __int64 *)v51);
            }
          }
        }
      }
      else
      {
        v60 = 0LL;
        v59 = 0LL;
        v61 = 0LL;
        <std::fs::File as uu_wc::countable::WordCountable>::buffered(s);
        *(_QWORD *)&s[3] = 0LL;
        DWORD2(s[3]) = 0;
        BYTE12(s[3]) = 0;
        LOBYTE(v51[0]) = 0;
        while ( 1 )
        {
          uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, s, 0.0);
          if ( *(_QWORD *)fd == 2LL )
            break;
          v18 = v55;
          if ( *(_QWORD *)fd )
          {
            if ( v54 )
            {
              *(_QWORD *)&v59 = v55 + v59;
            }
            else if ( v55 )
            {
              goto LABEL_289;
            }
          }
          else
          {
            uu_wc::process_chunk(&v59, v54, v55, (char *)v51);
          }
        }
      }
LABEL_290:
      *(_OWORD *)v56 = v59;
      *(_OWORD *)&v56[16] = v60;
      *(_QWORD *)&v56[32] = v61;
      v57 = 0LL;
LABEL_291:
      if ( *((_QWORD *)&s[0] + 1) )
        _rust_dealloc(*(_QWORD *)&s[0], *((_QWORD *)&s[0] + 1), 1LL);
      v32 = DWORD2(s[2]);
      goto LABEL_316;
    }
    if ( !v15 )
      core::panicking::panic(aInternalErrorE_3, 40LL, &off_F3298);
    goto LABEL_242;
  }
  if ( !v16 )
  {
    if ( v17 )
    {
      if ( !v15 )
      {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(v56, &v52);
        goto LABEL_315;
      }
      goto LABEL_132;
    }
    if ( !v15 )
    {
      v25 = HIDWORD(v64);
      nix::sys::stat::fstat(&v59);
      if ( (_DWORD)v59 )
      {
LABEL_192:
        v26 = 0LL;
        goto LABEL_193;
      }
      v33 = v61;
      v26 = 0LL;
      if ( v25 > 0 && (v61 & 0x8000u) != 0LL && v62 > 0 )
      {
        v34 = v62;
        v35 = v63;
        v36 = sysconf(30);
        if ( v36 )
        {
          if ( (v34 | v36) >> 32 )
            v37 = v34 % v36;
          else
            v37 = (unsigned int)v34 % (unsigned int)v36;
          if ( v37 )
          {
LABEL_313:
            v29 = 0LL;
            v26 = v34;
LABEL_314:
            *(_QWORD *)v56 = v26;
            memset(&v56[8], 0, 32);
            v57 = v29;
            goto LABEL_315;
          }
          v43 = v35 + 1;
          if ( v43 )
          {
            if ( (v43 | (unsigned __int64)v34) >> 32 )
              v44 = v34 % v43;
            else
              v44 = (unsigned int)v34 % (unsigned int)v43;
            v45 = <std::fs::File as std::io::Seek>::seek(&v52, 0LL, v34 - v44);
            v26 = v46;
            if ( v45 )
            {
              core::ptr::drop_in_place<std::io::error::Error>(v46, 0LL);
              v26 = 0LL;
            }
            goto LABEL_327;
          }
          v50 = &off_F30B8;
        }
        else
        {
          v50 = &off_F30A0;
        }
        core::panicking::panic_const::panic_const_rem_by_zero(v50);
      }
LABEL_327:
      if ( (v33 & 0x1000) == 0 )
        goto LABEL_193;
      *(_QWORD *)&s[0] = 0x1B600000000LL;
      DWORD2(s[0]) = 256;
      WORD6(s[0]) = 0;
      std::fs::OpenOptions::_open(fd, s, aDevNull, 9LL);
      if ( fd[0] )
      {
        core::ptr::drop_in_place<std::io::error::Error>(v54, s);
        goto LABEL_192;
      }
      v47 = fd[1];
      v58[0] = fd[1];
      v48 = (unsigned int)fd[1];
      nix::sys::stat::fstat(s);
      if ( !LODWORD(s[0]) )
      {
        v26 = 0LL;
        if ( ((LODWORD(s[3]) >> 8) & 0xFFF | DWORD1(s[3]) & 0xFFFFF000) != 1
          || (LOBYTE(s[3]) | (*(_QWORD *)&s[3] >> 12) & 0xFFFFFF00) != 3 )
        {
          goto LABEL_332;
        }
        v49 = uucore::features::pipes::pipe(s, v48);
        if ( (_DWORD)v49 != -1 )
        {
          fd[0] = HIDWORD(v49);
          v51[0] = v49;
          v34 = 0LL;
          while ( 1 )
          {
            nix::fcntl::splice(s, &v52, 0LL, fd, 0LL, &unk_20000, 0);
            if ( LODWORD(s[0]) )
            {
LABEL_340:
              close(fd[0]);
              close(v51[0]);
              v47 = v58[0];
              v26 = v34;
              goto LABEL_332;
            }
            if ( !*((_QWORD *)&s[0] + 1) )
              break;
            v34 += *((_QWORD *)&s[0] + 1);
            if ( (unsigned int)uucore::features::pipes::splice_exact(v51, v58, *((_QWORD *)&s[0] + 1)) != 134 )
              goto LABEL_340;
          }
          close(fd[0]);
          close(v51[0]);
          close(v58[0]);
          goto LABEL_313;
        }
      }
      v26 = 0LL;
LABEL_332:
      close(v47);
LABEL_193:
      memset(s, 0, 0x4000uLL);
      do
      {
        while ( 1 )
        {
          v27 = <std::fs::File as std::io::Read>::read(&v52, s, 0x4000LL);
          v29 = v28;
          if ( !v27 )
            break;
          if ( (unsigned __int8)std::io::error::Error::kind(v28) != 35 )
            goto LABEL_314;
          core::ptr::drop_in_place<std::io::error::Error>(v29, s);
        }
        v30 = v26;
        v26 += v28;
      }
      while ( v28 );
      v29 = 0LL;
      v26 = v30;
      goto LABEL_314;
    }
LABEL_242:
    if ( v13 )
    {
      if ( v14 )
      {
        v60 = 0LL;
        v59 = 0LL;
        v61 = 0LL;
        <std::fs::File as uu_wc::countable::WordCountable>::buffered(s);
        *(_QWORD *)&s[3] = 0LL;
        DWORD2(s[3]) = 0;
        BYTE12(s[3]) = 0;
        LOBYTE(v58[0]) = 0;
        *(_QWORD *)v51 = 0LL;
        while ( 1 )
        {
          uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, s, 0.0);
          if ( *(_QWORD *)fd == 2LL )
            break;
          v18 = v55;
          if ( *(_QWORD *)fd )
          {
            if ( v54 )
            {
              *(_QWORD *)&v59 = v55 + v59;
            }
            else if ( v55 )
            {
              goto LABEL_289;
            }
          }
          else
          {
            uu_wc::process_chunk(&v59, v54, v55, (unsigned __int64 *)v51, (char *)v58);
          }
        }
      }
      else
      {
        v60 = 0LL;
        v59 = 0LL;
        v61 = 0LL;
        <std::fs::File as uu_wc::countable::WordCountable>::buffered(s);
        *(_QWORD *)&s[3] = 0LL;
        DWORD2(s[3]) = 0;
        BYTE12(s[3]) = 0;
        *(_QWORD *)v51 = 0LL;
        while ( 1 )
        {
          uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, s, 0.0);
          if ( *(_QWORD *)fd == 2LL )
            break;
          v18 = v55;
          if ( *(_QWORD *)fd )
          {
            if ( v54 )
            {
              *(_QWORD *)&v59 = v55 + v59;
            }
            else if ( v55 )
            {
              goto LABEL_289;
            }
          }
          else
          {
            uu_wc::process_chunk(&v59, v54, v55, (unsigned __int64 *)v51);
          }
        }
      }
    }
    else
    {
      v60 = 0LL;
      v59 = 0LL;
      v61 = 0LL;
      <std::fs::File as uu_wc::countable::WordCountable>::buffered(s);
      *(_QWORD *)&s[3] = 0LL;
      DWORD2(s[3]) = 0;
      BYTE12(s[3]) = 0;
      LOBYTE(v51[0]) = 0;
      while ( 1 )
      {
        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, s, 0.0);
        if ( *(_QWORD *)fd == 2LL )
          break;
        v18 = v55;
        if ( *(_QWORD *)fd )
        {
          if ( v54 )
          {
            *(_QWORD *)&v59 = v55 + v59;
          }
          else if ( v55 )
          {
LABEL_289:
            *(_QWORD *)&v56[32] = v61;
            *(_OWORD *)&v56[16] = v60;
            *(_OWORD *)v56 = v59;
            v57 = v18;
            goto LABEL_291;
          }
        }
        else
        {
          uu_wc::process_chunk(&v59, v54, v55, (char *)v51);
        }
      }
    }
    goto LABEL_290;
  }
  if ( !v17 )
  {
    if ( !v15 )
    {
      uu_wc::count_fast::count_bytes_chars_and_lines_fast(v56, &v52);
      goto LABEL_315;
    }
LABEL_177:
    if ( v13 )
    {
      if ( v14 )
      {
        v60 = 0LL;
        v59 = 0LL;
        v61 = 0LL;
        <std::fs::File as uu_wc::countable::WordCountable>::buffered(s);
        *(_QWORD *)&s[3] = 0LL;
        DWORD2(s[3]) = 0;
        BYTE12(s[3]) = 0;
        LOBYTE(v58[0]) = 0;
        *(_QWORD *)v51 = 0LL;
        while ( 1 )
        {
          uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, s, 0.0);
          if ( *(_QWORD *)fd == 2LL )
            break;
          v18 = v55;
          if ( *(_QWORD *)fd )
          {
            if ( v54 )
            {
              *(_QWORD *)&v59 = v55 + v59;
            }
            else if ( v55 )
            {
              goto LABEL_289;
            }
          }
          else
          {
            uu_wc::process_chunk(&v59, v54, v55, (unsigned __int64 *)v51, (char *)v58);
          }
        }
      }
      else
      {
        v60 = 0LL;
        v59 = 0LL;
        v61 = 0LL;
        <std::fs::File as uu_wc::countable::WordCountable>::buffered(s);
        *(_QWORD *)&s[3] = 0LL;
        DWORD2(s[3]) = 0;
        BYTE12(s[3]) = 0;
        *(_QWORD *)v51 = 0LL;
        while ( 1 )
        {
          uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, s, 0.0);
          if ( *(_QWORD *)fd == 2LL )
            break;
          v18 = v55;
          if ( *(_QWORD *)fd )
          {
            if ( v54 )
            {
              *(_QWORD *)&v59 = v55 + v59;
            }
            else if ( v55 )
            {
              goto LABEL_289;
            }
          }
          else
          {
            uu_wc::process_chunk(&v59, v54, v55, (unsigned __int64 *)v51);
          }
        }
      }
    }
    else
    {
      v60 = 0LL;
      v59 = 0LL;
      v61 = 0LL;
      <std::fs::File as uu_wc::countable::WordCountable>::buffered(s);
      *(_QWORD *)&s[3] = 0LL;
      DWORD2(s[3]) = 0;
      BYTE12(s[3]) = 0;
      LOBYTE(v51[0]) = 0;
      while ( 1 )
      {
        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, s, 0.0);
        if ( *(_QWORD *)fd == 2LL )
          break;
        v18 = v55;
        if ( *(_QWORD *)fd )
        {
          if ( v54 )
          {
            *(_QWORD *)&v59 = v55 + v59;
          }
          else if ( v55 )
          {
            goto LABEL_289;
          }
        }
        else
        {
          uu_wc::process_chunk(&v59, v54, v55, (char *)v51);
        }
      }
    }
    goto LABEL_290;
  }
  if ( v15 )
  {
LABEL_47:
    if ( v13 )
    {
      if ( v14 )
      {
        v60 = 0LL;
        v59 = 0LL;
        v61 = 0LL;
        <std::fs::File as uu_wc::countable::WordCountable>::buffered(s);
        *(_QWORD *)&s[3] = 0LL;
        DWORD2(s[3]) = 0;
        BYTE12(s[3]) = 0;
        LOBYTE(v58[0]) = 0;
        *(_QWORD *)v51 = 0LL;
        while ( 1 )
        {
          uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, s, 0.0);
          if ( *(_QWORD *)fd == 2LL )
            break;
          v18 = v55;
          if ( *(_QWORD *)fd )
          {
            if ( v54 )
            {
              *(_QWORD *)&v59 = v55 + v59;
            }
            else if ( v55 )
            {
              goto LABEL_289;
            }
          }
          else
          {
            uu_wc::process_chunk(&v59, v54, v55, (unsigned __int64 *)v51, (char *)v58);
          }
        }
      }
      else
      {
        v60 = 0LL;
        v59 = 0LL;
        v61 = 0LL;
        <std::fs::File as uu_wc::countable::WordCountable>::buffered(s);
        *(_QWORD *)&s[3] = 0LL;
        DWORD2(s[3]) = 0;
        BYTE12(s[3]) = 0;
        *(_QWORD *)v51 = 0LL;
        while ( 1 )
        {
          uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, s, 0.0);
          if ( *(_QWORD *)fd == 2LL )
            break;
          v18 = v55;
          if ( *(_QWORD *)fd )
          {
            if ( v54 )
            {
              *(_QWORD *)&v59 = v55 + v59;
            }
            else if ( v55 )
            {
              goto LABEL_289;
            }
          }
          else
          {
            uu_wc::process_chunk(&v59, v54, v55, (unsigned __int64 *)v51);
          }
        }
      }
    }
    else
    {
      v60 = 0LL;
      v59 = 0LL;
      v61 = 0LL;
      <std::fs::File as uu_wc::countable::WordCountable>::buffered(s);
      *(_QWORD *)&s[3] = 0LL;
      DWORD2(s[3]) = 0;
      BYTE12(s[3]) = 0;
      LOBYTE(v51[0]) = 0;
      while ( 1 )
      {
        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(fd, s, 0.0);
        if ( *(_QWORD *)fd == 2LL )
          break;
        v18 = v55;
        if ( *(_QWORD *)fd )
        {
          if ( v54 )
          {
            *(_QWORD *)&v59 = v55 + v59;
          }
          else if ( v55 )
          {
            goto LABEL_289;
          }
        }
        else
        {
          uu_wc::process_chunk(&v59, v54, v55, (char *)v51);
        }
      }
    }
    goto LABEL_290;
  }
  uu_wc::count_fast::count_bytes_chars_and_lines_fast(v56, &v52);
LABEL_315:
  v32 = v52;
LABEL_316:
  close(v32);
LABEL_317:
  *(_QWORD *)(a1 + 40) = *(_QWORD *)&v56[32];
  v42 = *(_OWORD *)v56;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&v56[16];
  *(_OWORD *)(a1 + 8) = v42;
  if ( v57 )
  {
    *(_QWORD *)(a1 + 48) = v57;
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
  *(_QWORD *)a1 = result;
  return result;
}
