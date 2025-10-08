__int64 __fastcall uu_cut::cut_fields_implicit_out_delim(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        unsigned int a7)
{
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rbx
  char v12; // [rsp+7h] [rbp-B1h] BYREF
  __int64 v13; // [rsp+8h] [rbp-B0h] BYREF
  __int128 v14; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+20h] [rbp-98h]
  unsigned int *v16; // [rsp+28h] [rbp-90h]
  _QWORD *v17; // [rsp+30h] [rbp-88h]
  _QWORD v18[2]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v19; // [rsp+50h] [rbp-68h] BYREF
  __int64 v20; // [rsp+60h] [rbp-58h]
  _BYTE v21[80]; // [rsp+68h] [rbp-50h] BYREF

  v18[0] = a4;
  v18[1] = a5;
  v12 = a6;
  v8 = a7;
  std::io::buffered::bufreader::BufReader<R>::with_capacity(v21, a1);
  *(_QWORD *)&v14 = a3;
  *((_QWORD *)&v14 + 1) = &v12;
  v15 = a2;
  v16 = &a7;
  v17 = v18;
  v9 = bstr::io::BufReadExt::for_byte_record_with_terminator(v21, v8, &v14);
  if ( v9 )
  {
    v13 = v9;
    <T as alloc::string::SpecToString>::spec_to_string(&v19, &v13);
    LODWORD(v16) = 1;
    v14 = v19;
    v15 = v20;
    v10 = alloc::boxed::Box<T>::new(&v14);
    core::ptr::drop_in_place<std::io::error::Error>(v13);
  }
  else
  {
    v10 = 0LL;
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0LL);
  }
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(v21);
  return v10;
}