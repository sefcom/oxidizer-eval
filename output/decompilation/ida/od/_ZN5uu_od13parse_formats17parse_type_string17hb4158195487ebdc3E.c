__int64 __fastcall uu_od::parse_formats::parse_type_string(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx
  int v4; // ebp
  char v5; // al
  __int64 v6; // rcx
  unsigned __int8 v7; // r12
  unsigned __int64 v8; // r14
  int code_point; // eax
  int v10; // edx
  int v11; // edx
  int v12; // eax
  int v13; // edx
  char v14; // al
  unsigned __int8 v15; // dl
  __int64 v16; // rax
  int v17; // eax
  int v18; // edx
  char v19; // r14
  __int64 result; // rax
  __int64 v21; // rcx
  __int128 v22; // xmm0
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rdi
  unsigned __int8 v28; // [rsp+3h] [rbp-135h] BYREF
  int v29; // [rsp+4h] [rbp-134h] BYREF
  __int64 v30; // [rsp+8h] [rbp-130h]
  __int64 v31; // [rsp+10h] [rbp-128h]
  __int64 v32; // [rsp+18h] [rbp-120h]
  __int128 v33; // [rsp+20h] [rbp-118h] BYREF
  __int64 v34; // [rsp+30h] [rbp-108h]
  __int64 v35; // [rsp+38h] [rbp-100h] BYREF
  __int128 v36; // [rsp+40h] [rbp-F8h]
  __int64 v37; // [rsp+50h] [rbp-E8h]
  char v38; // [rsp+58h] [rbp-E0h]
  __int128 v39; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+70h] [rbp-C8h]
  int *v41; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+80h] [rbp-B8h]
  __int64 v43; // [rsp+88h] [rbp-B0h]
  _QWORD v44[2]; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-98h]
  __int64 v46; // [rsp+B0h] [rbp-88h]
  _QWORD v47[3]; // [rsp+C0h] [rbp-78h]
  _QWORD v48[3]; // [rsp+D8h] [rbp-60h] BYREF
  _QWORD v49[9]; // [rsp+F0h] [rbp-48h] BYREF

  v30 = a1;
  *(_QWORD *)&v39 = 0LL;
  *((_QWORD *)&v39 + 1) = 8LL;
  v40 = 0LL;
  v32 = a3;
  v31 = a2;
  v44[0] = a2;
  v44[1] = a2 + a3;
  if ( !(unsigned int)core::str::validations::next_code_point(v44) || (v4 = v3, v3 == 1114112) )
  {
LABEL_37:
    result = v40;
    v21 = v30;
    *(_QWORD *)(v30 + 24) = v40;
    *(_OWORD *)(v21 + 8) = v39;
    *(_QWORD *)v21 = 0LL;
    return result;
  }
  while ( 2 )
  {
    v29 = v4;
    switch ( v4 )
    {
      case 'a':
        v5 = 0;
        goto LABEL_13;
      case 'c':
        v5 = 1;
        goto LABEL_13;
      case 'd':
        v5 = 2;
        goto LABEL_13;
      case 'f':
        v5 = 6;
        goto LABEL_13;
      case 'o':
        v5 = 3;
        goto LABEL_13;
      case 'u':
        v5 = 4;
        goto LABEL_13;
      case 'x':
        v5 = 5;
LABEL_13:
        v41 = &v29;
        v42 = v31;
        v43 = v32;
        goto LABEL_14;
      default:
        v41 = &v29;
        v42 = v31;
        v43 = v32;
        uu_od::parse_formats::parse_type_string::{{closure}}(&v35, &v41);
        v6 = v35;
        v5 = v36;
        *(_QWORD *)&v33 = *(_QWORD *)((char *)&v36 + 1);
        *(_QWORD *)((char *)&v33 + 7) = *((_QWORD *)&v36 + 1);
        if ( v35 != 0x8000000000000000LL )
        {
          v26 = v33;
          v27 = v30;
          *(_QWORD *)(v30 + 24) = *(_QWORD *)((char *)&v33 + 7);
          *(_QWORD *)(v27 + 17) = v26;
          *(_QWORD *)(v27 + 8) = v6;
          *(_BYTE *)(v27 + 16) = v5;
          *(_QWORD *)v27 = 1LL;
          return core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(&v39);
        }
LABEL_14:
        v7 = v5;
        v8 = 0x2010101010000uLL >> (8 * v5);
        code_point = core::str::validations::next_code_point(v44);
        v4 = v10;
        if ( !code_point )
          v4 = 1114112;
        v28 = 0;
        if ( uu_od::parse_formats::is_format_size_char(v4, v8, (char *)&v28) )
        {
          if ( !(unsigned int)core::str::validations::next_code_point(v44) )
          {
            v19 = 0;
            v4 = 1114112;
            goto LABEL_35;
          }
          v4 = v11;
LABEL_29:
          if ( v4 == 122 )
          {
            v17 = core::str::validations::next_code_point(v44);
            v4 = v18;
            if ( !v17 )
              v4 = 1114112;
            v19 = 1;
          }
          else
          {
            v19 = 0;
          }
LABEL_35:
          uu_od::parse_formats::od_format_type(&v35, v7, v28);
          if ( v35 == 3 )
          {
            v49[1] = v31;
            v49[2] = v32;
            v49[0] = &v28;
            uu_od::parse_formats::parse_type_string::{{closure}}(&v33, v49);
            v22 = v33;
            v45 = v33;
            v46 = v34;
            v23 = v30;
            *(_QWORD *)(v30 + 24) = v34;
            *(_OWORD *)(v23 + 8) = v22;
            *(_QWORD *)v23 = 1LL;
            return core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(&v39);
          }
          v45 = v36;
          v46 = v37;
          v38 = v19;
          alloc::vec::Vec<T,A>::push(&v39, &v35);
          if ( v4 == 1114112 )
            goto LABEL_37;
          continue;
        }
        *(_QWORD *)&v33 = 0LL;
        *((_QWORD *)&v33 + 1) = 1LL;
        v34 = 0LL;
        while ( (unsigned __int8)uu_od::parse_formats::is_format_size_decimal(v4, v8, (__int64)&v33) )
        {
          v12 = core::str::validations::next_code_point(v44);
          v4 = v13;
          if ( !v12 )
            v4 = 1114112;
        }
        if ( !v34 )
          goto LABEL_28;
        v14 = core::num::<impl core::str::traits::FromStr for u8>::from_str(*((_QWORD *)&v33 + 1));
        v48[0] = &v33;
        v48[1] = v31;
        v48[2] = v32;
        if ( (v14 & 1) == 0
          || (uu_od::parse_formats::parse_type_string::{{closure}}(&v35, v48),
              v16 = v35,
              v15 = v36,
              v47[0] = *(_QWORD *)((char *)&v36 + 1),
              *(_QWORD *)((char *)v47 + 7) = *((_QWORD *)&v36 + 1),
              v35 == 0x8000000000000000LL) )
        {
          v28 = v15;
LABEL_28:
          core::ptr::drop_in_place<alloc::string::String>(&v33);
          goto LABEL_29;
        }
        v24 = v47[0];
        v25 = v30;
        *(_QWORD *)(v30 + 24) = *(_QWORD *)((char *)v47 + 7);
        *(_QWORD *)(v25 + 17) = v24;
        *(_QWORD *)(v25 + 8) = v16;
        *(_BYTE *)(v25 + 16) = v15;
        *(_QWORD *)v25 = 1LL;
        core::ptr::drop_in_place<alloc::string::String>(&v33);
        return core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(&v39);
    }
  }
}
