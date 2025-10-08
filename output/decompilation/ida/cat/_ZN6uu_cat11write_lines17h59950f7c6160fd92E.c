__int64 __fastcall uu_cat::write_lines(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rcx
  const char *v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // r15
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r13
  unsigned __int64 v21; // rax
  int v22; // ecx
  unsigned __int8 v24; // [rsp+7h] [rbp-7CE1h]
  unsigned int v25; // [rsp+20h] [rbp-7CC8h]
  unsigned int v26; // [rsp+24h] [rbp-7CC4h]
  char **v27; // [rsp+28h] [rbp-7CC0h]
  _QWORD v28[2]; // [rsp+30h] [rbp-7CB8h] BYREF
  _QWORD v29[2]; // [rsp+40h] [rbp-7CA8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-7C98h]
  const char *v31; // [rsp+68h] [rbp-7C80h]
  __int64 v32; // [rsp+70h] [rbp-7C78h]
  unsigned __int8 *v33; // [rsp+78h] [rbp-7C70h]
  __int64 v34; // [rsp+80h] [rbp-7C68h] BYREF
  __int64 v35; // [rsp+88h] [rbp-7C60h] BYREF
  __int128 v36; // [rsp+90h] [rbp-7C58h]
  _QWORD s[3974]; // [rsp+B8h] [rbp-7C30h] BYREF

  v6 = a2;
  memset(s, 0, 0x7C00uLL);
  v34 = std::io::stdio::stdout();
  v7 = std::io::stdio::Stdout::lock(&v34);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v29, v7);
  v24 = a3[4];
  v8 = a3[2];
  v9 = asc_1AD96;
  if ( (v8 & 1) != 0 )
    v9 = asc_1AD97;
  v31 = v9;
  v32 = v8 + 1;
  v27 = &off_EAC48;
  v26 = a3[1];
  v33 = a3;
  v25 = a3[3];
  while ( 2 )
  {
    v10 = <std::os::unix::net::stream::UnixStream as std::io::Read>::read(v6, s, 31744LL);
    v12 = v11;
    v28[0] = v10;
    v28[1] = v11;
    if ( (v10 & 1) != 0 || !v11 )
    {
      core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v28);
      *(_QWORD *)a1 = 0x8000000000000006LL;
    }
    else
    {
      v13 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
              0LL,
              v11,
              s,
              31744LL,
              &off_EAC30);
      v15 = v14;
      v16 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v15 <= v16 )
            goto LABEL_40;
          if ( *(_BYTE *)(v13 + v16) != 10 )
            break;
          uu_cat::write_new_line(&v35, v29, v33, a4, *(unsigned __int8 *)(a2 + 4));
          v17 = v35;
          if ( v35 != 0x8000000000000006LL )
            goto LABEL_33;
          *(_BYTE *)(a4 + 56) = 1;
          if ( ++v16 >= v12 )
            goto LABEL_31;
        }
        if ( *(_BYTE *)(a4 + 57) )
        {
          v18 = v30;
          if ( (unsigned __int64)(v29[0] - v30) <= 1 )
          {
            v19 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v29, asc_1AD95, 1LL);
            if ( v19 )
              goto LABEL_36;
          }
          else
          {
            *(_BYTE *)(v29[1] + v30) = 13;
            v30 = v18 + 1;
          }
          *(_WORD *)(a4 + 56) = 0;
          *(_BYTE *)(a4 + 58) = 0;
        }
        else
        {
          *(_BYTE *)(a4 + 58) = 0;
          if ( (*(_BYTE *)(a4 + 56) & 1) != 0 && v24 )
          {
            v19 = uu_cat::LineNumber::write(a4, (__int64)v29);
            if ( v19 )
              goto LABEL_36;
            uu_cat::LineNumber::increment((_QWORD *)a4);
          }
        }
        v20 = uu_cat::write_end(v29, v13 + v16, v15 - v16, v26, v25);
        v21 = v16 + v20;
        if ( v16 + v20 == v15 )
          break;
        if ( v21 >= v15 )
        {
          v16 += v20;
          v27 = &off_EAC60;
LABEL_40:
          core::panicking::panic_bounds_check(v16, v15, v27);
        }
        v22 = *(unsigned __int8 *)(v13 + v21);
        if ( v22 == 13 )
        {
          *(_BYTE *)(a4 + 57) = 1;
          v16 += v20 + 1;
          if ( v16 >= v12 )
            goto LABEL_31;
        }
        else
        {
          if ( v22 != 10 )
          {
            v35 = 0LL;
            core::panicking::assert_failed(0LL, v21 + v13, asc_1AD96, &v35, &off_EAC78);
          }
          uu_cat::write_end_of_line(&v35, v29, v31, v32, *(unsigned __int8 *)(a2 + 4));
          v17 = v35;
          if ( v35 != 0x8000000000000006LL )
          {
LABEL_33:
            *(_OWORD *)(a1 + 8) = v36;
            *(_QWORD *)a1 = v17;
            goto LABEL_34;
          }
          *(_BYTE *)(a4 + 56) = 1;
          v16 += v20 + 1;
          if ( v16 >= v12 )
            goto LABEL_31;
        }
      }
      *(_BYTE *)(a4 + 56) = 0;
LABEL_31:
      v19 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v29);
      v6 = a2;
      if ( !v19 )
      {
        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v28);
        continue;
      }
LABEL_36:
      *(_QWORD *)a1 = 0x8000000000000000LL;
      *(_QWORD *)(a1 + 8) = v19;
LABEL_34:
      core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v28);
    }
    return core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v29);
  }
}