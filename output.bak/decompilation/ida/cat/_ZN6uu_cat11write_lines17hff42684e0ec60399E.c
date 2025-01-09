__int64 __fastcall uu_cat::write_lines(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  __int64 v6; // r15
  __int64 v7; // rcx
  bool v8; // zf
  const char *v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  __int64 v13; // r15
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r13
  unsigned __int64 v20; // rax
  int v21; // ecx
  __int64 *v22; // rcx
  __int64 v23; // rcx
  unsigned __int8 v25; // [rsp+7h] [rbp-7D01h]
  __int64 v26; // [rsp+8h] [rbp-7D00h] BYREF
  __int64 v27; // [rsp+10h] [rbp-7CF8h]
  __int64 i; // [rsp+18h] [rbp-7CF0h]
  int v29; // [rsp+20h] [rbp-7CE8h]
  int v30; // [rsp+24h] [rbp-7CE4h]
  char **v31; // [rsp+28h] [rbp-7CE0h]
  _QWORD v32[2]; // [rsp+30h] [rbp-7CD8h] BYREF
  __int64 v33; // [rsp+40h] [rbp-7CC8h] BYREF
  __int128 v34; // [rsp+48h] [rbp-7CC0h]
  __int64 v35; // [rsp+58h] [rbp-7CB0h]
  __int64 v36; // [rsp+60h] [rbp-7CA8h]
  __int64 v37; // [rsp+68h] [rbp-7CA0h]
  char v38; // [rsp+70h] [rbp-7C98h]
  const char *v39; // [rsp+78h] [rbp-7C90h]
  __int64 v40; // [rsp+80h] [rbp-7C88h]
  _BYTE *v41; // [rsp+88h] [rbp-7C80h]
  __int64 v42; // [rsp+90h] [rbp-7C78h] BYREF
  _QWORD v43[2]; // [rsp+98h] [rbp-7C70h] BYREF
  _QWORD v44[6]; // [rsp+A8h] [rbp-7C60h] BYREF
  _QWORD s[3974]; // [rsp+D8h] [rbp-7C30h] BYREF

  v6 = a2;
  v27 = a1;
  memset(s, 0, 0x7C00uLL);
  v42 = std::io::stdio::stdout();
  v26 = std::io::stdio::Stdout::lock(&v42);
  v25 = a3[4];
  v7 = 0LL;
  v8 = a3[2] == 0;
  v9 = asc_1CE24;
  if ( !a3[2] )
    v9 = asc_1CE0C;
  v39 = v9;
  LOBYTE(v7) = !v8;
  v40 = v7 + 1;
  v31 = &off_118710;
  v30 = a3[1];
  v41 = a3;
  v29 = a3[3];
  for ( i = a2; ; v6 = i )
  {
    v10 = <std::os::unix::net::stream::UnixStream as std::io::Read>::read(v6, s, 31744LL);
    v12 = v11;
    v32[0] = v10;
    v32[1] = v11;
    if ( v10 || !v11 )
      break;
    v13 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v11, s, 31744LL, &off_1186F8);
    v15 = v14;
    v16 = 0LL;
    while ( 1 )
    {
      if ( v15 <= v16 )
        goto LABEL_34;
      if ( *(_BYTE *)(v13 + v16) == 10 )
      {
        uu_cat::write_new_line((__int64)&v33, (__int64)&v26, v41, a4, *(_BYTE *)(i + 4));
        v17 = v33;
        if ( v33 != 0x8000000000000006LL )
          goto LABEL_28;
        *(_BYTE *)(a4 + 8) = 1;
        ++v16;
        goto LABEL_7;
      }
      if ( *(_BYTE *)(a4 + 9) )
      {
        v18 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v26, asc_1CE0B, 1LL);
        if ( v18 )
          goto LABEL_29;
        *(_WORD *)(a4 + 8) = 0;
        *(_BYTE *)(a4 + 10) = 0;
      }
      else
      {
        *(_BYTE *)(a4 + 10) = 0;
        if ( *(_BYTE *)(a4 + 8) && v25 )
        {
          v43[0] = a4;
          v43[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v33 = 2LL;
          *((_QWORD *)&v34 + 1) = 0LL;
          v35 = 6LL;
          v36 = 0LL;
          v37 = 32LL;
          v38 = 3;
          v44[0] = &unk_118728;
          v44[1] = 2LL;
          v44[4] = &v33;
          v44[5] = 1LL;
          v44[2] = v43;
          v44[3] = 1LL;
          v18 = std::io::Write::write_fmt(&v26, v44);
          if ( v18 )
          {
LABEL_29:
            v23 = v27;
            *(_QWORD *)v27 = 0x8000000000000000LL;
            *(_QWORD *)(v23 + 8) = v18;
            goto LABEL_30;
          }
          ++*(_QWORD *)a4;
        }
      }
      v19 = uu_cat::write_end((__int64)&v26, v13 + v16, v15 - v16, v30, v29);
      v20 = v16 + v19;
      if ( v16 + v19 == v15 )
        break;
      if ( v20 >= v15 )
      {
        v16 += v19;
        v31 = &off_118748;
LABEL_34:
        core::panicking::panic_bounds_check(v16, v15, v31);
      }
      v21 = *(unsigned __int8 *)(v13 + v20);
      if ( v21 == 10 )
      {
        uu_cat::write_end_of_line(&v33, (__int64)&v26, (__int64)v39, v40, *(_BYTE *)(i + 4));
        v17 = v33;
        if ( v33 != 0x8000000000000006LL )
        {
LABEL_28:
          v22 = (__int64 *)v27;
          *(_OWORD *)(v27 + 8) = v34;
          *v22 = v17;
LABEL_30:
          core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v32);
          return core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v26);
        }
        *(_BYTE *)(a4 + 8) = 1;
        v16 += v19 + 1;
      }
      else
      {
        if ( v21 != 13 )
        {
          v33 = 0LL;
          core::panicking::assert_failed(0LL, v20 + v13, asc_1CE0C, &v33, &off_118760);
        }
        *(_BYTE *)(a4 + 9) = 1;
        v16 += v19 + 1;
      }
LABEL_7:
      if ( v16 >= v12 )
        goto LABEL_27;
    }
    *(_BYTE *)(a4 + 8) = 0;
LABEL_27:
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v32);
  }
  core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v32);
  *(_QWORD *)v27 = 0x8000000000000006LL;
  return core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v26);
}
