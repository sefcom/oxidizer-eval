__int64 __fastcall uu_od::parse_formats::parse_type_string(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 code_point; // al
  unsigned int v4; // edx
  unsigned int v5; // ebp
  char v6; // al
  __int64 v7; // rcx
  unsigned __int8 v8; // r14
  unsigned __int64 v9; // r15
  char v10; // al
  unsigned int v11; // edx
  unsigned int v12; // edx
  char v13; // al
  unsigned int v14; // edx
  char v15; // al
  unsigned __int8 v16; // dl
  __int64 v17; // rax
  char v18; // al
  unsigned int v19; // edx
  char v20; // r15
  __int64 result; // rax
  __int64 v22; // rcx
  __int128 v23; // xmm0
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rdi
  unsigned __int8 v29; // [rsp+3h] [rbp-135h] BYREF
  unsigned int v30; // [rsp+4h] [rbp-134h] BYREF
  __int64 v31; // [rsp+8h] [rbp-130h]
  __int64 v32; // [rsp+10h] [rbp-128h]
  __int64 v33; // [rsp+18h] [rbp-120h]
  __int128 v34; // [rsp+20h] [rbp-118h] BYREF
  __int64 v35; // [rsp+30h] [rbp-108h]
  __int128 v36; // [rsp+38h] [rbp-100h] BYREF
  __int64 v37; // [rsp+48h] [rbp-F0h]
  __int64 v38; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v39; // [rsp+58h] [rbp-E0h]
  __int64 v40; // [rsp+68h] [rbp-D0h]
  char v41; // [rsp+70h] [rbp-C8h]
  __int64 v42; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+80h] [rbp-B8h]
  unsigned int *v44; // [rsp+88h] [rbp-B0h]
  _QWORD v45[2]; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v46; // [rsp+A0h] [rbp-98h]
  __int64 v47; // [rsp+B0h] [rbp-88h]
  _QWORD v48[3]; // [rsp+C0h] [rbp-78h]
  _QWORD v49[3]; // [rsp+D8h] [rbp-60h] BYREF
  _QWORD v50[9]; // [rsp+F0h] [rbp-48h] BYREF

  v31 = a1;
  *(_QWORD *)&v36 = 0LL;
  *((_QWORD *)&v36 + 1) = 8LL;
  v37 = 0LL;
  v32 = a3;
  v33 = a2;
  v45[0] = a2;
  v45[1] = a2 + a3;
  code_point = core::str::validations::next_code_point(v45);
  if ( (code_point & (v4 != 1114112)) != 1 )
  {
LABEL_37:
    result = v37;
    v22 = v31;
    *(_QWORD *)(v31 + 24) = v37;
    *(_OWORD *)(v22 + 8) = v36;
    *(_QWORD *)v22 = 0LL;
    return result;
  }
  v5 = v4;
  while ( 2 )
  {
    v30 = v5;
    switch ( v5 )
    {
      case 'a':
        v6 = 0;
        goto LABEL_13;
      case 'c':
        v6 = 1;
        goto LABEL_13;
      case 'd':
        v6 = 2;
        goto LABEL_13;
      case 'f':
        v6 = 6;
        goto LABEL_13;
      case 'o':
        v6 = 3;
        goto LABEL_13;
      case 'u':
        v6 = 4;
        goto LABEL_13;
      case 'x':
        v6 = 5;
LABEL_13:
        v42 = v33;
        v43 = v32;
        v44 = &v30;
        goto LABEL_14;
      default:
        v42 = v33;
        v43 = v32;
        v44 = &v30;
        uu_od::parse_formats::parse_type_string::{{closure}}(&v38, &v42);
        v7 = v38;
        v6 = v39;
        *(_QWORD *)&v34 = *(_QWORD *)((char *)&v39 + 1);
        *(_QWORD *)((char *)&v34 + 7) = *((_QWORD *)&v39 + 1);
        if ( v38 != 0x8000000000000000LL )
        {
          v27 = v34;
          v28 = v31;
          *(_QWORD *)(v31 + 24) = *(_QWORD *)((char *)&v34 + 7);
          *(_QWORD *)(v28 + 17) = v27;
          *(_QWORD *)(v28 + 8) = v7;
          *(_BYTE *)(v28 + 16) = v6;
          *(_QWORD *)v28 = 1LL;
          return core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(
                   v36,
                   *((_QWORD *)&v36 + 1));
        }
LABEL_14:
        v8 = v6;
        v9 = 0x2010101010000uLL >> (8 * v6);
        v10 = core::str::validations::next_code_point(v45);
        v5 = v11;
        if ( (v10 & 1) == 0 )
          v5 = 1114112;
        v29 = 0;
        if ( uu_od::parse_formats::is_format_size_char(v5, v9, (char *)&v29) )
        {
          if ( (core::str::validations::next_code_point(v45) & 1) == 0 )
          {
            v5 = 1114112;
LABEL_34:
            v20 = 0;
            goto LABEL_35;
          }
          v5 = v12;
          if ( v12 != 122 )
            goto LABEL_34;
LABEL_30:
          v18 = core::str::validations::next_code_point(v45);
          v5 = v19;
          if ( (v18 & 1) == 0 )
            v5 = 1114112;
          v20 = 1;
LABEL_35:
          uu_od::parse_formats::od_format_type(&v38, v8, v29);
          if ( v38 == 3 )
          {
            v50[1] = v32;
            v50[2] = &v29;
            v50[0] = v33;
            uu_od::parse_formats::parse_type_string::{{closure}}(&v34, v50);
            v23 = v34;
            v46 = v34;
            v47 = v35;
            v24 = v31;
            *(_QWORD *)(v31 + 24) = v35;
            *(_OWORD *)(v24 + 8) = v23;
            *(_QWORD *)v24 = 1LL;
            return core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(
                     v36,
                     *((_QWORD *)&v36 + 1));
          }
          v46 = v39;
          v47 = v40;
          v41 = v20;
          alloc::vec::Vec<T,A>::push(&v36, &v38, &off_102608);
          if ( v5 == 1114112 )
            goto LABEL_37;
          continue;
        }
        *(_QWORD *)&v34 = 0LL;
        *((_QWORD *)&v34 + 1) = 1LL;
        v35 = 0LL;
        while ( (unsigned __int8)uu_od::parse_formats::is_format_size_decimal(v5, v9, (__int64)&v34) )
        {
          v13 = core::str::validations::next_code_point(v45);
          v5 = v14;
          if ( (v13 & 1) == 0 )
            v5 = 1114112;
        }
        if ( !v35 )
        {
LABEL_29:
          core::ptr::drop_in_place<alloc::string::String>(&v34);
          if ( v5 != 122 )
            goto LABEL_34;
          goto LABEL_30;
        }
        v15 = core::num::<impl u8>::from_ascii_radix(*((_QWORD *)&v34 + 1));
        v49[0] = &v34;
        v49[1] = v33;
        v49[2] = v32;
        if ( (v15 & 1) == 0
          || (uu_od::parse_formats::parse_type_string::{{closure}}(&v38, v49),
              v17 = v38,
              v16 = v39,
              v48[0] = *(_QWORD *)((char *)&v39 + 1),
              *(_QWORD *)((char *)v48 + 7) = *((_QWORD *)&v39 + 1),
              v38 == 0x8000000000000000LL) )
        {
          v29 = v16;
          goto LABEL_29;
        }
        v25 = v48[0];
        v26 = v31;
        *(_QWORD *)(v31 + 24) = *(_QWORD *)((char *)v48 + 7);
        *(_QWORD *)(v26 + 17) = v25;
        *(_QWORD *)(v26 + 8) = v17;
        *(_BYTE *)(v26 + 16) = v16;
        *(_QWORD *)v26 = 1LL;
        core::ptr::drop_in_place<alloc::string::String>(&v34);
        return core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(
                 v36,
                 *((_QWORD *)&v36 + 1));
    }
  }
}