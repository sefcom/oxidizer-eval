__int64 __fastcall uu_base32::base_common::format_read_error(__int64 a1, char a2)
{
  __int64 v2; // r15
  __int64 v3; // rbx
  __int64 v4; // rax
  char *v5; // r14
  char *v6; // r13
  char v7; // si
  __int64 v8; // rcx
  unsigned int v9; // r15d
  __int64 v10; // rbx
  size_t v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rbx
  char v15; // [rsp+7h] [rbp-D1h] BYREF
  __int64 v16; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+10h] [rbp-C8h]
  __int64 v18; // [rsp+18h] [rbp-C0h]
  _QWORD src[2]; // [rsp+20h] [rbp-B8h] BYREF
  char *v20; // [rsp+30h] [rbp-A8h]
  char *v21; // [rsp+38h] [rbp-A0h]
  __int64 v22; // [rsp+40h] [rbp-98h]
  _QWORD *v23; // [rsp+48h] [rbp-90h] BYREF
  int v24; // [rsp+50h] [rbp-88h]
  char **v25; // [rsp+58h] [rbp-80h] BYREF
  __int64 v26; // [rsp+60h] [rbp-78h]
  _QWORD *v27; // [rsp+68h] [rbp-70h]
  __int64 v28; // [rsp+70h] [rbp-68h]
  __int64 *v29; // [rsp+78h] [rbp-60h]
  __int64 (__fastcall **v30)(); // [rsp+80h] [rbp-58h]
  __int64 v31; // [rsp+88h] [rbp-50h]
  char v32; // [rsp+90h] [rbp-48h]
  __int64 v33; // [rsp+98h] [rbp-40h]
  char *v34; // [rsp+A0h] [rbp-38h]

  v15 = a2;
  v16 = 0LL;
  v17 = 1LL;
  v18 = 0LL;
  v31 = 32LL;
  v32 = 3;
  v25 = 0LL;
  v27 = 0LL;
  v29 = &v16;
  v30 = &off_1018E0;
  if ( (unsigned __int8)<std::io::error::ErrorKind as core::fmt::Display>::fmt(&v15, &v25) )
    core::result::unwrap_failed(aADisplayImplem_0, 55LL, src, &unk_101928, &off_101910);
  v33 = a1;
  v22 = v16;
  v21 = (char *)v17;
  v2 = v18;
  if ( v18 )
  {
    if ( v18 < 0 )
    {
      v3 = 0LL;
    }
    else
    {
      v3 = 1LL;
      v4 = _rust_alloc(v18, 1LL);
      if ( v4 )
      {
        v16 = v2;
        v17 = v4;
        v18 = 0LL;
        v5 = v21;
        v34 = &v21[v2];
        v6 = 0LL;
        while ( 1 )
        {
          v7 = *v5;
          if ( *v5 < 0 )
          {
            if ( (unsigned __int8)v7 <= 0xDFu )
            {
              v20 = v5 + 2;
              if ( !v6 )
                goto LABEL_18;
            }
            else if ( (unsigned __int8)v7 < 0xF0u )
            {
              v20 = v5 + 3;
              if ( !v6 )
              {
LABEL_18:
                core::unicode::unicode_data::conversions::to_upper(&v23);
                v8 = 2LL - (HIDWORD(v23) == 0);
                if ( v24 )
                  v8 = 3LL;
                v25 = 0LL;
                v26 = v8;
                LODWORD(v28) = v24;
                v27 = v23;
                while ( 1 )
                {
                  v9 = <core::char::ToUppercase as core::iter::traits::iterator::Iterator>::next(&v25);
                  if ( v9 == 1114112 )
                    break;
                  if ( v9 >= 0x80 )
                  {
                    LODWORD(src[0]) = 0;
                    if ( v9 >= 0x800 )
                    {
                      if ( v9 >= (unsigned int)&unk_10000 )
                      {
                        LOBYTE(src[0]) = (v9 >> 18) | 0xF0;
                        BYTE1(src[0]) = (v9 >> 12) & 0x3F | 0x80;
                        BYTE2(src[0]) = (v9 >> 6) & 0x3F | 0x80;
                        BYTE3(src[0]) = v9 & 0x3F | 0x80;
                        v11 = 4LL;
                      }
                      else
                      {
                        LOBYTE(src[0]) = (v9 >> 12) | 0xE0;
                        BYTE1(src[0]) = (v9 >> 6) & 0x3F | 0x80;
                        BYTE2(src[0]) = v9 & 0x3F | 0x80;
                        v11 = 3LL;
                      }
                    }
                    else
                    {
                      LOBYTE(src[0]) = (v9 >> 6) | 0xC0;
                      BYTE1(src[0]) = v9 & 0x3F | 0x80;
                      v11 = 2LL;
                    }
                    v12 = v18;
                    if ( v16 - v18 < v11 )
                    {
                      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v16, v18, v11);
                      v12 = v18;
                    }
                    memcpy((void *)(v17 + v12), src, v11);
                    v18 += v11;
                  }
                  else
                  {
                    v10 = v18;
                    if ( v18 == v16 )
                      alloc::raw_vec::RawVec<T,A>::grow_one(&v16);
                    *(_BYTE *)(v17 + v10) = v9;
                    v18 = v10 + 1;
                  }
                }
                goto LABEL_7;
              }
            }
            else
            {
              v20 = v5 + 4;
              if ( !v6 )
                goto LABEL_18;
            }
          }
          else
          {
            v20 = v5 + 1;
            if ( !v6 )
              goto LABEL_18;
          }
          alloc::string::String::push(&v16);
LABEL_7:
          v6 = &v20[v6 - v5];
          v5 = v20;
          if ( v20 == v34 )
            goto LABEL_35;
        }
      }
    }
    alloc::raw_vec::handle_error(v3, v2);
  }
  v16 = 0LL;
  v17 = 1LL;
  v18 = 0LL;
LABEL_35:
  src[0] = &v16;
  src[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v25 = &off_101C80;
  v26 = 1LL;
  v29 = 0LL;
  v27 = src;
  v28 = 1LL;
  v13 = v33;
  alloc::fmt::format::format_inner(v33, &v25);
  if ( v16 )
    _rust_dealloc(v17, v16, 1LL);
  if ( v22 )
    _rust_dealloc(v21, v22, 1LL);
  return v13;
}
