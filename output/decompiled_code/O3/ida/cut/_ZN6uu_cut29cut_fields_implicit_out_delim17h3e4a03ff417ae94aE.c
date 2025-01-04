        unsigned __int8 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  char v11; // [rsp+6h] [rbp-B2h] BYREF
  unsigned __int8 v12; // [rsp+7h] [rbp-B1h] BYREF
  __int64 v13; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+10h] [rbp-A8h]
  __int64 v15; // [rsp+18h] [rbp-A0h] BYREF
  __int128 v16; // [rsp+20h] [rbp-98h] BYREF
  __int64 *v17; // [rsp+30h] [rbp-88h]
  char *v18; // [rsp+38h] [rbp-80h]
  _QWORD *v19; // [rsp+40h] [rbp-78h]
  _QWORD v20[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v21; // [rsp+60h] [rbp-58h] BYREF
  __int64 *v22; // [rsp+70h] [rbp-48h]
  _BYTE v23[64]; // [rsp+78h] [rbp-40h] BYREF

  v20[0] = a3;
  v20[1] = a4;
  v11 = a5;
  v12 = a6;
  std::io::buffered::bufreader::BufReader<R>::with_capacity(v23, 0x2000LL, a1);
  v13 = uu_cut::stdout_writer();
  v14 = v7;
  *(_QWORD *)&v16 = a2;
  *((_QWORD *)&v16 + 1) = &v11;
  v17 = &v13;
  v18 = (char *)&v12;
  v19 = v20;
  v8 = bstr::io::BufReadExt::for_byte_record_with_terminator(v23, a6, &v16);
  if ( v8 )
  {
    v15 = v8;
    <T as alloc::string::ToString>::to_string(&v21, &v15);
    LODWORD(v18) = 1;
    v16 = v21;
    v17 = v22;
    v9 = alloc::boxed::Box<T>::new(&v16);
    core::ptr::drop_in_place<std::io::error::Error>(v15);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Write>>(v13, v14);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(v23);
  }
  else
  {
    core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Write>>(v13, v14);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(v23);
    return 0LL;
  }
  return v9;
}
