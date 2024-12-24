        __int64 a8)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  char v13; // [rsp+6h] [rbp-C2h] BYREF
  unsigned __int8 v14; // [rsp+7h] [rbp-C1h] BYREF
  __int64 v15; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+10h] [rbp-B8h]
  __int64 v17; // [rsp+18h] [rbp-B0h] BYREF
  __int128 v18; // [rsp+20h] [rbp-A8h] BYREF
  __int64 *v19; // [rsp+30h] [rbp-98h]
  char *v20; // [rsp+38h] [rbp-90h]
  _QWORD *v21; // [rsp+40h] [rbp-88h]
  __int64 v22; // [rsp+48h] [rbp-80h]
  __int64 v23; // [rsp+50h] [rbp-78h]
  _QWORD v24[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v25; // [rsp+70h] [rbp-58h] BYREF
  __int64 v26; // [rsp+78h] [rbp-50h]
  __int128 v27; // [rsp+A0h] [rbp-28h] BYREF
  __int64 *v28; // [rsp+B0h] [rbp-18h]

  v24[0] = a3;
  v24[1] = a4;
  v13 = a5;
  v14 = a6;
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&v25, 0x2000LL, a1);
  v15 = uu_cut::stdout_writer();
  v16 = v9;
  *(_QWORD *)&v18 = a2;
  *((_QWORD *)&v18 + 1) = &v13;
  v19 = &v15;
  v20 = (char *)&v14;
  v21 = v24;
  v22 = a7;
  v23 = a8;
  v10 = bstr::io::BufReadExt::for_byte_record_with_terminator(&v25, a6, &v18);
  if ( v10 )
  {
    v17 = v10;
    <T as alloc::string::ToString>::to_string(&v27, &v17);
    LODWORD(v20) = 1;
    v18 = v27;
    v19 = v28;
    v11 = alloc::boxed::Box<T>::new(&v18);
    core::ptr::drop_in_place<std::io::error::Error>(v17);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Write>>(v15, v16);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(v25, v26);
  }
  else
  {
    core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Write>>(v15, v16);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(v25, v26);
    return 0LL;
  }
  return v11;
}
