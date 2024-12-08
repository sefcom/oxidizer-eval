        __int64 a6)
{
  __int64 v8; // rsi
  char v9; // cl
  __int64 v10; // rax
  char v11; // bp
  __int64 result; // rax
  __int128 v13; // xmm0
  char **v14; // rsi
  __int128 v16; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+28h] [rbp-D0h]
  _QWORD v18[3]; // [rsp+30h] [rbp-C8h] BYREF
  _OWORD v19[2]; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-90h]
  __int128 v21; // [rsp+70h] [rbp-88h] BYREF
  __int64 v22; // [rsp+80h] [rbp-78h]
  __int128 v23; // [rsp+88h] [rbp-70h]
  __int64 v24; // [rsp+A8h] [rbp-50h] BYREF
  __int128 v25; // [rsp+B0h] [rbp-48h]
  __int64 v26; // [rsp+C0h] [rbp-38h]

  *(_BYTE *)(a6 + 56) = 1;
  *(_QWORD *)(a6 + 48) = 1LL;
  <T as alloc::slice::hack::ConvertVec>::to_vec((char *)v19 + 8, a3, a4);
  *(_QWORD *)&v19[0] = 1LL;
  while ( 1 )
  {
    <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v24, a6);
    if ( (_QWORD)v25 == 0x8000000000000001LL )
      goto LABEL_18;
    v8 = *((_QWORD *)&v25 + 1);
    if ( (_QWORD)v25 == 0x8000000000000000LL )
    {
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = v8;
      return core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(v19);
    }
    v16 = v25;
    v17 = v26;
    v9 = v24 + 1 != a5;
    if ( v24 + 1 > a5 )
      v9 = -1;
    if ( v9 != 1 )
      break;
    v10 = uu_csplit::SplitWriter::writeln(a2, *((_QWORD *)&v25 + 1), v26);
    if ( v10 )
    {
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = v10;
      core::ptr::drop_in_place<alloc::string::String>(&v16, v8);
      return core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(v19);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v16, v8);
  }
  if ( v9 )
  {
    v22 = v17;
    v21 = v16;
    uu_csplit::InputSplitter<I>::add_line_to_buffer(v18, a6, v24, &v21);
    if ( v18[0] != 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v18);
      *(_QWORD *)&v21 = &off_2DF790;
      v14 = &off_2DF7A0;
      goto LABEL_23;
    }
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v18);
    core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(v19);
    *(_QWORD *)&v19[0] = 12LL;
  }
  else
  {
    v11 = *(_BYTE *)(*(_QWORD *)(a2 + 32) + 99LL);
    if ( !v11 )
    {
      v22 = v17;
      v21 = v16;
      v8 = a6;
      uu_csplit::InputSplitter<I>::add_line_to_buffer(v18, a6, v24, &v21);
      if ( v18[0] == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v18);
        goto LABEL_13;
      }
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v18);
      *(_QWORD *)&v21 = &off_2DF790;
      v14 = &off_2DF7B8;
LABEL_23:
      *((_QWORD *)&v21 + 1) = 1LL;
      v22 = 8LL;
      v23 = 0LL;
      core::panicking::panic_fmt(&v21, v14);
    }
LABEL_13:
    core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(v19);
    *(_QWORD *)&v19[0] = 12LL;
    if ( v11 )
      core::ptr::drop_in_place<alloc::string::String>(&v16, v8);
  }
LABEL_18:
  uu_csplit::SplitWriter::finish_split(a2);
  result = v20;
  *(_QWORD *)(a1 + 32) = v20;
  v13 = v19[0];
  *(_OWORD *)(a1 + 16) = v19[1];
  *(_OWORD *)a1 = v13;
  return result;
}
