__int64 __fastcall uu_head::parse::process_num_block(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int64 v5; // r13
  _QWORD *v8; // rbx
  __int64 result; // rax
  char v10; // r14
  __int64 v11; // rbp
  int v12; // edx
  int v13; // edx
  __int64 v14; // rax
  int v15; // edx
  char v16; // bl
  unsigned __int128 v17; // rax
  char v18; // [rsp+Ch] [rbp-FCh]
  __int128 v19; // [rsp+10h] [rbp-F8h] BYREF
  __int128 *v20; // [rsp+20h] [rbp-E8h]
  __int64 v21; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+30h] [rbp-D8h]
  __int64 v23; // [rsp+38h] [rbp-D0h]
  __int128 v24; // [rsp+40h] [rbp-C8h] BYREF
  __int128 *v25; // [rsp+50h] [rbp-B8h]
  __int64 v26; // [rsp+58h] [rbp-B0h]
  __int64 v27; // [rsp+60h] [rbp-A8h]
  _QWORD *v28; // [rsp+70h] [rbp-98h]
  unsigned __int64 v29; // [rsp+78h] [rbp-90h]
  __int64 v30; // [rsp+80h] [rbp-88h]
  unsigned __int64 v31; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v32; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v33[8]; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v34; // [rsp+A0h] [rbp-68h]
  __int128 v35; // [rsp+A8h] [rbp-60h] BYREF
  __int128 *v36; // [rsp+B8h] [rbp-50h]
  __int128 v37; // [rsp+C0h] [rbp-48h] BYREF
  __int128 *v38; // [rsp+D0h] [rbp-38h]

  v8 = (_QWORD *)a1;
  result = core::num::<impl core::str::traits::FromStr for usize>::from_str(v33);
  if ( v33[0] )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_BYTE *)(a1 + 16) = 1;
LABEL_30:
    *v8 = 1LL;
    return result;
  }
  v28 = (_QWORD *)a1;
  v29 = v34;
  v31 = v34;
  v18 = 0;
  v10 = 0;
  v11 = 0LL;
  v30 = 0LL;
  while ( 2 )
  {
    switch ( a4 )
    {
      case 'b':
        v5 = 512LL;
        goto LABEL_5;
      case 'c':
        v11 = 1LL;
        v5 = 1LL;
        goto LABEL_6;
      case 'd':
      case 'e':
      case 'f':
      case 'g':
      case 'h':
      case 'i':
      case 'j':
      case 'l':
      case 'n':
      case 'o':
      case 'p':
      case 'r':
      case 's':
      case 't':
      case 'u':
      case 'w':
      case 'x':
      case 'y':
        goto LABEL_31;
      case 'k':
        v5 = 1024LL;
        goto LABEL_5;
      case 'm':
        v5 = (unsigned __int64)clap_builder::parser::validator::Conflicts::with_args::{{closure}};
LABEL_5:
        v11 = 1LL;
        goto LABEL_6;
      case 'q':
        v14 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a5);
        a4 = v15;
        LOBYTE(v14) = 1;
        v18 = 0;
        if ( v15 != (_DWORD)&loc_110000 )
          goto LABEL_17;
        v21 = 0LL;
        v22 = 8LL;
        v23 = 0LL;
        v16 = 0;
        goto LABEL_19;
      case 'v':
        <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a5);
        a4 = v13;
        v18 = 1;
        v14 = 0LL;
        if ( v13 == (_DWORD)&loc_110000 )
        {
          v21 = 0LL;
          v22 = 8LL;
          v23 = 0LL;
          goto LABEL_21;
        }
LABEL_17:
        v30 = v14;
        continue;
      case 'z':
        v10 = 1;
        goto LABEL_6;
      default:
        if ( !a4 )
        {
LABEL_6:
          <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a5);
          a4 = v12;
          if ( v12 == (_DWORD)&loc_110000 )
          {
            v21 = 0LL;
            v22 = 8LL;
            v23 = 0LL;
            v16 = v18;
            if ( (_BYTE)v30 )
            {
LABEL_19:
              std::sys::os_str::bytes::Slice::to_owned(&v24, aQ, 2LL);
              v20 = v25;
              v19 = v24;
              alloc::vec::Vec<T,A>::push(&v21, &v19);
            }
            if ( (v16 & 1) != 0 )
            {
LABEL_21:
              std::sys::os_str::bytes::Slice::to_owned(&v24, aV, 2LL);
              v20 = v25;
              v19 = v24;
              alloc::vec::Vec<T,A>::push(&v21, &v19);
            }
            if ( (v10 & 1) != 0 )
            {
              std::sys::os_str::bytes::Slice::to_owned(&v24, aZ, 2LL);
              v20 = v25;
              v19 = v24;
              alloc::vec::Vec<T,A>::push(&v21, &v19);
            }
            if ( v11 == 1 )
            {
              std::sys::os_str::bytes::Slice::to_owned(&v24, aC, 2LL);
              v20 = v25;
              v19 = v24;
              alloc::vec::Vec<T,A>::push(&v21, &v19);
              v17 = v5 * (unsigned __int128)v29;
              if ( !is_mul_ok(v5, v29) )
              {
                *(_QWORD *)&v17 = v28;
                v28[1] = 0LL;
                *(_BYTE *)(v17 + 16) = 1;
                *(_QWORD *)v17 = 1LL;
                return core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(
                         &v21,
                         &v19,
                         *((_QWORD *)&v17 + 1));
              }
              v32 = v5 * v29;
              *(_QWORD *)&v19 = &v32;
              *((_QWORD *)&v19 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
              *(_QWORD *)&v24 = &xmmword_15290;
              *((_QWORD *)&v24 + 1) = 1LL;
              v27 = 0LL;
              v25 = &v19;
              v26 = 1LL;
              core::option::Option<T>::map_or_else(&v35, &v24);
              v24 = v35;
              v25 = v36;
              alloc::vec::Vec<T,A>::push(&v21, &v24);
            }
            else
            {
              std::sys::os_str::bytes::Slice::to_owned(&v24, aN, 2LL);
              v20 = v25;
              v19 = v24;
              alloc::vec::Vec<T,A>::push(&v21, &v19);
              *(_QWORD *)&v19 = &v31;
              *((_QWORD *)&v19 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
              *(_QWORD *)&v24 = &xmmword_15290;
              *((_QWORD *)&v24 + 1) = 1LL;
              v27 = 0LL;
              v25 = &v19;
              v26 = 1LL;
              core::option::Option<T>::map_or_else(&v37, &v24);
              v24 = v37;
              v25 = v38;
              alloc::vec::Vec<T,A>::push(&v21, &v24);
            }
            v8 = v28;
            result = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v28 + 1, &v21);
            goto LABEL_30;
          }
          continue;
        }
LABEL_31:
        result = (__int64)v28;
        v28[1] = 0LL;
        *(_BYTE *)(result + 16) = 0;
        *(_QWORD *)result = 1LL;
        return result;
    }
  }
}
