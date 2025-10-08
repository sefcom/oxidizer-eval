__int64 __fastcall just::parser::Parser::cook_string(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned int v5; // edx
  unsigned __int64 v6; // rcx
  __int64 v8; // rsi
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // eax
  char v15; // cl
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  unsigned __int64 v21; // [rsp+0h] [rbp-198h] BYREF
  __int64 v22; // [rsp+8h] [rbp-190h]
  unsigned __int64 v23; // [rsp+10h] [rbp-188h]
  _BYTE v24[7]; // [rsp+18h] [rbp-180h]
  _BYTE v25[80]; // [rsp+20h] [rbp-178h] BYREF
  __int128 v26; // [rsp+70h] [rbp-128h] BYREF
  __int64 v27; // [rsp+80h] [rbp-118h]
  _QWORD v28[2]; // [rsp+88h] [rbp-110h] BYREF
  unsigned __int64 v29; // [rsp+98h] [rbp-100h] BYREF
  __int128 v30; // [rsp+A0h] [rbp-F8h]
  __int64 v31; // [rsp+B0h] [rbp-E8h]
  __int128 v32; // [rsp+100h] [rbp-98h]
  __int128 v33; // [rsp+110h] [rbp-88h]
  __int128 v34; // [rsp+120h] [rbp-78h]
  __int128 v35; // [rsp+130h] [rbp-68h]
  int v36; // [rsp+140h] [rbp-58h]
  __int128 v37; // [rsp+150h] [rbp-48h] BYREF
  __int64 v38; // [rsp+160h] [rbp-38h]

  v4 = a2;
  *(_QWORD *)&v26 = 0LL;
  *((_QWORD *)&v26 + 1) = 1LL;
  v27 = 0LL;
  v21 = 0x8000000000000001LL;
  v28[0] = a3;
  v28[1] = a3 + a4;
  if ( (core::str::validations::next_code_point(v28) & 1) != 0 )
  {
    v6 = 3LL;
    if ( (v21 ^ 0x8000000000000000LL) < 3 )
      v6 = v21 ^ 0x8000000000000000LL;
    switch ( v6 )
    {
      case 0uLL:
LABEL_10:
        a2 = 10LL;
        switch ( v5 )
        {
          case '\\':
            goto LABEL_14;
          case ']':
          case '^':
          case '_':
          case '`':
          case 'a':
          case 'b':
          case 'c':
          case 'd':
          case 'e':
          case 'f':
          case 'g':
          case 'h':
          case 'i':
          case 'j':
          case 'k':
          case 'l':
          case 'm':
          case 'o':
          case 'p':
          case 'q':
          case 's':
            goto LABEL_18;
          case 'n':
            goto LABEL_16;
          case 'r':
            a2 = 13LL;
            goto LABEL_16;
          case 't':
            a2 = 9LL;
            goto LABEL_16;
          case 'u':
            core::ptr::drop_in_place<just::parser::Parser::cook_string::State>(&v21, 10LL);
            v21 = 0x8000000000000002LL;
            goto LABEL_19;
          default:
            if ( v5 == 10 )
              goto LABEL_31;
            if ( v5 != 34 )
            {
LABEL_18:
              LODWORD(v30) = v5;
              v29 = 0x800000000000002ALL;
              v8 = v4;
              just::token::Token::error(v25, v4, &v29);
              goto LABEL_8;
            }
LABEL_14:
            a2 = v5;
LABEL_16:
            alloc::string::String::push(&v26, a2);
            break;
        }
        goto LABEL_31;
      case 1uLL:
LABEL_23:
        if ( v5 == 92 )
        {
          core::ptr::drop_in_place<just::parser::Parser::cook_string::State>(&v21, a2);
          v21 = 0x8000000000000000LL;
        }
        else
        {
          a2 = v5;
          alloc::string::String::push(&v26, v5);
        }
        goto LABEL_19;
      case 2uLL:
LABEL_37:
        if ( v5 == 123 )
        {
          core::ptr::drop_in_place<just::parser::Parser::cook_string::State>(&v21, a2);
          v21 = 0LL;
          v22 = 1LL;
          v23 = 0LL;
          goto LABEL_19;
        }
        LODWORD(v30) = v5;
        v29 = 0x800000000000003ALL;
        v8 = v4;
        just::token::Token::error(v25, v4, &v29);
        goto LABEL_8;
      case 3uLL:
        while ( 2 )
        {
          if ( v5 == 125 )
          {
            if ( v23 )
            {
              v13 = core::num::<impl u32>::from_ascii_radix(v22);
              v14 = core::result::Result<T,E>::unwrap(v13);
              if ( (v14 ^ 0xD800) - 1114112 <= 0xFFEF07FF )
              {
                <alloc::string::String as core::clone::Clone>::clone(&v37, &v21);
                v31 = v38;
                v30 = v37;
                v29 = 0x800000000000003DLL;
                just::token::Token::error(v25, v4, &v29);
                v14 = *(_DWORD *)v25;
                v32 = *(_OWORD *)&v25[4];
                v33 = *(_OWORD *)&v25[20];
                v34 = *(_OWORD *)&v25[36];
                v35 = *(_OWORD *)&v25[52];
                v36 = *(_DWORD *)&v25[68];
                v15 = v25[72];
                *(_DWORD *)&v24[3] = *(_DWORD *)&v25[76];
                *(_DWORD *)v24 = *(_DWORD *)&v25[73];
                if ( v25[72] != 37 )
                {
                  *(_DWORD *)(a1 + 68) = v36;
                  v18 = v32;
                  v19 = v33;
                  v20 = v34;
                  *(_OWORD *)(a1 + 52) = v35;
                  *(_OWORD *)(a1 + 36) = v20;
                  *(_OWORD *)(a1 + 20) = v19;
                  *(_OWORD *)(a1 + 4) = v18;
                  v8 = *(unsigned int *)&v24[3];
                  *(_DWORD *)(a1 + 73) = *(_DWORD *)v24;
                  *(_DWORD *)(a1 + 76) = v8;
                  *(_DWORD *)a1 = v14;
                  *(_BYTE *)(a1 + 72) = v15;
                  goto LABEL_9;
                }
              }
              a2 = v14;
              alloc::string::String::push(&v26, v14);
LABEL_31:
              core::ptr::drop_in_place<just::parser::Parser::cook_string::State>(&v21, a2);
              v21 = 0x8000000000000001LL;
              goto LABEL_19;
            }
            v29 = 0x800000000000003BLL;
            v8 = v4;
            just::token::Token::error(v25, v4, &v29);
          }
          else if ( v5 - 48 < 0xA
                 || (v16 = v5 - 65, (unsigned int)v16 <= 0x25) && (v17 = 0x3F0000003FLL, _bittest64(&v17, v16)) )
          {
            a2 = v5;
            alloc::string::String::push(&v21, v5);
            if ( v23 < 7 )
            {
LABEL_19:
              if ( (core::str::validations::next_code_point(v28) & 1) != 0 )
              {
                v12 = 3LL;
                if ( (v21 ^ 0x8000000000000000LL) < 3 )
                  v12 = v21 ^ 0x8000000000000000LL;
                switch ( v12 )
                {
                  case 0uLL:
                    goto LABEL_10;
                  case 1uLL:
                    goto LABEL_23;
                  case 2uLL:
                    goto LABEL_37;
                  case 3uLL:
                    continue;
                }
              }
              if ( v21 == 0x8000000000000001LL )
                goto LABEL_6;
              v29 = 0x800000000000003ELL;
              v8 = v4;
              just::token::Token::error(v25, v4, &v29);
              break;
            }
            <alloc::string::String as core::clone::Clone>::clone(v25, &v21);
            v31 = *(_QWORD *)&v25[16];
            v30 = *(_OWORD *)v25;
            v29 = 0x800000000000003CLL;
            v8 = v4;
            just::token::Token::error(v25, v4, &v29);
          }
          else
          {
            LODWORD(v30) = v5;
            v29 = 0x8000000000000039LL;
            v8 = v4;
            just::token::Token::error(v25, v4, &v29);
          }
          break;
        }
LABEL_8:
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v25[64];
        v9 = *(_OWORD *)v25;
        v10 = *(_OWORD *)&v25[16];
        v11 = *(_OWORD *)&v25[32];
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v25[48];
        *(_OWORD *)(a1 + 32) = v11;
        *(_OWORD *)(a1 + 16) = v10;
        *(_OWORD *)a1 = v9;
LABEL_9:
        core::ptr::drop_in_place<just::parser::Parser::cook_string::State>(&v21, v8);
        return core::ptr::drop_in_place<alloc::string::String>(&v26);
    }
  }
LABEL_6:
  *(_QWORD *)(a1 + 16) = v27;
  *(_OWORD *)a1 = v26;
  *(_BYTE *)(a1 + 72) = 37;
  return core::ptr::drop_in_place<just::parser::Parser::cook_string::State>(&v21, a2);
}