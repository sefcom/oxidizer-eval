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
  __int64 v18; // r13
  unsigned __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rax
  _OWORD *v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // rcx
  unsigned __int8 v26; // [rsp+7h] [rbp-7D01h]
  __int64 v27; // [rsp+8h] [rbp-7D00h] BYREF
  __int64 v28; // [rsp+10h] [rbp-7CF8h]
  __int64 i; // [rsp+18h] [rbp-7CF0h]
  unsigned int v30; // [rsp+20h] [rbp-7CE8h]
  unsigned int v31; // [rsp+24h] [rbp-7CE4h]
  char **v32; // [rsp+28h] [rbp-7CE0h]
  _QWORD v33[2]; // [rsp+30h] [rbp-7CD8h] BYREF
  _BYTE v34[24]; // [rsp+40h] [rbp-7CC8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-7CB0h]
  __int64 v36; // [rsp+60h] [rbp-7CA8h]
  __int64 v37; // [rsp+68h] [rbp-7CA0h]
  char v38; // [rsp+70h] [rbp-7C98h]
  const char *v39; // [rsp+78h] [rbp-7C90h]
  __int64 v40; // [rsp+80h] [rbp-7C88h]
  unsigned __int8 *v41; // [rsp+88h] [rbp-7C80h]
  __int64 v42; // [rsp+90h] [rbp-7C78h] BYREF
  _QWORD v43[2]; // [rsp+98h] [rbp-7C70h] BYREF
  _QWORD v44[6]; // [rsp+A8h] [rbp-7C60h] BYREF
  _QWORD s[3974]; // [rsp+D8h] [rbp-7C30h] BYREF

  v6 = a2;
  v28 = a1;
  memset(s, 0, 0x7C00uLL);
  v42 = std::io::stdio::stdout();
  v27 = std::io::stdio::Stdout::lock(&v42);
  v26 = a3[4];
  v7 = 0LL;
  v8 = a3[2] == 0;
  v9 = asc_139FC;
  if ( !a3[2] )
    v9 = asc_139E2;
  v39 = v9;
  LOBYTE(v7) = !v8;
  v40 = v7 + 1;
  v32 = &off_119128;
  v31 = a3[1];
  v41 = a3;
  v30 = a3[3];
  for ( i = a2; ; v6 = i )
  {
    v10 = <std::fs::File as std::io::Read>::read(v6, s, 31744LL);
    v12 = v11;
    v33[0] = v10;
    v33[1] = v11;
    if ( v10 || !v11 )
      break;
    v13 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v11, s, 31744LL, &off_119110);
    v15 = v14;
    v16 = 0LL;
    while ( 1 )
    {
      if ( v15 <= v16 )
        goto LABEL_35;
      if ( *(_BYTE *)(v13 + v16) != 10 )
        break;
      uu_cat::write_new_line(v34, &v27, v41, a4, *(unsigned __int8 *)(i + 4));
      if ( *(_QWORD *)v34 != 0x8000000000000006LL )
      {
        v22 = (_OWORD *)v28;
        *(_QWORD *)(v28 + 16) = *(_QWORD *)&v34[16];
        *v22 = *(_OWORD *)v34;
LABEL_31:
        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v33);
        return core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v27);
      }
      *(_BYTE *)(a4 + 8) = 1;
      ++v16;
LABEL_7:
      if ( v16 >= v12 )
        goto LABEL_27;
    }
    if ( *(_BYTE *)(a4 + 9) )
    {
      v17 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v27, asc_139E1, 1LL);
      if ( v17 )
        goto LABEL_29;
      *(_WORD *)(a4 + 8) = 0;
      *(_BYTE *)(a4 + 10) = 0;
    }
    else
    {
      *(_BYTE *)(a4 + 10) = 0;
      if ( *(_BYTE *)(a4 + 8) && v26 )
      {
        v43[0] = a4;
        v43[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        *(_QWORD *)v34 = 2LL;
        *(_QWORD *)&v34[16] = 0LL;
        v35 = 6LL;
        v36 = 0LL;
        v37 = 32LL;
        v38 = 3;
        v44[0] = &unk_119140;
        v44[1] = 2LL;
        v44[4] = v34;
        v44[5] = 1LL;
        v44[2] = v43;
        v44[3] = 1LL;
        v17 = std::io::Write::write_fmt(&v27, v44);
        if ( v17 )
        {
LABEL_29:
          v23 = v28;
          *(_QWORD *)v28 = 0x8000000000000000LL;
          *(_QWORD *)(v23 + 8) = v17;
          goto LABEL_31;
        }
        ++*(_QWORD *)a4;
      }
    }
    v18 = uu_cat::write_end(&v27, v13 + v16, v15 - v16, v31, v30);
    v19 = v16 + v18;
    if ( v16 + v18 != v15 )
    {
      if ( v19 >= v15 )
      {
        v16 += v18;
        v32 = &off_119160;
LABEL_35:
        core::panicking::panic_bounds_check(v16, v15, v32);
      }
      v20 = *(unsigned __int8 *)(v13 + v19);
      if ( v20 == 10 )
      {
        uu_cat::write_end_of_line(v34, &v27, v39, v40, *(unsigned __int8 *)(i + 4));
        v21 = *(_QWORD *)v34;
        if ( *(_QWORD *)v34 != 0x8000000000000006LL )
        {
          v24 = (_QWORD *)v28;
          *(_OWORD *)(v28 + 8) = *(_OWORD *)&v34[8];
          *v24 = v21;
          goto LABEL_31;
        }
        *(_BYTE *)(a4 + 8) = 1;
        v16 += v18 + 1;
      }
      else
      {
        if ( v20 != 13 )
        {
          *(_QWORD *)v34 = 0LL;
          core::panicking::assert_failed(0LL, v19 + v13, asc_139E2, v34, &off_119178);
        }
        *(_BYTE *)(a4 + 9) = 1;
        v16 += v18 + 1;
      }
      goto LABEL_7;
    }
    *(_BYTE *)(a4 + 8) = 0;
LABEL_27:
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v33);
  }
  core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v33);
  *(_QWORD *)v28 = 0x8000000000000006LL;
  return core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v27);
}
