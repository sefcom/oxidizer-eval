        _BYTE *a4)
{
  int v5; // edx
  unsigned __int64 v6; // rax
  __int128 v7; // xmm0
  char v9; // [rsp+4h] [rbp-1A4h]
  int v10; // [rsp+8h] [rbp-1A0h] BYREF
  int v11; // [rsp+Ch] [rbp-19Ch] BYREF
  char **v12; // [rsp+10h] [rbp-198h] BYREF
  __int128 v13; // [rsp+18h] [rbp-190h]
  __int64 v14; // [rsp+28h] [rbp-180h]
  __int64 v15; // [rsp+30h] [rbp-178h]
  _QWORD v16[2]; // [rsp+40h] [rbp-168h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-158h] BYREF
  _QWORD v18[4]; // [rsp+60h] [rbp-148h] BYREF
  __int128 v19; // [rsp+80h] [rbp-128h]
  __int128 v20; // [rsp+90h] [rbp-118h]
  __int128 v21; // [rsp+A0h] [rbp-108h]
  __int64 v22; // [rsp+B8h] [rbp-F0h] BYREF
  __int128 v23; // [rsp+C0h] [rbp-E8h]
  __int64 v24; // [rsp+D0h] [rbp-D8h] BYREF
  __int128 v25; // [rsp+D8h] [rbp-D0h]
  __int64 v26; // [rsp+E8h] [rbp-C0h] BYREF
  __int128 v27; // [rsp+F0h] [rbp-B8h]
  __int64 v28; // [rsp+100h] [rbp-A8h] BYREF
  __int128 v29; // [rsp+108h] [rbp-A0h]
  __int64 v30; // [rsp+118h] [rbp-90h] BYREF
  __int128 v31; // [rsp+120h] [rbp-88h]
  __int64 v32; // [rsp+130h] [rbp-78h] BYREF
  __int128 v33; // [rsp+138h] [rbp-70h]
  __int128 v34; // [rsp+148h] [rbp-60h] BYREF
  __int64 v35; // [rsp+158h] [rbp-50h]
  __int64 v36; // [rsp+160h] [rbp-48h] BYREF
  __int128 v37; // [rsp+168h] [rbp-40h]

  v16[0] = a2;
  v16[1] = a2 + a3;
  if ( !(unsigned int)core::str::validations::next_code_point(v16) )
  {
    v9 = 0;
LABEL_27:
    *(_BYTE *)(a1 + 8) = v9;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return a1;
  }
  v9 = 0;
  while ( 2 )
  {
    if ( (v5 ^ 0xD800u) - 2048 >= (unsigned int)&loc_10F800 )
      core::panicking::panic_nounwind(anon_106514630be1c9ef1de9e84b8238e531_0_llvm_16179947721019886102, 57LL);
    switch ( v5 )
    {
      case 'M':
        uu_sort::KeySettings::set_sort_mode((__int64)&v22, a4, 3u);
        if ( v22 == 0x8000000000000000LL )
          goto LABEL_4;
        *(_QWORD *)a1 = v22;
        v7 = v23;
        goto LABEL_32;
      case 'N':
      case 'O':
      case 'P':
      case 'Q':
      case 'S':
      case 'T':
      case 'U':
      case 'W':
      case 'X':
      case 'Y':
      case 'Z':
      case '[':
      case '\\':
      case ']':
      case '^':
      case '_':
      case '`':
      case 'a':
      case 'c':
      case 'e':
      case 'j':
      case 'k':
      case 'l':
      case 'm':
      case 'o':
      case 'p':
      case 'q':
        goto LABEL_29;
      case 'R':
        uu_sort::KeySettings::set_sort_mode((__int64)&v30, a4, 5u);
        if ( v30 == 0x8000000000000000LL )
          goto LABEL_4;
        *(_QWORD *)a1 = v30;
        v7 = v31;
        goto LABEL_32;
      case 'V':
        uu_sort::KeySettings::set_sort_mode((__int64)&v32, a4, 4u);
        if ( v32 == 0x8000000000000000LL )
          goto LABEL_4;
        *(_QWORD *)a1 = v32;
        v7 = v33;
        goto LABEL_32;
      case 'b':
        v9 = 1;
        goto LABEL_4;
      case 'd':
        v6 = (unsigned __int8)a4[5];
        if ( v6 >= 4 )
          goto LABEL_16;
        v11 = *((_DWORD *)&unk_28900 + v6);
        v18[0] = "d";
        v18[1] = <char as core::fmt::Display>::fmt;
        v18[2] = &v11;
        v18[3] = <char as core::fmt::Display>::fmt;
        v12 = &off_1D2B70;
        *(_QWORD *)&v13 = 3LL;
        *((_QWORD *)&v13 + 1) = v18;
        v14 = 2LL;
        v15 = 0LL;
        alloc::fmt::format::format_inner(&v36, &v12);
        v21 = v37;
        if ( v36 == 0x8000000000000000LL )
        {
LABEL_16:
          a4[2] = 1;
LABEL_4:
          if ( !(unsigned int)core::str::validations::next_code_point(v16) )
            goto LABEL_27;
          continue;
        }
        v19 = v21;
        *(_QWORD *)a1 = v36;
        v7 = v19;
LABEL_32:
        *(_OWORD *)(a1 + 8) = v7;
        return a1;
      case 'f':
        a4[1] = 1;
        goto LABEL_4;
      case 'g':
        uu_sort::KeySettings::set_sort_mode((__int64)&v24, a4, 2u);
        if ( v24 == 0x8000000000000000LL )
          goto LABEL_4;
        *(_QWORD *)a1 = v24;
        v7 = v25;
        goto LABEL_32;
      case 'h':
        uu_sort::KeySettings::set_sort_mode((__int64)&v26, a4, 1u);
        if ( v26 == 0x8000000000000000LL )
          goto LABEL_4;
        *(_QWORD *)a1 = v26;
        v7 = v27;
        goto LABEL_32;
      case 'i':
        uu_sort::KeySettings::check_compatibility(&v12, a4[5], 1, a4[2] & 1);
        if ( v12 != (char **)0x8000000000000000LL )
        {
          v20 = v13;
          *(_QWORD *)a1 = v12;
          v7 = v20;
          goto LABEL_32;
        }
        a4[3] = 1;
        goto LABEL_4;
      case 'n':
        uu_sort::KeySettings::set_sort_mode((__int64)&v28, a4, 0);
        if ( v28 == 0x8000000000000000LL )
          goto LABEL_4;
        *(_QWORD *)a1 = v28;
        v7 = v29;
        goto LABEL_32;
      case 'r':
        a4[4] = 1;
        goto LABEL_4;
      default:
        if ( v5 == 1114112 )
          goto LABEL_27;
LABEL_29:
        v10 = v5;
        v17[0] = &v10;
        v17[1] = <char as core::fmt::Display>::fmt;
        v12 = &off_1D2EA8;
        *(_QWORD *)&v13 = 2LL;
        *((_QWORD *)&v13 + 1) = v17;
        v14 = 1LL;
        v15 = 0LL;
        alloc::fmt::format::format_inner(&v34, &v12);
        *(_QWORD *)(a1 + 16) = v35;
        *(_OWORD *)a1 = v34;
        return a1;
    }
  }
}
