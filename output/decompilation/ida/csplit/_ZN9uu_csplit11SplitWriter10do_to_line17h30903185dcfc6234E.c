__int64 __fastcall uu_csplit::SplitWriter::do_to_line(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  char v10; // cl
  __int64 v11; // rax
  char v12; // bp
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 result; // rax
  __int128 v16; // xmm0
  char **v17; // rsi
  _QWORD v19[3]; // [rsp+18h] [rbp-C0h] BYREF
  _OWORD v20[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-88h]
  __int64 v22; // [rsp+58h] [rbp-80h] BYREF
  __int64 v23; // [rsp+60h] [rbp-78h]
  __int64 v24; // [rsp+68h] [rbp-70h]
  __int64 v25; // [rsp+70h] [rbp-68h]
  _QWORD v26[3]; // [rsp+78h] [rbp-60h] BYREF
  __int128 v27; // [rsp+90h] [rbp-48h]

  *(_BYTE *)(a6 + 88) = 1;
  *(_QWORD *)(a6 + 80) = 1LL;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec((char *)v20 + 8, a3, a4);
  *(_QWORD *)&v20[0] = 1LL;
  while ( 1 )
  {
    v8 = a6;
    <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v22, a6);
    if ( v23 == 0x8000000000000001LL )
    {
      core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>>(&v22);
      goto LABEL_16;
    }
    v8 = v24;
    v9 = v25;
    if ( v23 == 0x8000000000000000LL )
    {
      *a1 = 12LL;
      a1[1] = v8;
      a1[2] = v9;
      return core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(v20);
    }
    v19[0] = v23;
    v19[1] = v24;
    v19[2] = v25;
    v10 = (a5 > v22 + 1) - (a5 < v22 + 1);
    if ( v10 != 1 )
    {
      if ( v10 )
      {
        v8 = a6;
        uu_csplit::InputSplitter<I>::add_line_to_buffer(v26, a6, v22, v19);
        v14 = v26[0];
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v26);
        if ( v14 == 0x8000000000000000LL )
        {
          core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(v20);
          *(_QWORD *)&v20[0] = 13LL;
LABEL_16:
          uu_csplit::SplitWriter::finish_split(a2, v8);
          result = v21;
          a1[4] = v21;
          v16 = v20[0];
          *((_OWORD *)a1 + 1) = v20[1];
          *(_OWORD *)a1 = v16;
          return result;
        }
        v17 = &off_241C00;
      }
      else
      {
        v12 = *(_BYTE *)(*(_QWORD *)(a2 + 32) + 99LL);
        if ( v12
          || (v8 = a6,
              uu_csplit::InputSplitter<I>::add_line_to_buffer(v26, a6, v22, v19),
              v13 = v26[0],
              core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v26),
              v13 == 0x8000000000000000LL) )
        {
          core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(v20);
          *(_QWORD *)&v20[0] = 13LL;
          if ( v12 )
            core::ptr::drop_in_place<alloc::string::String>(v19, v8);
          goto LABEL_16;
        }
        v17 = &off_241C18;
      }
      v26[0] = &off_241BF0;
      v26[1] = 1LL;
      v26[2] = 8LL;
      v27 = 0LL;
      core::panicking::panic_fmt(v26, v17);
    }
    v11 = uu_csplit::SplitWriter::writeln(a2, v24, v25);
    if ( v11 )
      break;
    core::ptr::drop_in_place<alloc::string::String>(v19, v8);
  }
  *a1 = 0LL;
  a1[1] = v11;
  core::ptr::drop_in_place<alloc::string::String>(v19, v8);
  return core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(v20);
}