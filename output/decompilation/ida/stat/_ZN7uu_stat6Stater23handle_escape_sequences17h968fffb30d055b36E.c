__int64 __fastcall uu_stat::Stater::handle_escape_sequences(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  __int64 result; // rax
  __int64 (__fastcall *v11)(); // rdx
  char v12; // bp
  unsigned int v13; // r13d
  unsigned __int64 v14; // r12
  char v15; // dl
  bool v16; // cf
  unsigned __int64 v17; // r12
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 (__fastcall *v22)(); // rdx
  __int64 (__fastcall *v23)(); // rdx
  __int64 (__fastcall *v24)(); // rdx
  char **v25; // [rsp+0h] [rbp-98h] BYREF
  __int64 v26; // [rsp+8h] [rbp-90h]
  int **v27; // [rsp+10h] [rbp-88h]
  __int128 v28; // [rsp+18h] [rbp-80h]
  int *v29; // [rsp+30h] [rbp-68h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+38h] [rbp-60h]
  int **v31; // [rsp+40h] [rbp-58h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+48h] [rbp-50h]
  int v33; // [rsp+54h] [rbp-44h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-40h]
  __int64 v35; // [rsp+60h] [rbp-38h]

  v7 = *a4;
  v8 = *a4 + 1;
  *a4 = v8;
  if ( v8 >= a5 )
  {
    v29 = (int *)uucore::util_name();
    v30 = v11;
    v31 = &v29;
    v32 = <&T as core::fmt::Display>::fmt;
    v25 = (char **)&unk_119E38;
    v26 = 2LL;
    v27 = (int **)&v31;
    v28 = 1uLL;
    std::io::stdio::_eprint(&v25);
    v25 = &off_119E58;
    v26 = 1LL;
    v27 = (int **)&byte_8;
    v28 = 0LL;
    result = std::io::stdio::_eprint(&v25);
    *(_DWORD *)(a1 + 8) = 92;
    *(_QWORD *)a1 = 3LL;
  }
  else
  {
    if ( v8 >= a3 )
      core::panicking::panic_bounds_check(v8, a3, &off_119EA8);
    result = *(unsigned int *)(a2 + 4 * v7 + 4);
    switch ( (int)result )
    {
      case '"':
        *(_BYTE *)(a1 + 8) = 34;
        *(_QWORD *)a1 = 4LL;
        break;
      case '\'':
        *(_BYTE *)(a1 + 8) = 39;
        *(_QWORD *)a1 = 4LL;
        break;
      case '\\':
        *(_BYTE *)(a1 + 8) = 92;
        *(_QWORD *)a1 = 4LL;
        break;
      case 'a':
        *(_BYTE *)(a1 + 8) = 7;
        *(_QWORD *)a1 = 4LL;
        break;
      case 'b':
        *(_BYTE *)(a1 + 8) = 8;
        *(_QWORD *)a1 = 4LL;
        break;
      case 'f':
        *(_BYTE *)(a1 + 8) = 12;
        *(_QWORD *)a1 = 4LL;
        break;
      case 'n':
        *(_BYTE *)(a1 + 8) = 10;
        *(_QWORD *)a1 = 4LL;
        break;
      case 'r':
        *(_BYTE *)(a1 + 8) = 13;
        *(_QWORD *)a1 = 4LL;
        break;
      case 't':
        *(_BYTE *)(a1 + 8) = 9;
        *(_QWORD *)a1 = 4LL;
        break;
      case 'x':
        v17 = v7 + 2;
        if ( v17 >= a5 )
        {
          v29 = (int *)uucore::util_name();
          v30 = v24;
          v31 = &v29;
          v32 = <&T as core::fmt::Display>::fmt;
          v25 = (char **)&unk_119E38;
          v26 = 2LL;
          v27 = (int **)&v31;
          v28 = 1uLL;
          std::io::stdio::_eprint(&v25);
          v25 = &off_119E78;
          v26 = 1LL;
          v27 = (int **)&byte_8;
          v28 = 0LL;
          result = std::io::stdio::_eprint(&v25);
          *(_BYTE *)(a1 + 8) = 120;
          *(_QWORD *)a1 = 4LL;
        }
        else
        {
          v19 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                  v17,
                  a6,
                  a7);
          if ( !v19 )
            core::str::slice_error_fail(a6, a7, v17, a7, &off_119EC0);
          result = <str as uu_stat::ScanUtil>::scan_char(v19, v20, 16LL);
          if ( (_DWORD)result == (_DWORD)&loc_110000 )
          {
            v29 = (int *)uucore::util_name();
            v30 = v22;
            v31 = &v29;
            v32 = <&T as core::fmt::Display>::fmt;
            v25 = (char **)&unk_119E38;
            v26 = 2LL;
            v27 = (int **)&v31;
            v28 = 1uLL;
            std::io::stdio::_eprint(&v25);
            v25 = &off_119E68;
            v26 = 1LL;
            v27 = (int **)&byte_8;
            v28 = 0LL;
            result = std::io::stdio::_eprint(&v25);
            *(_BYTE *)(a1 + 8) = 120;
          }
          else
          {
            *a4 = v8 + v21;
            *(_BYTE *)(a1 + 8) = result;
          }
          *(_QWORD *)a1 = 4LL;
        }
        break;
      default:
        if ( (result & 0xFFFFFFF8) == 0x30 )
        {
          v35 = a1;
          v12 = 0;
          v13 = 0;
          v34 = a3;
          do
          {
            if ( v8 >= a3 )
              core::panicking::panic_bounds_check(v8, v34, &off_119ED8);
            v14 = a5;
            if ( (core::char::methods::<impl char>::to_digit(*(unsigned int *)(a2 + 4 * v8), 8LL) & 1) == 0 )
              break;
            v12 = 8 * v12 + v15;
            *a4 = ++v8;
            if ( v8 >= v14 )
              break;
            a5 = v14;
            v16 = v13++ < 2;
            a3 = v34;
          }
          while ( v16 );
          *a4 = v8 - 1;
          result = v35;
          *(_BYTE *)(v35 + 8) = v12;
          *(_QWORD *)result = 4LL;
        }
        else
        {
          v33 = *(_DWORD *)(a2 + 4 * v7 + 4);
          v29 = (int *)uucore::util_name();
          v30 = v23;
          v31 = &v29;
          v32 = <&T as core::fmt::Display>::fmt;
          v25 = (char **)&unk_119E38;
          v26 = 2LL;
          v27 = (int **)&v31;
          v28 = 1uLL;
          std::io::stdio::_eprint(&v25);
          v29 = &v33;
          v30 = <char as core::fmt::Display>::fmt;
          v25 = &off_119E88;
          v26 = 2LL;
          v27 = &v29;
          v28 = 1uLL;
          std::io::stdio::_eprint(&v25);
          result = (unsigned __int8)v33;
          *(_BYTE *)(a1 + 8) = v33;
          *(_QWORD *)a1 = 4LL;
        }
        break;
    }
  }
  return result;
}