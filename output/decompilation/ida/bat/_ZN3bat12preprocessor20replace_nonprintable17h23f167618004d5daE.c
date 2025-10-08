__int64 __fastcall bat::preprocessor::replace_nonprintable(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // rax
  char *v7; // rdx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r13
  unsigned int v10; // ebx
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  unsigned __int64 v18; // rbx
  __int64 v19; // rsi
  _QWORD *v20; // rcx
  __int64 result; // rax
  __int64 v22; // [rsp+0h] [rbp-C8h]
  __int64 v23; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+10h] [rbp-B8h]
  __int64 v25; // [rsp+18h] [rbp-B0h]
  __int128 v26; // [rsp+20h] [rbp-A8h] BYREF
  __int128 *v27; // [rsp+30h] [rbp-98h]
  int v28; // [rsp+3Ch] [rbp-8Ch] BYREF
  __int128 v29; // [rsp+40h] [rbp-88h] BYREF
  __int128 *v30; // [rsp+50h] [rbp-78h]
  __int64 v31; // [rsp+58h] [rbp-70h]
  void *v32; // [rsp+60h] [rbp-68h]
  __int64 v33; // [rsp+68h] [rbp-60h]
  _QWORD *v34; // [rsp+70h] [rbp-58h]
  __int64 v35; // [rsp+78h] [rbp-50h]
  char *v36; // [rsp+80h] [rbp-48h]
  unsigned __int64 v37; // [rsp+88h] [rbp-40h]
  __int64 v38; // [rsp+90h] [rbp-38h]

  HIDWORD(v22) = a5;
  v38 = a2;
  v34 = a1;
  v23 = 0LL;
  v24 = 1LL;
  v25 = 0LL;
  v5 = 4LL;
  if ( a4 )
    v5 = a4;
  v37 = v5;
  if ( a3 )
  {
    v7 = &aJ_0[2];
    if ( (_BYTE)a5 )
      v7 = (char *)&unk_80D0C;
    v36 = v7;
    v35 = (__int64)&v7[(unsigned __int8)a5 + 3];
    v8 = 0LL;
    v9 = 0LL;
    do
    {
      v12 = v38 + v8;
      v10 = (unsigned int)bat::preprocessor::try_parse_utf8_char(v38 + v8, a3 - v8);
      if ( v10 == (_DWORD)"   <\\?xml\\s\n    | \\s*<([\\w-]+):Envelope\\s+xmlns:\\1\\s*=\\s*\"http://schemas.xmlsoap.org/soap/envelope/\"\\s*>\n    | \\s*(?i:<!DOCTYPE\\s+(?!html[ \\t\\n\\f>]))\n  )\n)" )
      {
        *(_QWORD *)&v26 = v12;
        *((_QWORD *)&v26 + 1) = core::fmt::num::<impl core::fmt::UpperHex for u8>::fmt;
        *(_QWORD *)&v29 = &off_6CE980;
        *((_QWORD *)&v29 + 1) = 1LL;
        v32 = &unk_1A2C50;
        v33 = 1LL;
        v30 = &v26;
        v31 = 1LL;
        ((void (__fastcall *)(__int64 *, __int128 *, __int64, __int64, __int64, __int64, __int64))<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt)(
          &v23,
          &v29,
          v13,
          v14,
          v15,
          v16,
          v22);
        v17 = 1LL;
        goto LABEL_10;
      }
      v17 = v13;
      if ( v10 == 9 )
      {
        if ( (v37 | v9) >> 32 )
        {
          v18 = v37 - v9 % v37;
          v19 = 8633LL;
          if ( v18 == 1 )
            goto LABEL_28;
LABEL_27:
          alloc::string::String::push(&v23, 9500LL);
          alloc::slice::<impl [T]>::repeat(&v29, asc_1A2C43, 3LL, v18 - 2);
          v27 = v30;
          v26 = v29;
          <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
            &v23,
            *((_QWORD *)&v29 + 1),
            (char *)v30 + *((_QWORD *)&v29 + 1));
          core::ptr::drop_in_place<alloc::string::String>(&v26);
          v19 = 9508LL;
        }
        else
        {
          v18 = v37 - (unsigned int)v9 % (unsigned int)v37;
          v19 = 8633LL;
          if ( v18 != 1 )
            goto LABEL_27;
        }
LABEL_28:
        alloc::string::String::push(&v23, v19);
        goto LABEL_29;
      }
      if ( v10 == 10 )
      {
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v23,
          v36,
          v35);
LABEL_29:
        v9 = 0LL;
        goto LABEL_10;
      }
      ++v9;
      v11 = 183LL;
      if ( v10 != 32 )
      {
        if ( v10 >= 0x20 )
        {
          if ( v10 == 127 )
          {
            v11 = 9249LL;
            if ( !BYTE4(v22) )
            {
              <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
                &v23,
                aJ_0,
                &aJ_0[2]);
              goto LABEL_10;
            }
            goto LABEL_9;
          }
          if ( v10 - 48 >= 0xA
            && (v10 & 0xFFFFFFDF) - 65 >= 0x1A
            && !((unsigned __int8)core::char::methods::<impl char>::is_ascii_punctuation(v10, 183LL) | (v10 - 33 < 0x5E)) )
          {
            core::escape::escape_unicode(&v29, v10);
            DWORD2(v26) = DWORD2(v29);
            *(_QWORD *)&v26 = v29;
            core::iter::traits::iterator::Iterator::collect(&v29, &v26);
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
              &v23,
              *((_QWORD *)&v29 + 1),
              (char *)v30 + *((_QWORD *)&v29 + 1));
            core::ptr::drop_in_place<alloc::string::String>(&v29);
            goto LABEL_10;
          }
        }
        else
        {
          if ( !BYTE4(v22) )
          {
            v28 = v10 | 0x40;
            *(_QWORD *)&v26 = &v28;
            *((_QWORD *)&v26 + 1) = <char as core::fmt::Display>::fmt;
            *(_QWORD *)&v29 = &off_6CE970;
            *((_QWORD *)&v29 + 1) = 1LL;
            v32 = 0LL;
            v30 = &v26;
            v31 = 1LL;
            ((void (__fastcall *)(__int64 *, __int128 *, __int64, __int64, __int64, __int64, __int64))<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt)(
              &v23,
              &v29,
              v13,
              v14,
              v15,
              v16,
              v22);
            goto LABEL_10;
          }
          v10 |= 0x2400u;
        }
        v11 = v10;
      }
LABEL_9:
      alloc::string::String::push(&v23, v11);
LABEL_10:
      v8 += v17;
    }
    while ( v8 < a3 );
  }
  v20 = v34;
  v34[2] = v25;
  *v20 = v23;
  result = v24;
  v20[1] = v24;
  return result;
}