__int64 __fastcall uu_cut::cut_fields_explicit_out_delim(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        unsigned int a7,
        __int128 a8)
{
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rbx
  char v13; // [rsp+7h] [rbp-C1h] BYREF
  __int64 v14; // [rsp+8h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+20h] [rbp-A8h]
  unsigned int *v17; // [rsp+28h] [rbp-A0h]
  _QWORD *v18; // [rsp+30h] [rbp-98h]
  __int128 v19; // [rsp+38h] [rbp-90h]
  _QWORD v20[2]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v21; // [rsp+60h] [rbp-68h] BYREF
  __int64 v22; // [rsp+70h] [rbp-58h]
  _QWORD v23[10]; // [rsp+78h] [rbp-50h] BYREF

  v20[0] = a4;
  v20[1] = a5;
  v13 = a6;
  v9 = a7;
  std::io::buffered::bufreader::BufReader<R>::with_capacity(v23, a1);
  *(_QWORD *)&v15 = a3;
  *((_QWORD *)&v15 + 1) = &v13;
  v16 = a2;
  v17 = &a7;
  v18 = v20;
  v19 = a8;
  v10 = bstr::io::BufReadExt::for_byte_record_with_terminator(v23, v9, &v15);
  if ( v10 )
  {
    v14 = v10;
    <T as alloc::string::SpecToString>::spec_to_string(&v21, &v14);
    LODWORD(v17) = 1;
    v15 = v21;
    v16 = v22;
    v11 = alloc::boxed::Box<T>::new(&v15);
    core::ptr::drop_in_place<std::io::error::Error>(v14);
  }
  else
  {
    v11 = 0LL;
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0LL);
  }
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(v23[0], v23[1]);
  return v11;
}