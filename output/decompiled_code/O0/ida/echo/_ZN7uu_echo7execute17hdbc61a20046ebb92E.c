__int64 __fastcall uu_echo::execute(int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  int i; // edx
  int v11; // ebp
  int v12; // edx
  __int64 v13; // rax
  int v14; // eax
  int v15; // edx
  int v16; // eax
  __int64 v17; // rbx
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rax
  int v24; // [rsp+Ch] [rbp-26Ch] BYREF
  __int64 v25; // [rsp+10h] [rbp-268h] BYREF
  _QWORD v26[2]; // [rsp+18h] [rbp-260h] BYREF
  int v27; // [rsp+28h] [rbp-250h]
  int v28; // [rsp+30h] [rbp-248h]
  int v29; // [rsp+34h] [rbp-244h]
  int v30; // [rsp+38h] [rbp-240h] BYREF
  int v31; // [rsp+3Ch] [rbp-23Ch] BYREF
  __int64 v32; // [rsp+40h] [rbp-238h] BYREF
  __int64 v33; // [rsp+48h] [rbp-230h]
  __int64 v34; // [rsp+50h] [rbp-228h] BYREF
  _QWORD v35[2]; // [rsp+58h] [rbp-220h] BYREF
  _QWORD v36[2]; // [rsp+68h] [rbp-210h] BYREF
  _QWORD v37[2]; // [rsp+78h] [rbp-200h] BYREF
  _QWORD v38[2]; // [rsp+88h] [rbp-1F0h] BYREF
  _QWORD v39[6]; // [rsp+98h] [rbp-1E0h] BYREF
  _QWORD v40[6]; // [rsp+C8h] [rbp-1B0h] BYREF
  _QWORD v41[6]; // [rsp+F8h] [rbp-180h] BYREF
  _QWORD v42[6]; // [rsp+128h] [rbp-150h] BYREF
  _QWORD v43[3]; // [rsp+158h] [rbp-120h] BYREF
  __int128 v44; // [rsp+170h] [rbp-108h]
  _QWORD v45[3]; // [rsp+188h] [rbp-F0h] BYREF
  __int128 v46; // [rsp+1A0h] [rbp-D8h]
  _QWORD v47[3]; // [rsp+1B8h] [rbp-C0h] BYREF
  __int128 v48; // [rsp+1D0h] [rbp-A8h]
  _QWORD v49[3]; // [rsp+1E8h] [rbp-90h] BYREF
  __int128 v50; // [rsp+200h] [rbp-78h]
  _QWORD v51[3]; // [rsp+218h] [rbp-60h] BYREF
  __int128 v52; // [rsp+230h] [rbp-48h]

  v29 = a2;
  v28 = a1;
  v34 = std::io::stdio::stdout();
  v25 = std::io::stdio::Stdout::lock(&v34);
  if ( a4 )
  {
    v33 = a3 + 24 * a4;
    v6 = 0LL;
    while ( 1 )
    {
      if ( !a3 )
        goto LABEL_55;
      v32 = a3;
      if ( v6 )
      {
        v43[0] = &off_FAC80;
        v43[1] = 1LL;
        v43[2] = 8LL;
        v44 = 0LL;
        v7 = std::io::Write::write_fmt(&v25, v43);
        if ( v7 )
          goto LABEL_57;
      }
      if ( (_BYTE)v29 )
        break;
      v35[0] = &v32;
      v35[1] = <&T as core::fmt::Display>::fmt;
      v39[0] = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
      v39[1] = 1LL;
      v39[4] = 0LL;
      v39[2] = v35;
      v39[3] = 1LL;
      v7 = std::io::Write::write_fmt(&v25, v39);
      if ( v7 )
        goto LABEL_57;
LABEL_54:
      a3 += 24LL;
      ++v6;
      if ( a3 == v33 )
        goto LABEL_55;
    }
    v8 = *(_QWORD *)(v32 + 8);
    if ( !v8 || (v9 = *(_QWORD *)(v32 + 16), v9 < 0) )
      core::panicking::panic_nounwind(aUnsafePrecondi_7, 162LL);
    v26[0] = *(_QWORD *)(v32 + 8);
    v26[1] = v8 + v9;
    for ( i = 1114113; ; i = v27 )
    {
      v27 = 1114113;
      if ( i == 1114113 )
      {
        if ( !(unsigned int)core::str::validations::next_code_point(v26) )
          goto LABEL_54;
        if ( (i ^ 0xD800u) - 2048 >= 0x10F800 )
LABEL_65:
          core::panicking::panic_nounwind(aUnsafePrecondi_5, 57LL);
      }
      if ( i == 1114112 )
        goto LABEL_54;
      v30 = i;
      if ( i != 92 )
      {
        v36[0] = &v30;
        v36[1] = <char as core::fmt::Display>::fmt;
        v40[0] = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        v40[1] = 1LL;
        v40[4] = 0LL;
        v40[2] = v36;
        v40[3] = 1LL;
        v13 = std::io::Write::write_fmt(&v25, v40);
        goto LABEL_23;
      }
      v11 = v27;
      if ( v27 == 1114113 )
      {
        if ( !(unsigned int)core::str::validations::next_code_point(v26) )
          goto LABEL_20;
        v11 = v12;
        if ( (v12 ^ 0xD800u) - 2048 >= 0x10F800 )
          goto LABEL_65;
        v27 = v12;
        if ( v12 == 1114113 )
          core::hint::unreachable_unchecked::precondition_check();
      }
      if ( v11 == 1114112 )
      {
LABEL_20:
        v27 = 1114113;
LABEL_21:
        v51[0] = &off_FAC60;
        v51[1] = 1LL;
        v51[2] = 8LL;
        v52 = 0LL;
        v13 = std::io::Write::write_fmt(&v25, v51);
        goto LABEL_23;
      }
      if ( (unsigned int)(v11 - 49) < 8 )
      {
        v14 = uu_echo::parse_code((__int64)v26, 8u);
        if ( v14 != 1114112 )
        {
          v31 = v14;
          v37[0] = &v31;
          v37[1] = <char as core::fmt::Display>::fmt;
          v41[0] = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
          v41[1] = 1LL;
          v41[4] = 0LL;
          v41[2] = v37;
          v41[3] = 1LL;
          v13 = std::io::Write::write_fmt(&v25, v41);
          goto LABEL_23;
        }
        v11 = v27;
      }
      v27 = 1114113;
      if ( v11 == 1114113 )
      {
        if ( !(unsigned int)core::str::validations::next_code_point(v26) )
          goto LABEL_21;
        v11 = v15;
        if ( (v15 ^ 0xD800u) - 2048 >= 0x10F800 )
          goto LABEL_65;
      }
      switch ( v11 )
      {
        case '0':
          v16 = uu_echo::parse_code((__int64)v26, 8u);
          if ( v16 == 1114112 )
            v16 = 0;
          goto LABEL_43;
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case ':':
        case ';':
        case '<':
        case '=':
        case '>':
        case '?':
        case '@':
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case '[':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'd':
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
        case 'u':
        case 'w':
          goto LABEL_37;
        case '\\':
          v24 = 92;
          goto LABEL_52;
        case 'a':
          v24 = 7;
          goto LABEL_52;
        case 'b':
          v24 = 8;
          goto LABEL_52;
        case 'c':
          v7 = 0LL;
          goto LABEL_57;
        case 'e':
          v24 = 27;
          goto LABEL_52;
        case 'f':
          v24 = 12;
          goto LABEL_52;
        case 'n':
          v24 = 10;
          goto LABEL_52;
        case 'r':
          v24 = 13;
          goto LABEL_52;
        case 't':
          v24 = 9;
          goto LABEL_52;
        case 'v':
          v24 = 11;
          goto LABEL_52;
        case 'x':
          v16 = uu_echo::parse_code((__int64)v26, 0x10u);
          if ( v16 == 1114112 )
          {
            v47[0] = &off_FAC60;
            v47[1] = 1LL;
            v47[2] = 8LL;
            v48 = 0LL;
            v7 = std::io::Write::write_fmt(&v25, v47);
            if ( v7 )
              goto LABEL_57;
            v24 = 120;
          }
          else
          {
LABEL_43:
            v24 = v16;
          }
LABEL_52:
          v38[0] = &v24;
          v38[1] = <char as core::fmt::Display>::fmt;
          v42[0] = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
          v42[1] = 1LL;
          v42[4] = 0LL;
          v42[2] = v38;
          v42[3] = 1LL;
          v13 = std::io::Write::write_fmt(&v25, v42);
          break;
        default:
          if ( v11 == 1114112 )
            goto LABEL_21;
LABEL_37:
          v49[0] = &off_FAC60;
          v49[1] = 1LL;
          v49[2] = 8LL;
          v50 = 0LL;
          v7 = std::io::Write::write_fmt(&v25, v49);
          if ( v7 )
            goto LABEL_57;
          v24 = v11;
          goto LABEL_52;
      }
LABEL_23:
      v7 = v13;
      if ( v13 )
        goto LABEL_57;
    }
  }
LABEL_55:
  if ( (_BYTE)v28
    || (v45[0] = &off_FAC70, v45[1] = 1LL, v45[2] = 8LL, v46 = 0LL, (v7 = std::io::Write::write_fmt(&v25, v45)) == 0) )
  {
    v21 = v25;
    v7 = 0LL;
    v18 = (*(_DWORD *)(v25 + 12))-- == 1;
    if ( v18 )
    {
      v22 = core::option::Option<T>::map_or(0LL, 0LL);
      core::sync::atomic::atomic_store(v21, v22, 0LL);
      v20 = v25;
      if ( _InterlockedExchange((volatile __int32 *)(v25 + 8), 0) == 2 )
        goto LABEL_63;
    }
  }
  else
  {
LABEL_57:
    v17 = v25;
    v18 = (*(_DWORD *)(v25 + 12))-- == 1;
    if ( v18 )
    {
      v19 = core::option::Option<T>::map_or(0LL, 0LL);
      core::sync::atomic::atomic_store(v17, v19, 0LL);
      v20 = v25;
      if ( _InterlockedExchange((volatile __int32 *)(v25 + 8), 0) == 2 )
LABEL_63:
        std::sys::sync::mutex::futex::Mutex::wake(v20 + 8);
    }
  }
  return v7;
}
