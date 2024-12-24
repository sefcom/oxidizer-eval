        __int64 a6)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  char v11; // cl
  __int64 v12; // rax
  char v13; // bp
  __int64 result; // rax
  __int128 v15; // xmm0
  char **v16; // rsi
  __int128 v18; // [rsp+18h] [rbp-E0h] BYREF
  size_t v19; // [rsp+28h] [rbp-D0h]
  _QWORD v20[3]; // [rsp+30h] [rbp-C8h] BYREF
  _OWORD v21[2]; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-90h]
  __int128 v23; // [rsp+70h] [rbp-88h] BYREF
  __int64 v24; // [rsp+80h] [rbp-78h]
  __int128 v25; // [rsp+88h] [rbp-70h]
  __int64 v26; // [rsp+A8h] [rbp-50h] BYREF
  __int128 v27; // [rsp+B0h] [rbp-48h]
  size_t v28; // [rsp+C0h] [rbp-38h]

  *(_BYTE *)(a6 + 88) = 1;
  *(_QWORD *)(a6 + 80) = 1LL;
  <T as alloc::slice::hack::ConvertVec>::to_vec((char *)v21 + 8, a3, a4);
  *(_QWORD *)&v21[0] = 1LL;
  while ( 1 )
  {
    <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v26, a6);
    if ( (_QWORD)v27 == 0x8000000000000001LL )
      goto LABEL_18;
    v10 = *((_QWORD *)&v27 + 1);
    if ( (_QWORD)v27 == 0x8000000000000000LL )
    {
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = v10;
      return core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(v21);
    }
    v18 = v27;
    v19 = v28;
    v11 = v26 + 1 != a5;
    if ( v26 + 1 > a5 )
      v11 = -1;
    if ( v11 != 1 )
      break;
    v12 = uu_csplit::SplitWriter::writeln(a2, *((const void **)&v27 + 1), v28);
    if ( v12 )
    {
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = v12;
      core::ptr::drop_in_place<alloc::string::String>(&v18, v10);
      return core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(v21);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v18, v10);
  }
  if ( v11 )
  {
    v24 = v19;
    v23 = v18;
    uu_csplit::InputSplitter<I>::add_line_to_buffer(v20, a6, v26, (__int64)&v23, v8, v9);
    if ( v20[0] != 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v20);
      *(_QWORD *)&v23 = &off_2DF790;
      v16 = &off_2DF7A0;
      goto LABEL_23;
    }
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v20);
    core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(v21);
    *(_QWORD *)&v21[0] = 12LL;
  }
  else
  {
    v13 = *(_BYTE *)(*(_QWORD *)(a2 + 32) + 99LL);
    if ( !v13 )
    {
      v24 = v19;
      v23 = v18;
      v10 = a6;
      uu_csplit::InputSplitter<I>::add_line_to_buffer(v20, a6, v26, (__int64)&v23, v8, v9);
      if ( v20[0] == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v20);
        goto LABEL_13;
      }
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v20);
      *(_QWORD *)&v23 = &off_2DF790;
      v16 = &off_2DF7B8;
LABEL_23:
      *((_QWORD *)&v23 + 1) = 1LL;
      v24 = 8LL;
      v25 = 0LL;
      core::panicking::panic_fmt(&v23, v16);
    }
LABEL_13:
    core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(v21);
    *(_QWORD *)&v21[0] = 12LL;
    if ( v13 )
      core::ptr::drop_in_place<alloc::string::String>(&v18, v10);
  }
LABEL_18:
  uu_csplit::SplitWriter::finish_split(a2);
  result = v22;
  *(_QWORD *)(a1 + 32) = v22;
  v15 = v21[0];
  *(_OWORD *)(a1 + 16) = v21[1];
  *(_OWORD *)a1 = v15;
  return result;
}
